/*
 * XREFs of PpmParkReportMask @ 0x1400D315C
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x140111400 (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF0CC (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  __int64 v1; // rdx

  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    LOBYTE(v1) = 2;
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, v1);
  }
  return 1;
}
