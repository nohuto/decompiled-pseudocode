/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1400756BC
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfApplyLatencyHint @ 0x14010585C (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckLatencyBoostActive )
  {
    v2[1] = qword_1402D1748;
    v2[0] = &PpmPerfStatesRegistered;
    v3 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
    {
      Prcb = KeGetPrcb(v4);
      PpmPerfApplyLatencyHint(Prcb);
    }
  }
  return 1;
}
