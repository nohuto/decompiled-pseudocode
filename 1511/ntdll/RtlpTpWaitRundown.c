/*
 * XREFs of RtlpTpWaitRundown @ 0x180006DA0
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x180004E80 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[10];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
