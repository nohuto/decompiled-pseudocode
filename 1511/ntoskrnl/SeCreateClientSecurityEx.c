/*
 * XREFs of SeCreateClientSecurityEx @ 0x1404A629C
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140425640 (AlpcpImpersonateMessage.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1404A61E0 (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14007A640 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     SepUpdateSiloInClientSecurity @ 0x14065335C (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(struct _KTHREAD *a1, __int64 a2, char a3, __int64 a4)
{
  PSID *v8; // rsi
  NTSTATUS ClientSecurity; // edi
  PSID *v11; // rcx
  PSID *CurrentServerSilo; // rbx
  unsigned __int8 v13; // [rsp+60h] [rbp-20h] BYREF
  char v14; // [rsp+61h] [rbp-1Fh] BYREF
  char v15; // [rsp+62h] [rbp-1Eh] BYREF
  unsigned int v16; // [rsp+64h] [rbp-1Ch] BYREF
  int v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF

  v18 = 0LL;
  v13 = 0;
  v8 = (PSID *)PsReferenceEffectiveToken((__int64)a1, &v17, (bool *)&v15, (int *)&v16, &v14);
  SepReconcileTrustSidWithProcessProtection(v8[138], &v14, &v13, &v18);
  ClientSecurity = SepCreateClientSecurityEx((__int64)v8, a2, a3, v17, v15, v16, 1, a1, v13, v18, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
  {
    v11 = v8;
LABEL_6:
    ObfDereferenceObject(v11);
    return (unsigned int)ClientSecurity;
  }
  if ( a1->Process == PsInitialSystemProcess )
  {
    CurrentServerSilo = (PSID *)PsGetCurrentServerSilo();
    if ( !PsIsHostSilo((__int64)CurrentServerSilo) )
    {
      ClientSecurity = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
      if ( ClientSecurity < 0 )
        ObfDereferenceObject(v8);
    }
    if ( CurrentServerSilo )
    {
      v11 = CurrentServerSilo;
      goto LABEL_6;
    }
  }
  return (unsigned int)ClientSecurity;
}
