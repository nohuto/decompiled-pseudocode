/*
 * XREFs of PpmInitIdlePolicy @ 0x1407E21B8
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 */

unsigned __int64 PpmInitIdlePolicy()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // r11
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx

  v0 = PopQpcFrequency;
  dword_14032C7C8 = 50000;
  dword_14032CD38 = 50000;
  result = 2 * PopQpcFrequency;
  word_14032C7C4 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_14032CD34 = 0;
  word_14032C7CC = 15400;
  word_14032CD3C = 15400;
  if ( !KdPitchDebugger )
    result = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = result;
  v2 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  v3 = 26LL;
  do
  {
    v4 = v2[1];
    if ( v4 != -1LL )
    {
      result = PpmConvertTime(v4, 0x989680uLL, v0);
      *v2 = result;
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  return result;
}
