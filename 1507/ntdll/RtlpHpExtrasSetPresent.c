/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18006A44C
 * Callers:
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasAppend @ 0x18006A3C8 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpSegSetExtraPresent @ 0x18006A4A8 (RtlpHpSegSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // eax

  if ( (_WORD)a2 )
    v6 = 0;
  else
    v6 = RtlSparseBitmapCtxCheckBitsInternal(a1, a2 >> 16);
  if ( v6 )
    return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
  else
    return RtlpHpSegSetExtraPresent(a1, a2);
}
