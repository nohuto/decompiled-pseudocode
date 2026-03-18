/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x14051BA70
 * Callers:
 *     IoRemoveIoCompletion @ 0x14006A0E0 (IoRemoveIoCompletion.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140471860 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopFreeCompletionListPackets @ 0x14051B9E0 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x14051BA5C (IoFreeMiniCompletionPacket.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1400F9564 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(struct _SLIST_ENTRY *P)
{
  void (__fastcall *v2)(struct _SLIST_ENTRY *, _SLIST_ENTRY *); // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *L; // rdi

  if ( LOBYTE(P[1].Next) != 4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[7].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
    {
      ++L->FreeMisses;
      L = CurrentPrcb->PPLookasideList[7].L;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        ExFreePoolWithTag(P, 0);
        return;
      }
      if ( LOBYTE(P[1].Next) != 3 )
      {
LABEL_7:
        RtlpInterlockedPushEntrySList(&L->ListHead, P);
        return;
      }
    }
    else if ( LOBYTE(P[1].Next) != 3 )
    {
      goto LABEL_7;
    }
    ExReturnPoolQuota((unsigned __int64)P);
    goto LABEL_7;
  }
  v2 = (void (__fastcall *)(struct _SLIST_ENTRY *, _SLIST_ENTRY *))*((_QWORD *)&P[3].Next + 1);
  if ( v2 )
  {
    v2(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
