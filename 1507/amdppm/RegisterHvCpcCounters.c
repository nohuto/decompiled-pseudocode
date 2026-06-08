/*
 * XREFs of RegisterHvCpcCounters @ 0x1C001B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback);
}
