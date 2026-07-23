/*
 * XREFs of RtlCopyRangeList @ 0x14055AA1C
 * Callers:
 *     ArbTestAllocation @ 0x140559618 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x140559E0C (ArbBootAllocation.c)
 *     RtlMergeRangeLists @ 0x14068591C (RtlMergeRangeLists.c)
 *     ArbQueryConflict @ 0x1406E5088 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1406E53F4 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x14055AAB0 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlCopyRangeList(PRTL_RANGE_LIST CopyRangeList, PRTL_RANGE_LIST RangeList)
{
  struct _LIST_ENTRY **p_Blink; // rax
  struct _RTL_RANGE_LIST *Flink; // rsi
  __int64 v6; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax

  if ( CopyRangeList->Count )
    return -1073741811;
  CopyRangeList->Flags = RangeList->Flags;
  CopyRangeList->Count = RangeList->Count;
  CopyRangeList->Stamp = RangeList->Stamp;
  p_Blink = &RangeList->ListHead.Flink[-3].Blink;
  Flink = (struct _RTL_RANGE_LIST *)RangeList->ListHead.Flink;
  if ( RangeList == (PRTL_RANGE_LIST)RangeList->ListHead.Flink )
    return 0;
  while ( 1 )
  {
    v6 = RtlpCopyRangeListEntry(p_Blink);
    if ( !v6 )
      break;
    Blink = CopyRangeList->ListHead.Blink;
    v8 = (struct _LIST_ENTRY *)(v6 + 40);
    if ( (PRTL_RANGE_LIST)Blink->Flink != CopyRangeList )
      __fastfail(3u);
    v8->Flink = &CopyRangeList->ListHead;
    v8->Blink = Blink;
    Blink->Flink = v8;
    CopyRangeList->ListHead.Blink = v8;
    p_Blink = &Flink->ListHead.Flink[-3].Blink;
    Flink = (struct _RTL_RANGE_LIST *)Flink->ListHead.Flink;
    if ( RangeList == Flink )
      return 0;
  }
  RtlFreeRangeList(CopyRangeList);
  return -1073741670;
}
