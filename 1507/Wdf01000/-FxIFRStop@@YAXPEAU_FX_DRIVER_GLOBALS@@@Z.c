/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F908
 * Callers:
 *     FxInitialize @ 0x1C0021AE0 (FxInitialize.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C002F7E8 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIFRStop(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void *WdfLogHeader; // rcx

  if ( !FxLibraryGlobals.IfrDisabled && FxDriverGlobals )
  {
    WdfLogHeader = FxDriverGlobals->WdfLogHeader;
    if ( WdfLogHeader )
    {
      ExFreePoolWithTag(WdfLogHeader, 0x674C7846u);
      FxDriverGlobals->WdfLogHeader = 0LL;
    }
  }
}
