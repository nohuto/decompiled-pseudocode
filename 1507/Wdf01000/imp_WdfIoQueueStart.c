/*
 * XREFs of imp_WdfIoQueueStart @ 0x1C00942D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue, unsigned __int8 a3)
{
  FxIoQueue *v3; // rbx
  __int64 Offset; // rcx
  unsigned __int16 v5; // r9
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxIoQueue *pQueue; // [rsp+50h] [rbp+18h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v3 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxIoQueue *)((char *)v3 - Offset);
  }
  if ( v3->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v3 = pQueue;
  }
  FxNonPagedObject::Lock(v3, &PreviousIrql, a3);
  FxIoQueue::SetState(v3, FxIoQueueSetDispatchRequests|0x1);
  if ( v3->m_Queue.m_RequestCount > 0 )
  {
    v3->m_TransitionFromEmpty = 1;
    v3->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  }
  FxIoQueue::DispatchEvents(v3, PreviousIrql, 0LL, v5);
}
