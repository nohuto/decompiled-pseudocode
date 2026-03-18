/*
 * XREFs of ??0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C0077C4C
 * Callers:
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0078E88 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 */

void __fastcall FxNPagedLookasideList::FxNPagedLookasideList(
        FxNPagedLookasideList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned int PoolTag)
{
  FxLookasideList::FxLookasideList(this, FxDriverGlobals, 0x140u, PoolTag);
  this->__vftable = (FxNPagedLookasideList_vtbl *)&FxNPagedLookasideList::`vftable';
}
