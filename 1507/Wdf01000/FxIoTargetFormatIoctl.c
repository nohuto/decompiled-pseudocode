/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C0012680
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C0012630 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0030540 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C00818F4 (WPP_IFR_SF_qqDdqq.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  WDFIOTARGET__ *v10; // r12
  FxIoTarget *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  FxIoTarget *v15; // rcx
  __int64 v16; // rdx
  _WDFMEMORY_OFFSET *v17; // rsi
  unsigned __int16 *v18; // rbx
  __int64 v19; // rcx
  IFxMemory v20; // rax
  unsigned __int8 v21; // dl
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  __int64 v24; // rax
  _WDFMEMORY_OFFSET *v25; // rdi
  unsigned __int16 *v26; // rbx
  __int64 v27; // rcx
  IFxMemory v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // r8d
  unsigned __int16 v31; // r9
  __int64 v32; // rax
  int v33; // ebx
  bool v34; // zf
  __int64 v35; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  FxRequestBuffer *v39; // [rsp+28h] [rbp-B1h]
  FxFileObject *_a6; // [rsp+38h] [rbp-A1h]
  IFxMemory **p_pInputMemory; // [rsp+68h] [rbp-71h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-69h]
  FxIoTarget *pTarget; // [rsp+78h] [rbp-61h] BYREF
  FxIoTarget *v44; // [rsp+80h] [rbp-59h] BYREF
  FxRequestBuffer outputBuf; // [rsp+88h] [rbp-51h] BYREF
  FxRequestBuffer inputBuf; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-11h]
  IFxMemory *pInputMemory; // [rsp+118h] [rbp+3Fh] BYREF
  IFxMemory *pOutputMemory; // [rsp+120h] [rbp+47h] BYREF
  unsigned int v50; // [rsp+130h] [rbp+57h]

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
  v11 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(IoTarget) = 0;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    IoTarget = LOWORD(v11->__vftable);
    v11 = (FxIoTarget *)((char *)v11 - IoTarget);
  }
  if ( v11->m_Type == 4608 )
  {
    v44 = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&v44, v10, 0x1200u, IoTarget);
    Ioctl = v50;
  }
  m_Globals = v44->m_Globals;
  *(_QWORD *)&outputBuf.DataType = m_Globals;
  v13 = (unsigned __int64)OutputBuffer;
  v14 = (unsigned __int64)InputBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      m_Globals,
      IoTarget,
      0,
      Ioctl,
      (const _GUID *)v39,
      v10,
      (const void *)Request,
      Ioctl,
      Internal,
      InputBuffer,
      OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v15 = (FxIoTarget *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v16) = 0;
  if ( (Request & 1) != 0 )
  {
    v16 = LOWORD(v15->__vftable);
    v15 = (FxIoTarget *)((char *)v15 - v16);
  }
  if ( v15->m_Type == 4104 )
    pTarget = v15;
  else
    FxObjectHandleGetPtrQI(v15, (void **)&pTarget, (void *)Request, 0x1008u, v16);
  v17 = InputBufferOffsets;
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
      LOWORD(pRequest) = 4106;
      WORD1(pRequest) = v19;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v20.GetDriverGlobals)(v18, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v18 + 2),
          v21,
          v22,
          v23,
          (const _GUID *)v39,
          (const void *)v14,
          0x100Au,
          v18,
          v18[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v18 + 2), WDF_INVALID_HANDLE, v14, 0x100AuLL);
      }
      v18 = (unsigned __int16 *)pInputMemory;
    }
    if ( v17 )
    {
      p_pInputMemory = (IFxMemory **)(v17->BufferLength + v17->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < v17->BufferLength
        || (v37 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v18 + 8LL))(v18),
            (unsigned __int64)p_pInputMemory > v37) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x2Cu, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
      v18 = (unsigned __int16 *)pInputMemory;
    }
    v24 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v18 + 16LL))(v18);
    inputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v18;
    inputBuf.u.RefMdl.Mdl = (_MDL *)v17;
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
    v26 = (unsigned __int16 *)(~v13 & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v27) = 0;
    if ( (v13 & 1) != 0 )
    {
      v27 = *v26;
      v26 = (unsigned __int16 *)((char *)v26 - v27);
    }
    if ( v26[4] == 4106 )
    {
      pOutputMemory = (IFxMemory *)v26;
    }
    else
    {
      pOutputMemory = 0LL;
      p_pInputMemory = &pOutputMemory;
      v28.__vftable = *(IFxMemory_vtbl **)v26;
      LOWORD(pRequest) = 4106;
      WORD1(pRequest) = v27;
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))v28.GetDriverGlobals)(v26, &p_pInputMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v26 + 2),
          v29,
          v30,
          v31,
          (const _GUID *)v39,
          (const void *)v13,
          0x100Au,
          v26,
          v26[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v26 + 2), WDF_INVALID_HANDLE, v13, 0x100AuLL);
      }
      v26 = (unsigned __int16 *)pOutputMemory;
    }
    if ( v25 )
    {
      p_pInputMemory = (IFxMemory **)(v25->BufferLength + v25->BufferOffset);
      if ( (unsigned __int64)p_pInputMemory < v25->BufferLength
        || (v38 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v26 + 8LL))(v26),
            (unsigned __int64)p_pInputMemory > v38) )
      {
        WPP_IFR_SF_d(
          *(_FX_DRIVER_GLOBALS **)&outputBuf.DataType,
          2u,
          0xEu,
          0x2Du,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          -1073741675);
        return 3221225621LL;
      }
      v26 = (unsigned __int16 *)pOutputMemory;
    }
    v32 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v26 + 16LL))(v26);
    outputBuf.u.Memory.Offsets = (_WDFMEMORY_OFFSET *)v26;
    outputBuf.u.RefMdl.Mdl = (_MDL *)v25;
    if ( v32 )
    {
      LODWORD(outputBuf.u.Memory.Memory) = 4;
      *(_QWORD *)&inputBuf.DataType = v32;
    }
    else
    {
      LODWORD(outputBuf.u.Memory.Memory) = 1;
    }
  }
  v33 = FxIoTarget::FormatIoctlRequest(
          v44,
          (FxRequestBase *)pTarget,
          v50,
          Internal,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a6);
  if ( v33 >= 0 )
  {
    v34 = Internal == 0;
    v35 = *(_QWORD *)&pTarget->m_InStack;
    *(_DWORD *)(v35 + 32) = v50;
    if ( v34 )
      *(_DWORD *)(v35 + 12) = 14;
    else
      *(_DWORD *)(v35 + 12) = 15;
    *(_QWORD *)(v35 + 40) = v14;
    if ( v17 )
      *(_QWORD *)(v35 + 48) = v17->BufferOffset;
    *(_QWORD *)(v35 + 56) = v13;
    if ( v25 )
      *(_QWORD *)(v35 + 64) = v25->BufferOffset;
  }
  if ( *(_BYTE *)(*(_QWORD *)&outputBuf.DataType + 324LL) )
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)&outputBuf.DataType,
      5u,
      0xEu,
      0x2Eu,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      v10,
      Request,
      v33);
  return (unsigned int)v33;
}
