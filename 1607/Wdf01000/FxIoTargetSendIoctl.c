/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C0029020
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C0028FD0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0082C10 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C00295F4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C002D8D4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_Dd @ 0x1C0038864 (WPP_IFR_SF_Dd.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C006E4EC (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C007D110 (WPP_IFR_SF_sqq.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  unsigned int v10; // r15d
  WDFIOTARGET__ *v12; // rsi
  FxIoTarget *v13; // rcx
  char v14; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _FX_DRIVER_GLOBALS *v16; // rdx
  unsigned __int8 v17; // r13
  _WDF_REQUEST_SEND_OPTIONS *v18; // r12
  _WDF_MEMORY_DESCRIPTOR *v19; // r14
  int v20; // eax
  unsigned int v21; // r15d
  int v22; // eax
  int v23; // eax
  unsigned __int16 m_Type; // r9
  unsigned int v25; // edx
  signed __int32 v26; // edi
  char m_ObjectFlags; // cl
  FxTagTracker *v28; // rsi
  unsigned int m_ObjectSize; // edx
  _WDF_REQUEST_COMPLETION_PARAMS *v30; // r8
  _IRP *v31; // rcx
  PIRP v32; // rdi
  FX_POOL_TRACKER *v33; // rdi
  void *m_OriginalSystemBuffer; // rcx
  _MDL *m_OriginalMdl; // rcx
  FxRequestBase *v37; // rcx
  __int64 v38; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned int Flags; // edx
  unsigned __int16 v41; // r9
  const void *TraceObjectHandle; // rax
  _QWORD *v43; // r14
  void (__fastcall *v44)(unsigned __int64); // rax
  void (__fastcall *v45)(unsigned __int64); // rax
  char v46; // r8
  _QWORD *v47; // rcx
  _QWORD *v48; // r14
  const void *v49; // rcx
  __int64 v50; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  const void *v53; // rax
  const _GUID *RefType; // [rsp+28h] [rbp-E0h]
  FxTagTracker *_a2; // [rsp+38h] [rbp-D0h]
  FxVerifierLock *_a3; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+50h] [rbp-B8h] BYREF
  FxObject ParentObject; // [rsp+58h] [rbp-B0h] BYREF
  char v59; // [rsp+C0h] [rbp-48h]
  __int64 v60; // [rsp+C8h] [rbp-40h]
  _QWORD v61[4]; // [rsp+D0h] [rbp-38h] BYREF
  PIRP Irp; // [rsp+F0h] [rbp-18h]
  __int64 v63; // [rsp+F8h] [rbp-10h]
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // [rsp+100h] [rbp-8h]
  FxRequestTimer *v65; // [rsp+108h] [rbp+0h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  __int64 v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  int v69; // [rsp+128h] [rbp+20h]
  __int16 v70; // [rsp+12Ch] [rbp+24h]
  int v71; // [rsp+12Eh] [rbp+26h]
  __int16 v72; // [rsp+132h] [rbp+2Ah]
  int v73; // [rsp+134h] [rbp+2Ch]
  __int64 v74; // [rsp+138h] [rbp+30h]
  __int16 v75; // [rsp+140h] [rbp+38h]
  char v76; // [rsp+142h] [rbp+3Ah]
  int v77; // [rsp+143h] [rbp+3Bh]
  _MDL *Mdl; // [rsp+148h] [rbp+40h]
  FxCREvent Event; // [rsp+150h] [rbp+48h] BYREF
  FxRequestBase *p_ParentObject; // [rsp+170h] [rbp+68h]
  char v81; // [rsp+178h] [rbp+70h]
  FxVerifierLock *VerifierLock; // [rsp+188h] [rbp+80h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+88h] BYREF
  FxRequestBuffer outputBuf; // [rsp+240h] [rbp+138h] BYREF
  FxRequestBuffer inputBuf; // [rsp+260h] [rbp+158h] BYREF
  __int64 v86; // [rsp+280h] [rbp+178h]
  FxIoTarget *pTarget; // [rsp+2C8h] [rbp+1C0h] BYREF
  void *PPObject; // [rsp+2D0h] [rbp+1C8h] BYREF
  unsigned int _a1; // [rsp+2E0h] [rbp+1D8h]

  _a1 = Ioctl;
  v9 = 0LL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  v10 = Ioctl;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0uLL;
  v12 = (WDFIOTARGET__ *)IoTarget;
  v86 = 0LL;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0uLL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
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
  *(_QWORD *)&outputBuf.DataType = 0LL;
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
  v60 = 0LL;
  v59 = 1;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && v16->FxVerifierLock )
  {
    VerifierLock = 0LL;
    FxVerifierLock::CreateAndInitialize(&VerifierLock, v16, &ParentObject);
    _a3 = VerifierLock;
  }
  Irp = 0LL;
  v61[1] = v61;
  v66 = 0LL;
  v61[0] = v61;
  v67 = 0LL;
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  v70 = 0;
  v77 = 0x1000000;
  v63 = 0LL;
  v68 = 0LL;
  v71 = 1;
  p_m_CompletionParams = 0LL;
  v65 = 0LL;
  v61[3] = 0LL;
  v73 = 0;
  v74 = 0LL;
  v75 = 0;
  v69 = 0;
  Mdl = 0LL;
  v72 = 0;
  v76 = 0;
  Event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
  Event.m_Event.m_DbgFlagIsInitialized = 1;
  p_m_CompletionParams = &context.m_CompletionParams;
  v81 = 1;
  if ( Request )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
    v37 = (FxRequestBase *)PPObject;
    p_ParentObject = (FxRequestBase *)PPObject;
    v38 = *((_QWORD *)PPObject + 21);
    if ( v38 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)v38 + 24LL))(*((_QWORD *)PPObject + 21), PPObject);
      v37 = (FxRequestBase *)PPObject;
    }
    FxRequestBase::SetContext(v37, (FxRequestContext *)&context.m_CompletionParams);
    *((_BYTE *)PPObject + 234) |= 0x10u;
  }
  else
  {
    v76 |= 0x10u;
    p_ParentObject = (FxRequestBase *)&ParentObject;
  }
  ParentObject.m_ObjectSize = 0;
  v17 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, v12, Request, v10, Internal);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      v21 = -1073741808;
      goto LABEL_26;
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
    goto LABEL_26;
  }
