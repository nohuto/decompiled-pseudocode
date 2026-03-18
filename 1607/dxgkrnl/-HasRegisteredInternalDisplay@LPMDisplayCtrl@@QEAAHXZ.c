/*
 * XREFs of ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0025648
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C016B340 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C016B3D0 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C016B4D0 (DxgkSetHighPrecisionBrightness.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C016B648 (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall LPMDisplayCtrl::HasRegisteredInternalDisplay(LPMDisplayCtrl *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( FileObject[2] )
    return *((_DWORD *)FileObject + 6) != -1;
  return result;
}
