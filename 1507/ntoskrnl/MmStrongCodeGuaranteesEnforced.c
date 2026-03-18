/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x1407E8FC8
 * Callers:
 *     KeFreeInitializationCode @ 0x14079AA14 (KeFreeInitializationCode.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

_BOOL8 MmStrongCodeGuaranteesEnforced()
{
  return (MiFlags & 0x30000) != 0;
}
