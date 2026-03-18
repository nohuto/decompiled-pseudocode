/*
 * XREFs of KeStallWhileFrozen @ 0x1401C8EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
