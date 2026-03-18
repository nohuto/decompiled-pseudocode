/*
 * XREFs of ExpFlushGeneralLookaside @ 0x1400A878C
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400A8760 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140149954 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall ExpFlushGeneralLookaside(__int64 a1, int a2)
{
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *Next; // rbx

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
