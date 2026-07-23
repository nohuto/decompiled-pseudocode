/*
 * XREFs of PopClosePowerRequestObject @ 0x1405016EC
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 */

void __fastcall PopClosePowerRequestObject(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    PopPowerRequestCleanUp(a2);
}
