/*
 * XREFs of ?_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C006AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006A118 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::_UpdateGuids(_DEVICE_OBJECT *DeviceObject, FxWmiIrpHandler *Context)
{
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r8
  _KEVENT *m_WorkItemEvent; // rcx
  FxVerifierLock *v6; // rcx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  FxWmiIrpHandler::UpdateGuids(Context);
  FxNonPagedObject::Lock(Context, &irql, v3);
  m_WorkItemEvent = Context->m_WorkItemEvent;
  Context->m_WorkItemQueued = 0;
  if ( m_WorkItemEvent )
    KeSetEvent(m_WorkItemEvent, 0, 0);
  if ( SLOBYTE(Context->m_ObjectFlags) < 0
    && (v6 = *(FxVerifierLock **)&Context[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v6, irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&Context->m_NPLock.m_Lock, irql);
  }
}
