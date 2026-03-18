/*
 * XREFs of ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C001960C
 * Callers:
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0019654 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E874 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0008B0C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceIo::FxResourceIo(
        FxResourceIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1016, 0, FxDriverGlobals);
  this->__vftable = (FxResourceIo_vtbl *)&FxResourceIo::`vftable';
  this->m_Descriptor = *Resource;
}
