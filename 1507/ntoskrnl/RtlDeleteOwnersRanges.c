/*
 * XREFs of RtlDeleteOwnersRanges @ 0x1405A0CB4
 * Callers:
 *     ArbTestAllocation @ 0x14059E790 (ArbTestAllocation.c)
 *     ArbQueryConflict @ 0x14071E9EC (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14071ED58 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x1405A0E48 (RtlpFreeRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1405C4B74 (RtlpDeleteFromMergedRange.c)
 */

NTSTATUS __stdcall RtlDeleteOwnersRanges(PRTL_RANGE_LIST RangeList, PVOID Owner)
{
  NTSTATUS v4; // r8d
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY **v7; // rdi
  char *v8; // rcx
  __int64 v9; // r8
  char **v10; // rax
  PVOID *v11; // rcx
  char *j; // rax

  v4 = 0;
LABEL_2:
  p_Blink = &RangeList->ListHead.Flink[-3].Blink;
  for ( i = RangeList->ListHead.Flink->Flink; ; i = v7[5] )
  {
    v7 = &i[-3].Blink;
    v8 = (char *)(p_Blink + 5);
    if ( RangeList == (PRTL_RANGE_LIST)(p_Blink + 5) )
      break;
    if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
    {
      v11 = (PVOID *)&p_Blink[2][-3].Blink;
      for ( j = (char *)p_Blink[2]; p_Blink + 2 != (struct _LIST_ENTRY **)j; j = *(char **)j )
      {
        if ( v11[3] == Owner )
        {
          v4 = RtlpDeleteFromMergedRange(v11, p_Blink);
          if ( v4 < 0 )
            return v4;
          --RangeList->Count;
          ++RangeList->Stamp;
          goto LABEL_2;
        }
        v11 = (PVOID *)(*(_QWORD *)j - 40LL);
      }
    }
    else if ( p_Blink[3] == Owner )
    {
      v9 = *(_QWORD *)v8;
      v10 = (char **)p_Blink[6];
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
        __fastfail(3u);
      *v10 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      RtlpFreeRangeListEntry(p_Blink);
      --RangeList->Count;
      ++RangeList->Stamp;
      v4 = 0;
    }
    p_Blink = v7;
  }
  return v4;
}
