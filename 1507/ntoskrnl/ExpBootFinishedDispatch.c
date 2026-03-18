/*
 * XREFs of ExpBootFinishedDispatch @ 0x140131CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ExpBootFinishedDispatch()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFEFF);
}
