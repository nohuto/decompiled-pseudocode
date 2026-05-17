/*
 * XREFs of RtlSparseBitmapCtxFindSetRuns @ 0x1801005B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE14 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE34 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010123C (RtlpSparseBitmapCtxFindRunsInternal.c)
 */

__int64 __fastcall RtlSparseBitmapCtxFindSetRuns(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *a7)
{
  int v7; // ebp
  unsigned int RunsInternal; // ebx

  v7 = a4;
  if ( a2 >= *(unsigned int *)(a1 + 52) * (unsigned __int64)*(unsigned int *)(a1 + 56) || a2 > a3 )
  {
    return 0;
  }
  else
  {
    RtlpSparseBitmapCtxLockShared(a1, (volatile signed __int64 *)a1, a3, a4);
    RunsInternal = RtlpSparseBitmapCtxFindRunsInternal(a1, v7, a5, a6, a7);
    RtlpSparseBitmapCtxUnlockShared(a1, (volatile signed __int64 *)a1);
  }
  return RunsInternal;
}
