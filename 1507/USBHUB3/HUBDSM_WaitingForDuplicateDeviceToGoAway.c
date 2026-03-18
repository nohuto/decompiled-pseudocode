/*
 * XREFs of HUBDSM_WaitingForDuplicateDeviceToGoAway @ 0x1C0019B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_WaitingForDuplicateDeviceToGoAway(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1528LL), -5000000LL, 0LL, 0LL);
  return 1000LL;
}
