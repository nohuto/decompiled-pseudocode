/*
 * XREFs of imp_WdfIoQueueFindRequest @ 0x1C0093A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C0095FBC (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 */

int __fastcall imp_WdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned __int64 TagRequest,
        unsigned __int64 FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  _FILE_OBJECT *m_FileObject; // r15
  FxIoQueue *v9; // rcx
  __int64 Offset; // r8
  WDFREQUEST__ **v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxRequest *v13; // rcx
  __int64 v14; // rdx
  FxFileObject *v15; // rcx
  __int64 v16; // rdx
  int result; // eax
  unsigned __int64 v18; // rcx
  FxRequest *pTagRequest; // [rsp+40h] [rbp-20h] BYREF
  FxIoQueue *pQueue; // [rsp+48h] [rbp-18h] BYREF
  FxRequest *pOutputRequest; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  FxFileObject *pFO; // [rsp+98h] [rbp+38h] BYREF

  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  m_FileObject = 0LL;
  pFO = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v9 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v9->FxNonPagedObject::FxObject::__vftable);
    v9 = (FxIoQueue *)((char *)v9 - Offset);
  }
  if ( v9->FxNonPagedObject::FxObject::m_Type == 4099 )
    pQueue = v9;
  else
    FxObjectHandleGetPtrQI(v9, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
  v11 = OutRequest;
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( TagRequest )
  {
    v13 = (FxRequest *)(~TagRequest & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v14) = 0;
    if ( (TagRequest & 1) != 0 )
    {
      v14 = LOWORD(v13->__vftable);
      v13 = (FxRequest *)((char *)v13 - v14);
    }
    if ( v13->m_Type == 4104 )
      pTagRequest = v13;
    else
      FxObjectHandleGetPtrQI(v13, (void **)&pTagRequest, (void *)TagRequest, 0x1008u, v14);
  }
  if ( FileObject )
  {
    v15 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v16) = 0;
    if ( (FileObject & 1) != 0 )
    {
      v16 = LOWORD(v15->FxNonPagedObject::FxObject::__vftable);
      v15 = (FxFileObject *)((char *)v15 - v16);
    }
    if ( v15->m_Type == 4120 )
    {
      pFO = v15;
    }
    else
    {
      FxObjectHandleGetPtrQI(v15, (void **)&pFO, (void *)FileObject, 0x1018u, v16);
      v15 = pFO;
    }
    m_FileObject = v15->m_FileObject.m_FileObject;
  }
  if ( Parameters && Parameters->Size < 0x28u )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxIoQueueApi_cpp_Traceguids, Parameters->Size, -1073741582);
    return -1073741582;
  }
  else
  {
    result = FxIoQueue::PeekRequest(pQueue, pTagRequest, m_FileObject, Parameters, &pOutputRequest);
    if ( result < 0 )
    {
      *v11 = 0LL;
    }
    else
    {
      if ( pOutputRequest->m_ObjectSize )
        v18 = (unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v18 = 0LL;
      *v11 = (WDFREQUEST__ *)v18;
    }
  }
  return result;
}
