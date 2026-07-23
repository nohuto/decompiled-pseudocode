/*
 * XREFs of TpIsTimerSet @ 0x18003CE20
 * Callers:
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18003D1F8 (TppTimerpValidateTimer.c)
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
