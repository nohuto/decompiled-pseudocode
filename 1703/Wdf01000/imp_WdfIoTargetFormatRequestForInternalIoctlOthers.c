/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0039DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AD8C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0039FC0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0086748 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C0086890 (WPP_IFR_SF_qqDqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v17; // r14
  __int64 v18; // rsi
  WDFMEMORY__ *v19; // rdx
  int id; // eax
  FxRequestContext *m_RequestContext; // rdx
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  int v24; // ebx
  __int64 v26; // rbx
  _WDFMEMORY_OFFSET *v27; // r8
  IFxMemory *v28; // r9
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-98h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-90h] BYREF
  void *_a4; // [rsp+78h] [rbp-88h]
  _WDFMEMORY_OFFSET *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  void *v39; // [rsp+90h] [rbp-70h]
  WDFMEMORY__ *memoryHandles[3]; // [rsp+98h] [rbp-68h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+B0h] [rbp-50h]
  IFxMemory *pMemory[3]; // [rsp+C8h] [rbp-38h] BYREF
  FxRequestBuffer args[3]; // [rsp+E0h] [rbp-20h] BYREF

  _a4 = IoTarget;
  v39 = Request;
  `vector constructor iterator'(args, 0x20uLL, 3uLL, (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(m_Globals, v14, v15, 0x37u, traceGuid, _a4, Request, Ioctl, OtherArg1, OtherArg2, OtherArg4);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v17 = 0LL;
  offsets[0] = OtherArg1Offsets;
  v18 = 0LL;
  offsets[1] = OtherArg2Offsets;
  offsets[2] = OtherArg4Offsets;
  memoryHandles[0] = OtherArg1;
  memoryHandles[1] = OtherArg2;
  memoryHandles[2] = OtherArg4;
  do
  {
    v19 = memoryHandles[v18];
    if ( v19 )
    {
      v26 = (unsigned int)v17;
      v38 = (unsigned int)v17;
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v19, 0x100Au, (void **)&pMemory[v17]);
      v27 = offsets[v18];
      v28 = pMemory[v18];
      v37 = v27;
      if ( v27 )
      {
        BufferLength = v27->BufferLength;
        v30 = BufferLength + v27->BufferOffset;
        if ( v30 >= BufferLength )
        {
          v31 = BufferLength + v27->BufferOffset;
          if ( v31 > v28->GetBufferSize(v28) )
          {
            v24 = -1073741675;
LABEL_20:
            WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v17 + 1, v24);
            return (unsigned int)v24;
          }
          v27 = v37;
          v24 = 0;
        }
        else
        {
          v24 = v30 < BufferLength ? 0xC0000095 : 0;
        }
        if ( v24 < 0 )
          goto LABEL_20;
        v26 = v38;
      }
      FxRequestBuffer::SetMemory(&args[v26], pMemory[v18], v27);
    }
    v17 = (unsigned int)(v17 + 1);
    ++v18;
  }
  while ( (unsigned int)v17 < 3 );
  id = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, pRequest, Ioctl, args);
  v24 = id;
  if ( id >= 0 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeOther;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)OtherArg1;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)OtherArg2;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)OtherArg4;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)m_RequestContext,
      v22,
      v23,
      traceGuid,
      _a4,
      v39,
      Ioctl,
      OtherArg1,
      OtherArg2,
      OtherArg4,
      id);
  return (unsigned int)v24;
}
