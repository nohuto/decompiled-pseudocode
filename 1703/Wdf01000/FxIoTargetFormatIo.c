/*
 * XREFs of FxIoTargetFormatIo @ 0x1C0085FA0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForRead @ 0x1C0086B20 (imp_WdfIoTargetFormatRequestForRead.c)
 *     imp_WdfIoTargetFormatRequestForWrite @ 0x1C0086B60 (imp_WdfIoTargetFormatRequestForWrite.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqDq @ 0x1C008663C (WPP_IFR_SF_qqDq.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C00891FC (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00A37D4 (-FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00A3828 (-FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
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
  WDFMEMORY__ *v14; // rbx
  _WDFMEMORY_OFFSET *v15; // rsi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  int v19; // ebx
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
      BufferLength = v15->BufferLength;
      v17 = BufferLength + v15->BufferOffset;
      if ( v17 >= BufferLength )
      {
        v18 = BufferLength + v15->BufferOffset;
        if ( v18 > pIoMemory->GetBufferSize(pIoMemory) )
        {
          v19 = -1073741675;
LABEL_11:
          WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, v19);
          return (unsigned int)v19;
        }
        v19 = 0;
      }
      else
      {
        v19 = v17 < BufferLength ? 0xC0000095 : 0;
      }
      if ( v19 < 0 )
        goto LABEL_11;
    }
    FxRequestBuffer::SetMemory(&ioBuf, pIoMemory, v15);
  }
  else
  {
    pIoMemory = 0LL;
  }
  v19 = FxIoTarget::FormatIoRequest(pTarget, pRequest, MajorCode, &ioBuf, DeviceOffset, globals);
  if ( v19 >= 0 )
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
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, (__int64)Request, v19);
  return (unsigned int)v19;
}
