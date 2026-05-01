/*
 * XREFs of ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000213C
 * Callers:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180002768 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800375D0 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostArmWatchdog(struct _RM_POWERBOOST_CONTEXT *a1)
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
