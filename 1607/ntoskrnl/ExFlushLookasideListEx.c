/*
 * XREFs of ExFlushLookasideListEx @ 0x1400A87FC
 * Callers:
 *     ExDeleteLookasideListEx @ 0x1400A87C8 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140166E80 (RtlpInterlockedFlushSList.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rax
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      Lookaside->L.FreeEx(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
