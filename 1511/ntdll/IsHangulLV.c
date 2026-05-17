/*
 * XREFs of IsHangulLV @ 0x18008DA50
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18006AE44 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800E7DB0 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800E7E28 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
