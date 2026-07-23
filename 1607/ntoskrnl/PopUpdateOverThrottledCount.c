/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1406707A8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402092E0 (PopDiagTraceThermalOverthrottleState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, char a2)
{
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(struct _DEVICE_OBJECT **)(a1 + 48));
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_140302E78 == 1 )
    {
      Buffer = 1;
LABEL_6:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_140302E78 )
  {
    Buffer = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
