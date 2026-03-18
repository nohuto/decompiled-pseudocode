/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0009D68 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000EF80 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001CFE0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0035434 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0035500 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C006721C (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C418 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007DA6C (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0093E50 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00953C8 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C009575C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00D38F8 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        unsigned int Flags)
{
  const void *v5; // rsi
  __int64 v9; // r8
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned int v14; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  FxPkgIo *m_PkgIo; // rcx
  __int64 v18; // r13
  __int64 p_m_ExecutionLevel; // r13
  FxDeviceBase *m_DeviceBase; // rcx
  FxRequest *v21; // r15
  __int64 v22; // rax
  _FX_DRIVER_GLOBALS *v23; // r12
  _FX_DRIVER_GLOBALS *v24; // rdx
  FX_POOL_TRACKER *v25; // rbx
  _QWORD *p_Flink; // r12
  FxVerifierLock *v27; // rax
  FxRequest *v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r8
  FxDeviceBase *v32; // r11
  _FX_DRIVER_GLOBALS *v33; // rax
  unsigned __int8 v34; // r8
  FxObject *v35; // r11
  _FX_DRIVER_GLOBALS *v36; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _FX_DRIVER_GLOBALS *v41; // rax
  int _a1; // r12d
  char v43; // al
  FxPkgIo *v44; // rbx
  FxIoInCallerContext *v45; // rax
  char v46; // al
  unsigned __int8 v47; // bl
  unsigned __int8 v48; // r8
  unsigned int _a4; // ecx
  _FX_DRIVER_GLOBALS *v50; // rcx
  unsigned __int16 v51; // r9
  FxDeviceBase *v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  unsigned int v56; // ebx
  FxIoInCallerContext *v57; // rax
  FxIoInCallerContext *p_m_InCallerContextCallback; // rax
  _FX_DRIVER_GLOBALS *v59; // rdx
  int v60; // eax
  unsigned __int16 v61; // ax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  int v64; // eax
  FxVerifierLock *v65; // rcx
  _FX_DRIVER_GLOBALS *v66; // r11
  const char *_a5; // r10
  const void *globals; // r8
  const void *v69; // rdx
  const void *v70; // rdx
  unsigned __int8 v71; // r8
  const _GUID *Offset; // [rsp+20h] [rbp-61h]
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp-31h] BYREF
  char v74; // [rsp+51h] [rbp-30h]
  void *PPObject; // [rsp+58h] [rbp-29h] BYREF
  FxDeviceBase *v76; // [rsp+60h] [rbp-21h]
  FxRequest *ReservedRequest; // [rsp+68h] [rbp-19h] BYREF
  void *v78; // [rsp+70h] [rbp-11h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+78h] [rbp-9h] BYREF
  FxPkgIo *v80; // [rsp+80h] [rbp-1h]
  void *v81; // [rsp+88h] [rbp+7h] BYREF
  FxIoInCallerContext *InCallerContextInfo; // [rsp+90h] [rbp+Fh]
  MxLock *p_m_SpinLock; // [rsp+98h] [rbp+17h]
  _IRP *ppIrp; // [rsp+A0h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]
  FxRequest *Request; // [rsp+E8h] [rbp+67h] BYREF

  v5 = 0LL;
  v78 = 0LL;
  InCallerContextInfo = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v9) = 0;
  v10 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v10->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4098 )
  {
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Device, 0x1002u, v9);
    v10 = (FxDevice *)PPObject;
  }
  m_Globals = v10->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    v10 = (FxDevice *)PPObject;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v12) = 0;
  v13 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)v13;
    v13 -= v12;
  }
  if ( *(_WORD *)(v13 + 8) == 4099 )
  {
    v78 = (void *)v13;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v13, &v78, (void *)Queue, 0x1003u, v12);
    v10 = (FxDevice *)PPObject;
    v13 = (unsigned __int64)v78;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v14 = Flags;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v55 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, v10, Irp, (FxIoQueue *)v13, v14);
    v56 = v55;
    if ( v55 < 0 )
    {
      Irp->IoStatus.Status = v55;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v56;
    }
    v13 = (unsigned __int64)v78;
    v10 = (FxDevice *)PPObject;
  }
  if ( v10->m_ParentDevice == *(FxDevice **)(v13 + 96) )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v16 = --Irp->Tail.Overlay.CurrentStackLocation;
    PPObject = (void *)*((_QWORD *)PPObject + 28);
    v16->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
    v13 = (unsigned __int64)v78;
    v10 = (FxDevice *)PPObject;
  }
  if ( (v14 & 1) != 0 )
  {
    v57 = *(FxIoInCallerContext **)(v13 + 360);
    if ( v57 )
      p_m_InCallerContextCallback = v57 + 3;
    else
      p_m_InCallerContextCallback = &v10->m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = p_m_InCallerContextCallback;
  }
  m_PkgIo = v10->m_PkgIo;
  v80 = m_PkgIo;
  v74 = 0;
  LOBYTE(Request) = v13 && *(_BYTE *)(v13 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    m_PkgIo = v80;
    v74 = 1;
  }
  if ( v13 && (v18 = *(_QWORD *)(v13 + 360)) != 0 )
    p_m_ExecutionLevel = v18 + 32;
  else
    p_m_ExecutionLevel = (__int64)&m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v21 = 0LL;
  v76 = m_DeviceBase;
  ReservedRequest = 0LL;
  v22 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v23 = m_DeviceBase->m_Globals;
  VerifierLock = (FxVerifierLock *)v23;
  if ( v22 && *(_WORD *)(v22 + 8) == 4354 && *(_BYTE *)(v22 + 1667) )
  {
    p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
    v25 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v25 )
      goto LABEL_31;
    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
            *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
            HIDWORD(p_m_SpinLock[2].m_Lock),
            LODWORD(p_m_SpinLock[2].m_Lock));
    goto LABEL_88;
  }
  ++HIDWORD(m_DeviceBase[2].m_ParentObject);
  v25 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
  if ( !v25 )
  {
    v53 = v76;
    ++LODWORD(v76[2].m_ChildEntry.Flink);
    v54 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v53[2].m_DeviceBase)(
            HIDWORD(v53[2].m_ChildEntry.Blink),
            HIDWORD(v53[2].m_DisposeSingleEntry.Next),
            LODWORD(v53[2].m_DisposeSingleEntry.Next));
