/*
 * XREFs of RtlpTpWaitRundown @ 0x180064EF0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180064430 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180064EC0 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpWaitRundown(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
