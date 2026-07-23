/*
 * XREFs of ExpFastCacheDescriptorCompare @ 0x1406AF0EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ExpFastCacheDescriptorCompare(const void **a1, const void **a2)
{
  return memcmp(a1[1], a2[1], 0x20uLL);
}
