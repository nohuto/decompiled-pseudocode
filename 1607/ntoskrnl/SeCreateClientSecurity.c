/*
 * XREFs of SeCreateClientSecurity @ 0x14040DF28
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x1404B4524 (NtImpersonateThread.c)
 *     AlpcpImpersonateMessage @ 0x1404F1060 (AlpcpImpersonateMessage.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000E370 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 *v7; // rsi
  int v8; // r8d
  NTSTATUS ClientSecurity; // ebx
  char v11; // [rsp+60h] [rbp-20h] BYREF
  char v12; // [rsp+61h] [rbp-1Fh] BYREF
  char v13; // [rsp+62h] [rbp-1Eh] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  int v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF

  v16 = 0LL;
  v11 = 0;
  v7 = (__int64 *)PsReferenceEffectiveToken(
                    (_DWORD)ClientThread,
                    (unsigned int)&v15,
                    (unsigned int)&v13,
                    (unsigned int)&v14,
                    (__int64)&v12);
  SepReconcileTrustSidWithProcessProtection(v7[138], (__int64)&v12, &v11, &v16);
  LOBYTE(v8) = RemoteSession;
  ClientSecurity = SepCreateClientSecurityEx(
                     (_DWORD)v7,
                     (_DWORD)ClientSecurityQos,
                     v8,
                     v15,
                     v13,
                     v14,
                     0,
                     0LL,
                     v11,
                     v16,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObject(v7);
  return ClientSecurity;
}
