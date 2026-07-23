/*
 * XREFs of HvlpDepositPages @ 0x1401E5ED8
 * Callers:
 *     sub_1401E7744 @ 0x1401E7744 (sub_1401E7744.c)
 *     HvlMapDeviceInterrupt @ 0x1401E8CA8 (HvlMapDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401E9F98 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1401EAA9C (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1401EAC14 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401EACA0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1401EAF14 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401EB83C (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1401EBAA4 (HvlpAttachRootSvmDevice.c)
 *     sub_14067068C @ 0x14067068C (sub_14067068C.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140076D90 (MmAllocateNodePagesForMdlEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1)
{
  char v1; // bp
  _OWORD *NodePagesForMdl; // r15
  _SLIST_HEADER *CurrentPrcb; // rbx
  _QWORD *p_Next; // rcx
  _SLIST_ENTRY *Next; // rsi
  PSLIST_ENTRY v7; // rax
  _SLIST_ENTRY *v8; // r14
  char v9; // di
  __int16 v10; // ax
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v16; // rcx
  _SLIST_HEADER *v17; // [rsp+48h] [rbp-40h]
  _SLIST_ENTRY *v18; // [rsp+50h] [rbp-38h]
  _SLIST_ENTRY *v19; // [rsp+58h] [rbp-30h]
  __int16 v20; // [rsp+80h] [rbp-8h]

  v1 = 4;
  NodePagesForMdl = (_OWORD *)MmAllocateNodePagesForMdlEx(0, -1, 0LL, 0x80000uLL, 1, a1, 4);
  if ( !NodePagesForMdl )
    return 3221225495LL;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v7->Next;
    if ( v7 )
    {
      Next = v7[1].Next;
      v1 = 1;
      v17 = CurrentPrcb;
      v8 = v7;
      v9 = BYTE4(CurrentPrcb);
      goto LABEL_9;
    }
    v10 = v20;
    _disable();
    Next = v19;
    LOBYTE(CurrentPrcb) = (v10 & 0x200) != 0;
    LOBYTE(v17) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    LOWORD(CurrentPrcb) = v20;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v17) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v8 = v18;
  v9 = 1;
  HIDWORD(v17) = 1;
LABEL_9:
  *p_Next = HvlPartitionId;
  v11 = NodePagesForMdl + 3;
  v12 = p_Next + 1;
  v13 = 8LL;
  do
  {
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12 += 8;
    v14 = v11[7];
    v11 += 8;
    *(v12 - 1) = v14;
    --v13;
  }
  while ( v13 );
  HvlpHypercallCodeVa(0x8000000048LL, Next, 0LL);
  HypercallCachedPages = 0LL;
  if ( (v1 & 1) != 0 )
  {
    v8[1].Next = Next;
    RtlpInterlockedPushEntrySList(v17 + 1535, v8);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v16->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  ExFreePoolWithTag(NodePagesForMdl, 0);
  return 0LL;
}
