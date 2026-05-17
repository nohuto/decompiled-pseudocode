/*
 * XREFs of RtlSparseBitmapCtxCountBitsSet @ 0x1801004E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE58 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlNumberOfSetBits @ 0x1800E46E0 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlSparseBitmapCtxCountBitsSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbp

  v5 = 0LL;
  RtlpSparseBitmapCtxLockShared(a1, (volatile signed __int64 *)a1, a3, a4);
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(a1 + 8)
        && RtlpSparseBitmapCheckRangeArrayPage(a1, i)
        && (v9 = *(_QWORD *)(a1 + 8), (v10 = *(_QWORD *)(v9 + 8 * i)) != 0) )
      {
        RtlpSparseBitmapCtxLockShared(a1, *(volatile signed __int64 **)(v9 + 8 * i), v7, v8);
        v5 += (unsigned int)RtlNumberOfSetBits((unsigned int *)(v10 + 8));
        RtlpSparseBitmapCtxUnlockShared(a1, (volatile signed __int64 *)v10);
      }
      else if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
      {
        v5 += *(unsigned int *)(a1 + 56);
      }
    }
  }
  RtlpSparseBitmapCtxUnlockShared(a1, (volatile signed __int64 *)a1);
  return v5;
}
