/*
 * XREFs of PpmParkReportMask @ 0x1400D52BC
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x140030FF0 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x140110E9C (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x140144208 (KeIsEqualAffinityEx.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF1E8 (HvlParkedVirtualProcessors.c)
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
