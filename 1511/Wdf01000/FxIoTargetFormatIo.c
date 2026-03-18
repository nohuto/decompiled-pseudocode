/*
 * XREFs of FxIoTargetFormatIo @ 0x1C0073B60
 * Callers:
 *     imp_WdfIoTargetFormatRequestForRead @ 0x1C0074670 (imp_WdfIoTargetFormatRequestForRead.c)
 *     imp_WdfIoTargetFormatRequestForWrite @ 0x1C00746B0 (imp_WdfIoTargetFormatRequestForWrite.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0019F00 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqDq @ 0x1C00741A4 (WPP_IFR_SF_qqDq.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0090698 (-FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00906E8 (-FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 */

__int64 __fastcall FxIoTargetFormatIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        WDFMEMORY__ *IoBuffer,
        _WDFMEMORY_OFFSET *IoBufferOffsets,
        __int64 *DeviceOffset)
{
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFMEMORY__ *v14; // r14
  _WDFMEMORY_OFFSET *v15; // rbx
  unsigned __int64 v16; // r14
  int v18; // r14d
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  FxFileObject *globals; // [rsp+28h] [rbp-58h]
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxIoTarget *pTarget; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer ioBuf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pIoMemory; // [rsp+B0h] [rbp+30h] BYREF

  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  v14 = IoBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(m_Globals, v10, v11, v12, traceGuid, IoTarget, Request, MajorCode, IoBuffer);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v15 = IoBufferOffsets;
  if ( v14 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v14, 0x100Au, (void **)&pIoMemory);
    if ( v15 )
    {
      v16 = v15->BufferLength + v15->BufferOffset;
      if ( v16 < v15->BufferLength || v16 > pIoMemory->GetBufferSize(pIoMemory) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
    }
    FxRequestBuffer::SetMemory(&ioBuf, pIoMemory, v15);
  }
  else
  {
    pIoMemory = 0LL;
  }
  v18 = FxIoTarget::FormatIoRequest(pTarget, pRequest, MajorCode, &ioBuf, DeviceOffset, globals);
  if ( v18 >= 0 )
  {
    if ( MajorCode == 4 )
    {
      FxRequestContext::FormatWriteParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
    else if ( MajorCode == 3 )
    {
      FxRequestContext::FormatReadParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, (__int64)Request, v18);
  return (unsigned int)v18;
}
