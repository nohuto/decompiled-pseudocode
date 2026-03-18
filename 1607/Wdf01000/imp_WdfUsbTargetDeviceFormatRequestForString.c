/*
 * XREFs of imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C0087B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00012B4 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0029774 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C008753C (WPP_IFR_SF_qqqdD.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C008E0C0 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
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
  WDFUSBDEVICE__ *_a5; // r12
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v14; // r14
  unsigned __int8 v15; // r15
  _WDFMEMORY_OFFSET *v16; // rdi
  unsigned __int64 v17; // r12
  unsigned int BufferLength; // eax
  unsigned int v20; // edi
  int v21; // eax
  FxRequestContext *m_RequestContext; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  WDFUSBDEVICE__ *v28; // [rsp+C8h] [rbp+48h]

  v28 = UsbDevice;
  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  _a5 = UsbDevice;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
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
  if ( Offset )
  {
    v17 = Offset->BufferLength + Offset->BufferOffset;
    if ( v17 < Offset->BufferLength || v17 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    _a5 = v28;
  }
  FxRequestBuffer::SetMemory(&buf, pMemory, v16);
  BufferLength = FxRequestBuffer::GetBufferLength(&buf);
  if ( (BufferLength & 1) != 0 )
  {
    v20 = -1073741811;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Memory, BufferLength, -1073741811);
  }
  else
  {
    v21 = FxUsbDevice::FormatStringRequest(pUsbDevice, pRequest, &buf, v15, v14);
    v20 = v21;
    if ( v21 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Memory;
      BYTE2(m_RequestContext[1].m_CompletionParams.IoStatus.Pointer) = v15;
      LOWORD(m_RequestContext[1].m_CompletionParams.IoStatus.Status) = v14;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceAPI_cpp_Traceguids, _a5, Request, Memory, v21);
  }
  return v20;
}
