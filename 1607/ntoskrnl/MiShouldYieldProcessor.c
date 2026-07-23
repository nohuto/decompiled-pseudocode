/*
 * XREFs of MiShouldYieldProcessor @ 0x1401E66CC
 * Callers:
 *     MiUpdateLargePagePfns @ 0x1401F5C84 (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LOGICAL MiShouldYieldProcessor(void)
{
  return KeShouldYieldProcessor();
}
