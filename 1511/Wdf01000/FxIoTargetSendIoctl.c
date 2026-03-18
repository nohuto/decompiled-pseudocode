/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C0019F50
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C0018550 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0074C70 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0013180 (WPP_IFR_SF_qqLL.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0019D80 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0025074 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C002E38C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0033C14 (WPP_IFR_SF_Dd.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0057374 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0057E44 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0059930 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006C180 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C006C92C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006E8B4 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C006EA84 (WPP_IFR_SF_sqq.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006FFF4 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00708CC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  unsigned __int64 v9; // rbx
  WDFIOTARGET__ *v12; // rsi
  FxIoTarget *v13; // rcx
  char v14; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v16; // rdx
  unsigned __int8 v17; // r13
  _WDF_REQUEST_SEND_OPTIONS *v18; // r12
  _WDF_MEMORY_DESCRIPTOR *v19; // r15
  int v20; // eax
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int16 m_Type; // r9
  unsigned int v26; // edx
  signed __int32 v27; // edi
  char m_ObjectFlags; // cl
  FxTagTracker *v29; // rsi
  unsigned int m_ObjectSize; // edx
  _WDF_REQUEST_COMPLETION_PARAMS *v31; // r8
  _IRP *v32; // rcx
  PIRP v33; // rdi
  FX_POOL_TRACKER *v34; // rdi
  void *m_OriginalSystemBuffer; // rcx
  _MDL *m_OriginalMdl; // rcx
  FxRequestBase *v38; // rcx
  __int64 v39; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned int Flags; // edx
  unsigned __int16 v42; // r9
  const void *TraceObjectHandle; // rax
  _QWORD *v44; // r15
  void (__fastcall *v45)(unsigned __int64); // rax
  void (__fastcall *v46)(unsigned __int64); // rax
  char v47; // r8
  _QWORD *v48; // rcx
  _QWORD *v49; // r15
  const void *v50; // rcx
  __int64 v51; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  const void *v54; // rax
  const _GUID *RefType; // [rsp+28h] [rbp-E0h]
  FxFileObject *_a2; // [rsp+38h] [rbp-D0h]
  FxTagTracker *_a2a; // [rsp+38h] [rbp-D0h]
  FxVerifierLock *_a3; // [rsp+40h] [rbp-C8h]
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  FxObject ParentObject; // [rsp+58h] [rbp-B0h] BYREF
  char v61; // [rsp+C0h] [rbp-48h]
  __int64 v62; // [rsp+C8h] [rbp-40h]
  _QWORD v63[4]; // [rsp+D0h] [rbp-38h] BYREF
  PIRP Irp; // [rsp+F0h] [rbp-18h]
  __int64 v65; // [rsp+F8h] [rbp-10h]
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // [rsp+100h] [rbp-8h]
  FxRequestTimer *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  __int64 v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+128h] [rbp+20h]
  __int16 v72; // [rsp+12Ch] [rbp+24h]
  int v73; // [rsp+12Eh] [rbp+26h]
  __int16 v74; // [rsp+132h] [rbp+2Ah]
  int v75; // [rsp+134h] [rbp+2Ch]
  __int64 v76; // [rsp+138h] [rbp+30h]
  __int16 v77; // [rsp+140h] [rbp+38h]
  char v78; // [rsp+142h] [rbp+3Ah]
  int v79; // [rsp+143h] [rbp+3Bh]
  _MDL *Mdl; // [rsp+148h] [rbp+40h]
  FxCREvent Event; // [rsp+150h] [rbp+48h] BYREF
  FxRequestBase *p_ParentObject; // [rsp+170h] [rbp+68h]
  char v83; // [rsp+178h] [rbp+70h]
  FxVerifierLock *VerifierLock; // [rsp+188h] [rbp+80h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+88h] BYREF
  FxRequestBuffer inputBuf; // [rsp+240h] [rbp+138h] BYREF
  FxRequestBuffer outputBuf; // [rsp+260h] [rbp+158h] BYREF
  __int64 v88; // [rsp+280h] [rbp+178h]
  FxIoTarget *pTarget; // [rsp+2C8h] [rbp+1C0h] BYREF
  void *PPObject; // [rsp+2D0h] [rbp+1C8h] BYREF
  unsigned int _a1; // [rsp+2E0h] [rbp+1D8h]

  _a1 = Ioctl;
  v9 = 0LL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  v12 = (WDFIOTARGET__ *)IoTarget;
  *(_QWORD *)&outputBuf.DataType = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  v88 = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v13 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  v14 = IoTarget & 7;
  LOWORD(IoTarget) = 0;
  if ( (v14 & 1) != 0 )
  {
    IoTarget = LOWORD(v13->__vftable);
    v13 = (FxIoTarget *)((char *)v13 - IoTarget);
  }
  if ( v13->m_Type == 4608 )
  {
    pTarget = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI(v13, (void **)&pTarget, v12, 0x1200u, IoTarget);
    v13 = pTarget;
  }
  m_Globals = v13->m_Globals;
  memset(&context.m_CompletionParams.IoStatus.Information, 0, 72);
  v16 = m_Globals;
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  ParentObject.m_ChildListHead.Blink = &ParentObject.m_ChildListHead;
  ParentObject.m_ChildListHead.Flink = &ParentObject.m_ChildListHead;
  ParentObject.m_ChildEntry.Blink = &ParentObject.m_ChildEntry;
  ParentObject.m_ChildEntry.Flink = &ParentObject.m_ChildEntry;
  LOBYTE(context.m_BufferToFree) = 1;
  context.m_CompletionParams.IoStatus.Pointer = (void *)0xFF00000048LL;
  memset(&context.m_OriginalSystemBuffer, 0, 40);
  memset(&context.m_MdlToFreeSize, 0, 19);
  *(_QWORD *)&inputBuf.DataType = 0LL;
  *(_DWORD *)&ParentObject.m_Type = 4104;
  ParentObject.m_Globals = m_Globals;
  ParentObject.m_SpinLock.m_Lock = 0LL;
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 1;
  ParentObject.m_Refcnt = 1;
  *(_DWORD *)&ParentObject.m_ObjectFlags = 0x10000;
  ParentObject.m_ParentObject = 0LL;
  ParentObject.m_DisposeSingleEntry.Next = 0LL;
  ParentObject.m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    FxObject::Vf_VerifyConstruct(&ParentObject, m_Globals, 1u);
    v16 = ParentObject.m_Globals;
  }
  ParentObject.__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
  v62 = 0LL;
  v61 = 1;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v16->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v16, &ParentObject);
    _a3 = VerifierLock;
  }
  Irp = 0LL;
  v63[1] = v63;
  v68 = 0LL;
  v63[0] = v63;
  v69 = 0LL;
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  v72 = 0;
  v79 = 0x1000000;
  v65 = 0LL;
  v70 = 0LL;
  v73 = 1;
  p_m_CompletionParams = 0LL;
  v67 = 0LL;
  v63[3] = 0LL;
  v75 = 0;
  v76 = 0LL;
  v77 = 0;
  v71 = 0;
  Mdl = 0LL;
  v74 = 0;
  v78 = 0;
  Event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
  Event.m_Event.m_DbgFlagIsInitialized = 1;
  p_m_CompletionParams = &context.m_CompletionParams;
  v83 = 1;
  if ( Request )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
    v38 = (FxRequestBase *)PPObject;
    p_ParentObject = (FxRequestBase *)PPObject;
    v39 = *((_QWORD *)PPObject + 21);
    if ( v39 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)v39 + 24LL))(*((_QWORD *)PPObject + 21), PPObject);
      v38 = (FxRequestBase *)PPObject;
    }
    FxRequestBase::SetContext(v38, (FxRequestContext *)&context.m_CompletionParams);
    *((_BYTE *)PPObject + 234) |= 0x10u;
  }
  else
  {
    v78 |= 0x10u;
    p_ParentObject = (FxRequestBase *)&ParentObject;
  }
  ParentObject.m_ObjectSize = 0;
  v17 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, v12, Request, Ioctl, Internal);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v21 = -1073741808;
      goto LABEL_24;
    }
  }
  v18 = RequestOptions;
  if ( RequestOptions )
  {
    if ( RequestOptions->Size == 16 )
    {
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_15;
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
      }
      v21 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v21 = -1073741820;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v21);
    goto LABEL_24;
  }
