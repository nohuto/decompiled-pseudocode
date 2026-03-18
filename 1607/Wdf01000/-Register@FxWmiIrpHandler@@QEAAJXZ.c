/*
 * XREFs of ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030E90
 * Callers:
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C00267F8 (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfControlFinishInitializing @ 0x1C0030950 (imp_WdfControlFinishInitializing.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::Register(FxWmiIrpHandler *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  char m_ObjectFlags; // cl
  NTSTATUS _a1; // eax
  unsigned int v8; // edi
  FxVerifierLock *v10; // rcx
  FxVerifierLock *v11; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v10 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v10, &irql, a3);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v4;
  }
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_RegisteredState = WmiRegistered;
  if ( m_ObjectFlags < 0 && (v11 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v11, v4, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v4);
  _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 1u);
  v8 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
    FxNonPagedObject::Lock(this, &irql, v12);
    v13 = irql;
    this->m_RegisteredState = WmiUnregistered;
    FxNonPagedObject::Unlock(this, v13, v14);
  }
  return v8;
}
