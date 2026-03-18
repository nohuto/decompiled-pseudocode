/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C00169F0
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C002B5B0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C00829C0 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031C70 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C005DE64 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C007702C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C007AA74 (WPP_IFR_SF_sqq.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C007BC9C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  unsigned __int64 v9; // rbx
  unsigned int _a3; // r12d
  FxObject *v13; // rcx
  char v14; // al
  _FX_DRIVER_GLOBALS *v15; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v17; // r15
  unsigned __int8 v18; // r13
  _WDF_REQUEST_SEND_OPTIONS *v19; // r15
  _WDF_MEMORY_DESCRIPTOR *v20; // r14
  int v21; // eax
  unsigned int v22; // r12d
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
  _POOL_TYPE *v34; // rdi
  void *m_OriginalSystemBuffer; // rcx
  _MDL *m_OriginalMdl; // rcx
  FxVerifierLock *v38; // r12
  FxVerifierLock *v39; // rax
  FxVerifierLock *v40; // rax
  FxVerifierLock *v41; // r13
  FxRequestBase *v42; // r15
  __int64 v43; // rcx
  FxRequestContext *m_RequestContext; // rcx
  FxIoContext *v45; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned int Flags; // edx
  unsigned __int16 v48; // r9
  const void *v49; // rax
  const void *v50; // rcx
  _QWORD *v51; // r14
  void (__fastcall *v52)(unsigned __int64); // rax
  void (__fastcall *v53)(unsigned __int64); // rax
  char v54; // r8
  _QWORD *v55; // rcx
  _QWORD *v56; // r14
  const void *v57; // rcx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v59; // rcx
  __int64 v60; // rcx
  _POOL_TYPE **v61; // rax
  KIRQL v62; // al
  __int64 v63; // rdx
  _POOL_TYPE **v64; // rcx
  __int64 v65; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  const void *v68; // rax
  const _GUID *RefType; // [rsp+28h] [rbp-E0h]
  FxIoTarget *_a2; // [rsp+38h] [rbp-D0h]
  FxTagTracker *v71; // [rsp+48h] [rbp-C0h]
  FxVerifierLock *pTarget; // [rsp+50h] [rbp-B8h]
  void *PPObject; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  FxObject ParentObject; // [rsp+68h] [rbp-A0h] BYREF
  char v76; // [rsp+D0h] [rbp-38h]
  __int64 v77; // [rsp+D8h] [rbp-30h]
  _QWORD v78[4]; // [rsp+E0h] [rbp-28h] BYREF
  PIRP Irp; // [rsp+100h] [rbp-8h]
  __int64 v80; // [rsp+108h] [rbp+0h]
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // [rsp+110h] [rbp+8h]
  FxRequestTimer *v82; // [rsp+118h] [rbp+10h]
  __int64 v83; // [rsp+120h] [rbp+18h]
  __int64 v84; // [rsp+128h] [rbp+20h]
  __int64 v85; // [rsp+130h] [rbp+28h]
  int v86; // [rsp+138h] [rbp+30h]
  __int16 v87; // [rsp+13Ch] [rbp+34h]
  int v88; // [rsp+13Eh] [rbp+36h]
  __int16 v89; // [rsp+142h] [rbp+3Ah]
  int v90; // [rsp+144h] [rbp+3Ch]
  __int64 v91; // [rsp+148h] [rbp+40h]
  __int16 v92; // [rsp+150h] [rbp+48h]
  char v93; // [rsp+152h] [rbp+4Ah]
  int v94; // [rsp+153h] [rbp+4Bh]
  _MDL *Mdl; // [rsp+158h] [rbp+50h]
  FxCREvent Event; // [rsp+160h] [rbp+58h] BYREF
  FxRequestBase *p_ParentObject; // [rsp+180h] [rbp+78h]
  char v98; // [rsp+188h] [rbp+80h]
  FxIoContext context; // [rsp+190h] [rbp+88h] BYREF
  FxRequestBuffer inputBuf; // [rsp+240h] [rbp+138h] BYREF
  FxRequestBuffer outputBuf; // [rsp+260h] [rbp+158h] BYREF
  __int64 v102; // [rsp+280h] [rbp+178h]
  _LIST_ENTRY *retaddr; // [rsp+2C0h] [rbp+1B8h]
  int v104; // [rsp+2C8h] [rbp+1C0h] BYREF
  void *v105; // [rsp+2D0h] [rbp+1C8h] BYREF
  unsigned int _a1; // [rsp+2E0h] [rbp+1D8h]

  _a1 = Ioctl;
  v9 = 0LL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  _a3 = Ioctl;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&outputBuf.DataType = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  v102 = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v13 = (FxObject *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  v14 = IoTarget & 7;
  v15 = 0LL;
  if ( (v14 & 1) != 0 )
  {
    v15 = (_FX_DRIVER_GLOBALS *)LOWORD(v13->__vftable);
    v13 = (FxObject *)((char *)v13 - (__int64)v15);
  }
  if ( v13->m_Type == 4608 )
  {
    PPObject = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI(v13, &PPObject, (void *)IoTarget, 0x1200u, (unsigned __int16)v15);
    v13 = (FxObject *)PPObject;
  }
  m_Globals = v13->m_Globals;
  memset(&context.m_CompletionParams.IoStatus.Information, 0, 72);
  v17 = m_Globals;
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
    FxObject::Vf_VerifyConstruct(&ParentObject, v15, 1u);
    v17 = ParentObject.m_Globals;
  }
  ParentObject.__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
  v77 = 0LL;
  v76 = 1;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v17->FxVerifierLock )
  {
    v38 = 0LL;
    v39 = (FxVerifierLock *)FxPoolAllocator(
                              v17,
                              (_LIST_ENTRY *)&v17->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              v17->Tag,
                              retaddr);
    if ( v39 && (FxVerifierLock::FxVerifierLock(v39, v17, &ParentObject), (v41 = v40) != 0LL) )
    {
      if ( v40->m_UseMutex )
      {
        v40->m_Mutex.m_Lock.Owner = 0LL;
        v40->m_Mutex.m_Lock.Count = 1;
        v40->m_Mutex.m_Lock.Contention = 0;
        KeInitializeEvent(&v40->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
        v41->m_Mutex.m_DbgFlagIsInitialized = 1;
      }
      v38 = v41;
    }
    else
    {
      WPP_IFR_SF_d(v17, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
    }
    pTarget = v38;
    _a3 = _a1;
  }
  Irp = 0LL;
  v78[1] = v78;
  v83 = 0LL;
  v78[0] = v78;
  v84 = 0LL;
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  v87 = 0;
  v94 = 0x1000000;
  v80 = 0LL;
  v85 = 0LL;
  v88 = 1;
  p_m_CompletionParams = 0LL;
  v82 = 0LL;
  v78[3] = 0LL;
  v90 = 0;
  v91 = 0LL;
  v92 = 0;
  v86 = 0;
  Mdl = 0LL;
  v89 = 0;
  v93 = 0;
  Event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
  Event.m_Event.m_DbgFlagIsInitialized = 1;
  p_m_CompletionParams = &context.m_CompletionParams;
  v98 = 1;
  if ( Request )
  {
    v42 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v43) = 0;
    if ( (Request & 1) != 0 )
    {
      v43 = LOWORD(v42->__vftable);
      v42 = (FxRequestBase *)((char *)v42 - v43);
    }
    if ( v42->m_Type == 4104 )
    {
      v105 = v42;
    }
    else
    {
      FxObjectHandleGetPtrQI(v42, &v105, (void *)Request, 0x1008u, v43);
      v42 = (FxRequestBase *)v105;
    }
    p_ParentObject = v42;
    m_RequestContext = v42->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v42);
      v42 = (FxRequestBase *)v105;
    }
    v45 = (FxIoContext *)v42->m_RequestContext;
    if ( v45 != (FxIoContext *)&context.m_CompletionParams )
    {
      if ( v45 )
        ((void (__fastcall *)(FxIoContext *, __int64))v45->~FxIoContext)(v45, 1LL);
      v42->m_RequestContext = (FxRequestContext *)&context.m_CompletionParams;
      v42 = (FxRequestBase *)v105;
    }
    v42->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    v93 |= 0x10u;
    p_ParentObject = (FxRequestBase *)&ParentObject;
  }
  ParentObject.m_ObjectSize = 0;
  v18 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDd(
      m_Globals,
      5u,
      0xEu,
      0x25u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      _a3,
      Internal);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v104 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v104,
        m_Globals->Public.DriverName,
        (const char *)&v104);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      v22 = -1073741808;
      goto LABEL_25;
    }
  }
  v19 = RequestOptions;
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
      v22 = -1073741811;
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
      v22 = -1073741820;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v22);
    goto LABEL_25;
  }
