/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00065B4 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000BAF8 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C001B86C (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C001BA30 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001C300 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063DB0 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C00785D0 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0079C68 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C008FDEC (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00912B4 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0091634 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C8380 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        unsigned int Flags)
{
  const void *v5; // rsi
  FxDevice *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  FxPkgIo *m_PkgIo; // rcx
  __int64 v18; // r13
  __int64 p_m_ExecutionLevel; // r13
  FxDeviceBase *m_DeviceBase; // rdx
  FxRequest *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rcx
  FX_POOL_TRACKER *v24; // rbx
  _FX_DRIVER_GLOBALS *v25; // rdx
  _QWORD *p_Flink; // rax
  FxRequest *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r8
  FxDeviceBase *v30; // r11
  _FX_DRIVER_GLOBALS *v31; // rax
  unsigned __int8 v32; // r8
  FxObject *v33; // r11
  FxObject *v34; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int _a1; // r12d
  char v40; // al
  FxPkgIo *v41; // rbx
  FxIoInCallerContext *v42; // rax
  char v43; // al
  unsigned __int8 v44; // bl
  unsigned __int8 v45; // r8
  unsigned int _a4; // eax
  _FX_DRIVER_GLOBALS *v47; // rcx
  unsigned __int16 v48; // r9
  FxDeviceBase *v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  unsigned int v53; // ebx
  FxIoInCallerContext *v54; // rax
  FxIoInCallerContext *p_m_InCallerContextCallback; // rax
  _FX_DRIVER_GLOBALS *v56; // rdx
  int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  int v60; // eax
  FxVerifierLock *v61; // rcx
  _FX_DRIVER_GLOBALS *v62; // r10
  const char *_a5; // r8
  const void *globals; // rdx
  const void *v65; // rcx
  __int64 v66; // r8
  unsigned __int16 v67; // r9
  const void *v68; // rax
  unsigned __int8 v69; // r8
  const _GUID *Offset; // [rsp+20h] [rbp-61h]
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp-31h] BYREF
  char v72; // [rsp+51h] [rbp-30h]
  void *PPObject; // [rsp+58h] [rbp-29h] BYREF
  FxDeviceBase *v74; // [rsp+60h] [rbp-21h]
  FxRequest *ReservedRequest; // [rsp+68h] [rbp-19h] BYREF
  void *v76; // [rsp+70h] [rbp-11h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+78h] [rbp-9h] BYREF
  FxPkgIo *v78; // [rsp+80h] [rbp-1h]
  void *v79; // [rsp+88h] [rbp+7h] BYREF
  FxIoInCallerContext *InCallerContextInfo; // [rsp+90h] [rbp+Fh]
  MxLock *p_m_SpinLock; // [rsp+98h] [rbp+17h]
  _IRP *ppIrp; // [rsp+A0h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]
  FxRequest *Request; // [rsp+E8h] [rbp+67h] BYREF

  v5 = 0LL;
  v76 = 0LL;
  InCallerContextInfo = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4098 )
  {
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, (void *)Device, 0x1002u, v10);
    v9 = (FxDevice *)PPObject;
  }
  m_Globals = v9->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    v9 = (FxDevice *)PPObject;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v12 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v13) = 0;
  if ( (Queue & 1) != 0 )
  {
    v13 = *(unsigned __int16 *)v12;
    v12 -= v13;
  }
  if ( *(_WORD *)(v12 + 8) == 4099 )
  {
    v76 = (void *)v12;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v12, &v76, (void *)Queue, 0x1003u, v13);
    v9 = (FxDevice *)PPObject;
    v12 = (unsigned __int64)v76;
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
    v52 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, v9, Irp, (FxIoQueue *)v12, v14);
    v53 = v52;
    if ( v52 < 0 )
    {
      Irp->IoStatus.Status = v52;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v53;
    }
    v12 = (unsigned __int64)v76;
    v9 = (FxDevice *)PPObject;
  }
  if ( v9->m_ParentDevice == *(FxDevice **)(v12 + 96) )
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
    v12 = (unsigned __int64)v76;
    v9 = (FxDevice *)PPObject;
  }
  if ( (v14 & 1) != 0 )
  {
    v54 = *(FxIoInCallerContext **)(v12 + 360);
    if ( v54 )
      p_m_InCallerContextCallback = v54 + 3;
    else
      p_m_InCallerContextCallback = &v9->m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = p_m_InCallerContextCallback;
  }
  m_PkgIo = v9->m_PkgIo;
  v78 = m_PkgIo;
  v72 = 0;
  LOBYTE(Request) = v12 && *(_BYTE *)(v12 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    m_PkgIo = v78;
    v72 = 1;
  }
  if ( v12 && (v18 = *(_QWORD *)(v12 + 360)) != 0 )
    p_m_ExecutionLevel = v18 + 32;
  else
    p_m_ExecutionLevel = (__int64)&m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v21 = 0LL;
  v74 = m_DeviceBase;
  v22 = p_m_ExecutionLevel;
  ReservedRequest = 0LL;
  v23 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  VerifierLock = (FxVerifierLock *)m_DeviceBase->m_Globals;
  if ( v23 && *(_WORD *)(v23 + 8) == 4354 && *(_BYTE *)(v23 + 1651) )
  {
    p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
    v24 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v24 )
      goto LABEL_31;
    v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
            *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
            HIDWORD(p_m_SpinLock[2].m_Lock),
            LODWORD(p_m_SpinLock[2].m_Lock));
    goto LABEL_86;
  }
  ++HIDWORD(m_DeviceBase[2].m_ParentObject);
  v24 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
  if ( !v24 )
  {
    v50 = v74;
    ++LODWORD(v74[2].m_ChildEntry.Flink);
    v51 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v50[2].m_DeviceBase)(
            HIDWORD(v50[2].m_ChildEntry.Blink),
            HIDWORD(v50[2].m_DisposeSingleEntry.Next),
            LODWORD(v50[2].m_DisposeSingleEntry.Next));
