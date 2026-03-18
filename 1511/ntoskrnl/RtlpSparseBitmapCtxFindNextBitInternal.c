/*
 * XREFs of RtlpSparseBitmapCtxFindNextBitInternal @ 0x14022345C
 * Callers:
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140205AF0 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x140223900 (RtlpSparseBitmapCtxFindRunsInternal.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x140223B2C (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140223C08 (RtlpSparseBitmapCtxUnlockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindNextBitInternal(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int RunsInternal; // edi
  int v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = -1LL;
  memset(v8, 0, 24);
  v3 = RtlpSparseBitmapCtxLockShared(a1, a1);
  RunsInternal = RtlpSparseBitmapCtxFindRunsInternal(a1, v6, (__int64)v8, v7);
  RtlpSparseBitmapCtxUnlockShared(a1, a1, v3);
  if ( RunsInternal )
    return v8[0];
  return v1;
}
