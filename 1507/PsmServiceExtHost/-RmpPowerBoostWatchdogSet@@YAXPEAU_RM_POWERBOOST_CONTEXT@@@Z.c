/*
 * XREFs of ?RmpPowerBoostWatchdogSet@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180002710
 * Callers:
 *     ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x1800025B0 (-RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z.c)
 *     ?RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003A3B0 (-RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostWatchdogSet(struct _RM_POWERBOOST_CONTEXT *a1)
{
  DWORD v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = GetTickCount() - *((_DWORD *)a1 + 1);
  if ( v2 >= 0xBB8 )
  {
    *((_DWORD *)a1 + 6) &= ~1u;
  }
  else
  {
    *((_DWORD *)a1 + 6) |= 1u;
    v3 = *((_QWORD *)a1 + 2);
    v4 = -10000LL * (3000 - v2);
    TpSetTimer(v3, &v4, 0LL, 0LL);
  }
}
