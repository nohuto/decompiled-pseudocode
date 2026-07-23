/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1400D3050
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfApplyLatencyHint @ 0x140110B88 (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckLatencyBoostActive )
  {
    v2[1] = qword_1402F87C8[0];
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