LABEL_15:
  v19 = InputBuffer;
  if ( InputBuffer )
  {
    v20 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&inputBuf.u, m_Globals, InputBuffer, 0);
    v21 = v20;
    if ( v20 < 0 )
    {
      v42 = 39;
LABEL_78:
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v42, WPP_FxIoTargetAPI_cpp_Traceguids, v19, v20);
      goto LABEL_24;
    }
  }
  v19 = OutputBuffer;
  if ( OutputBuffer )
  {
    v20 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&outputBuf.u, m_Globals, OutputBuffer, 0);
    v21 = v20;
    if ( v20 < 0 )
    {
      v42 = 40;
      goto LABEL_78;
    }
  }
  v22 = _a1;
  v23 = FxIoTarget::FormatIoctlRequest(
          pTarget,
          p_ParentObject,
          _a1,
          v17,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a2);
  v21 = v23;
  if ( v23 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, v22, v23);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(p_ParentObject);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, v12, TraceObjectHandle);
    }
    v24 = FxIoTarget::SubmitSync(pTarget, p_ParentObject, v18, 0LL);
    v26 = (unsigned int)BytesReturned;
    v21 = v24;
    if ( BytesReturned )
      *BytesReturned = p_ParentObject->m_Irp.m_Irp->IoStatus.Information;
  }
