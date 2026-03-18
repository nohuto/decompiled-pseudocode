/*
 * XREFs of ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C006D078
 * Callers:
 *     ??0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C006C2CC (--0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C006C2F8 (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C006C63C (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0023254 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxLookasideList::FxLookasideList(
        FxLookasideList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned int PoolTag)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1009, ObjectSize, FxDriverGlobals);
  this->m_BufferSize = 0LL;
  this->m_MemoryObjectSize = 0LL;
  this->__vftable = (FxLookasideList_vtbl *)&FxLookasideList::`vftable';
  this->m_PoolTag = PoolTag;
}
