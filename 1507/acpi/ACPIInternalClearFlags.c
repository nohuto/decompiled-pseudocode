/*
 * XREFs of ACPIInternalClearFlags @ 0x1C00044C8
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C0067A18 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C00694DC (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C0078370 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00789A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0079490 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1C007FB38 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
