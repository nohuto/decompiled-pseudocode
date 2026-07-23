/*
 * XREFs of ExDeletePagedLookasideList @ 0x140122FE8
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14066BE74 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x14074B414 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14012308C (ExpRemoveGeneralLookaside.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  PSLIST_ENTRY v2; // rax
  _SLIST_ENTRY *Next; // rbx

  ExpRemoveGeneralLookaside(&ExPagedLookasideLock, Lookaside);
  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      ((void (__fastcall *)(PSLIST_ENTRY))Lookaside->L.FreeEx)(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
