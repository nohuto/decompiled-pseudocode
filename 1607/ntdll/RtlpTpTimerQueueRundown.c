/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180065028
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640D0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x180064E50 (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A71D0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
