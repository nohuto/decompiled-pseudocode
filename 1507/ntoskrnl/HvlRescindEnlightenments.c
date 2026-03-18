/*
 * XREFs of HvlRescindEnlightenments @ 0x140195BF0
 * Callers:
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd(&HvlpEnlightenments, 0xFFFFFFFE);
}
