/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C000E7B0
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C00117A0 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0038940 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0081FFC (WPP_IFR_SF_qqDdqq.c)
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
  __int64 v17; // rdx
  unsigned __int16 *v18; // rbx
  __int64 v19; // rcx
  IFxMemory v20; // rax
  _FX_DRIVER_GLOBALS *(__fastcall *GetDriverGlobals)(IFxMemory *); // rax
  _MDL *v22; // r13
  __int64 v23; // rax
  _WDFMEMORY_OFFSET *v24; // r13
  unsigned __int16 *v25; // rbx
  __int64 v26; // rcx
  IFxMemory v27; // rax
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  __int64 v31; // rax
  int v32; // ebx
  bool v33; // zf
  FxRequestContext *m_RequestContext; // rdx
  _WDFMEMORY_OFFSET *v35; // rax
  unsigned int v37; // r8d
  unsigned __int16 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  FxRequestBuffer *v41; // [rsp+28h] [rbp-A1h]
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
      (const _GUID *)v41,
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
  v17 = 4106LL;
  if ( v14 )
  {
    v18 = (unsigned __int16 *)(~v14 & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v19) = 0;
    if ( (v14 & 1) != 0 )
    {
      v19 = *v18;
      v18 = (unsigned __int16 *)((char *)v18 - v19);
    }
    if ( v18[4] == 4106 )
    {
      pInputMemory = (IFxMemory *)v18;
    }
    else
    {
      pInputMemory = 0LL;
      p_pInputMemory = &pInputMemory;
      v20.__vftable = *(IFxMemory_vtbl **)v18;
      HIWORD(outputBuf.DataType) = v19;
      LOWORD(outputBuf.DataType) = 4106;
      GetDriverGlobals = v20.GetDriverGlobals;
      if ( (char *)GetDriverGlobals == (char *)FxMemoryObject::QueryInterface )
      {
        v18 += 52;
        pInputMemory = (IFxMemory *)v18;
      }
      else
      {
        if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))GetDriverGlobals)(v18, &p_pInputMemory) < 0 )
        {
          WPP_IFR_SF_qDqD(
            *((_FX_DRIVER_GLOBALS **)v18 + 2),
            v17,
            v37,
            v38,
            (const _GUID *)v41,
            (const void *)v14,
            0x100Au,
            v18,
            v18[4]);
          FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v18 + 2), WDF_INVALID_HANDLE, v14, 0x100AuLL);
        }
        v18 = (unsigned __int16 *)pInputMemory;
      }
    }
    v22 = InputBufferOffsets;
    if ( InputBufferOffsets )
    {
      p_pInputMemory = (IFxMemory **)((char *)InputBufferOffsets->Next + *(_QWORD *)&InputBufferOffsets->Size);
      if ( (unsigned __int64)p_pInputMemory < *(_QWORD *)&InputBufferOffsets->Size
        || (v39 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)v18 + 8LL))(v18, v17),
            (unsigned __int64)p_pInputMemory > v39) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Cu, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v18 = (unsigned __int16 *)pInputMemory;
    }
    v23 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64))(*(_QWORD *)v18 + 16LL))(v18, v17);
    inputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v18;
    inputBuf.u.RefMdl.Mdl = v22;
    if ( v23 )
    {
      LODWORD(inputBuf.u.Memory.Memory) = 4;
      v47 = v23;
    }
    else
    {
      LODWORD(inputBuf.u.Memory.Memory) = 1;
    }
  }
  v24 = OutputBufferOffsets;
  if ( v13 )
  {
    v25 = (unsigned __int16 *)(~v13 & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v26) = 0;
    if ( (v13 & 1) != 0 )
    {
      v26 = *v25;
      v25 = (unsigned __int16 *)((char *)v25 - v26);
    }
    if ( v25[4] == 4106 )
    {
      pOutputMemory = (IFxMemory *)v25;
    }
    else
    {
      pOutputMemory = 0LL;
      p_pInputMemory = &pOutputMemory;
      v27.__vftable = *(IFxMemory_vtbl **)v25;
      LOWORD(outputBuf.DataType) = 4106;
      HIWORD(outputBuf.DataType) = v26;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v27.GetDriverGlobals)(v25, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v25 + 2),
          v28,
          v29,
          v30,
          (const _GUID *)v41,
          (const void *)v13,
          0x100Au,
          v25,
          v25[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v25 + 2), WDF_INVALID_HANDLE, v13, 0x100AuLL);
      }
      v25 = (unsigned __int16 *)pOutputMemory;
    }
    if ( v24 )
    {
      p_pInputMemory = (IFxMemory **)(v24->BufferLength + v24->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < v24->BufferLength
        || (v40 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v25 + 8LL))(v25),
            (unsigned __int64)p_pInputMemory > v40) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Du, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v25 = (unsigned __int16 *)pOutputMemory;
    }
    v31 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v25 + 16LL))(v25);
    outputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v25;
    outputBuf.u.RefMdl.Mdl = (_MDL *)v24;
    if ( v31 )
    {
      LODWORD(outputBuf.u.Memory.Memory) = 4;
      *(_QWORD *)&inputBuf.DataType = v31;
    }
    else
    {
      LODWORD(outputBuf.u.Memory.Memory) = 1;
    }
  }
  v32 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)pRequest,
          v43,
          v50,
          Internal,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u);
  if ( v32 >= 0 )
  {
    v33 = Internal == 0;
    m_RequestContext = v43->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v50;
    if ( v33 )
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControl;
    else
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControlInternal;
    v35 = (_WDFMEMORY_OFFSET *)InputBufferOffsets;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = v14;
    if ( v35 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v35->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = v13;
    if ( v24 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v24->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v10, Request, v32);
  return (unsigned int)v32;
}
