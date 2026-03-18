/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C00047E0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C00044F0 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0033CF0 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006D650 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C007405C (WPP_IFR_SF_qqDdqq.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _MDL *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  WDFIOTARGET__ *v10; // rdi
  FxRequest *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  FxRequestBase *v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 *v17; // rbx
  __int64 v18; // rcx
  IFxMemory v19; // rax
  unsigned __int8 v20; // dl
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  _MDL *v23; // r13
  __int64 v24; // rax
  _WDFMEMORY_OFFSET *v25; // r13
  int v26; // ebx
  bool v27; // zf
  FxRequestContext *m_RequestContext; // rdx
  _WDFMEMORY_OFFSET *v29; // rax
  unsigned __int16 *v31; // rbx
  __int64 v32; // rcx
  IFxMemory v33; // rax
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  unsigned __int16 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  FxRequestBuffer *v40; // [rsp+28h] [rbp-A1h]
  FxFileObject *_a6; // [rsp+38h] [rbp-91h]
  FxRequest *pRequest; // [rsp+68h] [rbp-61h] BYREF
  FxRequestBase *v43; // [rsp+70h] [rbp-59h] BYREF
  IFxMemory **p_pInputMemory; // [rsp+78h] [rbp-51h] BYREF
  FxRequestBuffer outputBuf; // [rsp+80h] [rbp-49h] BYREF
  FxRequestBuffer inputBuf; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-9h]
  IFxMemory *pInputMemory; // [rsp+108h] [rbp+3Fh] BYREF
  IFxMemory *pOutputMemory; // [rsp+110h] [rbp+47h] BYREF
  unsigned int v50; // [rsp+120h] [rbp+57h]

  v50 = Ioctl;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v10 = (WDFIOTARGET__ *)IoTarget;
  v47 = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v11 = (FxRequest *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    IoTarget = LOWORD(v11->__vftable);
    v11 = (FxRequest *)((char *)v11 - IoTarget);
  }
  if ( v11->m_Type == 4608 )
  {
    pRequest = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pRequest, v10, 0x1200u, IoTarget);
    Ioctl = v50;
  }
  m_Globals = pRequest->m_Globals;
  v13 = (unsigned __int64)OutputBuffer;
  v14 = (unsigned __int64)InputBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      pRequest->m_Globals,
      IoTarget,
      0,
      Ioctl,
      (const _GUID *)v40,
      v10,
      (const void *)Request,
      Ioctl,
      Internal,
      InputBuffer,
      OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v15 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v16) = 0;
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v15->__vftable);
    v15 = (FxRequestBase *)((char *)v15 - v16);
  }
  if ( v15->m_Type == 4104 )
    v43 = v15;
  else
    FxObjectHandleGetPtrQI(v15, (void **)&v43, (void *)Request, 0x1008u, v16);
  if ( v14 )
  {
    v17 = (unsigned __int16 *)(~v14 & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v18) = 0;
    if ( (v14 & 1) != 0 )
    {
      v18 = *v17;
      v17 = (unsigned __int16 *)((char *)v17 - v18);
    }
    if ( v17[4] == 4106 )
    {
      pInputMemory = (IFxMemory *)v17;
    }
    else
    {
      pInputMemory = 0LL;
      p_pInputMemory = &pInputMemory;
      v19.__vftable = *(IFxMemory_vtbl **)v17;
      LOWORD(outputBuf.DataType) = 4106;
      HIWORD(outputBuf.DataType) = v18;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v19.GetDriverGlobals)(v17, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v17 + 2),
          v20,
          v21,
          v22,
          (const _GUID *)v40,
          (const void *)v14,
          0x100Au,
          v17,
          v17[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v17 + 2), WDF_INVALID_HANDLE, v14, 0x100AuLL);
      }
      v17 = (unsigned __int16 *)pInputMemory;
    }
    v23 = InputBufferOffsets;
    if ( InputBufferOffsets )
    {
      p_pInputMemory = (IFxMemory **)((char *)InputBufferOffsets->Next + *(_QWORD *)&InputBufferOffsets->Size);
      if ( (unsigned __int64)p_pInputMemory < *(_QWORD *)&InputBufferOffsets->Size
        || (v38 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v17 + 8LL))(v17),
            (unsigned __int64)p_pInputMemory > v38) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Cu, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v17 = (unsigned __int16 *)pInputMemory;
    }
    v24 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v17 + 16LL))(v17);
    inputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v17;
    inputBuf.u.RefMdl.Mdl = v23;
    if ( v24 )
    {
      LODWORD(inputBuf.u.Memory.Memory) = 4;
      v47 = v24;
    }
    else
    {
      LODWORD(inputBuf.u.Memory.Memory) = 1;
    }
  }
  v25 = OutputBufferOffsets;
  if ( v13 )
  {
    v31 = (unsigned __int16 *)(~v13 & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v32) = 0;
    if ( (v13 & 1) != 0 )
    {
      v32 = *v31;
      v31 = (unsigned __int16 *)((char *)v31 - v32);
    }
    if ( v31[4] == 4106 )
    {
      pOutputMemory = (IFxMemory *)v31;
    }
    else
    {
      pOutputMemory = 0LL;
      p_pInputMemory = &pOutputMemory;
      v33.__vftable = *(IFxMemory_vtbl **)v31;
      LOWORD(outputBuf.DataType) = 4106;
      HIWORD(outputBuf.DataType) = v32;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v33.GetDriverGlobals)(v31, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v31 + 2),
          v34,
          v35,
          v36,
          (const _GUID *)v40,
          (const void *)v13,
          0x100Au,
          v31,
          v31[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v31 + 2), WDF_INVALID_HANDLE, v13, 0x100AuLL);
      }
      v31 = (unsigned __int16 *)pOutputMemory;
    }
    if ( v25 )
    {
      p_pInputMemory = (IFxMemory **)(v25->BufferLength + v25->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < v25->BufferLength
        || (v39 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v31 + 8LL))(v31),
            (unsigned __int64)p_pInputMemory > v39) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Du, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v31 = (unsigned __int16 *)pOutputMemory;
    }
    v37 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v31 + 16LL))(v31);
    outputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v31;
    outputBuf.u.RefMdl.Mdl = (_MDL *)v25;
    if ( v37 )
    {
      LODWORD(outputBuf.u.Memory.Memory) = 4;
      *(_QWORD *)&inputBuf.DataType = v37;
    }
    else
    {
      LODWORD(outputBuf.u.Memory.Memory) = 1;
    }
  }
  v26 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)pRequest,
          v43,
          v50,
          Internal,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a6);
  if ( v26 >= 0 )
  {
    v27 = Internal == 0;
    m_RequestContext = v43->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v50;
    if ( v27 )
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControl;
    else
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControlInternal;
    v29 = (_WDFMEMORY_OFFSET *)InputBufferOffsets;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = v14;
    if ( v29 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v29->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = v13;
    if ( v25 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v25->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v10, Request, v26);
  return (unsigned int)v26;
}
