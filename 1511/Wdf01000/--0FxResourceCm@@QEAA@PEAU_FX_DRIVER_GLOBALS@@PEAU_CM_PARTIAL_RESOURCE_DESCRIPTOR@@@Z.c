/*
 * XREFs of ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0032E74
 * Callers:
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021DA4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C00718EC (FxCmResourceListInsertDescriptor.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0023254 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceCm::FxResourceCm(
        FxResourceCm *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1017, 0, FxDriverGlobals);
  this->__vftable = (FxResourceCm_vtbl *)&FxObject::`vftable';
  this->m_Descriptor = *Resource;
}
