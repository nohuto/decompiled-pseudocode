/*
 * XREFs of KeQueryPrcbAddress @ 0x1401309DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrcbAddress(int a1)
{
  return KiProcessorBlock[a1];
}
