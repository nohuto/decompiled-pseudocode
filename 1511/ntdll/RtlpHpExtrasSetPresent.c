/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18005C9DC
 * Callers:
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasAppend @ 0x18005CB34 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpSegSetExtraPresent @ 0x18005CA38 (RtlpHpSegSetExtraPresent.c)
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
