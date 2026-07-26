/*
 * XREFs of ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001273C
 * Callers:
 *     ndisPowerSuspendRequestComplete @ 0x1C00668B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0067F60 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_COUNT_POWER_TRANSITION(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rax

  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    if ( a2 > 1 )
      ++PhysicalPerformanceCounters->LowPowerTransitions;
    a1->PhysicalPerformanceCounters->DevicePowerState = a2 - 1;
  }
}
