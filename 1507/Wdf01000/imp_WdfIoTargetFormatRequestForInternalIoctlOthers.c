/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C002DFEC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0081B40 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C0081C84 (WPP_IFR_SF_qqDqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  unsigned int v14; // r8d
  FxIoTarget *v15; // rcx
  __int64 v16; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxRequest *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // edi
  unsigned __int64 v21; // r8
  unsigned int v22; // esi
  int v23; // eax
  FxRequestContext *m_RequestContext; // rdx
  unsigned __int16 v25; // r9
  void *flags; // r8
  unsigned int id; // edi
  bool v28; // sf
  void *globals; // rax
  void *level; // rcx
  IFxMemory **v32; // r13
  FxObject *v33; // rcx
  __int64 v34; // rdx
  _WDFMEMORY_OFFSET *v35; // r14
  IFxMemory *v36; // rcx
  unsigned __int64 v37; // rax
  int v38; // ecx
  const _GUID *Offset; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int _a7; // [rsp+68h] [rbp-98h]
  FxRequest *pRequest; // [rsp+70h] [rbp-90h] BYREF
  void *v43; // [rsp+78h] [rbp-88h]
  void *v44; // [rsp+80h] [rbp-80h]
  void *v45; // [rsp+88h] [rbp-78h]
  unsigned __int64 v46; // [rsp+90h] [rbp-70h]
  WDFMEMORY__ *memoryHandles[3]; // [rsp+98h] [rbp-68h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+B0h] [rbp-50h]
  IFxMemory *pMemory[3]; // [rsp+C8h] [rbp-38h] BYREF
  FxRequestBuffer args[3]; // [rsp+E0h] [rbp-20h] BYREF

  _a7 = Ioctl;
  v44 = OtherArg1;
  v45 = OtherArg2;
  v43 = OtherArg4;
  `vector constructor iterator'(args, 0x20uLL, 3, (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  v15 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v16) = 0;
  if ( (IoTarget & 1) != 0 )
  {
    v16 = LOWORD(v15->__vftable);
    v15 = (FxIoTarget *)((char *)v15 - v16);
  }
  if ( v15->m_Type == 4608 )
  {
    pTarget = v15;
  }
  else
  {
    FxObjectHandleGetPtrQI(v15, (void **)&pTarget, (void *)IoTarget, 0x1200u, v16);
    v15 = pTarget;
  }
  m_Globals = v15->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(
      m_Globals,
      v16,
      v14,
      0x37u,
      Offset,
      (const void *)IoTarget,
      (const void *)Request,
      Ioctl,
      OtherArg1,
      OtherArg2,
      OtherArg4);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v18 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v19) = 0;
  if ( (Request & 1) != 0 )
  {
    v19 = LOWORD(v18->__vftable);
    v18 = (FxRequest *)((char *)v18 - v19);
  }
  if ( v18->m_Type == 4104 )
    pRequest = v18;
  else
    FxObjectHandleGetPtrQI(v18, (void **)&pRequest, (void *)Request, 0x1008u, v19);
  offsets[0] = OtherArg1Offsets;
  offsets[1] = OtherArg2Offsets;
  memoryHandles[0] = OtherArg1;
  v20 = 0;
  offsets[2] = OtherArg4Offsets;
  memoryHandles[1] = OtherArg2;
  memoryHandles[2] = OtherArg4;
  do
  {
    v21 = (unsigned __int64)memoryHandles[v20];
    if ( v21 )
    {
      v32 = &pMemory[v20];
      v33 = (FxObject *)(~v21 & 0xFFFFFFFFFFFFFFF8uLL);
      LOWORD(v34) = 0;
      if ( (v21 & 1) != 0 )
      {
        v34 = LOWORD(v33->__vftable);
        v33 = (FxObject *)((char *)v33 - v34);
      }
      if ( v33->m_Type == 4106 )
        *v32 = (IFxMemory *)v33;
      else
        FxObjectHandleGetPtrQI(v33, (void **)&pMemory[v20], (void *)v21, 0x100Au, v34);
      v35 = offsets[v20];
      v36 = *v32;
      if ( v35 )
      {
        v46 = v35->BufferLength + v35->BufferOffset;
        if ( v46 < v35->BufferLength || (v37 = v36->GetBufferSize(v36), v46 > v37) )
        {
          v38 = v20 + 1;
          id = -1073741675;
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v38, -1073741675);
          return id;
        }
      }
      FxRequestBuffer::SetMemory(&args[v20], *v32, v35);
    }
    ++v20;
  }
  while ( v20 < 3 );
  v22 = _a7;
  v23 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, pRequest, _a7, args);
  flags = v43;
  id = v23;
  v28 = v23 < 0;
  globals = v44;
  if ( v28 )
  {
    level = v45;
  }
  else
  {
    m_RequestContext = pRequest->m_RequestContext;
    level = v45;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeOther;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)globals;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)level;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)flags;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)m_RequestContext,
      (unsigned int)flags,
      v25,
      Offset,
      (const void *)IoTarget,
      (const void *)Request,
      v22,
      globals,
      level,
      flags,
      id);
  return id;
}
