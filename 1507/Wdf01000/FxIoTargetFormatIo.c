/*
 * XREFs of FxIoTargetFormatIo @ 0x1C00810F0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForRead @ 0x1C0082090 (imp_WdfIoTargetFormatRequestForRead.c)
 *     imp_WdfIoTargetFormatRequestForWrite @ 0x1C00820D0 (imp_WdfIoTargetFormatRequestForWrite.c)
 * Callees:
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDq @ 0x1C0081A3C (WPP_IFR_SF_qqDq.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00A6C18 (-FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00A6C68 (-FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 */

__int64 __fastcall FxIoTargetFormatIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        __int64 Request,
        unsigned __int16 MajorCode,
        WDFMEMORY__ *IoBuffer,
        _WDFMEMORY_OFFSET *IoBufferOffsets,
        __int64 *DeviceOffset)
{
  unsigned __int8 v7; // r15
  WDFIOTARGET__ *v9; // r14
  FxIoTarget *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 v12; // rsi
  FxRequest *v13; // rcx
  __int64 v14; // rdx
  _WDFMEMORY_OFFSET *v15; // rbx
  IFxMemory *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  int v20; // esi
  const _GUID *Offset; // [rsp+20h] [rbp-60h]
  FxFileObject *globals; // [rsp+28h] [rbp-58h]
  FxIoTarget *pTarget; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer ioBuf; // [rsp+58h] [rbp-28h] BYREF
  IFxMemory *pIoMemory; // [rsp+C0h] [rbp+40h] BYREF
  FxRequest *pRequest; // [rsp+C8h] [rbp+48h] BYREF

  ioBuf.DataType = FxRequestBufferUnspecified;
  v7 = MajorCode;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  v9 = (WDFIOTARGET__ *)IoTarget;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v10 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    IoTarget = LOWORD(v10->__vftable);
    v10 = (FxIoTarget *)((char *)v10 - IoTarget);
  }
  if ( v10->m_Type == 4608 )
    pTarget = v10;
  else
    FxObjectHandleGetPtrQI(v10, (void **)&pTarget, v9, 0x1200u, IoTarget);
  m_Globals = pTarget->m_Globals;
  v12 = (unsigned __int64)IoBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(m_Globals, IoTarget, Request, MajorCode, Offset, v9, (const void *)Request, v7, IoBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v13 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v14) = 0;
  if ( (Request & 1) != 0 )
  {
    v14 = LOWORD(v13->__vftable);
    v13 = (FxRequest *)((char *)v13 - v14);
  }
  if ( v13->m_Type == 4104 )
    pRequest = v13;
  else
    FxObjectHandleGetPtrQI(v13, (void **)&pRequest, (void *)Request, 0x1008u, v14);
  v15 = IoBufferOffsets;
  if ( v12 )
  {
    v16 = (IFxMemory *)(~v12 & 0xFFFFFFFFFFFFFFF8uLL);
    v17 = 0LL;
    if ( (v12 & 1) != 0 )
    {
      v17 = LOWORD(v16->__vftable);
      v16 = (IFxMemory *)((char *)v16 - v17);
    }
    if ( LOWORD(v16[1].__vftable) == 4106 )
    {
      pIoMemory = v16;
    }
    else
    {
      FxObjectHandleGetPtrQI((FxObject *)v16, (void **)&pIoMemory, (void *)v12, 0x100Au, v17);
      v16 = pIoMemory;
    }
    if ( v15 )
    {
      v18 = v15->BufferLength + v15->BufferOffset;
      if ( v18 < v15->BufferLength || v18 > ((__int64 (__fastcall *)(IFxMemory *, __int64))v16->GetBufferSize)(v16, v17) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v16 = pIoMemory;
    }
    FxRequestBuffer::SetMemory(&ioBuf, v16, v15);
  }
  else
  {
    pIoMemory = 0LL;
  }
  v20 = FxIoTarget::FormatIoRequest(pTarget, pRequest, v7, &ioBuf, DeviceOffset, globals);
  if ( v20 >= 0 )
  {
    if ( v7 == 4 )
    {
      FxRequestContext::FormatWriteParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
    else if ( v7 == 3 )
    {
      FxRequestContext::FormatReadParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTargetAPI_cpp_Traceguids, v9, Request, v20);
  return (unsigned int)v20;
}