LABEL_15:
  v20 = InputBuffer;
  if ( InputBuffer )
  {
    v21 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&inputBuf.u, m_Globals, InputBuffer, 0);
    v22 = v21;
    if ( v21 < 0 )
    {
      v48 = 39;
LABEL_96:
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v48, WPP_FxIoTargetAPI_cpp_Traceguids, v20, v21);
      goto LABEL_25;
    }
    _a3 = _a1;
  }
  v20 = OutputBuffer;
  if ( !OutputBuffer )
    goto LABEL_21;
  v21 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&outputBuf.u, m_Globals, OutputBuffer, 0);
  v22 = v21;
  if ( v21 < 0 )
  {
    v48 = 40;
    goto LABEL_96;
  }
  _a3 = _a1;
LABEL_21:
  v23 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)PPObject,
          p_ParentObject,
          _a3,
          v18,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u,
          _a2);
  v22 = v23;
  if ( v23 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, v23);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( !p_ParentObject->m_ObjectSize
        || (v49 = (const void *)((unsigned __int64)p_ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      {
        v49 = p_ParentObject;
      }
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, v49);
    }
    v24 = FxIoTarget::SubmitSync((FxIoTarget *)PPObject, p_ParentObject, v19, 0LL);
    v26 = (unsigned int)BytesReturned;
    v22 = v24;
    if ( BytesReturned )
      *BytesReturned = p_ParentObject->m_Irp.m_Irp->IoStatus.Information;
  }
