/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0004320
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDetectFilterMatch @ 0x1C0067DF8 (ACPIDetectFilterMatch.c)
 *     ACPIInternalSetSpare @ 0x1C006FAE8 (ACPIInternalSetSpare.c)
 *     ACPIDockIrpEject @ 0x1C00784D0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C0078B00 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00795F0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1C007FD18 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
