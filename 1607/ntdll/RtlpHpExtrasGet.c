/*
 * XREFs of RtlpHpExtrasGet @ 0x18002925C
 * Callers:
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18004376C (RtlpHpReAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpGetUserInfo @ 0x18007AE80 (RtlpHpGetUserInfo.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpSegAllocSize @ 0x180029300 (RtlpHpSegAllocSize.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v6 = a3;
  if ( (_WORD)a2 )
    v9 = 0;
  else
    v9 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL);
  if ( v9 )
    v10 = RtlpHpLargeAllocSize(a1, a2, v6, &v13);
  else
    v10 = RtlpHpSegAllocSize(a1, a2, a3, &v13);
  if ( a4 )
    *a4 = v10;
  if ( v13 )
  {
    v11 = v10 + a2;
    if ( (v6 & 0x10000000) != 0 )
      v11 += 16LL;
    return (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  return v4;
}
