/*
 * XREFs of RtlpTpTimerRundown @ 0x18007CC1C
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18007AA50 (RtlDeleteTimerQueueEx.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18007B7B0 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x18007C6E0 (RtlDeleteTimer.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18007CC80 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x18007D82C (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpTimerRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1 + 16);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
