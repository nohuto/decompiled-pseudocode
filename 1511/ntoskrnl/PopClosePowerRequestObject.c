/*
 * XREFs of PopClosePowerRequestObject @ 0x1404C5AE4
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 */

void __fastcall PopClosePowerRequestObject(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    PopPowerRequestCleanUp(a2);
}
