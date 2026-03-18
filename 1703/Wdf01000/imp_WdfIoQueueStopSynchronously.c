/*
 * XREFs of imp_WdfIoQueueStopSynchronously @ 0x1C00937D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C00942C4 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0094D0C (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 */

void __fastcall imp_WdfIoQueueStopSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  if ( (int)FxVerifierCheckIrqlLevel(pQueue->m_Globals, 0) >= 0 )
  {
    v2 = FxIoQueue::QueueIdleSynchronously(pQueue, 0);
    if ( v2 < 0 )
      FxIoQueue::FatalError(pQueue, v2);
  }
}
