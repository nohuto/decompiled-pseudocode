/*
 * XREFs of KeStallWhileFrozen @ 0x1402064D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
