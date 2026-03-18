/*
 * XREFs of ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00268E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0026B48 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E6D0 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxWorkItemEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, FxEventQueue *Context)
{
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DRIVER_OBJECT *m_DriverObject; // rbp
  FxPkgPnp *v6; // r14
  KIRQL v7; // al
  KIRQL v8; // r9
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxPostProcessInfo Info; // [rsp+20h] [rbp-38h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+68h] [rbp+10h] BYREF

  m_PkgPnp = Context->m_PkgPnp;
  Info.m_Event = 0LL;
  *(_WORD *)&Info.m_DeleteObject = 0;
  Info.m_FireAndForgetIrp = 0LL;
  m_Globals = m_PkgPnp->m_Globals;
  m_DriverObject = m_Globals->Driver->m_DriverObject.m_DriverObject;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  v6 = Context->m_PkgPnp;
  v7 = KeAcquireSpinLockRaiseToDpc(&Context->m_QueueLock.m_Lock);
  Context->m_QueueFlags &= ~1u;
  ++Context->m_WorkItemRunningCount;
  KeReleaseSpinLock(&Context->m_QueueLock.m_Lock, v7);
  Context->m_EventWorker(Context->m_PkgPnp, &Info, Context->m_EventWorkerContext);
  KeAcquireSpinLockRaiseToDpc(&Context->m_QueueLock.m_Lock);
  --Context->m_WorkItemRunningCount;
  FxEventQueue::GetFinishedState(Context, &Info);
  KeReleaseSpinLock(&Context->m_QueueLock.m_Lock, v8);
  if ( Info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)v6->m_DeviceRemoveProcessed;
LABEL_13:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    goto LABEL_9;
  }
  if ( Info.m_FireAndForgetIrp )
  {
    m_FireAndForgetIrp = Info.m_FireAndForgetIrp;
    Info.m_FireAndForgetIrp = 0LL;
    v6->FireAndForgetIrp(v6, (FxIrp *)&m_FireAndForgetIrp);
  }
  if ( Info.m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(v6);
  m_DeviceRemoveProcessed = Info.m_Event;
  if ( Info.m_Event )
    goto LABEL_13;
LABEL_9:
  if ( _InterlockedExchangeAdd(&m_Globals->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&m_Globals->DestroyEvent.m_Event, 0, 0);
  ObfDereferenceObject(m_DriverObject);
}
