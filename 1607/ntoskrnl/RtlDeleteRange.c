/*
 * XREFs of RtlDeleteRange @ 0x14055AC8C
 * Callers:
 *     ArbBacktrackAllocation @ 0x14055AC74 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x14062EA10 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140558450 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlDeleteRange(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  char *p_Blink; // rcx
  NTSTATUS v8; // r10d
  struct _RTL_RANGE_LIST *i; // rax
  ULONGLONG v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r8
  char **v13; // rdx
  __int64 v15; // r8
  char *j; // rax

  p_Blink = (char *)&RangeList->ListHead.Flink[-3].Blink;
  v8 = -1073741172;
  for ( i = (struct _RTL_RANGE_LIST *)(p_Blink + 40); ; i = (struct _RTL_RANGE_LIST *)(v11 + 40) )
  {
    v11 = (__int64)&i->ListHead.Flink[-3].Blink;
    if ( RangeList == i )
      break;
    v10 = *(_QWORD *)p_Blink;
    if ( End < *(_QWORD *)p_Blink )
      break;
    if ( (p_Blink[34] & 1) != 0 )
    {
      if ( Start >= v10 && End <= *((_QWORD *)p_Blink + 1) )
      {
        v15 = *((_QWORD *)p_Blink + 2) - 40LL;
        for ( j = (char *)*((_QWORD *)p_Blink + 2); p_Blink + 16 != j; j = *(char **)j )
        {
          if ( *(_QWORD *)v15 == Start && *(_QWORD *)(v15 + 8) == End && *(PVOID *)(v15 + 24) == Owner )
          {
            v8 = RtlpDeleteFromMergedRange((_QWORD *)v15, p_Blink);
            if ( v8 < 0 )
              return v8;
            goto LABEL_13;
          }
          v15 = *(_QWORD *)j - 40LL;
        }
      }
    }
    else if ( v10 == Start && *((_QWORD *)p_Blink + 1) == End && *((PVOID *)p_Blink + 3) == Owner )
    {
      v12 = *((_QWORD *)p_Blink + 5);
      v13 = (char **)*((_QWORD *)p_Blink + 6);
      if ( *(char **)(v12 + 8) != p_Blink + 40 || *v13 != p_Blink + 40 )
        __fastfail(3u);
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlpFreeRangeListEntry(p_Blink);
      v8 = 0;
LABEL_13:
      --RangeList->Count;
      ++RangeList->Stamp;
      return v8;
    }
    p_Blink = (char *)v11;
  }
  return v8;
}