LABEL_86:
    v24 = (FX_POOL_TRACKER *)v51;
  }
LABEL_31:
  if ( v24 )
  {
    v25 = (_FX_DRIVER_GLOBALS *)VerifierLock;
    if ( LOBYTE(VerifierLock[1].m_Mutex.m_Lock.Event.Header.WaitListHead.Blink) )
    {
      FxPoolInsertNonPagedAllocateTracker(
        (FX_POOL *)&VerifierLock->m_ParentObject,
        v24,
        (unsigned __int64)v74[2].m_CallbackLockObjectPtr,
        *(&VerifierLock->m_Mutex.m_Lock.Contention + 1),
        retaddr);
      v25 = (_FX_DRIVER_GLOBALS *)VerifierLock;
      p_Flink = &v24[1].Link.Flink;
    }
    else
    {
      p_Flink = &v24->Link.Flink;
    }
    *p_Flink = v24;
    v27 = (FxRequest *)(p_Flink + 2);
    p_Flink[1] = v25;
    if ( !p_m_ExecutionLevel )
      v22 = (__int64)&v74[2].m_ExecutionLevel;
    if ( v25->FxVerifierHandle )
    {
      memset(p_Flink + 2, 0, 0x20uLL);
      *(_DWORD *)(&v27->m_ObjectState + 1) = 1146058822;
      v27 = (FxRequest *)((char *)v27 + 32);
    }
    v27[1].m_Globals = 0LL;
    *(_QWORD *)&v27[1].m_ObjectFlags = 0LL;
    v27[1].m_ChildListHead.Flink = 0LL;
    v27[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v27[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    *(_QWORD *)&v27[1].m_Type = v27;
    if ( v22 )
    {
      v28 = *(_QWORD *)(v22 + 48);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v22 + 40);
        if ( !v29 )
          v29 = *(_QWORD *)(v28 + 16);
        memset(&v27[1].m_SpinLock.m_Lock, 0, (v29 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v27[1].m_ChildListHead.Blink = *(_LIST_ENTRY **)(v22 + 48);
    }
    if ( v27 )
    {
      v30 = v74;
      v27->m_Globals = v74->m_Globals;
      v27->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v27->m_Type = 24121352;
      v27->m_SpinLock.m_Lock = 0LL;
      v27->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v27->m_Refcnt = 1;
      *(_DWORD *)&v27->m_ObjectFlags = 0x10000;
      v27->m_ParentObject = 0LL;
      v27->m_ChildListHead.Blink = &v27->m_ChildListHead;
      v27->m_ChildListHead.Flink = &v27->m_ChildListHead;
      v27->m_ChildEntry.Blink = &v27->m_ChildEntry;
      v27->m_ChildEntry.Flink = &v27->m_ChildEntry;
      v31 = v27->m_Globals;
      v27->m_DisposeSingleEntry.Next = 0LL;
      v27->m_DeviceBase = 0LL;
      if ( v31->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v27, v25, 0);
        v30 = v74;
      }
      v27->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      v27->m_NPLock.m_Lock = 0LL;
      v27->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v27->m_ObjectFlags) < 0 )
      {
        v56 = v27->m_Globals;
        if ( v56->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v56, v27);
          v30 = v74;
          v27[-1].m_ForwardProgressQueue = (FxIoQueue *)VerifierLock;
        }
      }
      v27->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      v27->m_Irp.m_Irp = Irp;
      v27->m_CancelRoutine.m_Cancel = 0LL;
      v27->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v27->m_TargetFlags = 0;
      v27->m_CanComplete = 1;
      v27->m_Target = 0LL;
      v27->m_TargetCompletionContext = 0LL;
      v27->m_Completed = v27->m_Irp.m_Irp == 0LL;
      v27->m_Canceled = 0;
      v27->m_PriorityBoost = 0;
      v27->m_RequestContext = 0LL;
      v27->m_Timer = 0LL;
      v27->m_CsqContext.Irp = (_IRP *)&v27->120;
      v27->m_ListEntry.Flink = (_LIST_ENTRY *)&v27->120;
      v27->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v27->m_SystemBufferOffset = 216LL;
      v27->m_IrpQueue = 0LL;
      v27->m_IrpCompletionReferenceCount = 0;
      v27->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v27->m_OutputBufferOffset = 232;
      v27->m_CompletionState = 0;
      v27->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
      v27->m_SystemBuffer.m_Buffer = 0LL;
      v27->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
      v27->m_OutputBuffer.m_Buffer = 0LL;
      v27->m_IoQueue = 0LL;
      v27->m_PowerStopState = 0;
      v27->m_OwnerListEntry.Blink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry.Flink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry2.Blink = &v27->m_OwnerListEntry2;
      v27->m_OwnerListEntry2.Flink = &v27->m_OwnerListEntry2;
      v27->m_ForwardProgressList.Blink = &v27->m_ForwardProgressList;
      v27->m_ForwardProgressList.Flink = &v27->m_ForwardProgressList;
      v27->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
      v27->m_Presented = 0;
      *(_WORD *)&v27->m_Reserved = 0;
      v27->m_ForwardProgressQueue = 0LL;
      v27->m_InternalContext = 0LL;
      v27->m_DeviceBase = v30->m_DeviceBase;
      FxRequest::AssignMemoryBuffers(v27, (_WDF_DEVICE_IO_TYPE)v30[1].m_Refcnt);
      if ( v33->m_Globals->FxRequestParentOptimizationOn )
      {
        v34 = 0LL;
        v79 = 0LL;
        if ( !v27->m_ObjectSize )
        {
          _a1 = -1073741816;
LABEL_114:
          WPP_IFR_SF_d(v33->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
          FxObject::DeleteFromFailedCreate(v27);
          goto LABEL_64;
        }
        if ( !p_m_ExecutionLevel )
        {
LABEL_62:
          v27->m_ObjectFlags |= 8u;
          _a1 = 0;
LABEL_63:
          v21 = v27;
          ReservedRequest = v27;
          goto LABEL_64;
        }
        if ( *(_DWORD *)(p_m_ExecutionLevel + 24) == 2 )
        {
          FxObject::MarkPassiveCallbacks(v27, ObjectLock);
          v34 = (FxObject *)v79;
        }
        if ( *(_QWORD *)(p_m_ExecutionLevel + 32) )
        {
          FxObjectHandleGetPtr(v27->m_Globals, *(_QWORD *)(p_m_ExecutionLevel + 32), 0x1000u, &v79);
          v34 = (FxObject *)v79;
        }
        if ( !v34 || (_a1 = FxObject::AssignParentObject(v27, v34), _a1 >= 0) )
        {
          m_ObjectSize = v27->m_ObjectSize;
          if ( m_ObjectSize )
            v36 = (char *)v27 + m_ObjectSize;
          else
            v36 = 0LL;
          v37 = *(_QWORD *)(p_m_ExecutionLevel + 16);
          if ( v37 )
            *((_QWORD *)v36 + 3) = v37;
          v38 = *(_QWORD *)(p_m_ExecutionLevel + 8);
          if ( v38 )
          {
            *((_QWORD *)v36 + 2) = v38;
            v27->m_ObjectFlags |= 0x400u;
          }
          goto LABEL_62;
        }
      }
      else
      {
        _a1 = FxObject::Commit(v27, (_WDF_OBJECT_ATTRIBUTES *)p_m_ExecutionLevel, 0LL, v33, 0);
      }
      if ( _a1 >= 0 )
        goto LABEL_63;
      v33 = v74;
      goto LABEL_114;
    }
  }
  _a1 = -1073741670;
  WPP_IFR_SF_d(v74->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
LABEL_64:
  v40 = (char)Request;
  v41 = v78;
  if ( (_BYTE)Request )
  {
    if ( _a1 < 0 )
    {
LABEL_116:
      if ( v41->m_Filter && !v12 )
        goto LABEL_132;
      if ( v40 )
      {
        v57 = FxIoQueue::GetReservedRequest((FxIoQueue *)v12, Irp, &ReservedRequest);
        _a1 = v57;
        if ( v57 == 259 )
          goto LABEL_82;
        if ( v57 >= 0 )
          goto LABEL_121;
      }
      else
      {
        WPP_IFR_SF_d(v41->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
      }
LABEL_132:
      Irp->IoStatus.Status = _a1;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_82;
    }
    if ( (v78->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v78, v21);
    v40 = (char)Request;
  }
  if ( _a1 < 0 )
    goto LABEL_116;
  if ( v40 && *(_QWORD *)(*(_QWORD *)(v12 + 128) + 16LL) )
  {
    v21->m_Presented = 1;
    v58 = v21->m_ObjectSize ? (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    v59 = *(_WORD *)(v12 + 10) ? v12 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)(v12 + 128) + 16LL))(v59, v58) < 0 )
    {
      FxRequest::FreeRequest(v21);
      ReservedRequest = 0LL;
      v60 = FxIoQueue::GetReservedRequest((FxIoQueue *)v12, Irp, &ReservedRequest);
      _a1 = v60;
      if ( v60 == 259 )
        goto LABEL_82;
      if ( v60 < 0 )
        goto LABEL_132;
LABEL_121:
      v21 = ReservedRequest;
    }
  }
  v42 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v21->m_Reserved )
  {
    v21->m_InternalContext = (void *)v12;
    _a1 = FxPkgIo::DispathToInCallerContextCallback(v41, v42, v21, Irp);
    goto LABEL_82;
  }
  v43 = *(_BYTE *)(v12 + 24);
  Request = v21;
  if ( v43 < 0 && (v61 = *(FxVerifierLock **)(v12 - 24)) != 0LL )
  {
    FxVerifierLock::Lock(v61, &PreviousIrql, v32);
    v44 = PreviousIrql;
  }
  else
  {
    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 112));
    PreviousIrql = v44;
  }
  if ( v21->m_Reserved )
    FxObject::AddRef(v21, (void *)0x50647746, 2308, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = *(_DWORD *)(v12 + 188);
  if ( (_a4 & 1) == 0 )
  {
    v62 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
    _a1 = -1073741436;
    if ( v62->FxVerboseOn )
    {
      _a5 = "power stopping (Drain) in progress,";
      if ( (_a4 & 0x10000) == 0 )
        _a5 = &a5;
      if ( v21->m_ObjectSize )
        globals = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      if ( *(_WORD *)(v12 + 10) )
        v65 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v65 = 0LL;
      WPP_IFR_SF_qLsqd(v62, 5u, (unsigned int)_a5, 0x29u, Offset, v65, _a4, _a5, globals, -1073741436);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v12, v44, v45);
    v21->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v21, 0xC0000184, v66, v67);
    v21->Release(v21, (void *)1886220099, 2335, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_82;
  }
  v47 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  if ( v47->FxVerboseOn )
  {
    if ( *(_WORD *)(v12 + 10) )
      v68 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v68 = 0LL;
    if ( v21->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(v47, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v5, v68);
  }
  FxRequest::GetIrp(v21, &ppIrp);
  v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( v21->m_Reserved )
  {
    if ( *(_DWORD *)(v12 + 368) )
    {
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v12, &Request, (unsigned int *)PreviousIrql);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v12, PreviousIrql, v69);
      goto LABEL_81;
    }
    v21 = ReservedRequest;
    v44 = PreviousIrql;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v12, v44, v21, v48);
LABEL_81:
  _a1 = 259;
LABEL_82:
  if ( v72 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