LABEL_15:
  v19 = InputBuffer;
  if ( InputBuffer )
  {
    v20 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&inputBuf.u, m_Globals, InputBuffer, 0);
    v21 = v20;
    if ( v20 < 0 )
    {
      v41 = 39;
LABEL_83:
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v41, WPP_FxIoTargetAPI_cpp_Traceguids, v19, v20);
      goto LABEL_26;
    }
    v10 = _a1;
  }
  v19 = OutputBuffer;
  if ( !OutputBuffer )
    goto LABEL_21;
  v20 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&outputBuf.u, m_Globals, OutputBuffer, 0);
  v21 = v20;
  if ( v20 < 0 )
  {
    v41 = 40;
    goto LABEL_83;
  }
  v10 = _a1;
LABEL_21:
  v22 = FxIoTarget::FormatIoctlRequest(
          pTarget,
          p_ParentObject,
          v10,
          v17,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u);
  v21 = v22;
  if ( v22 < 0 )
  {
    WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, v22);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(p_ParentObject);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, v12, TraceObjectHandle);
    }
    v23 = FxIoTarget::SubmitSync(pTarget, p_ParentObject, v18, 0LL);
    v25 = (unsigned int)BytesReturned;
    v21 = v23;
    if ( BytesReturned )
      *BytesReturned = p_ParentObject->m_Irp.m_Irp->IoStatus.Information;
  }
