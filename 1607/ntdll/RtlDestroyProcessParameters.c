/*
 * XREFs of RtlDestroyProcessParameters @ 0x180085270
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDestroyProcessParameters(unsigned __int64 a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
