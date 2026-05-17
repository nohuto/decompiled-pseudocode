/*
 * XREFs of RtlpTpWaitRundown @ 0x180006DA0
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x180004E80 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpWaitRundown(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
