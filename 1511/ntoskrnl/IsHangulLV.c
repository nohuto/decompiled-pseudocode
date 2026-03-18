/*
 * XREFs of IsHangulLV @ 0x1401FADD0
 * Callers:
 *     CanComposeHangul @ 0x1401FAD38 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1401FADA0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x14064BE24 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
