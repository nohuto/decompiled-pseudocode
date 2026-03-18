/*
 * XREFs of imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0094180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveRequestByFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned __int64 FileObject,
        WDFREQUEST__ **OutRequest)
{
  FxIoQueue *v6; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxFileObject *v9; // rcx
  __int64 v10; // rdx
  int result; // eax
  WDFREQUEST__ *v12; // rcx
  FxIoQueue *pQueue; // [rsp+30h] [rbp-18h] BYREF
  FxRequest *pOutputRequest; // [rsp+38h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxFileObject *pFO; // [rsp+58h] [rbp+10h] BYREF

  pOutputRequest = 0LL;
  pFO = 0LL;
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
  m_Globals = v6->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !FileObject )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1018uLL);
  v9 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (FileObject & 1) != 0 )
  {
    v10 = LOWORD(v9->FxNonPagedObject::FxObject::__vftable);
    v9 = (FxFileObject *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4120 )
  {
    pFO = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pFO, (void *)FileObject, 0x1018u, v10);
    v9 = pFO;
    v6 = pQueue;
  }
  result = FxIoQueue::GetRequest(v6, v9->m_FileObject.m_FileObject, 0LL, &pOutputRequest);
  if ( result < 0 )
  {
    *OutRequest = 0LL;
  }
  else
  {
    if ( pOutputRequest->m_ObjectSize )
      v12 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    *OutRequest = v12;
  }
  return result;
}
