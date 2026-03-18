/*
 * XREFs of HUBPDO_SignalPnpPowerEvent @ 0x1C001329C
 * Callers:
 *     HUBDSM_FlushingPnpEventsForBootDevice @ 0x1C00161C0 (HUBDSM_FlushingPnpEventsForBootDevice.c)
 *     HUBDSM_ConfiguredSuspended @ 0x1C0016640 (HUBDSM_ConfiguredSuspended.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C0016730 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C0016790 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured @ 0x1C0016A40 (HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured.c)
 *     HUBDSM_SignalingPnpPowerEventOnStopEnable @ 0x1C00174E0 (HUBDSM_SignalingPnpPowerEventOnStopEnable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_SignalPnpPowerEvent(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 1560) = 0;
  KeSetEvent((PRKEVENT)(a1 + 1568), 0, 0);
  result = *(unsigned int *)(a1 + 1620);
  if ( (result & 0x40) != 0 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  return result;
}
