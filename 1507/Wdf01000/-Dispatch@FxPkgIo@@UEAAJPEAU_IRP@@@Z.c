/*
 * XREFs of ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0032808 (WPP_IFR_SF_qcDqd.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00329A0 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0032A98 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0032B08 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0032CBC (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C006C32C (WPP_IFR_SF_qqcDq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00D1948 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v5; // rcx
  const void *v6; // rsi
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rbx
  _LIST_ENTRY *Flink; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 MajorFunction; // rcx
  FxIoQueue *v11; // rdi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // rax
  FxCxDeviceInfo *v14; // r15
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // r15
  FxDeviceBase *v16; // rcx
  FxRequest *v17; // r14
  __int64 v18; // rax
  _FX_DRIVER_GLOBALS *v19; // r12
  MxLock *v20; // r12
  PSLIST_ENTRY v21; // rbx
  _SLIST_ENTRY *v22; // r12
  _FX_DRIVER_GLOBALS *v23; // rax
  FxObject *v24; // rcx
  FxRequest *v25; // rbx
  char *p_m_ParentObject; // r12
  __int64 v27; // rax
  _FX_DRIVER_GLOBALS *v28; // rax
  _IRP *v29; // r10
  _IRP *m_Irp; // rdx
  unsigned __int64 ParentObject; // r8
  unsigned __int8 v32; // r9
  void *MasterIrp; // rax
  FxObject *v34; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v36; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  int v39; // r12d
  char v40; // al
  FxIoInCallerContext *v41; // rdx
  char m_ObjectFlags; // al
  unsigned __int8 v43; // r8
  unsigned __int8 *p_m_Reserved; // rbx
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v46; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *_a4; // r11
  const void *_a3; // rdx
  _IO_STACK_LOCATION *v51; // r8
  FxDeviceBase *v52; // rcx
  const void *globals; // rcx
  _FX_DRIVER_GLOBALS *v54; // rax
  const char *v55; // rdx
  __int64 v56; // rax
  int v57; // r14d
  _FX_DRIVER_GLOBALS *v58; // rdx
  _LIST_ENTRY *v59; // rdx
  FxDeviceBase *v60; // rcx
  unsigned __int64 v61; // rcx
  FxDeviceBase *v62; // rax
  const void *v63; // rax
  PSLIST_ENTRY v64; // rax
  MxLock *p_FxPoolFrameworks; // rdx
  _FX_DRIVER_GLOBALS *m_Lock; // rcx
  KIRQL v67; // r9
  MxLock *v68; // rax
  PSLIST_ENTRY *v69; // r8
  char *v70; // rdx
  _FX_DRIVER_GLOBALS *v71; // rcx
  unsigned __int64 v72; // r8
  unsigned int v73; // edx
  __int64 v74; // r8
  _FX_DRIVER_GLOBALS *v75; // r12
  FxVerifierLock *v76; // rax
  __int64 v77; // rax
  __int64 v78; // r12
  FxIoQueue *v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  int v82; // eax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  int v85; // eax
  PIRP v86; // rcx
  FxVerifierLock *Blink; // rcx
  signed __int32 v88; // edx
  unsigned int v89; // edx
  _LIST_ENTRY *v90; // rcx
  _FX_DRIVER_GLOBALS *v91; // r10
  const char *_a5; // r8
  const void *v93; // rdx
  const void *v94; // rax
  FxVerifierLock *v95; // rcx
  unsigned int v96; // r8d
  FxDeviceBase *v97; // rbx
  _FX_DRIVER_GLOBALS *v98; // rcx
  const void *v99; // rax
  unsigned __int8 v100; // r8
  _FX_DRIVER_GLOBALS *v101; // rdx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v103; // bl
  unsigned __int8 v104; // r8
  FxVerifierLock *v105; // rcx
  const _GUID *_a2; // [rsp+20h] [rbp-69h]
  int level; // [rsp+48h] [rbp-41h]
  char v108; // [rsp+50h] [rbp-39h]
  FxObject *Parent; // [rsp+58h] [rbp-31h]
  FxRequest *ReservedRequest; // [rsp+60h] [rbp-29h] BYREF
  int v111; // [rsp+68h] [rbp-21h] BYREF
  void *PPObject; // [rsp+70h] [rbp-19h] BYREF
  FxIoInCallerContext *InCallerContextInfo; // [rsp+78h] [rbp-11h]
  MxLock *p_m_SpinLock; // [rsp+80h] [rbp-9h]
  _FX_DRIVER_GLOBALS *v115; // [rsp+88h] [rbp-1h]
  _FX_DRIVER_GLOBALS *v116; // [rsp+90h] [rbp+7h]
  _SLIST_ENTRY *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+67h] BYREF
  PIRP v119; // [rsp+F8h] [rbp+6Fh]
  FxRequest *Request; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int8 v121; // [rsp+108h] [rbp+7Fh] BYREF

  v119 = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  v5 = this->m_Globals;
  v6 = 0LL;
  if ( v5->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      v5,
      (unsigned __int8)_a3,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      0xCu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      _a3,
      _a4,
      Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      Irp);
  }
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  Flink = this->m_DynamicDispatchInfoListHead.Flink;
  if ( p_m_DynamicDispatchInfoListHead->Flink == p_m_DynamicDispatchInfoListHead )
  {
LABEL_5:
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    v11 = this->m_DispatchTable[MajorFunction];
    if ( v11 )
    {
      m_CxDeviceInfo = v11->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
      InCallerContextInfo = p_IoInCallerContextCallback;
LABEL_9:
      if ( this->m_Filter
        && !p_IoInCallerContextCallback->m_Method
        && v11 == this->m_DefaultQueue
        && !FxIoQueue::IsIoEventHandlerRegistered(v11, (_WDF_REQUEST_TYPE)MajorFunction) )
      {
        goto LABEL_129;
      }
      v108 = 0;
      LOBYTE(Request) = v11 && v11->m_SupportForwardProgress;
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v108 = 1;
      }
      if ( v11 && (v14 = v11->m_CxDeviceInfo) != 0LL )
        p_RequestAttributes = &v14->RequestAttributes;
      else
        p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
      v16 = this->m_DeviceBase;
      v17 = 0LL;
      Parent = v16;
      ReservedRequest = 0LL;
      v18 = *(_QWORD *)&v16[3].m_SpinLock.m_DbgFlagIsInitialized;
      v19 = v16->m_Globals;
      v115 = v19;
      if ( v18 && *(_WORD *)(v18 + 8) == 4354 && *(_BYTE *)(v18 + 1451) )
      {
        p_m_SpinLock = &v16[2].m_SpinLock;
        v64 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v16[2].m_SpinLock);
        v21 = v64;
        if ( !v64 )
          v21 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&p_m_SpinLock[3].m_DbgFlagIsInitialized)(
                                *((unsigned int *)&p_m_SpinLock[2].m_DbgFlagIsInitialized + 1),
                                HIDWORD(p_m_SpinLock[2].m_Lock),
                                LODWORD(p_m_SpinLock[2].m_Lock));
      }
      else
      {
        v20 = &v16[2].m_SpinLock;
        ++HIDWORD(v16[2].m_ParentObject);
        v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v16[2].m_SpinLock);
        if ( !v21 )
        {
          ++LODWORD(v20[1].m_Lock);
          v21 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))&v20[3].m_DbgFlagIsInitialized)(
                                *((unsigned int *)&v20[2].m_DbgFlagIsInitialized + 1),
                                HIDWORD(v20[2].m_Lock),
                                LODWORD(v20[2].m_Lock));
        }
        v19 = v115;
      }
      if ( !v21 )
        goto LABEL_171;
      if ( v19->FxPoolTrackingOn )
      {
        v22 = v21 + 4;
        p_FxPoolFrameworks = (MxLock *)&v115->FxPoolFrameworks;
        m_Lock = (_FX_DRIVER_GLOBALS *)Parent[5].m_SpinLock.m_Lock;
        *((_DWORD *)&v21[1].Next + 2) = v115->Tag;
        *((_DWORD *)&v21[2].Next + 2) = ExDefaultNonPagedPoolType;
        v116 = m_Lock;
        v21[2].Next = (_SLIST_ENTRY *)m_Lock;
        v21[3].Next = retaddr;
        p_m_SpinLock = p_FxPoolFrameworks;
        v21[1].Next = (_SLIST_ENTRY *)p_FxPoolFrameworks;
        v67 = KeAcquireSpinLockRaiseToDpc(&p_FxPoolFrameworks->m_Lock);
        v68 = p_m_SpinLock;
        v69 = (PSLIST_ENTRY *)p_m_SpinLock[1].m_Lock;
        v70 = (char *)&p_m_SpinLock[1];
        v21->Next = (_SLIST_ENTRY *)&p_m_SpinLock[1];
        *((_QWORD *)&v21->Next + 1) = v69;
        if ( *v69 != (PSLIST_ENTRY)v70 )
          __fastfail(3u);
        v71 = v116;
        *v69 = v21;
        *((_QWORD *)v70 + 1) = v21;
        *(_QWORD *)&v68[7].m_DbgFlagIsInitialized += v71;
        ++*(_DWORD *)&v68[8].m_DbgFlagIsInitialized;
        v72 = *(_QWORD *)&v68[7].m_DbgFlagIsInitialized;
        v73 = *(_DWORD *)&v68[8].m_DbgFlagIsInitialized;
        if ( v72 > v68[8].m_Lock )
          v68[8].m_Lock = v72;
        if ( v73 > LODWORD(v68[9].m_Lock) )
          LODWORD(v68[9].m_Lock) = v73;
        KeReleaseSpinLock(&v68->m_Lock, v67);
      }
      else
      {
        v22 = v21;
      }
      v23 = v115;
      v24 = Parent;
      v22->Next = v21;
      v25 = (FxRequest *)&v22[1];
      *((_QWORD *)&v22->Next + 1) = v23;
      if ( p_RequestAttributes )
        p_m_ParentObject = (char *)p_RequestAttributes;
      else
        p_m_ParentObject = (char *)&Parent[5].m_ParentObject;
      if ( v23->FxVerifierHandle )
      {
        memset(v25, 0, 0x20uLL);
        v24 = Parent;
        *(_DWORD *)(&v25->m_ObjectState + 1) = 1146058822;
        v25 = (FxRequest *)((char *)v25 + 32);
      }
      v25[1].m_Globals = 0LL;
      *(_QWORD *)&v25[1].m_ObjectFlags = 0LL;
      v25[1].m_ChildListHead.Flink = 0LL;
      v25[1].m_ChildListHead.Blink = 0LL;
      *(_QWORD *)&v25[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      *(_QWORD *)&v25[1].m_Type = v25;
      if ( p_m_ParentObject )
      {
        v27 = *((_QWORD *)p_m_ParentObject + 6);
        if ( v27 )
        {
          v74 = *((_QWORD *)p_m_ParentObject + 5);
          if ( !v74 )
            v74 = *(_QWORD *)(v27 + 16);
          memset(&v25[1].m_SpinLock.m_Lock, 0, (v74 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v24 = Parent;
        }
        v25[1].m_ChildListHead.Blink = (_LIST_ENTRY *)*((_QWORD *)p_m_ParentObject + 6);
      }
      if ( !v25 )
      {
LABEL_171:
        v39 = -1073741670;
        WPP_IFR_SF_d(Parent->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
        goto LABEL_172;
      }
      v25->m_Globals = v24->m_Globals;
      v25->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v25->m_Type = 24121352;
      v25->m_SpinLock.m_Lock = 0LL;
      v25->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v25->m_Refcnt = 1;
      *(_DWORD *)&v25->m_ObjectFlags = 0x10000;
      v25->m_ParentObject = 0LL;
      v25->m_ChildListHead.Blink = &v25->m_ChildListHead;
      v25->m_ChildListHead.Flink = &v25->m_ChildListHead;
      v25->m_ChildEntry.Blink = &v25->m_ChildEntry;
      v25->m_ChildEntry.Flink = &v25->m_ChildEntry;
      v28 = v25->m_Globals;
      v25->m_DisposeSingleEntry.Next = 0LL;
      v25->m_DeviceBase = 0LL;
      if ( v28->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v25, (_FX_DRIVER_GLOBALS *)&FxObject::`vftable', 0);
        v24 = Parent;
      }
      v25->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      v25->m_NPLock.m_Lock = 0LL;
      v25->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v25->m_ObjectFlags) < 0 )
      {
        v75 = v25->m_Globals;
        v116 = v75;
        if ( v75->FxVerifierLock )
        {
          v76 = (FxVerifierLock *)FxPoolAllocator(
                                    v75,
                                    (_LIST_ENTRY *)&v75->FxPoolFrameworks,
                                    ExDefaultNonPagedPoolType,
                                    0xB0uLL,
                                    v75->Tag,
                                    (_LIST_ENTRY *)retaddr);
          if ( v76 && (FxVerifierLock::FxVerifierLock(v76, v75, v25), (v78 = v77) != 0) )
          {
            if ( *(_BYTE *)(v77 + 122) )
            {
              *(_QWORD *)(v77 + 56) = 0LL;
              *(_DWORD *)(v77 + 48) = 1;
              *(_DWORD *)(v77 + 64) = 0;
              KeInitializeEvent((PRKEVENT)(v77 + 72), SynchronizationEvent, 0);
              *(_BYTE *)(v78 + 40) = 1;
            }
            v79 = (FxIoQueue *)v78;
          }
          else
          {
            WPP_IFR_SF_d(v116, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
            v79 = 0LL;
          }
          v24 = Parent;
          v25[-1].m_ForwardProgressQueue = v79;
        }
      }
      v29 = v119;
      v25->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      v25->m_Irp.m_Irp = v29;
      v25->m_CancelRoutine.m_Cancel = 0LL;
      v25->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v25->m_TargetFlags = 0;
      v25->m_CanComplete = 1;
      v25->m_Target = 0LL;
      v25->m_TargetCompletionContext = 0LL;
      v25->m_Completed = v25->m_Irp.m_Irp == 0LL;
      v25->m_Canceled = 0;
      v25->m_PriorityBoost = 0;
      v25->m_RequestContext = 0LL;
      v25->m_Timer = 0LL;
      v25->m_CsqContext.Irp = (_IRP *)&v25->120;
      v25->m_ListEntry.Flink = (_LIST_ENTRY *)&v25->120;
      v25->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v25->m_SystemBufferOffset = 216LL;
      v25->m_IrpQueue = 0LL;
      v25->m_IrpCompletionReferenceCount = 0;
      v25->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v25->m_OutputBufferOffset = 232;
      v25->m_CompletionState = 0;
      v25->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
      v25->m_SystemBuffer.m_Buffer = 0LL;
      v25->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
      v25->m_OutputBuffer.m_Buffer = 0LL;
      v25->m_IoQueue = 0LL;
      v25->m_PowerStopState = 0;
      v25->m_OwnerListEntry.Blink = &v25->m_OwnerListEntry;
      v25->m_OwnerListEntry.Flink = &v25->m_OwnerListEntry;
      v25->m_OwnerListEntry2.Blink = &v25->m_OwnerListEntry2;
      v25->m_OwnerListEntry2.Flink = &v25->m_OwnerListEntry2;
      v25->m_ForwardProgressList.Blink = &v25->m_ForwardProgressList;
      v25->m_ForwardProgressList.Flink = &v25->m_ForwardProgressList;
      v25->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
      v25->m_Presented = 0;
      *(_WORD *)&v25->m_Reserved = 0;
      v25->m_ForwardProgressQueue = 0LL;
      v25->m_InternalContext = 0LL;
      v25->m_DeviceBase = v24->m_DeviceBase;
      m_Irp = v25->m_Irp.m_Irp;
      ParentObject = (unsigned __int64)m_Irp->Tail.Overlay.CurrentStackLocation;
      v32 = *(_BYTE *)ParentObject;
      if ( *(_BYTE *)ParentObject != 14 )
      {
        if ( v32 < 3u )
          goto LABEL_45;
        if ( v32 <= 4u )
        {
          LODWORD(ParentObject) = HIDWORD(v24[2].__vftable) - 1;
          if ( HIDWORD(v24[2].__vftable) == 1 )
          {
            if ( m_Irp->RequestorMode )
              goto LABEL_45;
            v25->m_SystemBuffer.m_Buffer = m_Irp->UserBuffer;
            goto LABEL_41;
          }
          if ( HIDWORD(v24[2].__vftable) != 2 )
            goto LABEL_45;
          goto LABEL_89;
        }
        if ( v32 != 15 )
          goto LABEL_45;
      }
      if ( (*(_DWORD *)(ParentObject + 24) & 3) == 0 )
      {
        v25->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(ParentObject + 24) & 3) != 1 && (*(_DWORD *)(ParentObject + 24) & 3) != 2 )
      {
        if ( (*(_DWORD *)(ParentObject + 24) & 3) != 3 )
          goto LABEL_41;
        if ( v32 != 15 && m_Irp->RequestorMode )
          goto LABEL_45;
        v25->m_SystemBuffer.m_Buffer = *(void **)(ParentObject + 32);
        MasterIrp = m_Irp->UserBuffer;
LABEL_40:
        v25->m_OutputBuffer.m_Buffer = MasterIrp;
LABEL_41:
        if ( v25->m_SystemBuffer.m_Buffer )
          v25->m_RequestBaseStaticFlags |= 1u;
        if ( v25->m_OutputBuffer.m_Buffer )
          v25->m_RequestBaseStaticFlags |= 2u;
LABEL_45:
        if ( v24->m_Globals->FxRequestParentOptimizationOn )
        {
          v34 = 0LL;
          PPObject = 0LL;
          if ( !v25->m_ObjectSize )
          {
            v39 = -1073741816;
LABEL_159:
            WPP_IFR_SF_d(Parent->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
            FxObject::DeleteFromFailedCreate(v25);
LABEL_172:
            v29 = v119;
LABEL_60:
            v40 = (char)Request;
            if ( (_BYTE)Request )
            {
              if ( v39 < 0 )
                goto LABEL_177;
              if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
              {
                v81 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, v17);
                v29 = v119;
                v39 = v81;
              }
              v40 = (char)Request;
            }
            if ( v39 >= 0 )
            {
              if ( !v40 || !v11->m_FwdProgContext->m_IoResourcesAllocate.Method )
              {
LABEL_63:
                v41 = InCallerContextInfo;
                if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v17->m_Reserved )
                {
                  v17->m_InternalContext = v11;
                  v39 = FxPkgIo::DispathToInCallerContextCallback(this, v41, v17, v29);
LABEL_74:
                  if ( v108 )
                    KeLeaveCriticalRegion();
                  return (unsigned int)v39;
                }
                m_ObjectFlags = v11->m_ObjectFlags;
                Request = v17;
                if ( m_ObjectFlags < 0 && (Blink = (FxVerifierLock *)v11[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                  FxVerifierLock::Lock(Blink, &PreviousIrql, ParentObject);
                else
                  PreviousIrql = KeAcquireSpinLockRaiseToDpc(&v11->m_NPLock.m_Lock);
                p_m_Reserved = &v17->m_Reserved;
                if ( v17->m_Reserved )
                {
                  v88 = _InterlockedExchangeAdd(&v17->m_Refcnt, 1u);
                  v17 = ReservedRequest;
                  v89 = v88 + 1;
                  if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
                  {
                    v90 = ReservedRequest[-1].m_ForwardProgressList.Blink;
                    if ( v90 )
                      FxTagTracker::UpdateTagHistory(
                        (FxTagTracker *)v90,
                        (void *)0x50647746,
                        2286,
                        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                        TagAddRef,
                        v89);
                  }
                }
                m_QueueState = v11->m_QueueState;
                if ( (m_QueueState & 1) == 0 )
                {
                  v91 = v11->m_Globals;
                  v39 = -1073741436;
                  if ( v91->FxVerboseOn )
                  {
                    _a5 = "power stopping (Drain) in progress,";
                    if ( (m_QueueState & 0x10000) == 0 )
                      _a5 = &a5;
                    if ( v17->m_ObjectSize )
                      v93 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v93 = 0LL;
                    if ( v11->m_ObjectSize )
                      v94 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v94 = 0LL;
                    WPP_IFR_SF_qLsqd(v91, 5u, (unsigned int)_a5, 0x27u, _a2, v94, m_QueueState, _a5, v93, -1073741436);
                  }
                  if ( SLOBYTE(v11->m_ObjectFlags) < 0
                    && (v95 = (FxVerifierLock *)v11[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                  {
                    FxVerifierLock::Unlock(v95, PreviousIrql, v43);
                  }
                  else
                  {
                    KeReleaseSpinLock(&v11->m_NPLock.m_Lock, PreviousIrql);
                  }
                  v17->m_Irp.m_Irp->IoStatus.Information = 0LL;
                  v97 = v17->m_DeviceBase;
                  v98 = v17->m_Globals;
                  if ( v98->FxVerboseOn )
                  {
                    if ( v17->m_ObjectSize )
                      v6 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    WPP_IFR_SF_qqxd(
                      v98,
                      v17->m_Irp.m_Irp->IoStatus.Information,
                      v96,
                      0xBu,
                      _a2,
                      v6,
                      v17->m_Irp.m_Irp,
                      v17->m_Irp.m_Irp->IoStatus.Information,
                      -1073741436);
                  }
                  if ( v97 )
                    v17->m_PriorityBoost = HIBYTE(v97[1].m_Globals);
                  else
                    v17->m_PriorityBoost = 0;
                  FxRequest::CompleteInternal(v17, -1073741436);
                  v17->Release(
                    v17,
                    (void *)1886220099,
                    2313,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  goto LABEL_74;
                }
                v46 = v11->m_Globals;
                if ( v46->FxVerboseOn )
                {
                  if ( v11->m_ObjectSize )
                    v99 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v99 = 0LL;
                  if ( v17->m_ObjectSize )
                    v6 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qq(
                    v46,
                    5u,
                    0xDu,
                    0x28u,
                    (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
                    v6,
                    v99);
                }
                if ( v17->m_Globals->FxVerifierIO )
                {
                  FxNonPagedObject::Lock(v17, &v121, v43);
                  v101 = v17->m_Globals;
                  if ( v101->FxVerifierOn )
                    FxRequest::Vf_VerifyRequestIsNotCompleted(v17, v101);
                  if ( SLOBYTE(v17->m_ObjectFlags) < 0
                    && (m_ForwardProgressQueue = (FxVerifierLock *)v17[-1].m_ForwardProgressQueue) != 0LL )
                  {
                    FxVerifierLock::Unlock(m_ForwardProgressQueue, v121, v100);
                  }
                  else
                  {
                    KeReleaseSpinLock(&v17->m_NPLock.m_Lock, v121);
                  }
                }
                v17->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                if ( *p_m_Reserved )
                {
                  if ( v11->m_Dispatching )
                  {
                    v103 = PreviousIrql;
                    FxIoQueue::InsertNewRequestLocked(v11, &Request, PreviousIrql);
                    if ( SLOBYTE(v11->m_ObjectFlags) < 0
                      && (v105 = (FxVerifierLock *)v11[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                    {
                      FxVerifierLock::Unlock(v105, v103, v104);
                    }
                    else
                    {
                      KeReleaseSpinLock(&v11->m_NPLock.m_Lock, v103);
                    }
                    goto LABEL_73;
                  }
                  v17 = ReservedRequest;
                }
                FxIoQueue::DispatchEvents(v11, PreviousIrql, v17);
LABEL_73:
                v39 = 259;
                goto LABEL_74;
              }
              v17->m_Presented = 1;
              if ( v17->m_ObjectSize )
                v83 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v83 = 0LL;
              if ( v11->m_ObjectSize )
                v84 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v84 = 0LL;
              if ( v11->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v84, (WDFREQUEST__ *)v83) >= 0 )
              {
LABEL_183:
                v29 = v119;
                goto LABEL_63;
              }
              FxRequest::FreeRequest(v17);
              ReservedRequest = 0LL;
              v85 = FxIoQueue::GetReservedRequest(v11, v119, &ReservedRequest);
              v39 = v85;
              if ( v85 == 259 )
                goto LABEL_74;
              if ( v85 < 0 )
                goto LABEL_195;
LABEL_182:
              v17 = ReservedRequest;
              goto LABEL_183;
            }
LABEL_177:
            if ( !this->m_Filter || v11 )
            {
              if ( v40 )
              {
                v82 = FxIoQueue::GetReservedRequest(v11, v29, &ReservedRequest);
                v39 = v82;
                if ( v82 == 259 )
                  goto LABEL_74;
                if ( v82 >= 0 )
                  goto LABEL_182;
              }
              else
              {
                WPP_IFR_SF_d(
                  this->m_Globals,
                  2u,
                  0xDu,
                  0x10u,
                  (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
                  v39);
              }
            }
LABEL_195:
            v86 = v119;
            v119->IoStatus.Status = v39;
            v86->IoStatus.Information = 0LL;
            IofCompleteRequest(v86, 0);
            goto LABEL_74;
          }
          if ( !p_RequestAttributes )
          {
LABEL_58:
            v25->m_ObjectFlags |= 8u;
            v39 = 0;
LABEL_59:
            v17 = v25;
            ReservedRequest = v25;
            goto LABEL_60;
          }
          if ( p_RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
          {
            FxObject::MarkPassiveCallbacks(v25, ObjectLock);
            v34 = (FxObject *)PPObject;
            v29 = v119;
          }
          ParentObject = (unsigned __int64)p_RequestAttributes->ParentObject;
          if ( ParentObject )
          {
            v34 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
            LOWORD(v80) = 0;
            if ( (ParentObject & 1) != 0 )
            {
              v80 = LOWORD(v34->__vftable);
              v34 = (FxObject *)((char *)v34 - v80);
            }
            if ( v34->m_Type == 4096 )
            {
              PPObject = v34;
            }
            else
            {
              FxObjectHandleGetPtrQI(v34, &PPObject, (void *)ParentObject, 0x1000u, v80);
              v34 = (FxObject *)PPObject;
              v29 = v119;
            }
          }
          if ( !v34 )
          {
LABEL_52:
            m_ObjectSize = v25->m_ObjectSize;
            if ( m_ObjectSize )
              v36 = (char *)v25 + m_ObjectSize;
            else
              v36 = 0LL;
            EvtDestroyCallback = p_RequestAttributes->EvtDestroyCallback;
            if ( EvtDestroyCallback )
              *((_QWORD *)v36 + 3) = EvtDestroyCallback;
            EvtCleanupCallback = p_RequestAttributes->EvtCleanupCallback;
            if ( EvtCleanupCallback )
            {
              *((_QWORD *)v36 + 2) = EvtCleanupCallback;
              v25->m_ObjectFlags |= 0x400u;
            }
            goto LABEL_58;
          }
          v39 = FxObject::AssignParentObject(v25, v34);
          if ( v39 >= 0 )
          {
            v29 = v119;
            goto LABEL_52;
          }
        }
        else
        {
          v39 = FxObject::Commit(v25, p_RequestAttributes, 0LL, v24, 0);
        }
        if ( v39 >= 0 )
        {
          v29 = v119;
          goto LABEL_59;
        }
        goto LABEL_159;
      }
LABEL_89:
      v25->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
      goto LABEL_41;
    }
    p_IoInCallerContextCallback = &this->m_InCallerContextCallback;
    InCallerContextInfo = &this->m_InCallerContextCallback;
    if ( this->m_InCallerContextCallback.m_Method )
      goto LABEL_9;
    if ( this->m_Filter )
    {
LABEL_129:
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    v39 = -1073741808;
    v62 = this->m_DeviceBase;
    if ( v62->m_ObjectSize )
      v63 = (const void *)((unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v63 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xDu,
      0xFu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      v63,
      (__int64)Irp,
      -1073741808);
    goto LABEL_127;
  }
  v51 = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( v51->MajorFunction )
  {
    case 3u:
      v57 = 0;
      break;
    case 4u:
      v57 = 1;
      break;
    case 0xEu:
      v57 = 2;
      break;
    case 0xFu:
      v57 = 3;
      break;
    default:
      v39 = -1073741811;
      v52 = this->m_DeviceBase;
      if ( v52->m_ObjectSize )
        globals = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      WPP_IFR_SF_qcDqd(
        this->m_Globals,
        v51->MajorFunction,
        0xDu,
        0xEu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
        Irp,
        v51->MajorFunction,
        v51->MinorFunction,
        globals,
        level);
      v54 = this->m_Globals;
      v111 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v54->Public.DriverName,
        (const char *)&v111,
        v54->Public.DriverName,
        (const char *)&v111);
      if ( *(_BYTE *)(v56 + 318) )
        DbgBreakPoint();
      else
        Mx::MxDbgPrint(
          "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
          v55,
          (const char *)&v111);
      goto LABEL_127;
  }
  v58 = this->m_Globals;
  if ( v58->FxVerifierOn )
  {
    v39 = FxPkgIo::Vf_VerifyDispatchContext(this, v58, p_m_DynamicDispatchInfoListHead->Flink);
    if ( v39 < 0 )
    {
LABEL_127:
      Irp->IoStatus.Status = v39;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v39;
    }
  }
  while ( 1 )
  {
    v59 = Flink;
    Flink = Flink->Flink;
    if ( v59[v57 + 1].Flink )
      break;
    if ( Flink == p_m_DynamicDispatchInfoListHead )
      goto LABEL_5;
  }
  v60 = this->m_DeviceBase;
  if ( v60->m_ObjectSize )
    v61 = (unsigned __int64)v60 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v61 = 0LL;
  return ((unsigned int (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _LIST_ENTRY *, _IRP *, unsigned __int64))v59[v57 + 1].Flink)(
           v61,
           Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
           Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
           v59[v57 + 1].Blink,
           Irp,
           (unsigned __int64)Flink | 1);
}
