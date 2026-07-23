/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x1406205F4
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x1406205EC (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x1407CDEF4 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x1407CDD80 (HvlpDiscoverTopologyAmd.c)
 */

__int64 HvlpDiscoverTopologyWorker()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
