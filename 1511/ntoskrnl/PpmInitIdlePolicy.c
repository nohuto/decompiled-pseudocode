/*
 * XREFs of PpmInitIdlePolicy @ 0x14076CF38
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 */

unsigned __int64 PpmInitIdlePolicy()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx

  v0 = PopQpcFrequency;
  dword_1402DC3E8 = 50000;
  dword_1402DC958 = 50000;
  result = 2 * PopQpcFrequency;
  word_1402DC3E4 = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  word_1402DC954 = 0;
  word_1402DC3EC = 15400;
  word_1402DC95C = 15400;
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
