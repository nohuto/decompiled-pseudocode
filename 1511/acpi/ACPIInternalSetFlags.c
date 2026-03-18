/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0004338
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0065160 (ACPIBusIrpQueryId.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006B1F8 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1C00730E0 (ACPIInternalIsPci.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00731BC (PcisuppAcquirePciInterfaces.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007AE10 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
