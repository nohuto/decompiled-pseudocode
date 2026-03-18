/*
 * XREFs of ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C000A06C
 * Callers:
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0009F74 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C007E184 (FxCmResourceListInsertDescriptor.c)
 * Callees:
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxResourceCm::FxResourceCm(
        FxResourceCm *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Resource)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  this->__vftable = (FxResourceCm_vtbl *)&FxObject::`vftable';
  this->m_Type = 4119;
  this->m_Globals = FxDriverGlobals;
  this->m_ObjectSize = 0;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
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
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->__vftable = (FxResourceCm_vtbl *)&FxObject::`vftable';
  *(_OWORD *)&this->m_Descriptor.Type = *(_OWORD *)&Resource->Type;
  *((_DWORD *)&this->m_Descriptor.u.Memory48 + 3) = *((_DWORD *)&Resource->u.Memory48 + 3);
}