LABEL_26:
  ParentObject.__vftable = (FxObject_vtbl *)&FxSyncRequest::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a2 )
    FxTagTracker::UpdateTagHistory(
      _a2,
      0LL,
      129,
      "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
      TagRelease,
      ParentObject.m_Refcnt - 1);
  v26 = _InterlockedDecrement(&ParentObject.m_Refcnt);
  if ( !v26 )
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
        v28 = _a2;
        if ( _a2 )
        {
          FxTagTracker::CheckForAbandondedTags(_a2);
          m_ObjectFlags = ParentObject.m_ObjectFlags;
        }
      }
      else
      {
        v28 = 0LL;
      }
      m_ObjectSize = ParentObject.m_ObjectSize;
      if ( ParentObject.m_ObjectSize && (m_ObjectFlags & 8) != 0 )
      {
        v43 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + ParentObject.m_ObjectSize);
        if ( v43 )
        {
          do
          {
            v44 = (void (__fastcall *)(unsigned __int64))v43[2];
            if ( v44 )
            {
              v44((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v43[2] = 0LL;
            }
            v45 = (void (__fastcall *)(unsigned __int64))v43[3];
            if ( v45 )
            {
              v45((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
              v43[3] = 0LL;
            }
            v43 = (_QWORD *)v43[1];
          }
          while ( v43 );
          m_ObjectSize = ParentObject.m_ObjectSize;
        }
        v46 = 1;
        if ( (_WORD)m_ObjectSize )
        {
          v47 = (FxObject_vtbl **)((char *)&ParentObject.__vftable + (unsigned __int16)m_ObjectSize);
          if ( v47 )
          {
            do
            {
              v48 = (_QWORD *)v47[1];
              if ( !v46 )
                FxPoolFree(v47);
              v46 = 0;
              v47 = v48;
            }
            while ( v48 );
          }
        }
      }
      if ( v28 )
      {
        _a2 = 0LL;
        FxTagTracker::`scalar deleting destructor'(v28, m_ObjectSize);
      }
      if ( (char *)ParentObject.SelfDestruct == (char *)FxSyncRequest::SelfDestruct )
      {
        if ( ParentObject.m_Globals->FxVerboseOn )
          WPP_IFR_SF_qq(ParentObject.m_Globals, 5u, 0xDu, 0xCu, WPP_FxSyncRequest_cpp_Traceguids, &ParentObject, &Event);
        KeSetEvent(&Event.m_Event.m_Event, 0, 0);
      }
      else
      {
        ParentObject.SelfDestruct(&ParentObject);
      }
    }
  }
  if ( p_ParentObject != &ParentObject )
  {
    if ( !v81 )
      goto LABEL_108;
    p_ParentObject->m_RequestContext = 0LL;
    p_ParentObject->m_RequestBaseFlags &= ~0x10u;
  }
  if ( v81 )
  {
    v30 = 0LL;
    p_m_CompletionParams = 0LL;
    goto LABEL_42;
  }
LABEL_108:
  v30 = p_m_CompletionParams;
LABEL_42:
  if ( v26 )
  {
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(ParentObject.m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, &ParentObject, &Event);
    FxCREvent::EnterCRAndWaitAndLeave(&Event);
    if ( ParentObject.m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(ParentObject.m_Globals, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, &ParentObject, &Event);
    v30 = p_m_CompletionParams;
  }
  ParentObject.__vftable = (FxObject_vtbl *)&FxRequestBase::`vftable';
  if ( Mdl )
  {
    if ( ParentObject.m_Globals->FxVerifierOn )
      FxMdlFreeDebug(ParentObject.m_Globals, Mdl);
    else
      IoFreeMdl(Mdl);
    v30 = p_m_CompletionParams;
  }
  v31 = Irp;
  v32 = Irp;
  if ( v30 )
  {
    if ( Irp )
    {
      (*(void (__fastcall **)(_WDF_REQUEST_COMPLETION_PARAMS *, FxObject *))(*(_QWORD *)&v30->Size + 24LL))(
        v30,
        &ParentObject);
      v30 = p_m_CompletionParams;
      v31 = Irp;
    }
    if ( v30 )
    {
      (**(void (__fastcall ***)(_WDF_REQUEST_COMPLETION_PARAMS *, __int64))&v30->Size)(v30, 1LL);
      v31 = Irp;
    }
  }
  if ( v32 && HIBYTE(v70) == 1 )
    IoFreeIrp(v31);
  if ( v65 )
    FxRequestTimer::`scalar deleting destructor'(v65, v25);
  ParentObject.__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a3 )
    FxVerifierLock::`scalar deleting destructor'(_a3, v25);
  ParentObject.__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  v59 = 0;
  if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 && _a2 )
    FxTagTracker::`scalar deleting destructor'(_a2, v25);
  if ( ParentObject.m_ParentObject
    || ParentObject.m_ChildListHead.Flink != &ParentObject.m_ChildListHead
    || ParentObject.m_ChildEntry.Flink != &ParentObject.m_ChildEntry )
  {
    v50 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_149;
    m_Type = ParentObject.m_Type;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      LODWORD(v30) = *p_ObjectType;
      if ( ParentObject.m_Type == (_WORD)v30 )
        break;
      if ( ParentObject.m_Type > (unsigned __int16)v30 )
      {
        v50 = (unsigned int)(v50 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v50 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_149;
    }
    HandleName = FxObjectsInfo[v50].HandleName;
    if ( !HandleName )
LABEL_149:
      HandleName = "WDFOBJECT";
    if ( ParentObject.m_ObjectSize )
      v53 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v53 = 0LL;
    WPP_IFR_SF_sqq(
      ParentObject.m_Globals,
      (unsigned __int8)HandleName,
      (unsigned int)v30,
      m_Type,
      RefType,
      HandleName,
      v53,
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
        v49 = (const void *)((unsigned __int64)&ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v49 = 0LL;
      WPP_IFR_SF_qqLL(
        ParentObject.m_Globals,
        5u,
        0x14u,
        0xAu,
        WPP_FxObject_hpp_Traceguids,
        &ParentObject,
        v49,
        ParentObject.m_ObjectState,
        0xCu);
    }
    if ( SLOBYTE(ParentObject.m_ObjectFlags) < 0 )
      *((_BYTE *)&ParentObject + _InterlockedIncrement((volatile signed __int32 *)&v57) - 16) = 12;
  }
  ParentObject.m_ObjectState = 12;
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  ParentObject.m_SpinLock.m_DbgFlagIsInitialized = 0;
  if ( context.m_OriginalSystemBuffer )
  {
    if ( ((__int64)context.m_OriginalSystemBuffer & 0xFFF) != 0 )
    {
      v33 = (FX_POOL_TRACKER *)*((_QWORD *)context.m_OriginalSystemBuffer - 2);
      if ( *(_BYTE *)(*((_QWORD *)context.m_OriginalSystemBuffer - 1) + 264LL) )
      {
        if ( FxIsPagedPoolType(v33->PoolType) )
          FxPoolRemovePagedAllocateTracker(v33);
        else
          FxPoolRemoveNonPagedAllocateTracker(v33);
        memset(v33, 0, v33->Size + 64);
      }
      m_OriginalSystemBuffer = v33;
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
