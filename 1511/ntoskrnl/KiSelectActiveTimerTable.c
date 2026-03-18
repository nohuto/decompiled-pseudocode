/*
 * XREFs of KiSelectActiveTimerTable @ 0x14012060C
 * Callers:
 *     KiTimerExpiration @ 0x1401153FC (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14012045C (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
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
