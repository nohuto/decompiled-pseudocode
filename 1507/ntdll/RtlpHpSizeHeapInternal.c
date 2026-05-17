/*
 * XREFs of RtlpHpSizeHeapInternal @ 0x180037E74
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x180037CFC (RtlpHpReallocComputeSizes.c)
 * Callees:
 *     RtlpHpSegAllocSize @ 0x180036EDC (RtlpHpSegAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v8; // eax

  v5 = a3;
  if ( (_WORD)a2 )
    v8 = 0;
  else
    v8 = RtlSparseBitmapCtxCheckBitsInternal(a1, a2 >> 16);
  if ( v8 )
    return RtlpHpLargeAllocSize(a1, a2, v5, a4);
  else
    return RtlpHpSegAllocSize(a1, a2, a3, a4);
}
