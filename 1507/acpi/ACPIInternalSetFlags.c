/*
 * XREFs of ACPIInternalSetFlags @ 0x1C00044E0
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 *     ACPIInternalIsPci @ 0x1C0068A8C (ACPIInternalIsPci.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006D598 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80 (ACPIQueryCacheCoherencyAttribute.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0072FA4 (PcisuppAcquirePciInterfaces.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007ACB0 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
