/*
 * XREFs of imp_WdfIoQueueRetrieveNextRequest @ 0x1C0035610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ @ 0x1C00096F0 (-GetBuffer@FxMemoryBufferPreallocated@@UEAAPEAXXZ.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  int result; // eax
  WDFREQUEST__ *v5; // rcx
  _FX_DRIVER_GLOBALS *Buffer; // rax
  void *v7; // rdx
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pOutputRequest; // [rsp+40h] [rbp+18h] BYREF

  pOutputRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  if ( !OutRequest )
  {
    Buffer = FxMemoryBufferPreallocated::GetBuffer((FxMemoryBufferFromPool *)pQueue);
    FxVerifierNullBugCheck(Buffer, v7);
  }
  result = FxIoQueue::GetRequest(pQueue, 0LL, 0LL, &pOutputRequest);
  if ( result < 0 )
  {
    *OutRequest = 0LL;
  }
  else
  {
    if ( pOutputRequest->m_ObjectSize )
      v5 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v5 = 0LL;
    *OutRequest = v5;
  }
  return result;
}
