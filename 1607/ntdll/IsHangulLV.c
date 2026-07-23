/*
 * XREFs of IsHangulLV @ 0x1800901B4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180058880 (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800F0F8C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800F1004 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
