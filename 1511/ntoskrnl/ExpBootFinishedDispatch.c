/*
 * XREFs of ExpBootFinishedDispatch @ 0x1400F4700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ExpBootFinishedDispatch()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFEFF);
}
