/*
 * XREFs of ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C00620A4
 * Callers:
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C006B250 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C006B430 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0057398 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0060F74 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::Deregister(FxWmiIrpHandler *this, unsigned __int8 a2)
{
  char v3; // di
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
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
  FxNonPagedObject::Unlock(this, irql, v5);
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
