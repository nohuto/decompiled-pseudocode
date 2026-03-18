/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C000B238 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000BAF8 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0013E8C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0013EAC (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0016634 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001C300 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C0020510 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0062670 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063DB0 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0079C68 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00912B4 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxIrp *v4; // r10
  _LIST_ENTRY *Blink; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _FILE_OBJECT *v8; // r9
  FxDeviceBase *m_DeviceBase; // rbx
  int v10; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r15
  __int128 v12; // kr00_16
  _IRP *v13; // rax
  int v14; // r8d
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned int v16; // r8d
  unsigned __int64 flags; // rax
  unsigned __int64 v18; // r15
  int id; // edi
  void *Caller; // rax
  FxFileObject *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  FxFileObject *v23; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  _LIST_ENTRY *p_m_ChildEntry; // r14
  _FX_DRIVER_GLOBALS *v26; // rax
  KIRQL v27; // al
  KIRQL v28; // al
  KIRQL v29; // al
  bool v30; // zf
  KIRQL v31; // r13
  KIRQL v32; // al
  _LIST_ENTRY *v33; // rcx
  int v34; // r14d
  unsigned __int8 v35; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v37; // rax
  unsigned __int8 v38; // r9
  _LIST_ENTRY *v39; // rcx
  FxDeviceBase_vtbl *v40; // r8
  _LIST_ENTRY *p_m_Link; // rdx
  _LIST_ENTRY *v42; // rbx
  FxDeviceBase *v43; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v44; // xmm1_8
  FxDeviceBase *v45; // r13
  FxObject *v46; // r15
  _FX_DRIVER_GLOBALS *v47; // r14
  __int64 v48; // rax
  _FX_DRIVER_GLOBALS *v49; // rdx
  FX_POOL_TRACKER *v50; // rbx
  FX_POOL_TRACKER *v51; // r14
  _FX_DRIVER_GLOBALS *v52; // rax
  FxObject *p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v54; // rax
  unsigned __int8 v55; // r8
  _FX_DRIVER_GLOBALS *v56; // rax
  _IRP *v57; // rcx
  __int64 v58; // rcx
  char *v59; // rdx
  unsigned __int8 v60; // al
  FxObject *v61; // rdx
  unsigned __int16 v62; // ax
  __int64 v63; // rax
  _LIST_ENTRY *v64; // r13
  _LIST_ENTRY *v65; // rbx
  FxIoQueue *m_DefaultQueueForCreates; // r13
  KIRQL v67; // bl
  unsigned int m_QueueState; // eax
  _FX_DRIVER_GLOBALS *v69; // rcx
  char v70; // dl
  unsigned __int64 v71; // r8
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v73; // r15
  FxDeviceBase *v74; // rbx
  unsigned __int64 v75; // rbx
  _LIST_ENTRY *v76; // rcx
  _LIST_ENTRY *v77; // rcx
  const void *v79; // rbx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *v83; // rdx
  FxVerifierLock *m_CallbackLockObjectPtr; // rcx
  FxVerifierLock *v85; // rcx
  _LIST_ENTRY *v86; // rcx
  unsigned __int64 Flink; // rcx
  const void *v88; // rcx
  FxDeviceBase *v89; // rdx
  const void *v90; // rdx
  FxIrp *v91; // rbx
  _LIST_ENTRY *v92; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v94; // rdx
  unsigned __int64 v95; // rax
  _LIST_ENTRY *v96; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v97; // xmm1_8
  FxDeviceBase *v98; // rax
  _LIST_ENTRY *v99; // rax
  unsigned __int64 m_Driver; // rax
  unsigned __int64 v101; // rax
  FxDeviceBase *v102; // rcx
  const void *v103; // rcx
  FxDeviceBase *v104; // rax
  const void *v105; // rax
  FxVerifierLock *v106; // rcx
  _FX_DRIVER_GLOBALS *v107; // r10
  const char *v108; // r8
  const void *v109; // rdx
  const void *v110; // rcx
  FxIoQueue *v111; // rax
  const void *v112; // rax
  unsigned __int16 v113; // r9
  const void *v114; // rdx
  const void *v115; // rax
  _FX_DRIVER_GLOBALS *v116; // rdx
  _LIST_ENTRY *v117; // r14
  FxDeviceBase *v118; // rbx
  unsigned __int64 v119; // rbx
  WDFWORKITEM__ *Handle; // rax
  char v121; // bl
  int v122; // ebx
  FxIoQueue *v123; // rcx
  const void *v124; // rcx
  FxIoQueue *v125; // rax
  FxDeviceBase *v126; // rax
  const void *v127; // rax
  _LIST_ENTRY *v128; // rdx
  _LIST_ENTRY *v129; // rcx
  FxDeviceBase *v130; // rax
  const void *v131; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-A9h]
  KIRQL v133; // [rsp+50h] [rbp-79h] BYREF
  char v134; // [rsp+51h] [rbp-78h]
  unsigned __int8 PreviousIrql; // [rsp+52h] [rbp-77h] BYREF
  unsigned __int8 v136; // [rsp+53h] [rbp-76h] BYREF
  unsigned __int8 v137[4]; // [rsp+54h] [rbp-75h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-71h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-69h] BYREF
  void *PPObject; // [rsp+98h] [rbp-31h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v142; // [rsp+A8h] [rbp-21h]
  FxFileObject *pFxFO; // [rsp+B0h] [rbp-19h]
  FxIrp v144; // [rsp+B8h] [rbp-11h]
  FxVerifierLock *VerifierLock; // [rsp+C0h] [rbp-9h] BYREF
  FxVerifierLock *v146; // [rsp+C8h] [rbp-1h] BYREF
  FxRequest *Request; // [rsp+D0h] [rbp+7h] BYREF
  FxRequest *outputRequest; // [rsp+D8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  WDFWORKITEM__ *v150; // [rsp+130h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+138h] [rbp+6Fh]
  char v152; // [rsp+140h] [rbp+77h]
  _FX_DRIVER_GLOBALS *v153; // [rsp+148h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Irp = FxIrp->m_Irp;
  m_Globals = this->m_Globals;
  v4 = FxIrp;
  v142 = 0LL;
  v134 = 0;
  Blink = 0LL;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v152 = 0;
  globals = m_Globals;
  v8 = CurrentStackLocation->FileObject;
  FileObject = v8;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v10 = (_DWORD)m_Irp + 1;
  if ( !BYTE4(m_DeviceBase[1].m_Globals) || v10 <= 2 )
  {
    p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    memset(&attributes.Size + 1, 0, 20);
    attributes.Size = 56;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
    memset(&attributes.ParentObject, 0, 24);
    v12 = 0uLL;
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
    {
      Blink = this->m_FileObjectInfoHeadList.Blink;
      if ( LODWORD(Blink[5].Blink) )
      {
        attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
        v12 = *(_OWORD *)&attributes.ContextSizeOverride;
      }
      attributes.ExecutionLevel = this->m_ExecutionLevel;
      attributes.SynchronizationScope = this->m_SynchronizationScope;
    }
    v13 = FxIrp->m_Irp;
    v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    v15 = m_DeviceBase->m_Globals;
    LODWORD(PPObject) = v14;
    if ( v14 == 1 )
    {
      v23 = 0LL;
      pFxFO = 0LL;
      goto LABEL_52;
    }
    if ( !v8 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
    {
      if ( v15->FxVerboseOn )
        WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v13);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      m_Globals = globals;
      v34 = -1073741438;
      goto LABEL_319;
    }
    v16 = v15->Tag;
    flags = 0LL;
    LODWORD(v153) = v16;
    if ( *((_QWORD *)&v12 + 1) )
    {
      flags = v12;
      if ( !(_QWORD)v12 )
        flags = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
    }
    v18 = 208LL;
    id = 0;
    if ( flags )
    {
      v80 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v80 < flags )
      {
LABEL_318:
        v34 = -1073741670;
        goto LABEL_319;
      }
      v81 = v80 + 208;
      if ( v81 < 0xD0 )
      {
        id = -1073741675;
        goto LABEL_149;
      }
      v18 = v81;
    }
    if ( v15->FxVerifierHandle )
    {
      if ( v18 + 32 < v18 )
      {
        v18 = -1LL;
        id = -1073741675;
      }
      else
      {
        v18 += 32LL;
        id = 0;
      }
    }
    if ( id >= 0 )
    {
      if ( v15->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v21 = (FxFileObject *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, ExDefaultNonPagedPoolType, v18, v16, Caller);
      v23 = v21;
      if ( v21 )
      {
        if ( v15->FxVerifierHandle )
        {
          memset(v21, 0, 0x20uLL);
          *(_DWORD *)(&v23->m_ObjectState + 1) = 1146058822;
          v23 = (FxFileObject *)((char *)v23 + 32);
        }
        *(_QWORD *)&v23[1].m_Type = 0LL;
        v23[1].m_Globals = 0LL;
        *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
        v23[1].m_ChildListHead.Flink = 0LL;
        v23[1].m_ChildListHead.Blink = 0LL;
        v23[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v23;
        ContextTypeInfo = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSizeOverride = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
          memset(&v23[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          ContextTypeInfo = attributes.ContextTypeInfo;
        }
        v23[1].m_ChildListHead.Flink = (_LIST_ENTRY *)ContextTypeInfo;
      }
      if ( v23 )
      {
        p_m_ChildEntry = &v23->m_ChildEntry;
        v23->m_Globals = m_DeviceBase->m_Globals;
        v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxObject::`vftable';
        *(_DWORD *)&v23->m_Type = 10489880;
        v23->m_SpinLock.m_Lock = 0LL;
        v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v23->m_Refcnt = 1;
        *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
        v23->m_ParentObject = 0LL;
        v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
        v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
        v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
        v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
        v26 = v23->m_Globals;
        v23->m_DisposeSingleEntry.Next = 0LL;
        v23->m_DeviceBase = 0LL;
        if ( v26->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v23, v22, 0);
        v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxNonPagedObject::`vftable';
        v23->m_NPLock.m_Lock = 0LL;
        v23->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
        {
          v83 = v23->m_Globals;
          if ( v83->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v83, v23);
            v23[-1].m_PkgContext = VerifierLock;
          }
        }
        v23->m_PkgContext = 0LL;
        v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxFileObject::`vftable'{for `FxNonPagedObject'};
        v23->m_DeviceBase = m_DeviceBase;
        v23->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
        v23->m_FileObject.m_FileObject = FileObject;
        v27 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
        v23->m_ObjectFlags |= 2u;
        KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v27);
        v144.m_Irp = 0LL;
        if ( v23->m_ObjectSize )
        {
          if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
          {
            v28 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
            v23->m_ObjectFlags |= 0x11u;
            KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v28);
          }
          v144.m_Irp = (_IRP *)m_DeviceBase;
          v29 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
          v30 = v23->m_ObjectState == 1;
          v31 = v29;
          v133 = v29;
          if ( v30 )
          {
            if ( v23->m_ParentObject )
            {
              KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v29);
              v34 = -1071644147;
            }
            else
            {
              v32 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
              v30 = m_DeviceBase->m_ObjectState == 1;
              LOBYTE(v153) = v32;
              if ( v30 )
              {
                v33 = m_DeviceBase->m_ChildListHead.Blink;
                if ( v33->Flink != &m_DeviceBase->m_ChildListHead )
                  __fastfail(3u);
                p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
                v23->m_ChildEntry.Blink = v33;
                v33->Flink = p_m_ChildEntry;
                m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !v23->m_DeviceBase )
                  v23->m_DeviceBase = m_DeviceBase->m_DeviceBase;
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v32);
                v23->m_ParentObject = m_DeviceBase;
                v34 = 0;
              }
              else
              {
                FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, (KIRQL)v153);
                v34 = -1073741738;
              }
              KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v133);
              if ( v34 >= 0 )
              {
                m_ObjectSize = v23->m_ObjectSize;
                if ( m_ObjectSize )
                  v37 = (char *)v23 + m_ObjectSize;
                else
                  v37 = 0LL;
                if ( attributes.EvtDestroyCallback )
                  *((_QWORD *)v37 + 3) = attributes.EvtDestroyCallback;
                if ( attributes.EvtCleanupCallback )
                {
                  *((_QWORD *)v37 + 2) = attributes.EvtCleanupCallback;
                  v23->m_ObjectFlags |= 0x400u;
                }
                v23->m_ObjectFlags |= 8u;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (m_CallbackLockObjectPtr = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Lock(m_CallbackLockObjectPtr, &PreviousIrql, v35);
                  v38 = PreviousIrql;
                }
                else
                {
                  v38 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
                }
                v39 = (_LIST_ENTRY *)&m_DeviceBase[2];
                v40 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
                p_m_Link = &v23->m_Link;
                if ( (FxDeviceBase *)v40->~FxObject != &m_DeviceBase[2] )
                  __fastfail(3u);
                p_m_Link->Flink = (_LIST_ENTRY *)v40;
                v23->m_Link.Blink = v39;
                v40->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
                v39->Flink = p_m_Link;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (v85 = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Unlock(v85, v38, (unsigned __int8)v40);
                }
                else
                {
                  KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v38);
                }
                if ( (_DWORD)PPObject == 2 )
                {
                  FileObject->FsContext = v23;
                }
                else if ( (_DWORD)PPObject == 3 )
                {
                  FileObject->FsContext2 = v23;
                }
                v30 = v23->m_ObjectSize == 0;
                pFxFO = v23;
                if ( v30 )
                  v142 = 0LL;
                else
                  v142 = (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL;
                p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
                v42 = this->m_FileObjectInfoHeadList.Blink->Blink;
                if ( v42 != &this->m_FileObjectInfoHeadList )
                {
                  while ( 1 )
                  {
                    Blink = v42;
                    attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v42[5].Blink;
                    if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
                    {
                      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                      attributes.ParentObject = 0LL;
                      v34 = FxObjectAllocateContext(v23, &attributes, 1u, 0LL);
                      if ( v34 < 0 )
                        break;
                    }
                    v42 = v42->Blink;
                    if ( v42 == p_m_FileObjectInfoHeadList )
                      goto LABEL_51;
                  }
                  v86 = v42[9].Blink;
                  if ( v86 )
                    Flink = (unsigned __int64)v86[1].Flink;
                  else
                    Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
                  if ( *(_WORD *)(Flink + 10) )
                    v88 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v88 = 0LL;
                  v89 = this->m_DeviceBase;
                  if ( v89->m_ObjectSize )
                    v90 = (const void *)((unsigned __int64)v89 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v90 = 0LL;
                  WPP_IFR_SF_qqqd(
                    globals,
                    2u,
                    0xDu,
                    0x17u,
                    WPP_FxPkgGeneral_cpp_Traceguids,
                    &v42[5].Blink,
                    v90,
                    v88,
                    v34);
                  v91 = Irp;
                  goto LABEL_312;
                }
LABEL_51:
                v4 = Irp;
LABEL_52:
                if ( !this->m_DriverCreatedQueue && (this->m_Flags & 0xC) == 0 )
                {
                  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                  {
                    return (unsigned int)FxPkgGeneral::ForwardCreateRequest(
                                           this,
                                           v4,
                                           FxPkgGeneral::_CreateCompletionRoutine,
                                           this);
                  }
                  else
                  {
                    v34 = 0;
                    v4->m_Irp->IoStatus.Status = 0;
                    v4->m_Irp->IoStatus.Information = 0LL;
                    IofCompleteRequest(v4->m_Irp, 0);
                    Irp->m_Irp = 0LL;
                  }
                  return (unsigned int)v34;
                }
                if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
                  && (Blink = this->m_FileObjectInfoHeadList.Blink, BYTE4(Blink[9].Flink)) )
                {
                  v92 = Blink[9].Blink;
                  *(_LIST_ENTRY *)&attributes.Size = v92[2];
                  *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v92[3];
                  *(_LIST_ENTRY *)&attributes.ParentObject = v92[4];
                  v44 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v92[5].Flink;
                }
                else
                {
                  v43 = this->m_DeviceBase;
                  *(_OWORD *)&attributes.Size = *(_OWORD *)&v43[2].m_ExecutionLevel;
                  *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v43[3].FxNonPagedObject::FxObject::__vftable;
                  *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v43[3].m_Globals;
                  v44 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v43[3].m_ChildListHead.Flink;
                }
                v45 = this->m_DeviceBase;
                attributes.ContextTypeInfo = v44;
                if ( *(FxDeviceBase **)&v45[1].m_ExecutionLevel != (FxDeviceBase *)&v45[1].m_ExecutionLevel )
                {
                  attributes.ExecutionLevel = WdfExecutionLevelDispatch;
                  attributes.SynchronizationScope = WdfSynchronizationScopeNone;
                  attributes.ParentObject = 0LL;
                }
                v46 = 0LL;
                v47 = v45->m_Globals;
                v144.m_Irp = v4->m_Irp;
                v48 = *(_QWORD *)&v45[3].m_SpinLock.m_DbgFlagIsInitialized;
                v153 = v47;
                if ( v48 && *(_WORD *)(v48 + 8) == 4354 && *(_BYTE *)(v48 + 1651) )
                {
                  v50 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v45[2].m_SpinLock);
                  if ( !v50 )
                    v50 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v45[2].m_DeviceBase)(
                                               HIDWORD(v45[2].m_ChildEntry.Blink),
                                               HIDWORD(v45[2].m_DisposeSingleEntry.Next),
                                               LODWORD(v45[2].m_DisposeSingleEntry.Next));
                }
                else
                {
                  ++HIDWORD(v45[2].m_ParentObject);
                  v50 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v45[2].m_SpinLock);
                  if ( !v50 )
                  {
                    ++LODWORD(v45[2].m_ChildEntry.Flink);
                    v50 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v45[2].m_DeviceBase)(
                                               HIDWORD(v45[2].m_ChildEntry.Blink),
                                               HIDWORD(v45[2].m_DisposeSingleEntry.Next),
                                               LODWORD(v45[2].m_DisposeSingleEntry.Next));
                  }
                  v47 = v153;
                }
                if ( !v50 )
                  goto LABEL_304;
                if ( v47->FxPoolTrackingOn )
                {
                  v51 = v50 + 1;
                  FxPoolInsertNonPagedAllocateTracker(
                    &v153->FxPoolFrameworks,
                    v50,
                    (unsigned __int64)v45[2].m_CallbackLockObjectPtr,
                    v153->Tag,
                    retaddr);
                }
                else
                {
                  v51 = v50;
                }
                v52 = v153;
                v51->Link.Flink = &v50->Link;
                p_Pool = (FxObject *)&v51->Pool;
                v51->Link.Blink = &v52->Linkage;
                if ( v52->FxVerifierHandle )
                {
                  memset(&v51->Pool, 0, 0x20uLL);
                  *((_DWORD *)&v51->PoolType + 1) = 1146058822;
                  p_Pool = (FxObject *)&v51->CallersAddress;
                }
                p_Pool[3].m_ParentObject = 0LL;
                p_Pool[3].m_ChildEntry.Flink = 0LL;
                p_Pool[3].m_ChildEntry.Blink = 0LL;
                p_Pool[3].m_DisposeSingleEntry.Next = 0LL;
                p_Pool[3].m_DeviceBase = 0LL;
                p_Pool[3].m_SpinLock.m_Lock = (unsigned __int64)p_Pool;
                v54 = attributes.ContextTypeInfo;
                if ( attributes.ContextTypeInfo )
                {
                  ContextSize = attributes.ContextSizeOverride;
                  if ( !attributes.ContextSizeOverride )
                    ContextSize = attributes.ContextTypeInfo->ContextSize;
                  memset(&p_Pool[4], 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                  v54 = attributes.ContextTypeInfo;
                }
                p_Pool[3].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)v54;
                if ( !p_Pool )
                {
LABEL_304:
                  v34 = -1073741670;
                  WPP_IFR_SF_d(v45->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
                  goto LABEL_305;
                }
                p_Pool->m_Globals = v45->m_Globals;
                v34 = 0;
                p_Pool->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
                *(_DWORD *)&p_Pool->m_Type = 24121352;
                v55 = 1;
                p_Pool->m_SpinLock.m_Lock = 0LL;
                p_Pool->m_SpinLock.m_DbgFlagIsInitialized = 1;
                p_Pool->m_Refcnt = 1;
                *(_DWORD *)&p_Pool->m_ObjectFlags = 0x10000;
                p_Pool->m_ParentObject = 0LL;
                p_Pool->m_ChildListHead.Blink = &p_Pool->m_ChildListHead;
                p_Pool->m_ChildListHead.Flink = &p_Pool->m_ChildListHead;
                p_Pool->m_ChildEntry.Blink = &p_Pool->m_ChildEntry;
                p_Pool->m_ChildEntry.Flink = &p_Pool->m_ChildEntry;
                v56 = p_Pool->m_Globals;
                p_Pool->m_DisposeSingleEntry.Next = 0LL;
                p_Pool->m_DeviceBase = 0LL;
                if ( v56->FxVerifierOn )
                {
                  FxObject::Vf_VerifyConstruct(p_Pool, v49, 0);
                  v55 = 1;
                }
                p_Pool->__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
                *(_QWORD *)&p_Pool[1].m_Type = 0LL;
                LOBYTE(p_Pool[1].__vftable) = 1;
                if ( SLOBYTE(p_Pool->m_ObjectFlags) < 0 )
                {
                  v94 = p_Pool->m_Globals;
                  if ( v94->FxVerifierLock )
                  {
                    v146 = 0LL;
                    FxVerifierLock::CreateAndInitialize(&v146, v94, p_Pool);
                    v55 = 1;
                    p_Pool[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)v146;
                  }
                }
                v57 = v144.m_Irp;
                p_Pool->__vftable = (FxObject_vtbl *)&FxRequestBase::`vftable';
                *(_QWORD *)&p_Pool[1].m_SpinLock.m_DbgFlagIsInitialized = v57;
                p_Pool[1].m_ChildEntry.Blink = 0LL;
                p_Pool[1].m_DisposeSingleEntry.Next = 0LL;
                WORD2(p_Pool[2].__vftable) = 0;
                *((_BYTE *)&p_Pool[2].m_ObjectState + 4) = 1;
                p_Pool[1].m_SpinLock.m_Lock = 0LL;
                p_Pool[1].m_DeviceBase = 0LL;
                BYTE6(p_Pool[2].__vftable) = *(_QWORD *)&p_Pool[1].m_SpinLock.m_DbgFlagIsInitialized == 0LL;
                HIBYTE(p_Pool[2].__vftable) = 0;
                *((_BYTE *)&p_Pool[2].m_ObjectState + 2) = 0;
                p_Pool[1].m_ParentObject = 0LL;
                p_Pool[1].m_ChildEntry.Flink = 0LL;
                *(_QWORD *)&p_Pool[1].m_ObjectFlags = (char *)p_Pool + 120;
                p_Pool[1].m_Globals = (_FX_DRIVER_GLOBALS *)&p_Pool[1].m_Globals;
                p_Pool[1].m_ChildListHead.Blink = 0LL;
                *(_QWORD *)&p_Pool[2].m_Type = 216LL;
                p_Pool[2].m_Globals = 0LL;
                LODWORD(p_Pool[2].__vftable) = 0;
                p_Pool[2].m_ChildListHead.Flink = 0LL;
                *(_DWORD *)&p_Pool[2].m_ObjectFlags = 232;
                *((_BYTE *)&p_Pool[2].m_ObjectState + 3) = 0;
                *(_QWORD *)&p_Pool[2].m_SpinLock.m_DbgFlagIsInitialized = &FxRequestSystemBuffer::`vftable';
                p_Pool[2].m_SpinLock.m_Lock = 0LL;
                p_Pool[2].m_ParentObject = (FxObject *)&FxRequestOutputBuffer::`vftable';
                p_Pool[2].m_ChildEntry.Flink = 0LL;
                p_Pool[2].m_ChildListHead.Blink = 0LL;
                BYTE1(p_Pool[3].m_ChildListHead.Blink) = 0;
                p_Pool[2].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)&p_Pool[2].m_ChildEntry.Blink;
                p_Pool[2].m_ChildEntry.Blink = (_LIST_ENTRY *)&p_Pool[2].m_ChildEntry.Blink;
                p_Pool[3].__vftable = (FxObject_vtbl *)&p_Pool[2].96;
                p_Pool[2].m_DeviceBase = (FxDeviceBase *)&p_Pool[2].96;
                p_Pool[3].m_Globals = (_FX_DRIVER_GLOBALS *)&p_Pool[3].m_Type;
                *(_QWORD *)&p_Pool[3].m_Type = (char *)p_Pool + 320;
                p_Pool->__vftable = (FxObject_vtbl *)&FxRequestFromLookaside::`vftable';
                LOBYTE(p_Pool[3].m_ChildListHead.Blink) = 0;
                WORD1(p_Pool[3].m_ChildListHead.Blink) = 0;
                *(_QWORD *)&p_Pool[3].m_ObjectFlags = 0LL;
                p_Pool[3].m_ChildListHead.Flink = 0LL;
                p_Pool->m_DeviceBase = v45->m_DeviceBase;
                if ( !v57 )
                {
LABEL_77:
                  if ( v45->m_Globals->FxRequestParentOptimizationOn )
                  {
                    v61 = 0LL;
                    PPObject = 0LL;
                    if ( !p_Pool->m_ObjectSize )
                    {
                      v34 = -1073741816;
                      goto LABEL_217;
                    }
                    if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
                    {
                      FxObject::MarkPassiveCallbacks(p_Pool, ObjectLock);
                      v61 = (FxObject *)PPObject;
                      v55 = 1;
                    }
                    if ( attributes.ParentObject )
                    {
                      FxObjectHandleGetPtr(
                        p_Pool->m_Globals,
                        (unsigned __int64)attributes.ParentObject,
                        0x1000u,
                        &PPObject);
                      v61 = (FxObject *)PPObject;
                      v55 = 1;
                    }
                    if ( !v61 )
                      goto LABEL_84;
                    v34 = FxObject::AssignParentObject(p_Pool, v61);
                    if ( v34 >= 0 )
                    {
                      v34 = 0;
                      v55 = 1;
LABEL_84:
                      v62 = p_Pool->m_ObjectSize;
                      if ( v62 )
                        v63 = (__int64)p_Pool + v62;
                      else
                        v63 = 0LL;
                      if ( attributes.EvtDestroyCallback )
                        *(_QWORD *)(v63 + 24) = attributes.EvtDestroyCallback;
                      if ( attributes.EvtCleanupCallback )
                      {
                        *(_QWORD *)(v63 + 16) = attributes.EvtCleanupCallback;
                        p_Pool->m_ObjectFlags |= 0x400u;
                      }
                      p_Pool->m_ObjectFlags |= 8u;
                      goto LABEL_91;
                    }
                  }
                  else
                  {
                    v34 = FxObject::Commit(p_Pool, &attributes, 0LL, v45, 0);
                  }
                  if ( v34 >= 0 )
                  {
                    v55 = 1;
LABEL_91:
                    v46 = p_Pool;
                    goto LABEL_92;
                  }
LABEL_217:
                  WPP_IFR_SF_d(v45->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v34);
                  FxObject::DeleteFromFailedCreate(p_Pool);
                  v55 = 1;
LABEL_92:
                  if ( v34 >= 0 )
                  {
                    v64 = &this->m_FileObjectInfoHeadList;
                    v65 = this->m_FileObjectInfoHeadList.Blink->Blink;
                    if ( v65 != &this->m_FileObjectInfoHeadList )
                    {
                      do
                      {
                        Blink = v65;
                        if ( BYTE4(v65[9].Flink) )
                        {
                          v96 = v65[9].Blink;
                          *(_LIST_ENTRY *)&attributes.Size = v96[2];
                          *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v96[3];
                          *(_LIST_ENTRY *)&attributes.ParentObject = v96[4];
                          v97 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v96[5].Flink;
                        }
                        else
                        {
                          v98 = this->m_DeviceBase;
                          *(_OWORD *)&attributes.Size = *(_OWORD *)&v98[2].m_ExecutionLevel;
                          *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v98[3].FxNonPagedObject::FxObject::__vftable;
                          *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v98[3].m_Globals;
                          v97 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v98[3].m_ChildListHead.Flink;
                        }
                        attributes.ContextTypeInfo = v97;
                        if ( attributes.Size )
                        {
                          attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                          attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                          attributes.ParentObject = 0LL;
                          v34 = FxObjectAllocateContext(v46, &attributes, 1u, 0LL);
                          if ( v34 < 0 )
                          {
                            v99 = v65[9].Blink;
                            if ( v99 )
                              m_Driver = (unsigned __int64)v99[1].Flink;
                            else
                              m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
                            if ( *(_WORD *)(m_Driver + 10) )
                              v101 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                            else
                              v101 = 0LL;
                            v102 = this->m_DeviceBase;
                            if ( v102->m_ObjectSize )
                              v103 = (const void *)((unsigned __int64)v102 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            else
                              v103 = 0LL;
                            WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v103, v101, v34);
                            goto LABEL_309;
                          }
                          v55 = 1;
                        }
                        v65 = v65->Blink;
                      }
                      while ( v65 != v64 );
                    }
                    if ( KeGetCurrentIrql() <= 1u )
                    {
                      KeEnterCriticalRegion();
                      v134 = 1;
                    }
                    if ( (this->m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
                    {
                      v70 = 0;
LABEL_111:
                      v71 = 0LL;
                      if ( (this->m_Flags & 4) != 0 )
                      {
                        v117 = this->m_FileObjectInfoHeadList.Blink;
                        if ( v117 != v64 )
                        {
                          do
                          {
                            Blink = v117;
                            if ( !BYTE4(v117[9].Flink) )
                              break;
                            if ( v23 )
                              v23->m_PkgContext = v117->Blink;
                            v118 = this->m_DeviceBase;
                            if ( v118->m_ObjectSize )
                              v119 = (unsigned __int64)v118 ^ 0xFFFFFFFFFFFFFFF8uLL;
                            else
                              v119 = v71;
                            Handle = FxWmiProvider::GetHandle((FxWorkItem *)v46);
                            v30 = v117[2].Blink == 0LL;
                            v150 = Handle;
                            if ( !v30 )
                            {
                              LOBYTE(v153) = 0;
                              FxLockedCallback::CallbackStart((FxLockedCallback *)&v117[2], (unsigned __int8 *)&v153);
                              v121 = ((__int64 (__fastcall *)(unsigned __int64, WDFWORKITEM__ *, unsigned __int64))v117[2].Blink)(
                                       v119,
                                       v150,
                                       v142);
                              FxLockedCallback::CallbackEnd((FxLockedCallback *)&v117[2], (unsigned __int8)v153);
                              if ( v121 )
                                goto LABEL_122;
                              v71 = 0LL;
                            }
                            v117 = v117->Blink;
                          }
                          while ( v117 != &this->m_FileObjectInfoHeadList );
                          v70 = v152;
                        }
                      }
                      m_DriverCreatedQueue = this->m_DriverCreatedQueue;
                      if ( !m_DriverCreatedQueue )
                      {
                        if ( (this->m_Flags & 8) != 0 )
                        {
                          if ( v46->m_ObjectSize )
                            v73 = (unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL;
                          else
                            v73 = v71;
                          v74 = this->m_DeviceBase;
                          if ( v74->m_ObjectSize )
                            v75 = (unsigned __int64)v74 ^ 0xFFFFFFFFFFFFFFF8uLL;
                          else
                            v75 = v71;
                          if ( Blink[1].Blink )
                          {
                            v76 = Blink[1].Flink;
                            v133 = 0;
                            if ( v76 )
                              ((void (__fastcall *)(_LIST_ENTRY *, KIRQL *, unsigned __int64))v76->Flink[1].Flink)(
                                v76,
                                &v133,
                                v71);
                            ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))Blink[1].Blink)(
                              v75,
                              v73,
                              v142);
                            v77 = Blink[1].Flink;
                            if ( v77 )
                            {
                              ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v77->Flink[1].Blink)(v77, v133);
                              v34 = 259;
                              goto $RequestIsGone;
                            }
                          }
                        }
                        else
                        {
                          if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                          {
                            FxRequest::Complete((FxRequest *)v46, 0);
                            v34 = 259;
                            goto $RequestIsGone;
                          }
                          FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v46);
                        }
LABEL_122:
                        v34 = 259;
                        goto $RequestIsGone;
                      }
                      if ( v70 )
                      {
                        v122 = FxIoQueue::ForwardRequest(
                                 this->m_DefaultQueueForCreates,
                                 this->m_DriverCreatedQueue,
                                 (FxRequest *)v46);
                        if ( v122 < 0 )
                        {
                          v123 = this->m_DriverCreatedQueue;
                          if ( v123->m_ObjectSize )
                            v124 = (const void *)((unsigned __int64)v123 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v124 = 0LL;
                          WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v124, v122);
                          FxRequest::Complete((FxRequest *)v46, v122);
                          v34 = 259;
                          goto $RequestIsGone;
                        }
                        goto LABEL_122;
                      }
                      v34 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, (FxRequest *)v46);
                      if ( v34 >= 0 )
                        goto $RequestIsGone;
                      v125 = this->m_DriverCreatedQueue;
                      if ( v125->m_ObjectSize )
                        v112 = (const void *)((unsigned __int64)v125 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v112 = 0LL;
                      v113 = 29;
LABEL_264:
                      WPP_IFR_SF_qd(globals, 2u, 0xDu, v113, WPP_FxPkgGeneral_cpp_Traceguids, v112, v34);
                      goto $RequestIsGone;
                    }
                    if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
                    {
                      m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
                      Request = (FxRequest *)v46;
                      if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
                        && (v106 = (FxVerifierLock *)m_DefaultQueueForCreates[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                      {
                        FxVerifierLock::Lock(v106, (unsigned __int8 *)&v150, v55);
                        v67 = (unsigned __int8)v150;
                      }
                      else
                      {
                        v67 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
                        LOBYTE(v150) = v67;
                      }
                      if ( BYTE2(v46[3].m_ChildListHead.Blink) )
                        FxObject::AddRef(
                          v46,
                          (void *)0x50647746,
                          2308,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                      m_QueueState = m_DefaultQueueForCreates->m_QueueState;
                      if ( (m_QueueState & 1) == 0 )
                      {
                        v107 = m_DefaultQueueForCreates->m_Globals;
                        v34 = -1073741436;
                        if ( v107->FxVerboseOn )
                        {
                          v108 = "power stopping (Drain) in progress,";
                          if ( (m_QueueState & 0x10000) == 0 )
                            v108 = &a5;
                          if ( v46->m_ObjectSize )
                            v109 = (const void *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v109 = 0LL;
                          if ( m_DefaultQueueForCreates->m_ObjectSize )
                            v110 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v110 = 0LL;
                          WPP_IFR_SF_qLsqd(
                            v107,
                            5u,
                            (unsigned int)v108,
                            0x29u,
                            Tag,
                            v110,
                            m_QueueState,
                            v108,
                            v109,
                            -1073741436);
                        }
                        FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v67);
                        *(_QWORD *)(*(_QWORD *)&v46[1].m_SpinLock.m_DbgFlagIsInitialized + 56LL) = 0LL;
                        FxRequest::Complete((FxRequest *)v46, -1073741436);
                        v46->Release(
                          v46,
                          (void *)1886220099,
                          2335,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                        v111 = this->m_DefaultQueueForCreates;
                        if ( v111->m_ObjectSize )
                          v112 = (const void *)((unsigned __int64)v111 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v112 = 0LL;
                        v113 = 27;
                        goto LABEL_264;
                      }
                      v69 = m_DefaultQueueForCreates->m_Globals;
                      if ( v69->FxVerboseOn )
                      {
                        if ( m_DefaultQueueForCreates->m_ObjectSize )
                        {
                          v114 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                          v115 = 0LL;
                        }
                        else
                        {
                          v115 = 0LL;
                          v114 = 0LL;
                        }
                        if ( v46->m_ObjectSize )
                          v115 = (const void *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        WPP_IFR_SF_qq(v69, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v115, v114);
                      }
                      if ( v46->m_Globals->FxVerifierIO )
                      {
                        FxNonPagedObject::Lock((FxNonPagedObject *)v46, &v136);
                        v116 = v46->m_Globals;
                        if ( v116->FxVerifierOn )
                          FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v46, v116);
                        FxNonPagedObject::Unlock((FxNonPagedObject *)v46, v136);
                      }
                      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v46[1].m_SpinLock.m_DbgFlagIsInitialized + 184LL) + 3LL) |= 1u;
                      if ( BYTE2(v46[3].m_ChildListHead.Blink) )
                      {
                        if ( m_DefaultQueueForCreates->m_Dispatching )
                        {
                          FxIoQueue::InsertNewRequestLocked(m_DefaultQueueForCreates, &Request, (unsigned __int8)v150);
                          FxNonPagedObject::Unlock(m_DefaultQueueForCreates, (unsigned __int8)v150);
                          v23 = pFxFO;
                          goto LABEL_109;
                        }
                        v23 = pFxFO;
                        v67 = (unsigned __int8)v150;
                      }
                      FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v67, (FxRequest *)v46);
LABEL_109:
                      if ( FxIoQueue::GetRequest(this->m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
                        goto LABEL_122;
                      v70 = 1;
                      v64 = &this->m_FileObjectInfoHeadList;
                      v152 = 1;
                      goto LABEL_111;
                    }
                    v34 = -1073741808;
                    v104 = this->m_DeviceBase;
                    v91 = Irp;
                    if ( v104->m_ObjectSize )
                      v105 = (const void *)((unsigned __int64)v104 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v105 = 0LL;
                    WPP_IFR_SF_qid(
                      globals,
                      2u,
                      0xDu,
                      0x1Au,
                      WPP_FxPkgGeneral_cpp_Traceguids,
                      v105,
                      (__int64)Irp->m_Irp,
                      -1073741808);
                    goto LABEL_310;
                  }
LABEL_305:
                  v126 = this->m_DeviceBase;
                  if ( v126->m_ObjectSize )
                    v127 = (const void *)((unsigned __int64)v126 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v127 = 0LL;
                  WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v127, v34);
LABEL_309:
                  v91 = Irp;
LABEL_310:
                  if ( v46 )
                    FxObject::DeleteFromFailedCreate(v46);
LABEL_312:
                  if ( v23 )
                  {
                    FxNonPagedObject::Lock(v23->m_DeviceBase, v137);
                    v128 = v23->m_Link.Flink;
                    v129 = v23->m_Link.Blink;
                    if ( v128->Blink != &v23->m_Link || v129->Flink != &v23->m_Link )
                      __fastfail(3u);
                    v129->Flink = v128;
                    v128->Blink = v129;
                    FxNonPagedObject::Unlock(v23->m_DeviceBase, v137[0]);
                    FxObject::DeleteFromFailedCreate(v23);
                  }
                  goto LABEL_324;
                }
                v58 = *(_QWORD *)&p_Pool[1].m_SpinLock.m_DbgFlagIsInitialized;
                v59 = *(char **)(v58 + 184);
                v60 = *v59;
                if ( (unsigned __int8)*v59 < 3u )
                {
LABEL_76:
                  v55 = 1;
                  goto LABEL_77;
                }
                if ( v60 <= 4u )
                {
                  if ( v45[1].m_Refcnt == 1 )
                  {
                    if ( *(_BYTE *)(v58 + 64) )
                      goto LABEL_76;
                    v95 = *(_QWORD *)(v58 + 112);
                    goto LABEL_211;
                  }
                  if ( v45[1].m_Refcnt != 2 )
                    goto LABEL_76;
                }
                else
                {
                  if ( (unsigned __int8)(v60 - 14) > 1u )
                    goto LABEL_76;
                  if ( (*((_DWORD *)v59 + 6) & 3) == 0 )
                  {
                    p_Pool[2].m_SpinLock.m_Lock = *(_QWORD *)(v58 + 24);
                    p_Pool[2].m_ChildEntry.Flink = *(_LIST_ENTRY **)(v58 + 24);
LABEL_212:
                    if ( p_Pool[2].m_SpinLock.m_Lock )
                      HIBYTE(p_Pool[2].m_ObjectState) |= 1u;
                    v55 = 1;
                    if ( p_Pool[2].m_ChildEntry.Flink )
                      HIBYTE(p_Pool[2].m_ObjectState) |= 2u;
                    goto LABEL_77;
                  }
                  if ( (*((_DWORD *)v59 + 6) & 3) != 1 && (*((_DWORD *)v59 + 6) & 3) != 2 )
                  {
                    if ( (*((_DWORD *)v59 + 6) & 3) == 3 )
                    {
                      if ( *v59 != 15 && *(_BYTE *)(v58 + 64) )
                        goto LABEL_76;
                      p_Pool[2].m_SpinLock.m_Lock = *((_QWORD *)v59 + 4);
                      p_Pool[2].m_ChildEntry.Flink = *(_LIST_ENTRY **)(v58 + 112);
                    }
                    goto LABEL_212;
                  }
                }
                v95 = *(_QWORD *)(v58 + 24);
LABEL_211:
                p_Pool[2].m_SpinLock.m_Lock = v95;
                goto LABEL_212;
              }
            }
          }
          else
          {
            FxObject::TraceDroppedEvent(v23, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v31);
            v34 = -1073741738;
          }
        }
        else
        {
          v34 = -1073741816;
        }
        FxObject::DeleteFromFailedCreate(v23);
        m_Globals = globals;
LABEL_319:
        v130 = this->m_DeviceBase;
        if ( v130->m_ObjectSize )
          v131 = (const void *)((unsigned __int64)v130 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v131 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v131, v34);
        goto LABEL_323;
      }
      goto LABEL_317;
    }
LABEL_149:
    WPP_IFR_SF_DDxd(v15, 0xA0u, v16, 0, Tag, 0xA0u, 0, flags, id);
LABEL_317:
    m_Globals = globals;
    goto LABEL_318;
  }
  if ( m_DeviceBase->m_ObjectSize )
    v79 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v79 = 0LL;
  WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v79);
  v34 = -1073741790;
LABEL_323:
  v91 = Irp;
LABEL_324:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v91->m_Irp->IoStatus.Status = v34;
  v91->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v91->m_Irp, 0);
  v91->m_Irp = 0LL;
$RequestIsGone:
  if ( v134 )
    KeLeaveCriticalRegion();
  return (unsigned int)v34;
}
