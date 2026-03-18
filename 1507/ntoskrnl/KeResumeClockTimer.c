/*
 * XREFs of KeResumeClockTimer @ 0x14014EAC0
 * Callers:
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KeResumeClockTimer()
{
  return KiResumeClockTimer();
}
