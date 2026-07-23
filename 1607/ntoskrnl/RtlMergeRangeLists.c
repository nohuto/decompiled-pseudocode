/*
 * XREFs of RtlMergeRangeLists @ 0x14068591C
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddRange @ 0x14055A11C (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x14055AA1C (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x14055AAB0 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlMergeRangeLists(
        PRTL_RANGE_LIST MergedRangeList,
        PRTL_RANGE_LIST RangeList1,
        PRTL_RANGE_LIST RangeList2,
        ULONG Flags)
{
  NTSTATUS v7; // ebx
  struct _LIST_ENTRY *i; // rdi
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 *v11; // rax
  ULONG v12; // r8d
  NTSTATUS v13; // eax
  __int64 v14; // rdi
  __int64 *v15; // rax
  ULONG v16; // r8d
  __int64 p_Blink; // rdi
  struct _LIST_ENTRY **v18; // r15

  v7 = RtlCopyRangeList(MergedRangeList, RangeList1);
  if ( v7 < 0 )
    goto LABEL_19;
  for ( i = RangeList2->ListHead.Flink; ; i = *v18 )
  {
    p_Blink = (__int64)&i[-3].Blink;
    v18 = (struct _LIST_ENTRY **)(p_Blink + 40);
    if ( RangeList2 == (PRTL_RANGE_LIST)(p_Blink + 40) )
    {
      MergedRangeList->Count += RangeList2->Count;
      MergedRangeList->Stamp += RangeList2->Count;
      return v7;
    }
    if ( (*(_BYTE *)(p_Blink + 34) & 1) != 0 )
    {
      v9 = p_Blink + 16;
      v10 = *(_QWORD *)(p_Blink + 16);
      while ( 1 )
      {
        v14 = v10 - 40;
        if ( v9 == v14 + 40 )
          break;
        v11 = RtlpCopyRangeListEntry(v14);
        if ( !v11 )
          goto LABEL_18;
        v12 = Flags;
        if ( (*(_BYTE *)(v14 + 33) & 2) != 0 )
          v12 = Flags | 1;
        v13 = RtlpAddRange((unsigned __int64 *)MergedRangeList, v11, v12);
        v10 = *(_QWORD *)(v14 + 40);
        v7 = v13;
      }
      continue;
    }
    v15 = RtlpCopyRangeListEntry(p_Blink);
    if ( !v15 )
      break;
    v16 = Flags;
    if ( (*(_BYTE *)(p_Blink + 33) & 2) != 0 )
      v16 = Flags | 1;
    v7 = RtlpAddRange((unsigned __int64 *)MergedRangeList, v15, v16);
    if ( v7 < 0 )
      goto LABEL_19;
  }
LABEL_18:
  v7 = -1073741670;
LABEL_19:
  RtlFreeRangeList(MergedRangeList);
  return v7;
}
