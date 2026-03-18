/*
 * XREFs of VfSetVerifierRunningMode @ 0x1406C3DC8
 * Callers:
 *     VfSetVerifierInformationEx @ 0x1406D4F60 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
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
  dword_1402E18FC = a1;
  return result;
}
