/*
 * XREFs of RtlSparseBitmapCtxPrepareBits @ 0x1801007F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 */

__int64 __fastcall RtlSparseBitmapCtxPrepareBits(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  int v5; // ebx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = RtlpSparseBitmapCtxPrepareRanges(
         a1,
         (__int64)&v7,
         a2 / *(unsigned int *)(a1 + 56),
         (*(unsigned int *)(a1 + 56) + (unsigned __int64)a3 + a2 - 1) / *(unsigned int *)(a1 + 56),
         0,
         a4);
  if ( v5 >= 0 )
    v5 = 0;
  RtlpSparseBitmapCtxUnlockShared(a1, (_RTL_SRWLOCK *)a1);
  return (unsigned int)v5;
}
