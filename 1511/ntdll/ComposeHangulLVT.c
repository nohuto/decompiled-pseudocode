/*
 * XREFs of ComposeHangulLVT @ 0x1800E7E28
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18006AE44 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x18008DA50 (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A && IsHangulLV(a1) )
    return (unsigned int)(v3 + v2);
  else
    return 0LL;
}
