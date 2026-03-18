/*
 * XREFs of CmpAllocateExtraHashInfo @ 0x14011A5CC
 * Callers:
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY CmpAllocateExtraHashInfo()
{
  struct _KPRCB *CurrentPrcb; // rdi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v2; // rcx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v2 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v2
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v2 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v2->Next) = CurrentPrcb->Number;
  }
  return v2;
}
