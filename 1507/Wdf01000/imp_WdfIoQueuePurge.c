/*
 * XREFs of imp_WdfIoQueuePurge @ 0x1C0093CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0095AA8 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

void __fastcall imp_WdfIoQueuePurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  FxIoQueue *v6; // rcx
  __int64 Offset; // r8
  int v8; // eax
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v6 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - Offset);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v6 = pQueue;
  }
  v8 = FxIoQueue::QueuePurge(v6, 1u, 1u, PurgeComplete, Context);
  if ( v8 < 0 )
    FxIoQueue::FatalError(pQueue, v8);
}
