/*
 * XREFs of sub_140670860 @ 0x140670860
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x140670858 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x1407F8BE8 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x1407F8AFC (HvlpDiscoverTopologyAmd.c)
 */

__int64 sub_140670860()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
