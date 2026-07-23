/*
 * XREFs of RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C
 * Callers:
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F0430 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x180054F94 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18005520C (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x180055250 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x180055278 (RtlpSparseBitmapCtxUpdateBits.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBitRanges(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v7; // r15d
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned int v16; // r10d
  __int64 v17; // rdx
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v7 = a6;
  v9 = a2 / *(unsigned int *)(a1 + 56);
  v11 = a3;
  v12 = RtlpSparseBitmapCtxPrepareRanges(
          a1,
          (unsigned int)&v19,
          v9,
          (*(unsigned int *)(a1 + 56) + a2 + a3 - 1) / *(unsigned int *)(a1 + 56));
  if ( v12 >= 0 )
  {
    v13 = a2 % *(unsigned int *)(a1 + 56);
    if ( v11 )
    {
      v14 = a5;
      do
      {
        v15 = (unsigned int)(*(_DWORD *)(a1 + 56) - v13);
        if ( v11 < v15 )
          LODWORD(v15) = v11;
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(a1, (unsigned int)v9) )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)v9);
            if ( v17 )
              RtlpSparseBitmapCtxUpdateBits(a1, v17, v16, (unsigned int)v15, a4, v14, v7, 0LL);
          }
        }
        LODWORD(v13) = 0;
        LODWORD(v9) = v9 + 1;
        v11 -= (unsigned int)v15;
      }
      while ( v11 );
    }
    v12 = 0;
  }
  RtlpSparseBitmapCtxUnlockShared(a1, a1);
  return (unsigned int)v12;
}
