/*
 * XREFs of imp_WdfIoQueueReadyNotify @ 0x1C0093ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0097618 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

int __fastcall imp_WdfIoQueueReadyNotify(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  __int64 Offset; // r10
  FxIoQueue *v7; // rcx
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v7 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxIoQueue *)((char *)v7 - Offset);
  }
  if ( v7->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v7 = pQueue;
  }
  return FxIoQueue::ReadyNotify(v7, QueueReady, Context);
}
