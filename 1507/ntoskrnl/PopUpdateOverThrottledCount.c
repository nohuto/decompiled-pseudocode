/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1406B837C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x14023EA6C (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, char a2)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(struct _DEVICE_OBJECT **)(a1 + 48));
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_14032DCF8 == 1 )
    {
      v4 = 1;
LABEL_6:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v4, 4LL);
    }
  }
  else if ( !--dword_14032DCF8 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
