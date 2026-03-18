/*
 * XREFs of IsDwmActive_0 @ 0x1C0001468
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C006B550 (pConvertDfbSurfaceToDib2.c)
 *     ?DxgkEngIsDwmComposing@@YAHPEAH@Z @ 0x1C0081D90 (-DxgkEngIsDwmComposing@@YAHPEAH@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsDwmActive_0()
{
  return IsDwmActive();
}
