/*
 * XREFs of RtlpTpTimerRundown @ 0x180064E40
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800640C0 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerFinalizationCallback @ 0x1800643F0 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180064680 (RtlDeleteTimer.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18003A138 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x180065018 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)(a1 + 16));
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
