/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0003A88
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C0085BD4 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C008697C (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0087A18 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C0097EE0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C0098D60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0099D80 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A17EC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
