/*
 * XREFs of RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x14027319C
 * Callers:
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x1402737D8 (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x1402733C8 (RtlpSparseBitmapCtxFindRunsFromNullRange.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x1402734B4 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxAppendNextRangeToRun(int a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  int RunsFromRange; // eax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v6 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( _bittest64(*(const signed __int64 **)(a2 + 16), 0) != 1 )
      return v6;
    RunsFromRange = RtlpSparseBitmapCtxFindRunsFromRange(a1, a2, a6, 1, (__int64)&v11, a3, 0, a2, 0LL);
  }
  else
  {
    RunsFromRange = RtlpSparseBitmapCtxFindRunsFromNullRange(a1, 0, a6, 1, (__int64)&v11, a3, 0, 0LL);
  }
  if ( RunsFromRange )
  {
    v9 = v12;
    *(_DWORD *)(a4 + 8) += v12;
    return v9;
  }
  return v6;
}
