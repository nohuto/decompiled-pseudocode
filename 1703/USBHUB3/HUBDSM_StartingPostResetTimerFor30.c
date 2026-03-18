/*
 * XREFs of HUBDSM_StartingPostResetTimerFor30 @ 0x1C001D3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_StartingPostResetTimerFor30(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1528LL), -150000LL, 0LL, 0LL);
  return 1000LL;
}
