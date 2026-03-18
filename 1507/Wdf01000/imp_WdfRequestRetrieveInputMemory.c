/*
 * XREFs of imp_WdfRequestRetrieveInputMemory @ 0x1C006F210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00203F0 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        WDFMEMORY__ **Memory)
{
  FxRequest *v5; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  int MemoryObject; // ebx
  unsigned __int64 length; // [rsp+40h] [rbp-18h] BYREF
  void *pBuffer; // [rsp+48h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF
  IFxMemory *pMemory; // [rsp+78h] [rbp+20h] BYREF

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
  if ( v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x13u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(v5, (FxRequestSystemBuffer **)&pMemory, &pBuffer, &length);
    if ( MemoryObject >= 0 )
      *Memory = pMemory->GetHandle(pMemory);
    return (unsigned int)MemoryObject;
  }
}
