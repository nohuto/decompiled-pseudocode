/*
 * XREFs of RtlFreeRangeList @ 0x14055A8D4
 * Callers:
 *     ArbTestAllocation @ 0x1405590D8 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x1405598CC (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x14055A4DC (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x14055AA4C (ArbCommitAllocation.c)
 *     RtlMergeRangeLists @ 0x140685838 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x1406E4E60 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1406E4F50 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1406E52BC (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x1406E5460 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x1406E5474 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x14055A93C (RtlpDeleteRangeListEntry.c)
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
