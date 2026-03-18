/*
 * XREFs of ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0069F94
 * Callers:
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C00767F0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00769A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0099ACC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0068D54 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::Deregister(FxWmiIrpHandler *this, unsigned __int8 a2)
{
  char v3; // di
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  FxVerifierLock *v6; // rcx
  NTSTATUS _a1; // eax
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxCREvent::FxCREvent(&event, a2);
  v3 = 0;
  FxNonPagedObject::Lock(this, &irql, v4);
  if ( this->m_RegisteredState == WmiRegistered )
  {
    this->m_RegisteredState = WmiDeregistered;
    if ( this->m_WorkItemQueued )
      this->m_WorkItemEvent = (_KEVENT *)&event;
    v3 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v6 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v6, irql, v5);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( this->m_WorkItemEvent )
    FxCREvent::EnterCRAndWaitAndLeave(&event);
  if ( v3 )
  {
    FxWmiIrpHandler::DecrementUpdateCount(this);
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_UpdateEvent);
    _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u);
    if ( _a1 < 0 )
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
  }
}
