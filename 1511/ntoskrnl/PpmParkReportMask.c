/*
 * XREFs of PpmParkReportMask @ 0x140074F28
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 *     HvlParkedVirtualProcessors @ 0x1401B2898 (HvlParkedVirtualProcessors.c)
 *     KeIsEqualAffinityEx @ 0x1401C4D04 (KeIsEqualAffinityEx.c)
 */

char PpmParkReportMask()
{
  __int64 v1; // rdx

  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(&PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx(&PpmPerfReportedCoreParkingMask, &PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, &PpmPerfCoreParkingMask);
    LOBYTE(v1) = 2;
    KeCpuSetReportParkedProcessors(&PpmPerfCoreParkingMask, v1);
  }
  return 1;
}