LABEL_25:
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v71 )
    FxTagTracker::UpdateTagHistory(
      v71,
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
            0xBu);
          m_ObjectFlags = ParentObject.m_ObjectFlags;
        }
        if ( m_ObjectFlags < 0 )
          *((_BYTE *)&ParentObject + _InterlockedIncrement((volatile signed __int32 *)&v74) - 16) = 11;
      }
      ParentObject.m_ObjectState = 11;
      FxDisposeList::Add(ParentObject.m_Globals->Driver->m_DisposeList, &ParentObject);
    }
    else
    {
      if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      {
        v29 = v71;
        if ( v71 )
        {
          FxTagTracker::CheckForAbandondedTags(v71);
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
        v51 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + ParentObject.m_ObjectSize);
        if ( v51 )
        {
          do
          {
            v52 = (void (__fastcall *)(unsigned __int64))v51[2];
            if ( v52 )
            {
              v52((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v51[2] = 0LL;
            }
            v53 = (void (__fastcall *)(unsigned __int64))v51[3];
            if ( v53 )
            {
              v53((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v51[3] = 0LL;
            }
            v51 = (_QWORD *)v51[1];
          }
          while ( v51 );
          m_ObjectSize = ParentObject.m_ObjectSize;
        }
        v54 = 1;
        if ( (_WORD)m_ObjectSize )
        {
          v55 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + (unsigned __int16)m_ObjectSize);
          if ( v55 )
          {
            do
            {
              v56 = (_QWORD *)v55[1];
              if ( !v54 )
                FxPoolFree(v55);
              v54 = 0;
              v55 = v56;
            }
            while ( v56 );
          }
        }
      }
      if ( v29 )
      {
        v71 = 0LL;
        FxTagTracker::`scalar deleting destructor'(v29, m_ObjectSize);
      }
      ParentObject.SelfDestruct(&ParentObject);
    }
  }
  if ( p_ParentObject != &ParentObject )
  {
    if ( !v98 )
      goto LABEL_132;
    p_ParentObject->m_RequestContext = 0LL;
    p_ParentObject->m_RequestBaseFlags &= ~0x10u;
  }
  if ( v98 )
  {
    v31 = 0LL;
    p_m_CompletionParams = 0LL;
    goto LABEL_38;
  }
LABEL_132:
  v31 = p_m_CompletionParams;
LABEL_38:
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
  if ( v33 && HIBYTE(v87) == 1 )
    IoFreeIrp(v32);
  if ( v82 )
    FxRequestTimer::`scalar deleting destructor'(v82, v26);
  ParentObject.__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && pTarget )
    FxVerifierLock::`scalar deleting destructor'(pTarget, v26);
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  v76 = 0;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v71 )
    FxTagTracker::`scalar deleting destructor'(v71, v26);
  if ( ParentObject.m_ParentObject
    || ParentObject.m_ChildListHead.Flink != &ParentObject.m_ChildListHead
    || ParentObject.m_ChildEntry.Flink != &ParentObject.m_ChildEntry )
  {
    v65 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_179;
    m_Type = ParentObject.m_Type;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      LODWORD(v31) = *p_ObjectType;
      if ( ParentObject.m_Type == (_WORD)v31 )
        break;
      if ( ParentObject.m_Type > (unsigned __int16)v31 )
      {
        v65 = (unsigned int)(v65 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v65 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_179;
    }
    HandleName = FxObjectsInfo[v65].HandleName;
    if ( !HandleName )
LABEL_179:
      HandleName = "WDFOBJECT";
    if ( ParentObject.m_ObjectSize )
      v68 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v68 = 0LL;
    WPP_IFR_SF_sqq(
      ParentObject.m_Globals,
      (unsigned __int8)HandleName,
      (unsigned int)v31,
      m_Type,
      RefType,
      HandleName,
      v68,
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
        v57 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v57 = 0LL;
      WPP_IFR_SF_qqLL(
        ParentObject.m_Globals,
        5u,
        0x14u,
        0xAu,
        WPP_FxObject_hpp_Traceguids,
        &ParentObject,
        v57,
        ParentObject.m_ObjectState,
        0xCu);
    }
    if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      *((_BYTE *)&ParentObject + _InterlockedIncrement((volatile signed __int32 *)&v74) - 16) = 12;
  }
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 0;
  ParentObject.m_ObjectState = 12;
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  if ( context.m_OriginalSystemBuffer )
  {
    if ( ((__int64)context.m_OriginalSystemBuffer & 0xFFF) != 0 )
    {
      v34 = (_POOL_TYPE *)*((_QWORD *)context.m_OriginalSystemBuffer - 2);
      if ( *(_BYTE *)(*((_QWORD *)context.m_OriginalSystemBuffer - 1) + 264LL) )
      {
        IsPagedPoolType = FxIsPagedPoolType(v34[10]);
        v59 = *((_QWORD *)v34 + 2);
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v59 + 40));
          v60 = *(_QWORD *)v34;
          v61 = (_POOL_TYPE **)*((_QWORD *)v34 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v34 + 8LL) != v34 || *v61 != v34 )
            __fastfail(3u);
          *v61 = (_POOL_TYPE *)v60;
          *(_QWORD *)(v60 + 8) = v61;
          *(_QWORD *)(*((_QWORD *)v34 + 2) + 120LL) -= *((_QWORD *)v34 + 4);
          --*(_DWORD *)(*((_QWORD *)v34 + 2) + 132LL);
          ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v34 + 2) + 40LL));
        }
        else
        {
          v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v59 + 8));
          v63 = *(_QWORD *)v34;
          v64 = (_POOL_TYPE **)*((_QWORD *)v34 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v34 + 8LL) != v34 || *v64 != v34 )
            __fastfail(3u);
          *v64 = (_POOL_TYPE *)v63;
          *(_QWORD *)(v63 + 8) = v64;
          *(_QWORD *)(*((_QWORD *)v34 + 2) + 112LL) -= *((_QWORD *)v34 + 4);
          --*(_DWORD *)(*((_QWORD *)v34 + 2) + 128LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v34 + 2) + 8LL), v62);
        }
        memset(v34, 0, *((_QWORD *)v34 + 4) + 64LL);
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
  return v22;
}
