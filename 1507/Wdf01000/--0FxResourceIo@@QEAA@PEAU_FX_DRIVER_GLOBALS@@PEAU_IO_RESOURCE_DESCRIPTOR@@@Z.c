/*
 * XREFs of ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005CBB4
 * Callers:
 *     FxIoResourceListInsertDescriptor @ 0x1C007E2B8 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001576C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceIo::FxResourceIo(
        FxResourceIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1016, 0, FxDriverGlobals);
  this->__vftable = (FxResourceIo_vtbl *)&FxObject::`vftable';
  this->m_Descriptor = *Resource;
}
