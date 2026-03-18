/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1404BE310
 * Callers:
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14042D0F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     IoFreeMiniCompletionPacket @ 0x1404A4E9C (IoFreeMiniCompletionPacket.c)
 *     IopFreeCompletionListPackets @ 0x14052B640 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140119294 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall IopFreeMiniCompletionPacket(PSLIST_ENTRY ListEntry)
{
  void (__fastcall *v2)(PSLIST_ENTRY, _SLIST_ENTRY *); // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( LOBYTE(ListEntry[1].Next) == 4 )
  {
    v2 = (void (__fastcall *)(PSLIST_ENTRY, _SLIST_ENTRY *))*((_QWORD *)&ListEntry[3].Next + 1);
    if ( v2 )
    {
      v2(ListEntry, ListEntry[4].Next);
    }
    else if ( *((_BYTE *)&ListEntry[4].Next + 8) )
    {
      ExFreePoolWithTag(ListEntry, 0);
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[7].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      if ( LOBYTE(ListEntry[1].Next) == 3 )
        ExReturnPoolQuota((unsigned __int64)ListEntry);
      RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
    }
    else
    {
      ++P->FreeMisses;
      ExFreePoolWithTag(ListEntry, 0);
    }
  }
}
