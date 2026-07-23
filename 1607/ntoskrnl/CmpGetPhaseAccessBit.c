/*
 * XREFs of CmpGetPhaseAccessBit @ 0x1403FCAE0
 * Callers:
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
