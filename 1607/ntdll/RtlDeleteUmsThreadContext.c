/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800EC680
 * Callers:
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800ECBF0 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800ECCB4 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(unsigned __int64 a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( a1 && (*(_DWORD *)(a1 + 1264) & 8) != 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 0;
  }
  return v2;
}
