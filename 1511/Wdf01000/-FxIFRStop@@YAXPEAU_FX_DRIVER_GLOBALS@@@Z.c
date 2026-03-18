/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0033528
 * Callers:
 *     FxInitialize @ 0x1C0020804 (FxInitialize.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C0033408 (FxLibraryCommonUnregisterClient.c)
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