LABEL_88:
    v25 = (FX_POOL_TRACKER *)v54;
  }
LABEL_31:
  if ( v25 )
  {
    if ( v23->FxPoolTrackingOn )
    {
      p_Flink = &v25[1].Link.Flink;
      FxPoolInsertNonPagedAllocateTracker(
        (FX_POOL *)&VerifierLock->m_ParentObject,
        v25,
        (unsigned __int64)v76[2].m_CallbackLockObjectPtr,
        *(&VerifierLock->m_Mutex.m_Lock.Contention + 1),
        retaddr);
    }
    else
    {
      p_Flink = &v25->Link.Flink;
    }
    v27 = VerifierLock;
    *p_Flink = v25;
    v28 = (FxRequest *)(p_Flink + 2);
    p_Flink[1] = v27;
    if ( p_m_ExecutionLevel )
      v29 = p_m_ExecutionLevel;
    else
      v29 = (__int64)&v76[2].m_ExecutionLevel;
    if ( LOBYTE(v27[1].m_ThreadTableEntry.PerThreadPassiveLockList) )
    {
      memset(v28, 0, 0x30uLL);
      LODWORD(v28->m_ChildListHead.Flink) = 1146058822;
      v28 = (FxRequest *)((char *)v28 + 48);
    }
    v28[1].m_Globals = 0LL;
    *(_QWORD *)&v28[1].m_ObjectFlags = 0LL;
    v28[1].m_ChildListHead.Flink = 0LL;
    v28[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v28[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    *(_QWORD *)&v28[1].m_Type = v28;
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 48);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v29 + 40);
        if ( !v31 )
          v31 = *(_QWORD *)(v30 + 16);
        memset(&v28[1].m_SpinLock.m_Lock, 0, (v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v28[1].m_ChildListHead.Blink = *(_LIST_ENTRY **)(v29 + 48);
    }
    if ( v28 )
    {
      v32 = v76;
      v28->m_Globals = v76->m_Globals;
      v28->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v28->m_Type = 24121352;
      v28->m_SpinLock.m_Lock = 0LL;
      v28->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v28->m_Refcnt = 1;
      *(_DWORD *)&v28->m_ObjectFlags = 0x10000;
      v28->m_ParentObject = 0LL;
      v28->m_ChildListHead.Blink = &v28->m_ChildListHead;
      v28->m_ChildListHead.Flink = &v28->m_ChildListHead;
      v28->m_ChildEntry.Blink = &v28->m_ChildEntry;
      v28->m_ChildEntry.Flink = &v28->m_ChildEntry;
      v33 = v28->m_Globals;
      v28->m_DisposeSingleEntry.Next = 0LL;
      v28->m_DeviceBase = 0LL;
      if ( v33->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v28, v24, 0);
        v32 = v76;
      }
      v28->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
      v28->m_NPLock.m_Lock = 0LL;
      v28->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v28->m_ObjectFlags) < 0 )
      {
        v59 = v28->m_Globals;
        if ( v59->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v59, v28);
          v32 = v76;
          v28[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)VerifierLock;
        }
      }
      v28->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
      v28->m_Irp.m_Irp = Irp;
      v28->m_CancelRoutine.m_Cancel = 0LL;
      v28->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v28->m_TargetFlags = 0;
      v28->m_CanComplete = 1;
      v28->m_Target = 0LL;
      v28->m_TargetCompletionContext = 0LL;
      v28->m_Completed = v28->m_Irp.m_Irp == 0LL;
      v28->m_Canceled = 0;
      v28->m_PriorityBoost = 0;
      v28->m_RequestContext = 0LL;
      v28->m_Timer = 0LL;
      v28->m_CsqContext.Irp = (_IRP *)&v28->120;
      v28->m_ListEntry.Flink = (_LIST_ENTRY *)&v28->120;
      v28->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v28->m_SystemBufferOffset = 216LL;
      v28->m_IrpQueue = 0LL;
      v28->m_IrpCompletionReferenceCount = 0;
      v28->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v28->m_OutputBufferOffset = 232;
      v28->m_CompletionState = 0;
      v28->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
      v28->m_SystemBuffer.m_Buffer = 0LL;
      v28->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
      v28->m_OutputBuffer.m_Buffer = 0LL;
      v28->m_IoQueue = 0LL;
      v28->m_PowerStopState = 0;
      v28->m_OwnerListEntry.Blink = &v28->m_OwnerListEntry;
      v28->m_OwnerListEntry.Flink = &v28->m_OwnerListEntry;
      v28->m_OwnerListEntry2.Blink = &v28->m_OwnerListEntry2;
      v28->m_OwnerListEntry2.Flink = &v28->m_OwnerListEntry2;
      v28->m_ForwardProgressList.Blink = &v28->m_ForwardProgressList;
      v28->m_ForwardProgressList.Flink = &v28->m_ForwardProgressList;
      v28->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
      v28->m_Presented = 0;
      *(_WORD *)&v28->m_Reserved = 0;
      v28->m_ForwardProgressQueue = 0LL;
      v28->m_InternalContext = 0LL;
      v28->m_DeviceBase = v32->m_DeviceBase;
      FxRequest::AssignMemoryBuffers(v28, (_WDF_DEVICE_IO_TYPE)v32[1].m_Refcnt);
      if ( v35->m_Globals->FxRequestParentOptimizationOn )
      {
        v36 = 0LL;
        v81 = 0LL;
        if ( !v28->m_ObjectSize )
        {
          _a1 = -1073741816;
LABEL_117:
          WPP_IFR_SF_d(v35->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
          FxObject::DeleteFromFailedCreate(v28);
          goto LABEL_66;
        }
        if ( !p_m_ExecutionLevel )
        {
LABEL_62:
          v41 = v28->m_Globals;
          v28->m_ObjectFlags |= 8u;
          if ( v41->FxVerifierOn )
            FxObject::Vf_VerifyLeakDetectionConsiderObject(v28, v36);
          _a1 = 0;
          goto LABEL_65;
        }
        if ( *(_DWORD *)(p_m_ExecutionLevel + 24) == 2 )
        {
          FxObject::MarkPassiveCallbacks(v28, ObjectLock);
          v36 = (_FX_DRIVER_GLOBALS *)v81;
        }
        if ( *(_QWORD *)(p_m_ExecutionLevel + 32) )
        {
          FxObjectHandleGetPtr(v28->m_Globals, *(_QWORD *)(p_m_ExecutionLevel + 32), 0x1000u, &v81);
          v36 = (_FX_DRIVER_GLOBALS *)v81;
        }
        if ( !v36 || (_a1 = FxObject::AssignParentObject(v28, (FxObject *)v36), _a1 >= 0) )
        {
          m_ObjectSize = v28->m_ObjectSize;
          if ( m_ObjectSize )
            v38 = (char *)v28 + m_ObjectSize;
          else
            v38 = 0LL;
          v39 = *(_QWORD *)(p_m_ExecutionLevel + 16);
          if ( v39 )
            *((_QWORD *)v38 + 3) = v39;
          v40 = *(_QWORD *)(p_m_ExecutionLevel + 8);
          if ( v40 )
          {
            *((_QWORD *)v38 + 2) = v40;
            v28->m_ObjectFlags |= 0x400u;
          }
          goto LABEL_62;
        }
      }
      else
      {
        _a1 = FxObject::Commit(v28, (_FX_DRIVER_GLOBALS *)p_m_ExecutionLevel, 0LL, v35, 0);
      }
      if ( _a1 >= 0 )
      {
LABEL_65:
        v21 = v28;
        ReservedRequest = v28;
        goto LABEL_66;
      }
      v35 = v76;
      goto LABEL_117;
    }
  }
  _a1 = -1073741670;
  WPP_IFR_SF_d(v76->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
LABEL_66:
  v43 = (char)Request;
  v44 = v80;
  if ( (_BYTE)Request )
  {
    if ( _a1 < 0 )
    {
LABEL_119:
      if ( v44->m_Filter && !v13 )
        goto LABEL_133;
      if ( v43 )
      {
        v60 = FxIoQueue::GetReservedRequest((FxIoQueue *)v13, Irp, &ReservedRequest);
        _a1 = v60;
        if ( v60 == 259 )
          goto LABEL_84;
        if ( v60 >= 0 )
          goto LABEL_124;
      }
      else
      {
        WPP_IFR_SF_d(v44->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
      }
LABEL_133:
      Irp->IoStatus.Status = _a1;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_84;
    }
    if ( (v80->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v80, v21);
    v43 = (char)Request;
  }
  if ( _a1 < 0 )
    goto LABEL_119;
  if ( v43 && *(_QWORD *)(*(_QWORD *)(v13 + 128) + 16LL) )
  {
    v61 = v21->m_ObjectSize;
    v62 = (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v21->m_Presented = 1;
    if ( !v61 )
      v62 = 0LL;
    v63 = v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v13 + 10) )
      v63 = 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)(v13 + 128) + 16LL))(
           v63,
           v62,
           *(_QWORD *)(v13 + 128)) < 0 )
    {
      FxRequest::FreeRequest(v21);
      ReservedRequest = 0LL;
      v64 = FxIoQueue::GetReservedRequest((FxIoQueue *)v13, Irp, &ReservedRequest);
      _a1 = v64;
      if ( v64 == 259 )
        goto LABEL_84;
      if ( v64 < 0 )
        goto LABEL_133;
LABEL_124:
      v21 = ReservedRequest;
    }
  }
  v45 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v21->m_Reserved )
  {
    v21->m_InternalContext = (void *)v13;
    _a1 = FxPkgIo::DispathToInCallerContextCallback(v44, v45, v21, Irp);
    goto LABEL_84;
  }
  v46 = *(_BYTE *)(v13 + 24);
  Request = v21;
  if ( v46 < 0 && (v65 = *(FxVerifierLock **)(v13 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v65, &PreviousIrql, v34);
    v47 = PreviousIrql;
  }
  else
  {
    v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 112));
    PreviousIrql = v47;
  }
  if ( v21->m_Reserved )
    FxObject::AddRef(v21, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = *(_DWORD *)(v13 + 188);
  if ( (_a4 & 1) == 0 )
  {
    v66 = *(_FX_DRIVER_GLOBALS **)(v13 + 16);
    _a1 = -1073741436;
    if ( v66->FxVerboseOn )
    {
      _a5 = "power stopping (Drain) in progress,";
      if ( (_a4 & 0x10000) == 0 )
        _a5 = a5;
      if ( v21->m_ObjectSize )
        globals = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      v69 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v13 + 10) )
        v69 = 0LL;
      WPP_IFR_SF_qLsqd(v66, 5u, (unsigned int)globals, 0x29u, Offset, v69, _a4, _a5, globals, -1073741436);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v13, v47, v48);
    v21->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v21, -1073741436);
    v21->Release(v21, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_84;
  }
  v50 = *(_FX_DRIVER_GLOBALS **)(v13 + 16);
  if ( v50->FxVerboseOn )
  {
    v70 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v13 + 10) )
      v70 = 0LL;
    if ( v21->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v50, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v70);
  }
  FxRequest::GetIrp(v21, &ppIrp);
  v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v21->m_Reserved )
  {
    if ( *(_DWORD *)(v13 + 368) )
    {
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v13, &Request, (unsigned int *)PreviousIrql);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v13, PreviousIrql, v71);
      goto LABEL_83;
    }
    v21 = ReservedRequest;
    v47 = PreviousIrql;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v13, v47, v21, v51);
LABEL_83:
  _a1 = 259;
LABEL_84:
  if ( v74 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
