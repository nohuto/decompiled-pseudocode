/*
 * XREFs of ExDeleteLookasideListEx @ 0x140123030
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x14074B3D4 (VerifierExDeleteLookasideListEx.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14012308C (ExpRemoveGeneralLookaside.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  __int64 *v3; // rcx
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *Next; // rbx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3, Lookaside);
  v4 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      Lookaside->L.FreeEx(v4, Lookaside);
      v4 = Next;
    }
    while ( Next );
  }
}
