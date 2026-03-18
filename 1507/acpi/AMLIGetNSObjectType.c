/*
 * XREFs of AMLIGetNSObjectType @ 0x1C000386C
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652E4 (ACPIBusIrpQueryHardwareId.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C006F778 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0071048 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007140C (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 58LL);
}
