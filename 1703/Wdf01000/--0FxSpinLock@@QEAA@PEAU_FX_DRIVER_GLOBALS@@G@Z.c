/*
 * XREFs of ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C001B9C8
 * Callers:
 *     imp_WdfSpinLockCreate @ 0x1C001B830 (imp_WdfSpinLockCreate.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000C608 (-Construct@FxObject@@AEAAXE@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FxSpinLock *v4; // rbx

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxSpinLock_vtbl *)&FxObject::`vftable';
  this->m_Type = 4132;
  this->m_ObjectSize = ((ExtraSize + 15) & 0xFFF0) + 128;
  this->FxObject::m_SpinLock.m_Lock = 0LL;
  this->FxObject::m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 0LL);
  v4 = 0LL;
  this->__vftable = (FxSpinLock_vtbl *)FxSpinLock::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_Irql = 0;
  if ( this->m_ObjectSize != 128 )
    v4 = this + 1;
  if ( v4 )
  {
    memset(v4, 0, 0x100uLL);
    *(_QWORD *)&v4->m_Type = &v4->m_Globals;
  }
}
