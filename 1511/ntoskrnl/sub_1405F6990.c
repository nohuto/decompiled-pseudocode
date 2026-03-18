/*
 * XREFs of sub_1405F6990 @ 0x1405F6990
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x1405F6988 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x140782654 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x140782568 (HvlpDiscoverTopologyAmd.c)
 */

__int64 sub_1405F6990()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
