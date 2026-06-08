/*
 * XREFs of RegisterHvCpcCounters @ 0x1C001DD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterHvCpcCounters(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback, a3, a4);
}
