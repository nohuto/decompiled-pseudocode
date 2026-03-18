/*
 * XREFs of AMLIGetNSObjectType @ 0x1C00039EC
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0080000 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0082CB4 (ACPIProcessorGetInitialApicId.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C008F2C0 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
