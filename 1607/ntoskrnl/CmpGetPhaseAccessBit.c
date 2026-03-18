/*
 * XREFs of CmpGetPhaseAccessBit @ 0x1403FDC20
 * Callers:
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
