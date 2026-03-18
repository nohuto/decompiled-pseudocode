/*
 * XREFs of IoEnqueueIrp @ 0x1405F9ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IoEnqueueIrp(__int64 a1, __int64 a2, __int64 a3)
{
  return IopQueueThreadIrp(a1, a2, a3);
}
