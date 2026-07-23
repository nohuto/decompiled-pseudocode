/*
 * XREFs of RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlSparseBitmapCtxOrBitmap @ 0x1801006A0 (RtlSparseBitmapCtxOrBitmap.c)
 *     RtlSparseBitmapCtxPrepareBits @ 0x1801007F0 (RtlSparseBitmapCtxPrepareBits.c)
 * Callees:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlSparseBitmapCtxAllocateRange @ 0x180050F70 (RtlSparseBitmapCtxAllocateRange.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxPrepareRanges(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  int v10; // eax
  __int64 i; // rsi

  v7 = a3;
  if ( a5 || (result = RtlpSparseBitmapCtxCheckRangeArray(), (int)result >= 0) )
  {
    v10 = *(_DWORD *)(a1 + 72) & 1;
    if ( !a6 && !v10 || a6 == 1 && v10 || (unsigned int)v7 >= a4 )
    {
      return 0LL;
    }
    else
    {
      for ( i = 8 * v7;
            *(_QWORD *)(a1 + 8)
         && (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(a1, (unsigned int)v7)
         && *(_QWORD *)(i + *(_QWORD *)(a1 + 8))
         || RtlSparseBitmapCtxAllocateRange(a1, (unsigned int)v7);
            i += 8LL )
      {
        LODWORD(v7) = v7 + 1;
        if ( (unsigned int)v7 >= a4 )
          return 0LL;
      }
      return 3221225626LL;
    }
  }
  return result;
}
