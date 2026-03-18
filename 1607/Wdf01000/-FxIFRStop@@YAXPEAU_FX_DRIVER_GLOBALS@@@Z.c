/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0037E78
 * Callers:
 *     FxInitialize @ 0x1C0017CE8 (FxInitialize.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C0037D58 (FxLibraryCommonUnregisterClient.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006E654 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIFRStop(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( !FxLibraryGlobals.IfrDisabled
    && FxDriverGlobals
    && FxDriverGlobals->WdfLogHeader
    && _InterlockedExchangeAdd(&FxDriverGlobals->WdfLogHeaderRefCount, 0xFFFFFFFF) == 1 )
  {
    ExFreePoolWithTag(FxDriverGlobals->WdfLogHeader, 0x674C7846u);
    FxDriverGlobals->WdfLogHeader = 0LL;
  }
}
