/*
 * XREFs of RtlSparseBitmapCtxFindSetRuns @ 0x1801004F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 */

__int64 __fastcall RtlSparseBitmapCtxFindSetRuns(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        void *a7)
{
  unsigned int RunsInternal; // ebx

  if ( a2 >= *(unsigned int *)(a1 + 52) * (unsigned __int64)*(unsigned int *)(a1 + 56) || a2 > a3 )
  {
    return 0;
  }
  else
  {
    RtlpSparseBitmapCtxLockShared(a1, (_RTL_SRWLOCK *)a1);
    RunsInternal = RtlpSparseBitmapCtxFindRunsInternal(a1, a4, a5, a6, a7);
    RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)a1);
  }
  return RunsInternal;
}
