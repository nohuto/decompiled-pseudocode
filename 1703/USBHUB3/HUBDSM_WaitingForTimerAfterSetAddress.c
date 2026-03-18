/*
 * XREFs of HUBDSM_WaitingForTimerAfterSetAddress @ 0x1C001B3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_WaitingForTimerAfterSetAddress(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1528LL), -100000LL, 0LL, 0LL);
  return 1000LL;
}
