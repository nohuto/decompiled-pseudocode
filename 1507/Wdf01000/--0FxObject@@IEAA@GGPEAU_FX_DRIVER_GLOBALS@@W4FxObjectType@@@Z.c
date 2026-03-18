/*
 * XREFs of ??0FxObject@@IEAA@GGPEAU_FX_DRIVER_GLOBALS@@W4FxObjectType@@@Z @ 0x1C00156DC
 * Callers:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C00140E4 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 * Callees:
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxObject::FxObject(
        FxObject *this,
        unsigned __int16 Size,
        unsigned __int16 FxDriverGlobals,
        _FX_DRIVER_GLOBALS *ObjectType,
        FxObjectType Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  this->m_Globals = ObjectType;
  this->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  this->m_Type = 4104;
  this->m_ObjectSize = (FxDriverGlobals + 15) & 0xFFF0;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, 0LL, Type == FxObjectTypeEmbedded);
}
