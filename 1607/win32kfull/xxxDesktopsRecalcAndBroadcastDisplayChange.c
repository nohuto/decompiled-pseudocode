/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C010DB70
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01E58C0 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxDesktopsRecalc @ 0x1C010DDE8 (xxxDesktopsRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  if ( a2 )
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 24));
  return xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 8676LL) != a3, a4);
}
