/*
 * XREFs of VfSetVerifierRunningMode @ 0x140745668
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140331D7C = a1;
  return result;
}
