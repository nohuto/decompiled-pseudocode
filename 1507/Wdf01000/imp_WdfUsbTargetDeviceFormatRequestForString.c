/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00870C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C005D38C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C00867D8 (WPP_IFR_SF_qqqdD.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C008DD30 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int64 Request,
        unsigned __int64 Memory,
        _WDFMEMORY_OFFSET *Offset,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  WDFUSBDEVICE__ *_a5; // r14
  FxUsbDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v12; // r13
  IFxMemory *v13; // rcx
  __int64 v14; // rdx
  FxRequest *v15; // r10
  __int64 v16; // rdx
  _WDFMEMORY_OFFSET *v17; // rdi
  unsigned __int64 v18; // r15
  unsigned int BufferLength; // eax
  unsigned int v20; // edi
  unsigned __int8 v22; // r15
  int v23; // eax
  FxRequestContext *m_RequestContext; // rdx
  const _GUID *_a4; // [rsp+20h] [rbp-60h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+B8h] [rbp+38h] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a5 = (WDFUSBDEVICE__ *)UsbDevice;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v10 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(UsbDevice) = 0;
  if ( ((unsigned __int8)_a5 & 1) != 0 )
  {
    UsbDevice = LOWORD(v10->__vftable);
    v10 = (FxUsbDevice *)((char *)v10 - UsbDevice);
  }
  if ( v10->m_Type == 4610 )
  {
    pUsbDevice = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pUsbDevice, _a5, 0x1202u, UsbDevice);
    v10 = pUsbDevice;
  }
  m_Globals = v10->m_Globals;
  v12 = LangID;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqdD(
      m_Globals,
      UsbDevice,
      Request,
      Memory,
      _a4,
      _a5,
      (const void *)Request,
      (const void *)Memory,
      StringIndex,
      LangID);
  if ( !Memory )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  v13 = (IFxMemory *)(~Memory & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v14) = 0;
  if ( (Memory & 1) != 0 )
  {
    v14 = LOWORD(v13->__vftable);
    v13 = (IFxMemory *)((char *)v13 - v14);
  }
  if ( LOWORD(v13[1].__vftable) == 4106 )
  {
    pMemory = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v13, (void **)&pMemory, (void *)Memory, 0x100Au, v14);
    v13 = pMemory;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v15 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  v16 = 0LL;
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v15->__vftable);
    v15 = (FxRequest *)((char *)v15 - v16);
  }
  if ( v15->m_Type == 4104 )
  {
    pRequest = v15;
  }
  else
  {
    FxObjectHandleGetPtrQI(v15, (void **)&pRequest, (void *)Request, 0x1008u, v16);
    v13 = pMemory;
  }
  v17 = Offset;
  if ( Offset )
  {
    v18 = Offset->BufferLength + Offset->BufferOffset;
    if ( v18 < Offset->BufferLength
      || v18 > ((__int64 (__fastcall *)(IFxMemory *, __int64))v13->GetBufferSize)(v13, v16) )
    {
      return 3221225621LL;
    }
    v13 = pMemory;
  }
  FxRequestBuffer::SetMemory(&buf, v13, v17);
  BufferLength = FxRequestBuffer::GetBufferLength(&buf);
  if ( (BufferLength & 1) != 0 )
  {
    v20 = -1073741811;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(
        m_Globals,
        5u,
        0xEu,
        0xDu,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        (const void *)Memory,
        BufferLength,
        -1073741811);
  }
  else
  {
    v22 = StringIndex;
    v23 = FxUsbDevice::FormatStringRequest(pUsbDevice, pRequest, &buf, StringIndex, v12);
    v20 = v23;
    if ( v23 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Memory;
      BYTE2(m_RequestContext[1].m_CompletionParams.IoStatus.Pointer) = v22;
      LOWORD(m_RequestContext[1].m_CompletionParams.IoStatus.Status) = v12;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        m_Globals,
        5u,
        0xEu,
        0xEu,
        WPP_FxUsbDeviceAPI_cpp_Traceguids,
        _a5,
        (const void *)Request,
        (const void *)Memory,
        v23);
  }
  return v20;
}
