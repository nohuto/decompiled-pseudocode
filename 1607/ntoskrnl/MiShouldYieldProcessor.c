/*
 * XREFs of MiShouldYieldProcessor @ 0x1401E68A0
 * Callers:
 *     MiUpdateLargePagePfns @ 0x1401F5E58 (MiUpdateLargePagePfns.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LOGICAL MiShouldYieldProcessor(void)
{
  return KeShouldYieldProcessor();
}
