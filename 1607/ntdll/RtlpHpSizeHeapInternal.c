/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x1800519DC
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpSegAllocSize @ 0x180029300 (RtlpHpSegAllocSize.c)
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v8; // eax

  v5 = a3;
  if ( (_WORD)a2 )
    v8 = 0;
  else
    v8 = RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, a2 >> 16, 1uLL, 1);
  if ( v8 )
    return RtlpHpLargeAllocSize(a1, a2, v5, a4);
  else
    return RtlpHpSegAllocSize(a1, a2, a3, a4);
}
