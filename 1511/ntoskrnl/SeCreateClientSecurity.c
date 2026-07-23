/*
 * XREFs of SeCreateClientSecurity @ 0x14042CA10
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140425640 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     NtImpersonateThread @ 0x1404C70C0 (NtImpersonateThread.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14007A640 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PSID *v7; // rbp
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  unsigned __int8 v10; // [rsp+60h] [rbp-28h] BYREF
  char v11; // [rsp+61h] [rbp-27h] BYREF
  char v12; // [rsp+62h] [rbp-26h] BYREF
  unsigned int v13; // [rsp+64h] [rbp-24h] BYREF
  int v14; // [rsp+68h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF

  v10 = 0;
  v15 = 0LL;
  v7 = (PSID *)PsReferenceEffectiveToken(
                 (_DWORD)ClientThread,
                 (unsigned int)&v14,
                 (unsigned int)&v12,
                 (unsigned int)&v13,
                 (__int64)&v11);
  SepReconcileTrustSidWithProcessProtection(v7[138], &v11, &v10, &v15);
  result = SepCreateClientSecurityEx(
             (__int64)v7,
             (__int64)ClientSecurityQos,
             RemoteSession,
             v14,
             v12,
             v13,
             0,
             0LL,
             v10,
             v15,
             (__int64)ClientContext);
  v9 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObject(v7);
    return v9;
  }
  return result;
}
