/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x1400A8C74
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400D2AE4 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF

  v3[1] = qword_1402F87C8;
  v0 = 1;
  v4 = 0;
  v3[0] = &PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
  {
    Prcb = KeGetPrcb(v5);
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24184) + 56LL) > *(_DWORD *)(*(_QWORD *)(Prcb + 24176) + 368LL) )
      v0 = 0;
  }
  return v0;
}
