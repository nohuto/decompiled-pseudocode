/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C0011C80
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C0005250 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C003BB50 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00102B0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C007FEE0 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C00864F0 (WPP_IFR_SF_qqDdqq.c)
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
  __int64 v10; // r8
  WDFIOTARGET__ *v11; // rdi
  FxRequest *v12; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  FxRequestBase *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int16 *v20; // rbx
  IFxMemory v21; // rax
  _FX_DRIVER_GLOBALS *(__fastcall *GetDriverGlobals)(IFxMemory *); // rax
  _MDL *v23; // r13
  __int64 v24; // rax
  _WDFMEMORY_OFFSET *v25; // r13
  __int64 v26; // rdx
  FxIoTarget *v27; // rbx
  FxIoTarget_vtbl *v28; // rax
  int (__fastcall *QueryInterface)(FxMemoryObject *, FxQueryInterfaceParams *); // rax
  __int64 v30; // rax
  int v31; // ebx
  bool v32; // zf
  FxRequestContext *m_RequestContext; // rdx
  _WDFMEMORY_OFFSET *v34; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  int v39; // eax
  unsigned __int16 v40; // r9
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  FxRequestBuffer *v44; // [rsp+28h] [rbp-B1h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-71h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-69h] BYREF
  FxRequestBase *v47; // [rsp+78h] [rbp-61h] BYREF
  void *p_pInputMemory; // [rsp+80h] [rbp-59h] BYREF
  FxRequestBuffer outputBuf; // [rsp+88h] [rbp-51h] BYREF
  FxRequestBuffer inputBuf; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-11h]
  unsigned int v52; // [rsp+118h] [rbp+3Fh]
  IFxMemory *pInputMemory; // [rsp+120h] [rbp+47h] BYREF
  unsigned int v54; // [rsp+130h] [rbp+57h]

  v54 = Ioctl;
  v10 = 0LL;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v11 = (WDFIOTARGET__ *)IoTarget;
  v51 = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v12 = (FxRequest *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    IoTarget = LOWORD(v12->__vftable);
    v12 = (FxRequest *)((char *)v12 - IoTarget);
  }
  if ( v12->m_Type == 4608 )
  {
    pRequest = v12;
  }
  else
  {
    FxObjectHandleGetPtrQI(v12, (void **)&pRequest, v11, 0x1200u, IoTarget);
    Ioctl = v54;
    v10 = 0LL;
  }
  m_Globals = pRequest->m_Globals;
  v14 = (unsigned __int64)OutputBuffer;
  v15 = (unsigned __int64)InputBuffer;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_qqDdqq(
      pRequest->m_Globals,
      IoTarget,
      0,
      Ioctl,
      (const _GUID *)v44,
      v11,
      (const void *)Request,
      Ioctl,
      Internal,
      InputBuffer,
      OutputBuffer);
    v10 = 0LL;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v16) = 0;
  v17 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v17->__vftable);
    v17 = (FxRequestBase *)((char *)v17 - v16);
  }
  if ( v17->m_Type == 4104 )
  {
    v47 = v17;
  }
  else
  {
    FxObjectHandleGetPtrQI(v17, (void **)&v47, (void *)Request, 0x1008u, v16);
    v10 = 0LL;
  }
  v18 = 4106LL;
  if ( v15 )
  {
    v19 = 0LL;
    v20 = (unsigned __int16 *)(~v15 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v15 & 1) != 0 )
    {
      v19 = *v20;
      v20 = (unsigned __int16 *)((char *)v20 - v19);
    }
    if ( v20[4] == 4106 )
    {
      pInputMemory = (IFxMemory *)v20;
    }
    else
    {
      pInputMemory = 0LL;
      p_pInputMemory = &pInputMemory;
      v21.__vftable = *(IFxMemory_vtbl **)v20;
      LOWORD(outputBuf.DataType) = 4106;
      HIWORD(outputBuf.DataType) = v19;
      GetDriverGlobals = v21.GetDriverGlobals;
      if ( (char *)GetDriverGlobals == (char *)FxMemoryObject::QueryInterface )
      {
        v20 += 52;
        pInputMemory = (IFxMemory *)v20;
      }
      else
      {
        if ( ((int (__fastcall *)(unsigned __int16 *, void **, _QWORD, __int64))GetDriverGlobals)(
               v20,
               &p_pInputMemory,
               0LL,
               4106LL) < 0 )
        {
          WPP_IFR_SF_qDqD(
            *((_FX_DRIVER_GLOBALS **)v20 + 2),
            v19,
            v10,
            v18,
            (const _GUID *)v44,
            (const void *)v15,
            0x100Au,
            v20,
            v20[4]);
          FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v20 + 2), WDF_INVALID_HANDLE, v15, 0x100AuLL);
        }
        v20 = (unsigned __int16 *)pInputMemory;
      }
    }
    v23 = InputBufferOffsets;
    if ( !InputBufferOffsets )
      goto LABEL_20;
    v36 = *(_QWORD *)&InputBufferOffsets->Size;
    v37 = (unsigned __int64)InputBufferOffsets->Next + v36;
    if ( v37 >= v36 )
    {
      v38 = (unsigned __int64)InputBufferOffsets->Next + v36;
      if ( v38 <= (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v20 + 8LL))(
                    v20,
                    v36,
                    v37,
                    v18) )
      {
        v20 = (unsigned __int16 *)pInputMemory;
LABEL_20:
        v24 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, __int64, __int64))(*(_QWORD *)v20 + 16LL))(
                v20,
                v19,
                v10,
                v18);
        inputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v20;
        v10 = 0LL;
        inputBuf.u.RefMdl.Mdl = v23;
        v18 = 4106LL;
        if ( v24 )
        {
          LODWORD(inputBuf.u.Memory.Memory) = 4;
          v51 = v24;
        }
        else
        {
          LODWORD(inputBuf.u.Memory.Memory) = 1;
        }
        goto LABEL_22;
      }
      v39 = -1073741675;
      v52 = -1073741675;
    }
    else
    {
      v39 = v37 < v36 ? 0xC0000095 : 0;
      v52 = v39;
    }
    v40 = 44;
    goto LABEL_66;
  }
