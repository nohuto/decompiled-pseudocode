/*
 * XREFs of RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100CCC
 * Callers:
 *     RtlSparseBitmapCtxFindNextBitSet @ 0x1801005A0 (RtlSparseBitmapCtxFindNextBitSet.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010123C (RtlpSparseBitmapCtxFindRunsInternal.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindNextBitInternal(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int RunsInternal; // edi
  __int64 v8[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = -1LL;
  memset(v8, 0, 24);
  RtlpSparseBitmapCtxLockShared((__int64)a1, a1, a3, a4);
  RunsInternal = RtlpSparseBitmapCtxFindRunsInternal((int)a1, 1, 1, (__int64)v8, 0LL);
  RtlpSparseBitmapCtxUnlockShared((__int64)a1, a1);
  if ( RunsInternal )
    return v8[0];
  return v4;
}
