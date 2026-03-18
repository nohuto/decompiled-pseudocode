/*
 * XREFs of IsHangulLV @ 0x14021510C
 * Callers:
 *     CanComposeHangul @ 0x140215074 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1402150DC (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14068B660 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
