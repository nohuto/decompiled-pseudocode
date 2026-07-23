/*
 * XREFs of IsHangulLV @ 0x140214F38
 * Callers:
 *     CanComposeHangul @ 0x140214EA0 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x140214F08 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
