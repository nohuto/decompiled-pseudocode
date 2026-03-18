/*
 * XREFs of IsHangulLV @ 0x140249B64
 * Callers:
 *     CanComposeHangul @ 0x140249ACC (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140249B34 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1406CEEA8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
