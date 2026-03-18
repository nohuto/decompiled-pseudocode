/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140772304
 * Callers:
 *     KeFreeInitializationCode @ 0x14072DA18 (KeFreeInitializationCode.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
