/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140122FA0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14066BE74 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x14074B3F4 (VerifierExDeleteNPagedLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14012308C (ExpRemoveGeneralLookaside.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PSLIST_ENTRY v2; // rax
  _SLIST_ENTRY *Next; // rbx

  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, Lookaside);
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
