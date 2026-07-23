/*
 * XREFs of RtlFindRange @ 0x14055A330
 * Callers:
 *     ArbFindSuitableRange @ 0x14055A244 (ArbFindSuitableRange.c)
 *     IopPortFindSuitableRange @ 0x14055B108 (IopPortFindSuitableRange.c)
 * Callees:
 *     RtlpIsRangeAvailable @ 0x14055A524 (RtlpIsRangeAvailable.c)
 *     RtlGetLastRange @ 0x14055A700 (RtlGetLastRange.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlFindRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Minimum,
        ULONGLONG Maximum,
        ULONG Length,
        ULONG Alignment,
        ULONG Flags,
        UCHAR AttributeAvailableMask,
        PVOID Context,
        PRTL_CONFLICT_RANGE_CALLBACK Callback,
        PULONGLONG Start)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  ULONGLONG v13; // rbx
  char v14; // r13
  char v15; // r15
  unsigned __int64 v17; // rbx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-48h] BYREF

  v10 = *(_QWORD *)&Alignment;
  v12 = *(_QWORD *)&Length;
  v13 = Maximum - *(_QWORD *)&Length + 1 - (Maximum - *(_QWORD *)&Length + 1) % *(_QWORD *)&Alignment;
  if ( Minimum > Maximum
    || Maximum - Minimum < *(_QWORD *)&Length - 1LL
    || Minimum + *(_QWORD *)&Alignment < Minimum
    || v13 < Minimum
    || !*(_QWORD *)&Length
    || !*(_QWORD *)&Alignment )
  {
    return -1073741811;
  }
  v14 = Flags & 1;
  v15 = Flags & 2;
  RtlGetLastRange(RangeList, &Iterator, &Alignment);
  do
  {
    if ( (unsigned __int8)RtlpIsRangeAvailable(&Iterator, v14, v15, 0, (__int64)Context, (__int64)Callback) )
    {
      *Start = v13;
      return 0;
    }
    v17 = *(_QWORD *)Iterator.Current - v12;
    if ( v17 > *(_QWORD *)Iterator.Current )
      break;
    v13 = v17 - v17 % v10;
  }
  while ( v13 >= Minimum );
  return -1073741823;
}
