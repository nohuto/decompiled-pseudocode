/*
 * XREFs of ExpFlushGeneralLookaside @ 0x1400E92F0
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400E9298 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1400E92C4 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall ExpFlushGeneralLookaside(__int64 a1, int a2)
{
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *Next; // rbx

  result = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  if ( a2 )
  {
    if ( result )
    {
      do
      {
        Next = result->Next;
        (*(void (__fastcall **)(PSLIST_ENTRY))(a1 + 56))(result);
        result = Next;
      }
      while ( Next );
    }
    return 0LL;
  }
  return result;
}
