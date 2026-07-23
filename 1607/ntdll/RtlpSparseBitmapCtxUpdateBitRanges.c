/*
 * XREFs of RtlpSparseBitmapCtxUpdateBitRanges @ 0x18004FAB4
 * Callers:
 *     RtlSparseBitmapCtxClearBits @ 0x18004F740 (RtlSparseBitmapCtxClearBits.c)
 *     RtlSparseBitmapCtxSetBits @ 0x18004F9D0 (RtlSparseBitmapCtxSetBits.c)
 *     RtlSparseBitmapCtxClearBitsEx @ 0x1801003F0 (RtlSparseBitmapCtxClearBitsEx.c)
 *     RtlSparseBitmapCtxSetBitsEx @ 0x180100870 (RtlSparseBitmapCtxSetBitsEx.c)
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE70 (RtlpSparseBitmapCtxUpdateBits.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBitRanges(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // r12d
  unsigned __int64 v10; // r14
  unsigned __int64 v12; // rbp
  int v13; // edi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r10
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  unsigned int v18; // r10d
  __int64 v19; // rdx
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v8 = a6;
  v10 = a2 / *(unsigned int *)(a1 + 56);
  v12 = a3;
  v13 = RtlpSparseBitmapCtxPrepareRanges(
          a1,
          (__int64)&v21,
          v10,
          (*(unsigned int *)(a1 + 56) + a2 + a3 - 1) / *(unsigned int *)(a1 + 56),
          0,
          a6 != 0);
  if ( v13 >= 0 )
  {
    v14 = a7;
    v15 = a2 % *(unsigned int *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    v21 = 0LL;
    if ( v12 )
    {
      v16 = a5;
      do
      {
        v17 = (unsigned int)(*(_DWORD *)(a1 + 56) - v15);
        if ( v12 < v17 )
          LODWORD(v17) = v12;
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (unsigned __int8)RtlpSparseBitmapCheckRangeArrayPage(a1, (unsigned int)v10) )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)v10);
            if ( v19 )
            {
              RtlpSparseBitmapCtxUpdateBits(
                a1,
                v19,
                v18,
                (unsigned int)v17,
                a4,
                v16,
                v8,
                (unsigned __int64)&v21 & -(__int64)(v14 != 0LL));
              if ( v14 )
                *v14 += v21;
            }
          }
        }
        LODWORD(v15) = 0;
        LODWORD(v10) = v10 + 1;
        v12 -= (unsigned int)v17;
      }
      while ( v12 );
    }
    v13 = 0;
  }
  RtlpSparseBitmapCtxUnlockShared(a1, a1);
  return (unsigned int)v13;
}
