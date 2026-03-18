/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x140101324
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     CcAsyncCopyRead @ 0x1400FF7AC (CcAsyncCopyRead.c)
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcQueueLazyWriteScanThread @ 0x1401379A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
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
