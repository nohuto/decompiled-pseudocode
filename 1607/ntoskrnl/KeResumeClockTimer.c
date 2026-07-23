/*
 * XREFs of KeResumeClockTimer @ 0x14011489C
 * Callers:
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KeResumeClockTimer()
{
  return KiResumeClockTimer();
}