LABEL_22:
  v25 = OutputBufferOffsets;
  if ( v14 )
  {
    v26 = 0LL;
    v27 = (FxIoTarget *)(~v14 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v14 & 1) != 0 )
    {
      v26 = LOWORD(v27->__vftable);
      v27 = (FxIoTarget *)((char *)v27 - v26);
    }
    if ( v27->m_Type == 4106 )
    {
      pTarget = v27;
    }
    else
    {
      pTarget = 0LL;
      p_pInputMemory = &pTarget;
      v28 = v27->__vftable;
      LOWORD(outputBuf.DataType) = 4106;
      HIWORD(outputBuf.DataType) = v26;
      QueryInterface = (int (__fastcall *)(FxMemoryObject *, FxQueryInterfaceParams *))v28->QueryInterface;
      if ( QueryInterface == FxMemoryObject::QueryInterface )
      {
        v27 = (FxIoTarget *)((char *)v27 + 104);
        pTarget = v27;
      }
      else
      {
        if ( ((int (__fastcall *)(FxIoTarget *, void **, _QWORD, __int64))QueryInterface)(
               v27,
               &p_pInputMemory,
               0LL,
               4106LL) < 0 )
        {
          WPP_IFR_SF_qDqD(
            v27->m_Globals,
            v26,
            v10,
            v18,
            (const _GUID *)v44,
            (const void *)v14,
            0x100Au,
            v27,
            v27->m_Type);
          FxVerifierBugCheckWorker(v27->m_Globals, WDF_INVALID_HANDLE, v14, 0x100AuLL);
        }
        v27 = pTarget;
      }
    }
    if ( !v25 )
      goto LABEL_29;
    BufferLength = v25->BufferLength;
    v42 = BufferLength + v25->BufferOffset;
    if ( v42 >= BufferLength )
    {
      v43 = BufferLength + v25->BufferOffset;
      if ( v43 <= ((__int64 (__fastcall *)(FxIoTarget *, unsigned __int64, unsigned __int64, __int64))v27->~FxObject)(
                    v27,
                    BufferLength,
                    v42,
                    v18) )
      {
        v27 = pTarget;
LABEL_29:
        v30 = ((__int64 (__fastcall *)(FxIoTarget *, __int64, __int64, __int64))v27->Release)(v27, v26, v10, v18);
        outputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v27;
        outputBuf.u.RefMdl.Mdl = (_MDL *)v25;
        if ( v30 )
        {
          LODWORD(outputBuf.u.Memory.Memory) = 4;
          *(_QWORD *)&inputBuf.DataType = v30;
        }
        else
        {
          LODWORD(outputBuf.u.Memory.Memory) = 1;
        }
        goto LABEL_31;
      }
      v39 = -1073741675;
      v52 = -1073741675;
    }
    else
    {
      v39 = v42 < BufferLength ? 0xC0000095 : 0;
      v52 = v39;
    }
    v40 = 45;
LABEL_66:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v40, WPP_FxIoTargetAPI_cpp_Traceguids, v39);
    return v52;
  }
LABEL_31:
  v31 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)pRequest,
          v47,
          v54,
          Internal,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u);
  if ( v31 >= 0 )
  {
    v32 = Internal == 0;
    m_RequestContext = v47->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v54;
    if ( v32 )
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControl;
    else
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeDeviceControlInternal;
    v34 = (_WDFMEMORY_OFFSET *)InputBufferOffsets;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = v15;
    if ( v34 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v34->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = v14;
    if ( v25 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v25->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v11, Request, v31);
  return (unsigned int)v31;
}
