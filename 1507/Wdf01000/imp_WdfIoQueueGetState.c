/*
 * XREFs of imp_WdfIoQueueGetState @ 0x1C0093C00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned int *QueueCount,
        unsigned int *DriverCount)
{
  FxIoQueue *v6; // rcx
  __int64 Offset; // r8
  unsigned int m_DriverIoCount; // edx
  unsigned int m_RequestCount; // r8d
  __int64 result; // rax
  FxIoQueue *pQueue; // [rsp+30h] [rbp-18h] BYREF

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
  m_DriverIoCount = v6->m_DriverIoCount;
  m_RequestCount = v6->m_Queue.m_RequestCount;
  if ( QueueCount )
    *QueueCount = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  result = pQueue->m_QueueState & 3;
  if ( !m_RequestCount )
    result = (unsigned int)result | 4;
  if ( !m_DriverIoCount )
    result = (unsigned int)result | 8;
  if ( pQueue->m_PowerManaged )
  {
    if ( pQueue->m_PowerState != FxIoQueuePowerOn )
      return (unsigned int)result | 0x10;
  }
  return result;
}
