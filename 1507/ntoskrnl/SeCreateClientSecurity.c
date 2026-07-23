/*
 * XREFs of SeCreateClientSecurity @ 0x1404819F0
 * Callers:
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x140479ED0 (AlpcpImpersonateMessage.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x14053C4A8 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x140044D50 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PSID *v7; // rbp
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
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
