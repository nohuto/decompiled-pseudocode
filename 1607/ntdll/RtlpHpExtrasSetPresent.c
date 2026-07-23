/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18005172C
 * Callers:
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F510 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpSegSetExtraPresent @ 0x180051798 (RtlpHpSegSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // eax

  if ( (_WORD)a2 )
    v6 = 0;
  else
    v6 = RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, a2 >> 16, 1uLL, 1);
  if ( v6 )
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
  else
    return RtlpHpSegSetExtraPresent(a1, a2);
}
