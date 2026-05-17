/*
 * XREFs of RtlDeleteUmsCompletionList @ 0x1800EC620
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall RtlDeleteUmsCompletionList(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    NtClose(*(HANDLE *)(a1 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 0LL;
  }
  return result;
}
