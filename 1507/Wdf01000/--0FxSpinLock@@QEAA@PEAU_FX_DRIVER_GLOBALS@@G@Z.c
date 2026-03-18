/*
 * XREFs of ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C002DCF4
 * Callers:
 *     imp_WdfSpinLockCreate @ 0x1C002DAF0 (imp_WdfSpinLockCreate.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001576C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1024, ((ExtraSize + 15) & 0xFFF0) + 128, FxDriverGlobals);
  this->__vftable = (FxSpinLock_vtbl *)&FxSpinLock::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_Irql = 0;
  if ( this->m_ObjectSize != 128 && this != (FxSpinLock *)-128LL )
  {
    memset(&this[1], 0, 0x100uLL);
    *(_QWORD *)&this[1].m_Type = (char *)this + 144;
  }
}