LABEL_24:
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a2a )
    FxTagTracker::UpdateTagHistory(
      _a2a,
      0LL,
      129,
      "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
      TagRelease,
      ParentObject.m_Refcnt - 1);
  v27 = _InterlockedDecrement(&ParentObject.m_Refcnt);
  if ( !v27 )
  {
    m_ObjectFlags = ParentObject.m_ObjectFlags;
    if ( (ParentObject.m_ObjectFlags & 0x20) != 0 || (ParentObject.m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(&ParentObject, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(ParentObject.m_Globals->Driver->m_DisposeList, &ParentObject);
    }
    else
    {
      if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      {
        v29 = _a2a;
        if ( _a2a )
        {
          FxTagTracker::CheckForAbandondedTags(_a2a);
          m_ObjectFlags = ParentObject.m_ObjectFlags;
        }
      }
      else
      {
        v29 = 0LL;
      }
      m_ObjectSize = ParentObject.m_ObjectSize;
      if ( ParentObject.m_ObjectSize && (m_ObjectFlags & 8) != 0 )
      {
        v44 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + ParentObject.m_ObjectSize);
        if ( v44 )
        {
          do
          {
            v45 = (void (__fastcall *)(unsigned __int64))v44[2];
            if ( v45 )
            {
              v45((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v44[2] = 0LL;
            }
            v46 = (void (__fastcall *)(unsigned __int64))v44[3];
            if ( v46 )
            {
              v46((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v44[3] = 0LL;
            }
            v44 = (_QWORD *)v44[1];
          }
          while ( v44 );
          m_ObjectSize = ParentObject.m_ObjectSize;
        }
        v47 = 1;
        if ( (_WORD)m_ObjectSize )
        {
          v48 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + (unsigned __int16)m_ObjectSize);
          if ( v48 )
          {
            do
            {
              v49 = (_QWORD *)v48[1];
              if ( !v47 )
                FxPoolFree(v48);
              v47 = 0;
              v48 = v49;
            }
            while ( v49 );
          }
        }
      }
      if ( v29 )
      {
        _a2a = 0LL;
        FxTagTracker::`scalar deleting destructor'(v29, m_ObjectSize);
      }
      ParentObject.SelfDestruct(&ParentObject);
    }
  }
  if ( p_ParentObject != &ParentObject )
  {
    if ( !v83 )
      goto LABEL_102;
    p_ParentObject->m_RequestContext = 0LL;
    p_ParentObject->m_RequestBaseFlags &= ~0x10u;
  }
  if ( v83 )
  {
    v31 = 0LL;
    p_m_CompletionParams = 0LL;
    goto LABEL_37;
  }
LABEL_102:
  v31 = p_m_CompletionParams;
LABEL_37:
  if ( v27 )
  {
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(ParentObject.m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, &ParentObject, &Event);
    FxCREvent::EnterCRAndWaitAndLeave(&Event);
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(ParentObject.m_Globals, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, &ParentObject, &Event);
    v31 = p_m_CompletionParams;
  }
  ParentObject.__vftable = (FxObject_vtbl *)&FxRequestBase::`vftable';
  if ( Mdl )
  {
    if ( ParentObject.m_Globals->FxVerifierOn )
      FxMdlFreeDebug(ParentObject.m_Globals, Mdl);
    else
      IoFreeMdl(Mdl);
    v31 = p_m_CompletionParams;
  }
  v32 = Irp;
  v33 = Irp;
  if ( v31 )
  {
    if ( Irp )
    {
      (*(void (__fastcall **)(_WDF_REQUEST_COMPLETION_PARAMS *, FxObject *))(*(_QWORD *)&v31->Size + 24LL))(
        v31,
        &ParentObject);
      v31 = p_m_CompletionParams;
      v32 = Irp;
    }
    if ( v31 )
    {
      (**(void (__fastcall ***)(_WDF_REQUEST_COMPLETION_PARAMS *, __int64))&v31->Size)(v31, 1LL);
      v32 = Irp;
    }
  }
  if ( v33 && HIBYTE(v72) == 1 )
    IoFreeIrp(v32);
  if ( v67 )
    FxRequestTimer::`scalar deleting destructor'(v67, v26);
  ParentObject.__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a3 )
    FxVerifierLock::`scalar deleting destructor'(_a3, v26);
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  v61 = 0;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a2a )
    FxTagTracker::`scalar deleting destructor'(_a2a, v26);
  if ( ParentObject.m_ParentObject
    || ParentObject.m_ChildListHead.Flink != &ParentObject.m_ChildListHead
    || ParentObject.m_ChildEntry.Flink != &ParentObject.m_ChildEntry )
  {
    v51 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_143;
    m_Type = ParentObject.m_Type;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      LODWORD(v31) = *p_ObjectType;
      if ( ParentObject.m_Type == (_WORD)v31 )
        break;
      if ( ParentObject.m_Type > (unsigned __int16)v31 )
      {
        v51 = (unsigned int)(v51 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v51 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_143;
    }
    HandleName = FxObjectsInfo[v51].HandleName;
    if ( !HandleName )
LABEL_143:
      HandleName = "WDFOBJECT";
    if ( ParentObject.m_ObjectSize )
      v54 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v54 = 0LL;
    WPP_IFR_SF_sqq(
      ParentObject.m_Globals,
      (unsigned __int8)HandleName,
      (unsigned int)v31,
      m_Type,
      RefType,
      HandleName,
      v54,
      &ParentObject);
    if ( ParentObject.m_ObjectSize )
      v9 = (unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL;
    FxVerifierBugCheckWorker(ParentObject.m_Globals, WDF_OBJECT_ERROR, v9, (unsigned __int64)&ParentObject);
  }
  if ( (ParentObject.m_ObjectFlags & 0x200) != 0 )
  {
    if ( ParentObject.m_Globals->FxVerboseOn )
    {
      if ( ParentObject.m_ObjectSize )
        v50 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v50 = 0LL;
      WPP_IFR_SF_qqLL(
        ParentObject.m_Globals,
        5u,
        0x14u,
        0xAu,
        WPP_FxObject_hpp_Traceguids,
        &ParentObject,
        v50,
        ParentObject.m_ObjectState,
        0xCu);
    }
    if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      *((_BYTE *)&ParentObject + _InterlockedIncrement((volatile signed __int32 *)&v59) - 16) = 12;
  }
  ParentObject.m_ObjectState = 12;
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 0;
  if ( context.m_OriginalSystemBuffer )
  {
    if ( ((__int64)context.m_OriginalSystemBuffer & 0xFFF) != 0 )
    {
      v34 = (FX_POOL_TRACKER *)*((_QWORD *)context.m_OriginalSystemBuffer - 2);
      if ( *(_BYTE *)(*((_QWORD *)context.m_OriginalSystemBuffer - 1) + 264LL) )
      {
        if ( FxIsPagedPoolType(v34->PoolType) )
          FxPoolRemovePagedAllocateTracker(v34);
        else
          FxPoolRemoveNonPagedAllocateTracker(v34);
        memset(v34, 0, v34->Size + 64);
      }
      m_OriginalSystemBuffer = v34;
    }
    else
    {
      m_OriginalSystemBuffer = context.m_OriginalSystemBuffer;
    }
    ExFreePoolWithTag(m_OriginalSystemBuffer, 0);
    context.m_OriginalSystemBuffer = 0LL;
  }
  m_OriginalMdl = context.m_OriginalMdl;
  context.m_MdlToFreeSize = 0LL;
  LOBYTE(context.m_OtherMemory) = 0;
  if ( context.m_OriginalMdl )
  {
    if ( BYTE1(context.m_OtherMemory) )
    {
      MmUnlockPages(context.m_OriginalMdl);
      m_OriginalMdl = context.m_OriginalMdl;
      BYTE1(context.m_OtherMemory) = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)&context.m_OriginalFlags + 316LL) )
      FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)&context.m_OriginalFlags, m_OriginalMdl);
    else
      IoFreeMdl(m_OriginalMdl);
  }
  return v21;
}
