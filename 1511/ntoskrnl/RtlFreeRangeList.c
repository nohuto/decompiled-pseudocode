/*
 * XREFs of RtlFreeRangeList @ 0x14052E404
 * Callers:
 *     ArbTestAllocation @ 0x14052BE34 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x14052D40C (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x14052E024 (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x14052E57C (ArbCommitAllocation.c)
 *     RtlMergeRangeLists @ 0x1406445F0 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x14069E2A0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x14069E390 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14069E6FC (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x14069E8A0 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x14069E8B4 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x14052E46C (RtlpDeleteRangeListEntry.c)
 */

void __stdcall RtlFreeRangeList(PRTL_RANGE_LIST RangeList)
{
  char *p_Blink; // rcx
  struct _RTL_RANGE_LIST *i; // rax
  __int64 v4; // rdi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx

  RangeList->Flags = 0;
  RangeList->Count = 0;
  p_Blink = (char *)&RangeList->ListHead.Flink[-3].Blink;
  for ( i = (struct _RTL_RANGE_LIST *)(p_Blink + 40); ; i = (struct _RTL_RANGE_LIST *)(v4 + 40) )
  {
    v4 = (__int64)&i->ListHead.Flink[-3].Blink;
    if ( RangeList == i )
      break;
    Flink = i->ListHead.Flink;
    Blink = i->ListHead.Blink;
    if ( (struct _RTL_RANGE_LIST *)i->ListHead.Flink->Blink != i || (struct _RTL_RANGE_LIST *)Blink->Flink != i )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    RtlpDeleteRangeListEntry(p_Blink);
    p_Blink = (char *)v4;
  }
}
