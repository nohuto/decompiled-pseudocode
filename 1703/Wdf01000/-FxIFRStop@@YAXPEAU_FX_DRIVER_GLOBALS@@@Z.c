/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0070634
 * Callers:
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0071F44 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C00751F8 (FxLibraryCommonUnregisterClient.c)
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
