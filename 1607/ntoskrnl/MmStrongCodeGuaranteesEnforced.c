/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x1407BD3B4
 * Callers:
 *     KeFreeInitializationCode @ 0x140777A58 (KeFreeInitializationCode.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 14) & 1;
}
