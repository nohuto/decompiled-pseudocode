/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0003AA0
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0087A18 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0088340 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0090384 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1C009047C (ACPIInternalIsPci.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00905F8 (PcisuppAcquirePciInterfaces.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C009BDB0 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
