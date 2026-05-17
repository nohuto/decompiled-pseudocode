/*
 * XREFs of RtlDeleteTimerQueue @ 0x1800F5F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeleteTimerQueue(__int64 a1)
{
  return RtlDeleteTimerQueueEx(a1, 0LL);
}
