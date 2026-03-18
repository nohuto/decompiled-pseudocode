/*
 * XREFs of imp_WdfRequestRetrieveOutputMemory @ 0x1C006F460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0004350 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00203F0 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveOutputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        WDFMEMORY__ **Memory)
{
  FxRequest *v5; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  unsigned __int8 MajorFunction; // al
  int DeviceControlOutputMemoryObject; // eax
  unsigned int v11; // ebx
  unsigned __int64 length; // [rsp+40h] [rbp-18h] BYREF
  void *pBuffer[2]; // [rsp+48h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  IFxMemory *pMemory; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  pMemory = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !Memory )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  MajorFunction = v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x15u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    if ( (unsigned __int8)(MajorFunction - 14) <= 1u )
      DeviceControlOutputMemoryObject = FxRequest::GetDeviceControlOutputMemoryObject(
                                          v5,
                                          (FxRequestOutputBuffer **)&pMemory,
                                          pBuffer,
                                          &length);
    else
      DeviceControlOutputMemoryObject = FxRequest::GetMemoryObject(
                                          v5,
                                          (FxRequestSystemBuffer **)&pMemory,
                                          pBuffer,
                                          &length);
    v11 = DeviceControlOutputMemoryObject;
    if ( DeviceControlOutputMemoryObject >= 0 )
      *Memory = pMemory->GetHandle(pMemory);
    return v11;
  }
}
