/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C008B770
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00034B8 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C008B0FC (WPP_IFR_SF_qqqdD.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0092084 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *Offset,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  WDFUSBDEVICE__ *_a5; // r14
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v14; // r15
  unsigned __int8 v15; // r12
  _WDFMEMORY_OFFSET *v16; // rdi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  FxRequestContext *m_RequestContext; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  WDFUSBDEVICE__ *v30; // [rsp+C8h] [rbp+48h]

  v30 = UsbDevice;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a5 = UsbDevice;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  v14 = LangID;
  v15 = StringIndex;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqdD(m_Globals, v10, v11, v12, traceGuid, _a5, Request, Memory, StringIndex, LangID);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Memory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v16 = Offset;
  if ( !Offset )
    goto LABEL_11;
  BufferLength = Offset->BufferLength;
  v18 = BufferLength + Offset->BufferOffset;
  if ( v18 >= BufferLength )
  {
    v19 = BufferLength + Offset->BufferOffset;
    if ( v19 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    result = 0LL;
  }
  else
  {
    result = v18 < BufferLength ? 0xC0000095 : 0;
  }
  if ( (int)result >= 0 )
  {
    _a5 = v30;
LABEL_11:
    FxRequestBuffer::SetMemory(&buf, pMemory, v16);
    v21 = FxRequestBuffer::GetBufferLength(&buf);
    if ( (v21 & 1) != 0 )
    {
      v22 = -1073741811;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Memory, v21, -1073741811);
    }
    else
    {
      v23 = FxUsbDevice::FormatStringRequest(pUsbDevice, pRequest, &buf, v15, v14);
      v22 = v23;
      if ( v23 >= 0 )
      {
        m_RequestContext = pRequest->m_RequestContext;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Memory;
        BYTE2(m_RequestContext[1].m_CompletionParams.IoStatus.Pointer) = v15;
        LOWORD(m_RequestContext[1].m_CompletionParams.IoStatus.Status) = v14;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceAPI_cpp_Traceguids, _a5, Request, Memory, v23);
    }
    return v22;
  }
  return result;
}
