/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x18007D82C
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerRundown @ 0x18007CC1C (RtlpTpTimerRundown.c)
 * Callees:
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall RtlpTpTimerQueueRundown(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)a1[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
