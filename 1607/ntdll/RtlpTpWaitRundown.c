/*
 * XREFs of RtlpTpWaitRundown @ 0x180064EE0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180064420 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180064EB0 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18003A138 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
