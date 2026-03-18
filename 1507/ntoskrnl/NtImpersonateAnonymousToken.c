/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140410C10
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     SeTokenIsWriteRestricted @ 0x140125C48 (SeTokenIsWriteRestricted.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     SepRegQueryDwordValue @ 0x140410FD0 (SepRegQueryDwordValue.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax
  _DWORD *ClientToken; // rcx
  unsigned int *v3; // rdi
  void *CurrentServerSilo; // rsi
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v7; // rax
  void *v8; // rbx
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+88h] [rbp+28h] BYREF
  PVOID v12; // [rsp+90h] [rbp+30h] BYREF
  PACCESS_TOKEN Token; // [rsp+98h] [rbp+38h] BYREF

  Token = 0LL;
  v12 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x100u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken
    || (*((_DWORD *)SubjectContext.PrimaryToken + 50) & 0x4000) != 0
    && SubjectContext.ImpersonationLevel < SecurityImpersonation )
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  if ( (ClientToken[50] & 0x4000) != 0 )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_24;
  }
  if ( (int)SepRegQueryDwordValue(ClientToken, SubjectContext.PrimaryToken, &v11) < 0
    || (v3 = (unsigned int *)SeAnonymousLogonToken, v11 != 1) )
  {
    v3 = (unsigned int *)SeAnonymousLogonTokenNoEveryone;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    AnonymousToken = SepCopyClientTokenAndSetSilo(v3, v3[49], CurrentServerSilo, &v12);
    if ( CurrentServerSilo )
      PspDereferenceSiloObject(CurrentServerSilo);
    if ( AnonymousToken < 0 )
      goto LABEL_24;
    v3 = (unsigned int *)v12;
  }
  AnonymousToken = ObReferenceObjectByPointer(
                     v3,
                     4u,
                     (POBJECT_TYPE)SeTokenObjectType,
                     KeGetCurrentThread()->PreviousMode);
  if ( AnonymousToken >= 0 )
  {
    ObfDereferenceObject(v3);
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = PsReferencePrimaryToken(Process);
    v8 = v7;
    if ( v7 )
    {
      if ( !SeTokenIsRestricted(v7) || SeTokenIsWriteRestricted(v8) )
      {
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v8);
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, v3, v12 == 0LL, 0, SecurityImpersonation);
      }
      else
      {
        ObfDereferenceObject(v8);
        AnonymousToken = -1073741790;
      }
    }
    else
    {
      AnonymousToken = -1073741823;
    }
  }
LABEL_24:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    ObfDereferenceObject(v12);
  return AnonymousToken;
}
