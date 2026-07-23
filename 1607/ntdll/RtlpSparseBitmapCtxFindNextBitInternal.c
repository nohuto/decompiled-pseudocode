/*
 * XREFs of RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100C0C
 * Callers:
 *     RtlSparseBitmapCtxFindNextBitSet @ 0x1801004E0 (RtlSparseBitmapCtxFindNextBitSet.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindNextBitInternal(_RTL_SRWLOCK *a1)
{
  __int64 v1; // rbx
  int RunsInternal; // edi
  __int64 v5[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = -1LL;
  memset(v5, 0, 24);
  RtlpSparseBitmapCtxLockShared((__int64)a1, a1);
  RunsInternal = RtlpSparseBitmapCtxFindRunsInternal((int)a1, 1, 1, (__int64)v5, 0LL);
  RtlpSparseBitmapCtxUnlockShared((__int64)a1, a1);
  if ( RunsInternal )
    return v5[0];
  return v1;
}
