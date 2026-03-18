/*
 * XREFs of HvlRescindEnlightenments @ 0x140166E34
 * Callers:
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd(&HvlpEnlightenments, 0xFFFFFFFE);
}
