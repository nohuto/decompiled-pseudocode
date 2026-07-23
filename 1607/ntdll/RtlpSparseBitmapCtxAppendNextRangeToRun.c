/*
 * XREFs of RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x180100B34
 * Callers:
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x180100CAC (RtlpSparseBitmapCtxFindRunsFromNullRange.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x180100DD4 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxAppendNextRangeToRun(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned int v7; // ebx
  int RunsFromRange; // eax
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    if ( _bittest64(*(const signed __int64 **)(a2 + 16), 0) != 1 )
      return v7;
    RunsFromRange = RtlpSparseBitmapCtxFindRunsFromRange(a1, a2, a7, 1, (__int64)&v10, a3, 0, a4, a2, 0LL);
  }
  else
  {
    RunsFromRange = RtlpSparseBitmapCtxFindRunsFromNullRange(a1, 0, a7, 1, (__int64)&v10, a3, 0, a4, 0LL);
  }
  if ( RunsFromRange )
  {
    v7 = v11;
    *(_DWORD *)(a5 + 8) += v11;
  }
  return v7;
}
