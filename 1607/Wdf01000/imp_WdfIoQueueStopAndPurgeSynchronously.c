/*
 * XREFs of imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C008F730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C009023C (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0090C30 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 */

void __fastcall imp_WdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  int v2; // eax
  void *PPObject; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Queue,
    0x1003u,
    &PPObject);
  if ( (int)FxVerifierCheckIrqlLevel(*((_FX_DRIVER_GLOBALS **)PPObject + 2), 0) >= 0 )
  {
    v2 = FxIoQueue::QueueIdleSynchronously((FxIoQueue *)PPObject, 1u);
    if ( v2 < 0 )
      FxIoQueue::FatalError((FxIoQueue *)PPObject, v2);
  }
}
