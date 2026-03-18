/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x140620540
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x140620538 (HvlpDiscoverTopologyLocal.c)
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
