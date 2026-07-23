/*
 * XREFs of TpIsTimerSet @ 0x18000AED0
 * Callers:
 *     TpSetTimerEx @ 0x18000AF20 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18000B2BC (TppTimerpValidateTimer.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = TppTimerpValidateTimer(Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 40) != 0LL;
  return v3;
}
