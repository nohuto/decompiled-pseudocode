/*
 * XREFs of KiSelectActiveTimerTable @ 0x14012A5E8
 * Callers:
 *     KiTimerExpiration @ 0x140123B78 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14012A438 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiSerializeTimerExpiration )
    return a1 + 13824;
  if ( !a2 || *(_BYTE *)(a1 + 33) )
    return KiProcessorBlock[0] + 13824;
  return result;
}
