/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140475D5C
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     SeTokenIsRestricted @ 0x14007F740 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14007F750 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByPointer @ 0x14007F760 (ObReferenceObjectByPointer.c)
 *     SepGetAnonymousToken @ 0x14007F884 (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     SepRegQueryDwordValue @ 0x140476340 (SepRegQueryDwordValue.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D078 (SepCopyClientTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax
  _DWORD *ClientToken; // rsi
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  __int64 CurrentServerSilo; // rax
  NTSTATUS AnonymousToken; // ebx
  _KPROCESS *Process; // rsi
  PACCESS_TOKEN v8; // rax
  void *v9; // rbx
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  PVOID v11; // [rsp+48h] [rbp-11h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-9h] BYREF
  int v13; // [rsp+70h] [rbp+17h] BYREF
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  __int128 v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Token; // [rsp+D0h] [rbp+77h] BYREF
  PACCESS_TOKEN v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = 0LL;
  v11 = 0LL;
  Token = 0LL;
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
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &v20);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, v20, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(v20);
    }
    goto LABEL_25;
  }
  if ( (int)SepRegQueryDwordValue(SubjectContext.PrimaryToken, 0x4000LL, &v18) < 0
    || (v3 = (_DWORD *)SeAnonymousLogonToken, v18 != 1) )
  {
    v3 = (_DWORD *)SeAnonymousLogonTokenNoEveryone;
  }
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( (ClientToken[50] & 0x80000) != 0 )
    {
      v14 = 0LL;
      v16 = 0;
      v15 = 0LL;
      v13 = 48;
      v17 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v3, (int)&v13, 1, 2, 2u, 0, 1, (char **)&v11);
      if ( AnonymousToken < 0 )
        goto LABEL_25;
      v3 = v11;
      *((_DWORD *)v11 + 50) |= ClientToken[50] & 0x80000;
    }
LABEL_16:
    AnonymousToken = ObReferenceObjectByPointer(
                       v3,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v3);
      Process = KeGetCurrentThread()->ApcState.Process;
      v8 = PsReferencePrimaryToken(Process);
      v9 = v8;
      if ( v8 )
      {
        if ( !SeTokenIsRestricted(v8) || SeTokenIsWriteRestricted(v9) )
        {
          ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v9);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v3, Token == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v9);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_25;
  }
  v4 = v3[49];
  CurrentServerSilo = PsGetCurrentServerSilo();
  AnonymousToken = SepCopyClientTokenAndSetSilo(v3, v4, CurrentServerSilo, &Token);
  if ( AnonymousToken >= 0 )
  {
    v3 = Token;
    goto LABEL_16;
  }
LABEL_25:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( v11 )
    ObfDereferenceObject(v11);
  return AnonymousToken;
}
