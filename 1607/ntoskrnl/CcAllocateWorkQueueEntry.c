/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x140071C00
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F574 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcQueueLazyWriteScanThread @ 0x14014031C (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(PSLIST_ENTRY *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v4; // rdx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v4 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v4 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v4 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v4
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v4 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v4->Next) = CurrentPrcb->Number;
  }
  *a1 = v4;
  return v4 == 0LL ? 0xC000009A : 0;
}
