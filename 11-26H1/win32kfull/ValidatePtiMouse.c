/*
 * XREFs of ValidatePtiMouse @ 0x140170ED4
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401709C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x140171050 (DestroyThreadHidObjects.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 */

__int64 __fastcall ValidatePtiMouse(__int64 a1)
{
  if ( a1 )
    return PtiMouseFromQ(a1);
  else
    return 0LL;
}
