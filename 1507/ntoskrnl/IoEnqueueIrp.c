/*
 * XREFs of IoEnqueueIrp @ 0x14067415C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}
