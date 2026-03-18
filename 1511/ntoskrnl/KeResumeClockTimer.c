/*
 * XREFs of KeResumeClockTimer @ 0x140119C60
 * Callers:
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KeResumeClockTimer()
{
  return KiResumeClockTimer();
}
