/*
 * XREFs of imp_WdfIoQueueGetDevice @ 0x1C0001D50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  FxIoQueue *v2; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rax
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v2 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v2->FxNonPagedObject::FxObject::__vftable);
    v2 = (FxIoQueue *)((char *)v2 - Offset);
  }
  if ( v2->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v2 = pQueue;
  }
  m_DeviceBase = v2->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
