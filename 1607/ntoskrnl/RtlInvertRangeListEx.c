/*
 * XREFs of RtlInvertRangeListEx @ 0x1405597DC
 * Callers:
 *     RtlInvertRangeList @ 0x1405586A8 (RtlInvertRangeList.c)
 * Callees:
 *     RtlAddRange @ 0x14055A080 (RtlAddRange.c)
 */

int __fastcall RtlInvertRangeListEx(PRTL_RANGE_LIST RangeList, __int64 a2, UCHAR a3, void *a4, PVOID Owner)
{
  ULONGLONG v7; // rdx
  ULONGLONG v10; // rbx
  ULONGLONG *v11; // rbx
  ULONGLONG v12; // rdx
  int result; // eax

  v7 = 0LL;
  if ( !*(_DWORD *)(a2 + 20) )
    return RtlAddRange(RangeList, 0LL, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, Owner);
  v10 = *(_QWORD *)a2;
  while ( 1 )
  {
    v11 = (ULONGLONG *)(v10 - 40);
    if ( (ULONGLONG *)a2 == v11 + 5 )
      break;
    if ( *v11 > v7 )
    {
      result = RtlAddRange(RangeList, v7, *v11 - 1, a3, 0, a4, Owner);
      if ( result < 0 )
        return result;
    }
    v12 = v11[1];
    v10 = v11[5];
    v7 = v12 + 1;
  }
  if ( !v7 )
    return 0;
  result = RtlAddRange(RangeList, v7, 0xFFFFFFFFFFFFFFFFuLL, a3, 0, a4, Owner);
  if ( result >= 0 )
    return 0;
  return result;
}
