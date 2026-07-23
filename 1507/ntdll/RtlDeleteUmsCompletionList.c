/*
 * XREFs of RtlDeleteUmsCompletionList @ 0x1800DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall RtlDeleteUmsCompletionList(HANDLE *BaseAddress)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( BaseAddress )
  {
    NtClose(BaseAddress[1]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0LL;
  }
  return result;
}
