/*
 * XREFs of imp_WdfIoQueueStopAndPurge @ 0x1C0094440
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0095AA8 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

void __fastcall imp_WdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  FxIoQueue *v6; // rcx
  __int64 Offset; // r8
  int v8; // eax
  void *PPObject; // [rsp+48h] [rbp+10h] BYREF

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
    PPObject = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, &PPObject, (void *)Queue, 0x1003u, Offset);
    v6 = (FxIoQueue *)PPObject;
  }
  v8 = FxIoQueue::QueueIdle(v6, 1u, StopAndPurgeComplete, Context);
  if ( v8 < 0 )
    FxIoQueue::FatalError((FxIoQueue *)PPObject, v8);
}
