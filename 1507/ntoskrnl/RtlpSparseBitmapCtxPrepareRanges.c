/*
 * XREFs of RtlpSparseBitmapCtxPrepareRanges @ 0x140273AF4
 * Callers:
 *     ?StDmLazyRemoveStatePrepare@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140254E74 (-StDmLazyRemoveStatePrepare@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@@Z.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140273C10 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 * Callees:
 *     RtlSparseBitmapCtxAllocateRange @ 0x140272FA0 (RtlSparseBitmapCtxAllocateRange.c)
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248 (RtlpSparseBitmapCtxCheckRangeArray.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxPrepareRanges(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  int v10; // eax
  __int64 i; // rdi
  __int64 v12; // rax

  v7 = a3;
  result = RtlpSparseBitmapCtxCheckRangeArray(a1, a2);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 72) & 1;
    if ( !a6 && !v10 || a6 == 1 && v10 || (unsigned int)v7 >= a4 )
    {
      return 0LL;
    }
    else
    {
      for ( i = 8 * v7; ; i += 8LL )
      {
        v12 = *(_QWORD *)(a1 + 8);
        if ( (!v12 || !*(_QWORD *)(i + v12)) && !RtlSparseBitmapCtxAllocateRange(a1, v7) )
          break;
        LODWORD(v7) = v7 + 1;
        if ( (unsigned int)v7 >= a4 )
          return 0LL;
      }
      return 3221225626LL;
    }
  }
  return result;
}
