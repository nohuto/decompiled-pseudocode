/*
 * XREFs of NtImpersonateAnonymousToken @ 0x1403BE658
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140003900 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x140003988 (SepGetAnonymousToken.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     SepRegQueryDwordValue @ 0x1403BEBC8 (SepRegQueryDwordValue.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14064D8F4 (SepCopyClientTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // rcx
  _DWORD *PrimaryToken; // rdi
  _DWORD *ClientToken; // rbx
  NTSTATUS AnonymousToken; // ebx
  unsigned int *v6; // rdi
  _QWORD *CurrentServerSilo; // rsi
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v9; // rax
  void *v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+88h] [rbp+28h] BYREF
  PVOID v14; // [rsp+90h] [rbp+30h] BYREF
  PACCESS_TOKEN Token; // [rsp+98h] [rbp+38h] BYREF

  Token = 0LL;
  v14 = 0LL;
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
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( (int)SepRegQueryDwordValue(v2, L"AnonymousAppContainerImpersonationLevelCheck", &v13) >= 0 && v13
    || ClientToken[48] == 1
    || (PrimaryToken[50] & 0x4000) == 0
    || (int)ClientToken[49] >= 2 )
  {
    if ( (ClientToken[50] & 0x4000) != 0 )
    {
      AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
      if ( AnonymousToken >= 0 )
      {
        AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
        ObfDereferenceObject(Token);
      }
      goto LABEL_28;
    }
    if ( (int)SepRegQueryDwordValue(0x4000LL, L"EveryoneIncludesAnonymous", &v13) < 0
      || (v6 = (unsigned int *)SeAnonymousLogonToken, v13 != 1) )
    {
      v6 = (unsigned int *)SeAnonymousLogonTokenNoEveryone;
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      AnonymousToken = SepCopyClientTokenAndSetSilo(v6, v6[49], CurrentServerSilo, &v14);
      if ( CurrentServerSilo )
        ObfDereferenceObject(CurrentServerSilo);
      if ( AnonymousToken < 0 )
        goto LABEL_28;
      v6 = (unsigned int *)v14;
    }
    AnonymousToken = ObReferenceObjectByPointer(
                       v6,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v6);
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = PsReferencePrimaryToken(Process);
      v10 = v9;
      if ( v9 )
      {
        if ( !SeTokenIsRestricted(v9) || SeTokenIsWriteRestricted(v10) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v10);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v6, v14 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v10);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
  }
  else
  {
    AnonymousToken = -1073741659;
  }
LABEL_28:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v14 )
    ObfDereferenceObject(v14);
  return AnonymousToken;
}
