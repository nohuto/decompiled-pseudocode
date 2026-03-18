/*
 * XREFs of imp_WdfIoQueueRetrieveNextRequest @ 0x1C00940B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ **OutRequest)
{
  FxIoQueue *v4; // rcx
  __int64 Offset; // r8
  int result; // eax
  WDFREQUEST__ *v7; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pOutputRequest; // [rsp+58h] [rbp+20h] BYREF

  pOutputRequest = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v4 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxIoQueue *)((char *)v4 - Offset);
  }
  if ( v4->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v4 = pQueue;
  }
  if ( !OutRequest )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  result = FxIoQueue::GetRequest(v4, 0LL, 0LL, &pOutputRequest);
  if ( result < 0 )
  {
    *OutRequest = 0LL;
  }
  else
  {
    if ( pOutputRequest->m_ObjectSize )
      v7 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v7 = 0LL;
    *OutRequest = v7;
  }
  return result;
}
