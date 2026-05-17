/*
 * XREFs of IsHangulLV @ 0x1800810F8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18005F468 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800E2D10 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800E2D88 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
