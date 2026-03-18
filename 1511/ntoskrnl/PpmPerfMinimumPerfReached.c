/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x14009BEEC
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140075B84 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF

  v3[1] = qword_1402D1748[0];
  v0 = 1;
  v4 = 0;
  v3[0] = &PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
  {
    Prcb = KeGetPrcb(v5);
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24184) + 48LL) > *(_DWORD *)(*(_QWORD *)(Prcb + 24176) + 360LL) )
      v0 = 0;
  }
  return v0;
}
