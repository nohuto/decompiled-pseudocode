/*
 * XREFs of imp_WdfRequestRetrieveInputBuffer @ 0x1C00104B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0007270 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1C006BA58 (WPP_IFR_SF_qiid.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  FxRequest *v8; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 *v11; // rdi
  int MemoryObject; // ecx
  unsigned __int64 v13; // rdx
  IFxMemory *pMemory; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 length; // [rsp+58h] [rbp-30h] BYREF
  void *pBuffer; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxRequest *pRequest; // [rsp+98h] [rbp+10h] BYREF

  pMemory = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v8 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v8->__vftable);
    v8 = (FxRequest *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4104 )
  {
    pRequest = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v8 = pRequest;
  }
  m_Globals = v8->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  v11 = Length;
  *Buffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  if ( v8->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x17u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(v8, (FxRequestSystemBuffer **)&pMemory, &pBuffer, &length);
    if ( MemoryObject < 0 )
      return (unsigned int)MemoryObject;
    v13 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer;
      if ( v11 )
        *v11 = v13;
      return (unsigned int)MemoryObject;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qiid(
        m_Globals,
        5u,
        0x10u,
        0x18u,
        WPP_FxRequestApi_cpp_Traceguids,
        (const void *)Request,
        length,
        RequiredLength,
        -1073741789);
    return 3221225507LL;
  }
}
