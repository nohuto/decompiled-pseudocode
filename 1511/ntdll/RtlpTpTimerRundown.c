/*
 * XREFs of RtlpTpTimerRundown @ 0x180008088
 * Callers:
 *     RtlpTpTimerFinalizationCallback @ 0x180004EC0 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180007F40 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180081E30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x180081F9C (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1 + 16);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
