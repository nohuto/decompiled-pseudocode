/*
 * XREFs of RtlSparseBitmapCtxCountBitsSet @ 0x180100420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlNumberOfSetBits @ 0x1800E47A0 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlSparseBitmapCtxCountBitsSet(__int64 a1)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp

  v2 = 0LL;
  RtlpSparseBitmapCtxLockShared(a1, (_RTL_SRWLOCK *)a1);
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(a1 + 8)
        && RtlpSparseBitmapCheckRangeArrayPage(a1, i)
        && (v4 = *(_QWORD *)(a1 + 8), (v5 = *(_QWORD *)(v4 + 8 * i)) != 0) )
      {
        RtlpSparseBitmapCtxLockShared(a1, *(_RTL_SRWLOCK **)(v4 + 8 * i));
        v2 += RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 8));
        RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)v5);
      }
      else if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
      {
        v2 += *(unsigned int *)(a1 + 56);
      }
    }
  }
  RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)a1);
  return v2;
}
