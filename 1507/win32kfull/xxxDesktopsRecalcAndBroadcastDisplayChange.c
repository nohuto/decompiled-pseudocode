/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00393F0
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01EFB80 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxDesktopsRecalc @ 0x1C00396B0 (xxxDesktopsRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  if ( a2 )
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 24));
  return xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 7284LL) != a3, a4);
}
