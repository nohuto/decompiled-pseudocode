/*
 * XREFs of RtlpTpWaitRundown @ 0x18007B920
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x18007AEA0 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18007CC80 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpWaitRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
