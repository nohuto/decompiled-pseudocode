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
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(struct _DEVICE_OBJECT **)(a1 + 48));
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_14032DCF8 == 1 )
    {
      Buffer = 1;
LABEL_6:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_14032DCF8 )
  {
    Buffer = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
