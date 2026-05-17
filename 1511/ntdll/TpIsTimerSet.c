/*
 * XREFs of TpIsTimerSet @ 0x18000AED0
 * Callers:
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpIsTimerSet(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = TppTimerpValidateTimer(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(a1 + 320) != 0LL;
  return v3;
}
