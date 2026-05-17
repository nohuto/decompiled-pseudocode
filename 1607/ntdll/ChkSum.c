/*
 * XREFs of ChkSum @ 0x1800EB2A8
 * Callers:
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800EB2D8 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ChkSum(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v3; // eax

  for ( ; a3; --a3 )
  {
    v3 = *a2++;
    a1 = ((v3 + a1) >> 16) + (unsigned __int16)(v3 + a1);
  }
  return a1 + HIWORD(a1);
}
