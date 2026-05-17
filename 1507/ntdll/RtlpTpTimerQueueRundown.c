/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x18007D82C
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
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
