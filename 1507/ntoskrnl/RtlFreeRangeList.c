/*
 * XREFs of RtlFreeRangeList @ 0x1405A0D84
 * Callers:
 *     ArbTestAllocation @ 0x14059E790 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x14059FD8C (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x1405A09A4 (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x1405A0EFC (ArbCommitAllocation.c)
 *     RtlMergeRangeLists @ 0x1406C767C (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x14071E8FC (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x14071E9EC (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14071ED58 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x14071EEFC (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x14071EF10 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x1405A0DEC (RtlpDeleteRangeListEntry.c)
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
