/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C000AAC8 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000AF2C (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C0010A2C (WPP_IFR_SF_qqqd.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C001CC00 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0023424 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0031564 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0054F8C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0055834 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0055FBC (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0056944 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006B488 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C006D54C (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0083350 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  FxFileObject *id; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxIrp *v6; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *Blink; // r12
  _FILE_OBJECT *v9; // r8
  FxDeviceBase *m_DeviceBase; // rdi
  int v11; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r13
  __int128 v13; // kr00_16
  int v14; // r15d
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned __int64 flags; // rax
  ULONG v17; // r9d
  SIZE_T v18; // rcx
  void *Caller; // rax
  FxFileObject *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  int v23; // r14d
  _FX_DRIVER_GLOBALS *v24; // rax
  KIRQL v25; // al
  KIRQL v26; // al
  KIRQL v27; // al
  bool v28; // zf
  KIRQL v29; // al
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int8 v32; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v34; // rax
  unsigned __int8 v35; // r9
  FxDeviceBase_vtbl *v36; // r8
  _LIST_ENTRY *p_m_Link; // rcx
  _LIST_ENTRY *v38; // rdi
  FxDeviceBase *v39; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v40; // xmm1_8
  FxDeviceBase *v41; // r14
  FxObject *v42; // r15
  __int64 v43; // rax
  FX_POOL_TRACKER *v44; // rdi
  _FX_DRIVER_GLOBALS *v45; // rdx
  _QWORD *p_Flink; // rax
  FxObject *v47; // rdi
  _FX_DRIVER_GLOBALS *v48; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v49; // rax
  _FX_DRIVER_GLOBALS *v50; // rax
  _IRP *v51; // rcx
  __int64 v52; // rcx
  char *v53; // rdx
  unsigned __int8 v54; // al
  FxObject *v55; // rdx
  unsigned __int16 v56; // ax
  char *v57; // rax
  _LIST_ENTRY *v58; // rdi
  FxIoQueue *m_DefaultQueueForCreates; // r13
  KIRQL v60; // di
  unsigned __int8 v61; // r8
  unsigned __int16 v62; // r9
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v64; // rcx
  char v65; // dl
  unsigned __int64 v66; // r8
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v68; // r15
  FxDeviceBase *v69; // rbx
  unsigned __int64 v70; // rbx
  _LIST_ENTRY *v71; // rcx
  _LIST_ENTRY *v72; // rcx
  const void *v74; // rdi
  FxIrp *v75; // rdi
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *v79; // rdx
  FxVerifierLock *m_CallbackLockObjectPtr; // rcx
  FxVerifierLock *v81; // rcx
  _LIST_ENTRY *v82; // rcx
  unsigned __int64 Flink; // rcx
  const void *v84; // rcx
  FxDeviceBase *v85; // rdx
  const void *v86; // rdx
  unsigned __int8 v87; // r8
  _LIST_ENTRY *v88; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v90; // rdx
  unsigned __int64 v91; // rax
  _LIST_ENTRY *v92; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v93; // xmm1_8
  FxDeviceBase *v94; // rax
  _LIST_ENTRY *v95; // rax
  unsigned __int64 m_Driver; // rax
  unsigned __int64 v97; // rax
  FxDeviceBase *v98; // rcx
  const void *v99; // rcx
  FxDeviceBase *v100; // rax
  const void *v101; // rax
  FxVerifierLock *v102; // rcx
  _FX_DRIVER_GLOBALS *v103; // r10
  const char *v104; // r8
  const void *v105; // rdx
  const void *v106; // rax
  FxIoQueue *v107; // rax
  const void *v108; // rax
  unsigned __int16 v109; // r9
  const void *v110; // rdx
  const void *v111; // rax
  unsigned __int8 v112; // r8
  _FX_DRIVER_GLOBALS *v113; // rdx
  unsigned __int8 v114; // r8
  _LIST_ENTRY *v115; // r14
  FxDeviceBase *v116; // rdi
  unsigned __int64 v117; // rdi
  WDFWORKITEM__ *Handle; // rax
  char v119; // di
  int v120; // edi
  FxIoQueue *v121; // rcx
  const void *v122; // rcx
  FxIoQueue *v123; // rax
  FxDeviceBase *v124; // rax
  const void *v125; // rax
  unsigned __int8 v126; // r8
  _LIST_ENTRY *v127; // rdx
  _LIST_ENTRY *v128; // rcx
  FxDeviceBase *v129; // rax
  const void *v130; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-A9h]
  KIRQL v132; // [rsp+50h] [rbp-79h] BYREF
  char v133; // [rsp+51h] [rbp-78h]
  unsigned __int8 PreviousIrql; // [rsp+52h] [rbp-77h] BYREF
  unsigned __int8 v135; // [rsp+53h] [rbp-76h] BYREF
  unsigned __int8 v136[4]; // [rsp+54h] [rbp-75h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-71h]
  unsigned __int64 v138; // [rsp+60h] [rbp-69h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+68h] [rbp-61h] BYREF
  void *PPObject; // [rsp+A0h] [rbp-29h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+A8h] [rbp-21h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+B0h] [rbp-19h]
  FxFileObject *pFxFO; // [rsp+B8h] [rbp-11h]
  FxIrp v144; // [rsp+C0h] [rbp-9h]
  FxVerifierLock *v145; // [rsp+C8h] [rbp-1h] BYREF
  FxRequest *Request; // [rsp+D0h] [rbp+7h] BYREF
  FxRequest *outputRequest; // [rsp+D8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  WDFWORKITEM__ *v149; // [rsp+130h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+138h] [rbp+6Fh]
  char v151; // [rsp+140h] [rbp+77h]
  _FX_DRIVER_GLOBALS *v152; // [rsp+148h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Irp = FxIrp->m_Irp;
  id = 0LL;
  m_Globals = this->m_Globals;
  v138 = 0LL;
  v6 = FxIrp;
  v133 = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  Blink = 0LL;
  v151 = 0;
  globals = m_Globals;
  v9 = CurrentStackLocation->FileObject;
  FileObject = v9;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v11 = (_DWORD)m_Irp + 1;
  if ( !BYTE4(m_DeviceBase[1].m_Globals) || v11 <= 2 )
  {
    p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    memset(&attributes.Size + 1, 0, 20);
    attributes.Size = 56;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
    memset(&attributes.ParentObject, 0, 24);
    v13 = 0uLL;
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
    {
      Blink = this->m_FileObjectInfoHeadList.Blink;
      if ( LODWORD(Blink[5].Blink) )
      {
        attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
        v13 = *(_OWORD *)&attributes.ContextSizeOverride;
      }
      attributes.ExecutionLevel = this->m_ExecutionLevel;
      attributes.SynchronizationScope = this->m_SynchronizationScope;
    }
    v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    v15 = m_DeviceBase->m_Globals;
    if ( v14 == 1 )
    {
      pFxFO = 0LL;
      goto LABEL_52;
    }
    if ( !v9 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
    {
      if ( v15->FxVerboseOn )
        WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, FxIrp->m_Irp);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      m_Globals = globals;
      v23 = -1073741438;
      goto LABEL_319;
    }
    flags = 0LL;
    v17 = v15->Tag;
    LODWORD(v152) = ExDefaultNonPagedPoolType;
    LODWORD(PPObject) = v17;
    if ( *((_QWORD *)&v13 + 1) )
    {
      flags = v13;
      if ( !(_QWORD)v13 )
        flags = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL);
    }
    v18 = 208LL;
    v138 = 208LL;
    if ( flags )
    {
      v76 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v76 < flags )
      {
LABEL_318:
        v23 = -1073741670;
        goto LABEL_319;
      }
      v77 = v76 + 208;
      if ( v77 < 0xD0 )
      {
        v138 = -1LL;
        LODWORD(id) = -1073741675;
        goto LABEL_148;
      }
      v18 = v77;
      v138 = v77;
    }
    if ( v15->FxVerifierHandle )
    {
      if ( v18 + 32 < v18 )
      {
        v18 = -1LL;
        LODWORD(id) = -1073741675;
      }
      else
      {
        v18 += 32LL;
        LODWORD(id) = 0;
      }
      v138 = v18;
    }
    if ( (int)id >= 0 )
    {
      if ( v15->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v20 = (FxFileObject *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, ExDefaultNonPagedPoolType, v18, v17, Caller);
      id = v20;
      if ( v20 )
      {
        if ( v15->FxVerifierHandle )
        {
          memset(v20, 0, 0x20uLL);
          *(_DWORD *)(&id->m_ObjectState + 1) = 1146058822;
          id = (FxFileObject *)((char *)id + 32);
        }
        memset(&id[1], 0, 0x30uLL);
        id[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)id;
        ContextTypeInfo = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSizeOverride = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
          memset(&id[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          ContextTypeInfo = attributes.ContextTypeInfo;
        }
        id[1].m_ChildListHead.Flink = (_LIST_ENTRY *)ContextTypeInfo;
      }
      if ( id )
      {
        id->m_Globals = m_DeviceBase->m_Globals;
        v23 = 0;
        id->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxObject::`vftable';
        *(_DWORD *)&id->m_Type = 10489880;
        id->m_SpinLock.m_Lock = 0LL;
        id->m_SpinLock.m_DbgFlagIsInitialized = 1;
        id->m_Refcnt = 1;
        *(_DWORD *)&id->m_ObjectFlags = 0x10000;
        id->m_ParentObject = 0LL;
        id->m_ChildListHead.Blink = &id->m_ChildListHead;
        id->m_ChildListHead.Flink = &id->m_ChildListHead;
        id->m_ChildEntry.Blink = &id->m_ChildEntry;
        id->m_ChildEntry.Flink = &id->m_ChildEntry;
        v24 = id->m_Globals;
        id->m_DisposeSingleEntry.Next = 0LL;
        id->m_DeviceBase = 0LL;
        if ( v24->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(id, v21, 0);
        id->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxNonPagedObject::`vftable';
        id->m_NPLock.m_Lock = 0LL;
        id->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(id->m_ObjectFlags) < 0 )
        {
          v79 = id->m_Globals;
          if ( v79->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v79, id);
            id[-1].m_PkgContext = VerifierLock;
          }
        }
        id->m_PkgContext = 0LL;
        id->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxObject::`vftable'.ImageSize;
        id->m_DeviceBase = m_DeviceBase;
        id->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxObject::`vftable'.WdfBindInfo;
        id->m_FileObject.m_FileObject = FileObject;
        v25 = KeAcquireSpinLockRaiseToDpc(&id->m_SpinLock.m_Lock);
        id->m_ObjectFlags |= 2u;
        KeReleaseSpinLock(&id->m_SpinLock.m_Lock, v25);
        v144.m_Irp = 0LL;
        if ( id->m_ObjectSize )
        {
          if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
          {
            v26 = KeAcquireSpinLockRaiseToDpc(&id->m_SpinLock.m_Lock);
            id->m_ObjectFlags |= 0x11u;
            KeReleaseSpinLock(&id->m_SpinLock.m_Lock, v26);
          }
          v144.m_Irp = (_IRP *)m_DeviceBase;
          v27 = KeAcquireSpinLockRaiseToDpc(&id->m_SpinLock.m_Lock);
          v28 = id->m_ObjectState == 1;
          LOBYTE(v152) = v27;
          if ( v28 )
          {
            if ( id->m_ParentObject )
            {
              KeReleaseSpinLock(&id->m_SpinLock.m_Lock, v27);
              v23 = -1071644147;
            }
            else
            {
              v29 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
              v28 = m_DeviceBase->m_ObjectState == 1;
              v132 = v29;
              if ( v28 )
              {
                v30 = m_DeviceBase->m_ChildListHead.Blink;
                p_m_ChildEntry = &id->m_ChildEntry;
                id->m_ChildEntry.Flink = &m_DeviceBase->m_ChildListHead;
                id->m_ChildEntry.Blink = v30;
                if ( v30->Flink != &m_DeviceBase->m_ChildListHead )
                  __fastfail(3u);
                v30->Flink = p_m_ChildEntry;
                m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !id->m_DeviceBase )
                  id->m_DeviceBase = m_DeviceBase->m_DeviceBase;
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v29);
                id->m_ParentObject = m_DeviceBase;
              }
              else
              {
                FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v132);
                v23 = -1073741738;
              }
              KeReleaseSpinLock(&id->m_SpinLock.m_Lock, (KIRQL)v152);
              if ( v23 >= 0 )
              {
                m_ObjectSize = id->m_ObjectSize;
                if ( m_ObjectSize )
                  v34 = (char *)id + m_ObjectSize;
                else
                  v34 = 0LL;
                if ( attributes.EvtDestroyCallback )
                  *((_QWORD *)v34 + 3) = attributes.EvtDestroyCallback;
                if ( attributes.EvtCleanupCallback )
                {
                  *((_QWORD *)v34 + 2) = attributes.EvtCleanupCallback;
                  id->m_ObjectFlags |= 0x400u;
                }
                id->m_ObjectFlags |= 8u;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (m_CallbackLockObjectPtr = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Lock(m_CallbackLockObjectPtr, &PreviousIrql, v32);
                  v35 = PreviousIrql;
                }
                else
                {
                  v35 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
                }
                v36 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
                p_m_Link = &id->m_Link;
                id->m_Link.Flink = (_LIST_ENTRY *)v36;
                id->m_Link.Blink = (_LIST_ENTRY *)&m_DeviceBase[2];
                if ( (FxDeviceBase *)v36->~FxObject != &m_DeviceBase[2] )
                  __fastfail(3u);
                v36->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
                m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)p_m_Link;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (v81 = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Unlock(v81, v35, (unsigned __int8)v36);
                }
                else
                {
                  KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v35);
                }
                if ( v14 == 2 )
                {
                  FileObject->FsContext = id;
                }
                else if ( v14 == 3 )
                {
                  FileObject->FsContext2 = id;
                }
                v28 = id->m_ObjectSize == 0;
                pFxFO = id;
                if ( v28 )
                  v138 = 0LL;
                else
                  v138 = (unsigned __int64)id ^ 0xFFFFFFFFFFFFFFF8uLL;
                v38 = this->m_FileObjectInfoHeadList.Blink->Blink;
                if ( v38 != p_m_FileObjectInfoHeadList )
                {
                  while ( 1 )
                  {
                    Blink = v38;
                    attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v38[5].Blink;
                    if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
                    {
                      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                      attributes.ParentObject = 0LL;
                      v23 = FxObjectAllocateContext(id, &attributes, 1u, 0LL);
                      if ( v23 < 0 )
                        break;
                    }
                    v38 = v38->Blink;
                    if ( v38 == p_m_FileObjectInfoHeadList )
                      goto LABEL_51;
                  }
                  v82 = v38[9].Blink;
                  if ( v82 )
                    Flink = (unsigned __int64)v82[1].Flink;
                  else
                    Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
                  if ( *(_WORD *)(Flink + 10) )
                    v84 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v84 = 0LL;
                  v85 = this->m_DeviceBase;
                  if ( v85->m_ObjectSize )
                    v86 = (const void *)((unsigned __int64)v85 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v86 = 0LL;
                  WPP_IFR_SF_qqqd(
                    globals,
                    2u,
                    0xDu,
                    0x17u,
                    WPP_FxPkgGeneral_cpp_Traceguids,
                    &v38[5].Blink,
                    v86,
                    v84,
                    v23);
                  v75 = Irp;
                  goto LABEL_311;
                }
LABEL_51:
                v6 = Irp;
LABEL_52:
                if ( !this->m_DriverCreatedQueue && (this->m_Flags & 0xC) == 0 )
                {
                  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                  {
                    return (unsigned int)FxPkgGeneral::ForwardCreateRequest(
                                           this,
                                           v6,
                                           FxPkgGeneral::_CreateCompletionRoutine,
                                           this);
                  }
                  else
                  {
                    v23 = 0;
                    v6->m_Irp->IoStatus.Status = 0;
                    v6->m_Irp->IoStatus.Information = 0LL;
                    IofCompleteRequest(v6->m_Irp, 0);
                    Irp->m_Irp = 0LL;
                  }
                  return (unsigned int)v23;
                }
                if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
                  && (Blink = this->m_FileObjectInfoHeadList.Blink, BYTE4(Blink[9].Flink)) )
                {
                  v88 = Blink[9].Blink;
                  *(_LIST_ENTRY *)&attributes.Size = v88[2];
                  *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v88[3];
                  *(_LIST_ENTRY *)&attributes.ParentObject = v88[4];
                  v40 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v88[5].Flink;
                }
                else
                {
                  v39 = this->m_DeviceBase;
                  *(_OWORD *)&attributes.Size = *(_OWORD *)&v39[2].m_ExecutionLevel;
                  *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v39[3].FxNonPagedObject::FxObject::__vftable;
                  *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v39[3].m_Globals;
                  v40 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v39[3].m_ChildListHead.Flink;
                }
                v41 = this->m_DeviceBase;
                attributes.ContextTypeInfo = v40;
                VerifierLock = (FxVerifierLock *)v41;
                if ( *(FxDeviceBase **)&v41[1].m_ExecutionLevel != (FxDeviceBase *)&v41[1].m_ExecutionLevel )
                {
                  attributes.ExecutionLevel = WdfExecutionLevelDispatch;
                  attributes.SynchronizationScope = WdfSynchronizationScopeNone;
                  attributes.ParentObject = 0LL;
                }
                v42 = 0LL;
                v144.m_Irp = v6->m_Irp;
                v152 = v41->m_Globals;
                v43 = *(_QWORD *)&v41[3].m_SpinLock.m_DbgFlagIsInitialized;
                if ( v43 && *(_WORD *)(v43 + 8) == 4354 && *(_BYTE *)(v43 + 1451) )
                {
                  v44 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v41[2].m_SpinLock);
                  if ( v44 )
                    goto LABEL_62;
                }
                else
                {
                  ++HIDWORD(v41[2].m_ParentObject);
                  v44 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v41[2].m_SpinLock);
                  if ( v44 )
                  {
LABEL_62:
                    if ( !v44 )
                      goto LABEL_303;
                    v45 = v152;
                    if ( v152->FxPoolTrackingOn )
                    {
                      FxPoolInsertNonPagedAllocateTracker(
                        &v152->FxPoolFrameworks,
                        v44,
                        (unsigned __int64)v41[2].m_CallbackLockObjectPtr,
                        v152->Tag,
                        retaddr);
                      v45 = v152;
                      p_Flink = &v44[1].Link.Flink;
                    }
                    else
                    {
                      p_Flink = &v44->Link.Flink;
                    }
                    *p_Flink = v44;
                    v47 = (FxObject *)(p_Flink + 2);
                    p_Flink[1] = v45;
                    if ( v45->FxVerifierHandle )
                    {
                      memset(p_Flink + 2, 0, 0x20uLL);
                      *(_DWORD *)(&v47->m_ObjectState + 1) = 1146058822;
                      v47 = (FxObject *)((char *)v47 + 32);
                    }
                    memset(&v47[3].m_SpinLock.m_Lock, 0, 0x30uLL);
                    v47[3].m_SpinLock.m_Lock = (unsigned __int64)v47;
                    v49 = attributes.ContextTypeInfo;
                    if ( attributes.ContextTypeInfo )
                    {
                      ContextSize = attributes.ContextSizeOverride;
                      if ( !attributes.ContextSizeOverride )
                        ContextSize = attributes.ContextTypeInfo->ContextSize;
                      memset(&v47[4], 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                      v49 = attributes.ContextTypeInfo;
                    }
                    v47[3].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)v49;
                    if ( !v47 )
                    {
LABEL_303:
                      v23 = -1073741670;
                      WPP_IFR_SF_d(
                        *(_FX_DRIVER_GLOBALS **)&VerifierLock->m_Lock.m_DbgFlagIsInitialized,
                        2u,
                        0x10u,
                        0xAu,
                        WPP_FxRequest_cpp_Traceguids,
                        -1073741670);
                      goto LABEL_304;
                    }
                    v47->m_Globals = v41->m_Globals;
                    v47->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
                    *(_DWORD *)&v47->m_Type = 24121352;
                    v47->m_SpinLock.m_Lock = 0LL;
                    v47->m_SpinLock.m_DbgFlagIsInitialized = 1;
                    v47->m_Refcnt = 1;
                    *(_DWORD *)&v47->m_ObjectFlags = 0x10000;
                    v47->m_ParentObject = 0LL;
                    v47->m_ChildListHead.Blink = &v47->m_ChildListHead;
                    v47->m_ChildListHead.Flink = &v47->m_ChildListHead;
                    v47->m_ChildEntry.Blink = &v47->m_ChildEntry;
                    v47->m_ChildEntry.Flink = &v47->m_ChildEntry;
                    v50 = v47->m_Globals;
                    v47->m_DisposeSingleEntry.Next = 0LL;
                    v47->m_DeviceBase = 0LL;
                    if ( v50->FxVerifierOn )
                      FxObject::Vf_VerifyConstruct(v47, v48, 0);
                    v47->__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
                    *(_QWORD *)&v47[1].m_Type = 0LL;
                    LOBYTE(v47[1].__vftable) = 1;
                    if ( SLOBYTE(v47->m_ObjectFlags) < 0 )
                    {
                      v90 = v47->m_Globals;
                      if ( v90->FxVerifierLock )
                      {
                        v145 = 0LL;
                        FxVerifierLock::CreateAndInitialize(&v145, v90, v47);
                        v47[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)v145;
                      }
                    }
                    v51 = v144.m_Irp;
                    v47->__vftable = (FxObject_vtbl *)&FxRequestBase::`vftable';
                    *(_QWORD *)&v47[1].m_SpinLock.m_DbgFlagIsInitialized = v51;
                    v47[1].m_ChildEntry.Blink = 0LL;
                    v47[1].m_DisposeSingleEntry.Next = 0LL;
                    WORD2(v47[2].__vftable) = 0;
                    *((_BYTE *)&v47[2].m_ObjectState + 4) = 1;
                    v47[1].m_SpinLock.m_Lock = 0LL;
                    v47[1].m_DeviceBase = 0LL;
                    BYTE6(v47[2].__vftable) = *(_QWORD *)&v47[1].m_SpinLock.m_DbgFlagIsInitialized == 0LL;
                    HIBYTE(v47[2].__vftable) = 0;
                    *((_BYTE *)&v47[2].m_ObjectState + 2) = 0;
                    v47[1].m_ParentObject = 0LL;
                    v47[1].m_ChildEntry.Flink = 0LL;
                    *(_QWORD *)&v47[1].m_ObjectFlags = (char *)v47 + 120;
                    v47[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v47[1].m_Globals;
                    v47[1].m_ChildListHead.Blink = 0LL;
                    *(_QWORD *)&v47[2].m_Type = 216LL;
                    v47[2].m_Globals = 0LL;
                    LODWORD(v47[2].__vftable) = 0;
                    v47[2].m_ChildListHead.Flink = 0LL;
                    *(_DWORD *)&v47[2].m_ObjectFlags = 232;
                    *((_BYTE *)&v47[2].m_ObjectState + 3) = 0;
                    *(_QWORD *)&v47[2].m_SpinLock.m_DbgFlagIsInitialized = &FxRequestSystemBuffer::`vftable';
                    v47[2].m_SpinLock.m_Lock = 0LL;
                    v47[2].m_ParentObject = (FxObject *)&FxRequestOutputBuffer::`vftable';
                    v47[2].m_ChildEntry.Flink = 0LL;
                    v47[2].m_ChildListHead.Blink = 0LL;
                    BYTE1(v47[3].m_ChildListHead.Blink) = 0;
                    v47[2].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)&v47[2].m_ChildEntry.Blink;
                    v47[2].m_ChildEntry.Blink = (_LIST_ENTRY *)&v47[2].m_ChildEntry.Blink;
                    v47[3].__vftable = (FxObject_vtbl *)&v47[2].96;
                    v47[2].m_DeviceBase = (FxDeviceBase *)&v47[2].96;
                    v47[3].m_Globals = (_FX_DRIVER_GLOBALS *)&v47[3].m_Type;
                    *(_QWORD *)&v47[3].m_Type = (char *)v47 + 320;
                    v47->__vftable = (FxObject_vtbl *)&FxRequestFromLookaside::`vftable';
                    LOBYTE(v47[3].m_ChildListHead.Blink) = 0;
                    WORD1(v47[3].m_ChildListHead.Blink) = 0;
                    *(_QWORD *)&v47[3].m_ObjectFlags = 0LL;
                    v47[3].m_ChildListHead.Flink = 0LL;
                    v47->m_DeviceBase = v41->m_DeviceBase;
                    if ( !v51
                      || (v52 = *(_QWORD *)&v47[1].m_SpinLock.m_DbgFlagIsInitialized,
                          v53 = *(char **)(v52 + 184),
                          v54 = *v53,
                          (unsigned __int8)*v53 < 3u) )
                    {
LABEL_74:
                      if ( v41->m_Globals->FxRequestParentOptimizationOn )
                      {
                        v55 = 0LL;
                        PPObject = 0LL;
                        if ( !v47->m_ObjectSize )
                        {
                          v23 = -1073741816;
                          goto LABEL_217;
                        }
                        if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
                        {
                          FxObject::MarkPassiveCallbacks(v47, ObjectLock);
                          v55 = (FxObject *)PPObject;
                        }
                        if ( attributes.ParentObject )
                        {
                          FxObjectHandleGetPtr(
                            v47->m_Globals,
                            (unsigned __int64)attributes.ParentObject,
                            0x1000u,
                            &PPObject);
                          v55 = (FxObject *)PPObject;
                        }
                        if ( !v55 || (v23 = FxObject::AssignParentObject(v47, v55), v23 >= 0) )
                        {
                          v56 = v47->m_ObjectSize;
                          if ( v56 )
                            v57 = (char *)v47 + v56;
                          else
                            v57 = 0LL;
                          if ( attributes.EvtDestroyCallback )
                            *((_QWORD *)v57 + 3) = attributes.EvtDestroyCallback;
                          if ( attributes.EvtCleanupCallback )
                          {
                            *((_QWORD *)v57 + 2) = attributes.EvtCleanupCallback;
                            v47->m_ObjectFlags |= 0x400u;
                          }
                          v47->m_ObjectFlags |= 8u;
                          v23 = 0;
                          goto LABEL_88;
                        }
                      }
                      else
                      {
                        v23 = FxObject::Commit(v47, &attributes, 0LL, v41, 0);
                      }
                      if ( v23 >= 0 )
                      {
LABEL_88:
                        v42 = v47;
                        goto LABEL_89;
                      }
LABEL_217:
                      WPP_IFR_SF_d(
                        *(_FX_DRIVER_GLOBALS **)&VerifierLock->m_Lock.m_DbgFlagIsInitialized,
                        2u,
                        0x10u,
                        0xBu,
                        WPP_FxRequest_cpp_Traceguids,
                        v23);
                      FxObject::DeleteFromFailedCreate(v47);
LABEL_89:
                      if ( v23 >= 0 )
                      {
                        v58 = this->m_FileObjectInfoHeadList.Blink->Blink;
                        if ( v58 == p_m_FileObjectInfoHeadList )
                        {
LABEL_91:
                          if ( KeGetCurrentIrql() <= 1u )
                          {
                            KeEnterCriticalRegion();
                            v133 = 1;
                          }
                          if ( (this->m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
                          {
                            v65 = 0;
LABEL_108:
                            v66 = 0LL;
                            if ( (this->m_Flags & 4) != 0 )
                            {
                              v115 = this->m_FileObjectInfoHeadList.Blink;
                              if ( v115 != p_m_FileObjectInfoHeadList )
                              {
                                do
                                {
                                  Blink = v115;
                                  if ( !BYTE4(v115[9].Flink) )
                                    break;
                                  if ( id )
                                    id->m_PkgContext = v115->Blink;
                                  v116 = this->m_DeviceBase;
                                  if ( v116->m_ObjectSize )
                                    v117 = (unsigned __int64)v116 ^ 0xFFFFFFFFFFFFFFF8uLL;
                                  else
                                    v117 = v66;
                                  Handle = FxWmiProvider::GetHandle((FxWorkItem *)v42);
                                  v28 = v115[2].Blink == 0LL;
                                  v149 = Handle;
                                  if ( !v28 )
                                  {
                                    LOBYTE(v152) = 0;
                                    FxLockedCallback::CallbackStart(
                                      (FxLockedCallback *)&v115[2],
                                      (unsigned __int8 *)&v152);
                                    v119 = ((__int64 (__fastcall *)(unsigned __int64, WDFWORKITEM__ *, unsigned __int64))v115[2].Blink)(
                                             v117,
                                             v149,
                                             v138);
                                    FxLockedCallback::CallbackEnd((FxLockedCallback *)&v115[2], (unsigned __int8)v152);
                                    if ( v119 )
                                      goto LABEL_119;
                                    v66 = 0LL;
                                  }
                                  v115 = v115->Blink;
                                }
                                while ( v115 != p_m_FileObjectInfoHeadList );
                                v65 = v151;
                              }
                            }
                            m_DriverCreatedQueue = this->m_DriverCreatedQueue;
                            if ( !m_DriverCreatedQueue )
                            {
                              if ( (this->m_Flags & 8) != 0 )
                              {
                                if ( v42->m_ObjectSize )
                                  v68 = (unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL;
                                else
                                  v68 = v66;
                                v69 = this->m_DeviceBase;
                                if ( v69->m_ObjectSize )
                                  v70 = (unsigned __int64)v69 ^ 0xFFFFFFFFFFFFFFF8uLL;
                                else
                                  v70 = v66;
                                if ( Blink[1].Blink )
                                {
                                  v71 = Blink[1].Flink;
                                  v132 = 0;
                                  if ( v71 )
                                    ((void (__fastcall *)(_LIST_ENTRY *, KIRQL *, unsigned __int64))v71->Flink[1].Flink)(
                                      v71,
                                      &v132,
                                      v66);
                                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))Blink[1].Blink)(
                                    v70,
                                    v68,
                                    v138);
                                  v72 = Blink[1].Flink;
                                  if ( v72 )
                                  {
                                    ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v72->Flink[1].Blink)(v72, v132);
                                    v23 = 259;
                                    goto $RequestIsGone;
                                  }
                                }
                              }
                              else
                              {
                                if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                                {
                                  FxRequest::Complete((FxRequest *)v42, 0);
                                  v23 = 259;
                                  goto $RequestIsGone;
                                }
                                FxPkgGeneral::ForwardCreateRequest(
                                  this,
                                  Irp,
                                  FxPkgGeneral::_CreateCompletionRoutine2,
                                  v42);
                              }
LABEL_119:
                              v23 = 259;
                              goto $RequestIsGone;
                            }
                            if ( v65 )
                            {
                              v120 = FxIoQueue::ForwardRequest(
                                       this->m_DefaultQueueForCreates,
                                       this->m_DriverCreatedQueue,
                                       (FxRequest *)v42);
                              if ( v120 < 0 )
                              {
                                v121 = this->m_DriverCreatedQueue;
                                if ( v121->m_ObjectSize )
                                  v122 = (const void *)((unsigned __int64)v121 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                else
                                  v122 = 0LL;
                                WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v122, v120);
                                FxRequest::Complete((FxRequest *)v42, v120);
                                v23 = 259;
                                goto $RequestIsGone;
                              }
                              goto LABEL_119;
                            }
                            v23 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, (FxRequest *)v42);
                            if ( v23 >= 0 )
                              goto $RequestIsGone;
                            v123 = this->m_DriverCreatedQueue;
                            if ( v123->m_ObjectSize )
                              v108 = (const void *)((unsigned __int64)v123 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            else
                              v108 = 0LL;
                            v109 = 29;
LABEL_263:
                            WPP_IFR_SF_qd(globals, 2u, 0xDu, v109, WPP_FxPkgGeneral_cpp_Traceguids, v108, v23);
                            goto $RequestIsGone;
                          }
                          if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
                          {
                            m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
                            Request = (FxRequest *)v42;
                            if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
                              && (v102 = (FxVerifierLock *)m_DefaultQueueForCreates[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                            {
                              FxVerifierLock::Lock(v102, (unsigned __int8 *)&v149, 0);
                              v60 = (unsigned __int8)v149;
                            }
                            else
                            {
                              v60 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
                              LOBYTE(v149) = v60;
                            }
                            if ( BYTE2(v42[3].m_ChildListHead.Blink) )
                              FxObject::AddRef(
                                v42,
                                (void *)0x50647746,
                                2286,
                                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                            m_QueueState = m_DefaultQueueForCreates->m_QueueState;
                            if ( (m_QueueState & 1) == 0 )
                            {
                              v103 = m_DefaultQueueForCreates->m_Globals;
                              v23 = -1073741436;
                              if ( v103->FxVerboseOn )
                              {
                                v104 = "power stopping (Drain) in progress,";
                                if ( (m_QueueState & 0x10000) == 0 )
                                  v104 = &::id;
                                if ( v42->m_ObjectSize )
                                  v105 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                else
                                  v105 = 0LL;
                                if ( m_DefaultQueueForCreates->m_ObjectSize )
                                  v106 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                                else
                                  v106 = 0LL;
                                WPP_IFR_SF_qLsqd(
                                  v103,
                                  5u,
                                  (unsigned int)v104,
                                  0x27u,
                                  Tag,
                                  v106,
                                  m_QueueState,
                                  v104,
                                  v105,
                                  -1073741436);
                              }
                              FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v60, v61);
                              *(_QWORD *)(*(_QWORD *)&v42[1].m_SpinLock.m_DbgFlagIsInitialized + 56LL) = 0LL;
                              FxRequest::Complete((FxRequest *)v42, -1073741436);
                              v42->Release(
                                v42,
                                (void *)1886220099,
                                2313,
                                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                              v107 = this->m_DefaultQueueForCreates;
                              if ( v107->m_ObjectSize )
                                v108 = (const void *)((unsigned __int64)v107 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              else
                                v108 = 0LL;
                              v109 = 27;
                              goto LABEL_263;
                            }
                            v64 = m_DefaultQueueForCreates->m_Globals;
                            if ( v64->FxVerboseOn )
                            {
                              if ( m_DefaultQueueForCreates->m_ObjectSize )
                              {
                                v110 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                                v111 = 0LL;
                              }
                              else
                              {
                                v111 = 0LL;
                                v110 = 0LL;
                              }
                              if ( v42->m_ObjectSize )
                                v111 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              WPP_IFR_SF_qq(
                                v64,
                                5u,
                                0xDu,
                                0x28u,
                                (const _GUID *)&FxObject::`vftable'.DebugExtension,
                                v111,
                                v110);
                            }
                            if ( v42->m_Globals->FxVerifierIO )
                            {
                              FxNonPagedObject::Lock((FxNonPagedObject *)v42, v136, v61);
                              v113 = v42->m_Globals;
                              if ( v113->FxVerifierOn )
                                FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v42, v113);
                              FxNonPagedObject::Unlock((FxNonPagedObject *)v42, v136[0], v112);
                            }
                            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v42[1].m_SpinLock.m_DbgFlagIsInitialized + 184LL) + 3LL) |= 1u;
                            if ( BYTE2(v42[3].m_ChildListHead.Blink) )
                            {
                              if ( m_DefaultQueueForCreates->m_Dispatching )
                              {
                                FxIoQueue::InsertNewRequestLocked(
                                  m_DefaultQueueForCreates,
                                  &Request,
                                  (unsigned int *)(unsigned __int8)v149);
                                FxNonPagedObject::Unlock(m_DefaultQueueForCreates, (unsigned __int8)v149, v114);
                                id = pFxFO;
                                goto LABEL_106;
                              }
                              id = pFxFO;
                              v60 = (unsigned __int8)v149;
                            }
                            FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v60, (FxRequest *)v42, v62);
LABEL_106:
                            if ( FxIoQueue::GetRequest(this->m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
                              goto LABEL_119;
                            v65 = 1;
                            p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
                            v151 = 1;
                            goto LABEL_108;
                          }
                          v23 = -1073741808;
                          v100 = this->m_DeviceBase;
                          v75 = Irp;
                          if ( v100->m_ObjectSize )
                            v101 = (const void *)((unsigned __int64)v100 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v101 = 0LL;
                          WPP_IFR_SF_qid(
                            globals,
                            2u,
                            0xDu,
                            0x1Au,
                            WPP_FxPkgGeneral_cpp_Traceguids,
                            v101,
                            (__int64)Irp->m_Irp,
                            -1073741808);
                          goto $Error_0;
                        }
                        while ( 1 )
                        {
                          Blink = v58;
                          if ( BYTE4(v58[9].Flink) )
                          {
                            v92 = v58[9].Blink;
                            *(_LIST_ENTRY *)&attributes.Size = v92[2];
                            *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v92[3];
                            *(_LIST_ENTRY *)&attributes.ParentObject = v92[4];
                            v93 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v92[5].Flink;
                          }
                          else
                          {
                            v94 = this->m_DeviceBase;
                            *(_OWORD *)&attributes.Size = *(_OWORD *)&v94[2].m_ExecutionLevel;
                            *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v94[3].FxNonPagedObject::FxObject::__vftable;
                            *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v94[3].m_Globals;
                            v93 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v94[3].m_ChildListHead.Flink;
                          }
                          attributes.ContextTypeInfo = v93;
                          if ( attributes.Size )
                          {
                            attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                            attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                            attributes.ParentObject = 0LL;
                            v23 = FxObjectAllocateContext(v42, &attributes, 1u, 0LL);
                            if ( v23 < 0 )
                              break;
                          }
                          v58 = v58->Blink;
                          if ( v58 == p_m_FileObjectInfoHeadList )
                            goto LABEL_91;
                        }
                        v95 = v58[9].Blink;
                        if ( v95 )
                          m_Driver = (unsigned __int64)v95[1].Flink;
                        else
                          m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
                        if ( *(_WORD *)(m_Driver + 10) )
                          v97 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                        else
                          v97 = 0LL;
                        v98 = this->m_DeviceBase;
                        if ( v98->m_ObjectSize )
                          v99 = (const void *)((unsigned __int64)v98 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v99 = 0LL;
                        WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v99, v97, v23);
LABEL_308:
                        v75 = Irp;
$Error_0:
                        if ( v42 )
                          FxObject::DeleteFromFailedCreate(v42);
LABEL_311:
                        if ( id )
                        {
                          FxNonPagedObject::Lock(id->m_DeviceBase, &v135, v87);
                          v127 = id->m_Link.Flink;
                          v128 = id->m_Link.Blink;
                          if ( v127->Blink != &id->m_Link || v128->Flink != &id->m_Link )
                            __fastfail(3u);
                          v128->Flink = v127;
                          v127->Blink = v128;
                          FxNonPagedObject::Unlock(id->m_DeviceBase, v135, v126);
                          FxObject::DeleteFromFailedCreate(id);
                        }
                        goto LABEL_315;
                      }
LABEL_304:
                      v124 = this->m_DeviceBase;
                      if ( v124->m_ObjectSize )
                        v125 = (const void *)((unsigned __int64)v124 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v125 = 0LL;
                      WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v125, v23);
                      goto LABEL_308;
                    }
                    if ( v54 <= 4u )
                    {
                      if ( v41[1].m_Refcnt == 1 )
                      {
                        if ( *(_BYTE *)(v52 + 64) )
                          goto LABEL_74;
                        v91 = *(_QWORD *)(v52 + 112);
                        goto LABEL_211;
                      }
                      if ( v41[1].m_Refcnt != 2 )
                        goto LABEL_74;
                    }
                    else
                    {
                      if ( (unsigned __int8)(v54 - 14) > 1u )
                        goto LABEL_74;
                      if ( (*((_DWORD *)v53 + 6) & 3) == 0 )
                      {
                        v47[2].m_SpinLock.m_Lock = *(_QWORD *)(v52 + 24);
                        v47[2].m_ChildEntry.Flink = *(_LIST_ENTRY **)(v52 + 24);
LABEL_212:
                        if ( v47[2].m_SpinLock.m_Lock )
                          HIBYTE(v47[2].m_ObjectState) |= 1u;
                        if ( v47[2].m_ChildEntry.Flink )
                          HIBYTE(v47[2].m_ObjectState) |= 2u;
                        goto LABEL_74;
                      }
                      if ( (*((_DWORD *)v53 + 6) & 3) != 1 && (*((_DWORD *)v53 + 6) & 3) != 2 )
                      {
                        if ( (*((_DWORD *)v53 + 6) & 3) == 3 )
                        {
                          if ( *v53 != 15 && *(_BYTE *)(v52 + 64) )
                            goto LABEL_74;
                          v47[2].m_SpinLock.m_Lock = *((_QWORD *)v53 + 4);
                          v47[2].m_ChildEntry.Flink = *(_LIST_ENTRY **)(v52 + 112);
                        }
                        goto LABEL_212;
                      }
                    }
                    v91 = *(_QWORD *)(v52 + 24);
LABEL_211:
                    v47[2].m_SpinLock.m_Lock = v91;
                    goto LABEL_212;
                  }
                  ++LODWORD(v41[2].m_ChildEntry.Flink);
                }
                v44 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v41[2].m_DeviceBase)(
                                           HIDWORD(v41[2].m_ChildEntry.Blink),
                                           HIDWORD(v41[2].m_DisposeSingleEntry.Next),
                                           LODWORD(v41[2].m_DisposeSingleEntry.Next));
                goto LABEL_62;
              }
            }
          }
          else
          {
            FxObject::TraceDroppedEvent(id, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&id->m_SpinLock.m_Lock, (KIRQL)v152);
            v23 = -1073741738;
          }
        }
        else
        {
          v23 = -1073741816;
        }
        FxObject::DeleteFromFailedCreate(id);
        m_Globals = globals;
LABEL_319:
        v129 = this->m_DeviceBase;
        if ( v129->m_ObjectSize )
          v130 = (const void *)((unsigned __int64)v129 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v130 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v130, v23);
        v75 = Irp;
        goto LABEL_315;
      }
      goto LABEL_317;
    }
LABEL_148:
    WPP_IFR_SF_DDxd(v15, 0xA0u, ExDefaultNonPagedPoolType, v17, Tag, 0xA0u, 0, flags, (int)id);
LABEL_317:
    m_Globals = globals;
    goto LABEL_318;
  }
  if ( m_DeviceBase->m_ObjectSize )
    v74 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v74 = 0LL;
  WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v74);
  v75 = Irp;
  v23 = -1073741790;
LABEL_315:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v75->m_Irp->IoStatus.Status = v23;
  v75->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v75->m_Irp, 0);
  v75->m_Irp = 0LL;
$RequestIsGone:
  if ( v133 )
    KeLeaveCriticalRegion();
  return (unsigned int)v23;
}
