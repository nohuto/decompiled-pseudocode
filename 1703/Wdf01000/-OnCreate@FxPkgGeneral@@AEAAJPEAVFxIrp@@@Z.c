/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C000E6C0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000EF80 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0014E48 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0014E6C (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0019178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001CFE0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C00655AC (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C00655DC (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00667B4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C006721C (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007DA6C (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C007DDE4 (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007FDD4 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00953C8 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxIrp *v5; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *Blink; // r13
  _FILE_OBJECT *v8; // r8
  FxDeviceBase *m_DeviceBase; // rdi
  int v10; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r12
  __int128 v12; // kr00_16
  int v13; // r15d
  _FX_DRIVER_GLOBALS *v14; // r14
  _POOL_TYPE v15; // r10d
  unsigned __int64 flags; // r8
  unsigned int v17; // r11d
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int id; // esi
  void *Caller; // rax
  FxFileObject *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  FxFileObject *v24; // rsi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  int v26; // r14d
  _FX_DRIVER_GLOBALS *v27; // rax
  KIRQL v28; // al
  KIRQL v29; // al
  KIRQL v30; // al
  bool v31; // zf
  KIRQL v32; // al
  _LIST_ENTRY *v33; // rcx
  _FX_DRIVER_GLOBALS *v34; // rdx
  unsigned __int8 v35; // r8
  unsigned __int16 v36; // ax
  char *v37; // rax
  _FX_DRIVER_GLOBALS *v38; // rax
  unsigned __int8 v39; // r9
  _LIST_ENTRY *v40; // rcx
  FxDeviceBase_vtbl *v41; // r8
  _LIST_ENTRY *p_m_Link; // rdx
  _LIST_ENTRY *v43; // rdi
  FxDeviceBase *v44; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v45; // xmm1_8
  FxDeviceBase *v46; // r14
  FxRequest *v47; // r15
  __int64 v48; // rcx
  FX_POOL_TRACKER *v49; // rdi
  _FX_DRIVER_GLOBALS *v50; // rdx
  _QWORD *p_Flink; // rax
  FxRequest *v52; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v53; // rax
  _FX_DRIVER_GLOBALS *v54; // rax
  PIRP v55; // rcx
  char v56; // al
  _IRP *v57; // rcx
  _IO_STACK_LOCATION *v58; // rdx
  unsigned __int8 MajorFunction; // al
  _FX_DRIVER_GLOBALS *v60; // rdx
  unsigned __int16 v61; // ax
  char *v62; // rax
  _FX_DRIVER_GLOBALS *v63; // rax
  _LIST_ENTRY *v64; // rdi
  FxIoQueue *m_DefaultQueueForCreates; // r13
  KIRQL v66; // di
  unsigned int m_QueueState; // ecx
  _FX_DRIVER_GLOBALS *v68; // rcx
  char v69; // dl
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v71; // r15
  FxDeviceBase *v72; // rbx
  unsigned __int64 v73; // rbx
  _LIST_ENTRY *v74; // rcx
  _LIST_ENTRY *v75; // rcx
  _IRP *v77; // rax
  _IO_STACK_LOCATION *v78; // rcx
  NTSTATUS v79; // eax
  FxIrp *v80; // rdi
  unsigned __int16 m_ObjectSize; // ax
  const void *v82; // rdi
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  unsigned __int64 ContextSizeOverride; // r8
  _FX_DRIVER_GLOBALS *v88; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v90; // rcx
  __m128i v91; // xmm2
  _LIST_ENTRY *v92; // rdx
  unsigned __int64 Flink; // rdx
  unsigned __int16 v94; // ax
  FxDeviceBase *v95; // rcx
  const void *v96; // rdx
  unsigned __int16 v97; // ax
  const void *v98; // rcx
  FxIrp *v99; // rdi
  _IO_STACK_LOCATION *v100; // rcx
  _LIST_ENTRY *v101; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v103; // rdx
  void *UserBuffer; // rax
  _LIST_ENTRY *v105; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v106; // xmm1_8
  FxDeviceBase *v107; // rax
  _LIST_ENTRY *v108; // rdx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v110; // ax
  FxDeviceBase *v111; // rcx
  unsigned __int64 v112; // rdx
  unsigned __int16 v113; // ax
  const void *v114; // rcx
  FxDeviceBase *v115; // rdx
  unsigned __int16 v116; // ax
  const void *v117; // rdx
  FxVerifierLock *v118; // rcx
  _FX_DRIVER_GLOBALS *v119; // r11
  const char *v120; // r10
  const void *v121; // r8
  const void *v122; // rdx
  FxIoQueue *v123; // rcx
  unsigned __int16 v124; // r9
  unsigned __int16 v125; // ax
  const void *v126; // rcx
  FxIoQueue *v127; // rcx
  unsigned __int16 v128; // ax
  const void *v129; // rdx
  const void *v130; // rax
  _FX_DRIVER_GLOBALS *v131; // rdx
  _LIST_ENTRY *v132; // r14
  unsigned __int64 v133; // rdi
  unsigned __int64 v134; // rcx
  char v135; // di
  int v136; // edi
  FxIoQueue *v137; // rdx
  unsigned __int16 v138; // cx
  const void *v139; // rdx
  FxDeviceBase *v140; // rcx
  unsigned __int16 v141; // ax
  const void *v142; // rcx
  FxDeviceBase *v143; // rcx
  unsigned __int16 v144; // ax
  const void *v145; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B9h]
  KIRQL v147; // [rsp+50h] [rbp-89h] BYREF
  char v148; // [rsp+51h] [rbp-88h]
  unsigned __int8 PreviousIrql; // [rsp+52h] [rbp-87h] BYREF
  unsigned __int8 v150[5]; // [rsp+53h] [rbp-86h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+58h] [rbp-81h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+90h] [rbp-49h]
  void *PPObject; // [rsp+98h] [rbp-41h] BYREF
  unsigned __int64 v154; // [rsp+A0h] [rbp-39h]
  _LIST_ENTRY *v155; // [rsp+A8h] [rbp-31h]
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+B8h] [rbp-21h]
  FxFileObject *pFxFO; // [rsp+C0h] [rbp-19h]
  PIRP v159; // [rsp+C8h] [rbp-11h]
  FxRequest *Request; // [rsp+D0h] [rbp-9h] BYREF
  FxVerifierLock *v161; // [rsp+D8h] [rbp-1h] BYREF
  FxRequest *outputRequest; // [rsp+E0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int16 v164; // [rsp+140h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+148h] [rbp+6Fh]
  char v166; // [rsp+150h] [rbp+77h]
  _FX_DRIVER_GLOBALS *Embedded; // [rsp+158h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Irp = FxIrp->m_Irp;
  m_Globals = this->m_Globals;
  v154 = 0LL;
  v5 = FxIrp;
  v148 = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  Blink = 0LL;
  v166 = 0;
  globals = m_Globals;
  v155 = 0LL;
  v8 = CurrentStackLocation->FileObject;
  FileObject = v8;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v10 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v10 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v82 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v82 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v82);
    v26 = -1073741790;
LABEL_315:
    v99 = Irp;
LABEL_316:
    FxPkgGeneral::DecrementOpenHandleCount(this);
    v99->m_Irp->IoStatus.Status = v26;
    v99->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(v99->m_Irp, 0);
    v99->m_Irp = 0LL;
$RequestIsGone:
    if ( v148 )
      KeLeaveCriticalRegion();
    return (unsigned int)v26;
  }
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
    v155 = Blink;
    if ( LODWORD(Blink[5].Blink) )
    {
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
      v12 = *(_OWORD *)&attributes.ContextSizeOverride;
    }
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v13 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v14 = m_DeviceBase->m_Globals;
  if ( v13 == 1 )
  {
    v24 = 0LL;
    pFxFO = 0LL;
    goto LABEL_54;
  }
  if ( !v8 && (v13 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v14->FxVerboseOn )
      WPP_IFR_SF_q(v14, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, FxIrp->m_Irp);
    FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    v26 = -1073741438;
    goto LABEL_312;
  }
  v15 = ExDefaultNonPagedPoolType;
  flags = 0LL;
  v17 = v14->Tag;
  LODWORD(Embedded) = ExDefaultNonPagedPoolType;
  LODWORD(v154) = v17;
  if ( *((_QWORD *)&v12 + 1) )
  {
    flags = v12;
    if ( !(_QWORD)v12 )
      flags = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
  }
  v18 = 208LL;
  v19 = -1LL;
  PPObject = (void *)208;
  id = 0;
  if ( flags )
  {
    v83 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v83 < flags )
      goto LABEL_311;
    v84 = v83 + 208;
    v18 = -1LL;
    if ( v84 >= 0xD0 )
      v18 = v84;
    PPObject = (void *)v18;
    id = v84 < 0xD0 ? 0xC0000095 : 0;
    if ( v84 < 0xD0 )
      goto LABEL_155;
  }
  if ( v14->FxVerifierHandle )
  {
    v85 = v18 + 48;
    v86 = v18;
    if ( v18 + 48 >= v18 )
      v19 = v18 + 48;
    v18 = v19;
    PPObject = (void *)v19;
    id = v85 < v86 ? 0xC0000095 : 0;
  }
  if ( id < 0 )
  {
LABEL_155:
    WPP_IFR_SF_DDxd(v14, v19, flags, v18, Tag, 0xA0u, 0, flags, id);
    if ( id >= 0 )
    {
      v18 = (unsigned __int64)PPObject;
      v15 = (int)Embedded;
      v17 = v154;
      goto LABEL_12;
    }
LABEL_311:
    v26 = -1073741670;
    goto LABEL_312;
  }
LABEL_12:
  if ( v14->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v22 = (FxFileObject *)FxPoolAllocator(v14, &v14->FxPoolFrameworks, v15, v18, v17, Caller);
  v24 = v22;
  if ( v22 )
  {
    if ( v14->FxVerifierHandle )
    {
      memset(v22, 0, 0x30uLL);
      LODWORD(v24->m_ChildListHead.Flink) = 1146058822;
      v24 = (FxFileObject *)((char *)v24 + 48);
    }
    *(_QWORD *)&v24[1].m_Type = 0LL;
    v24[1].m_Globals = 0LL;
    *(_QWORD *)&v24[1].m_ObjectFlags = 0LL;
    v24[1].m_ChildListHead.Flink = 0LL;
    v24[1].m_ChildListHead.Blink = 0LL;
    v24[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v24;
    ContextTypeInfo = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSizeOverride = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSizeOverride = attributes.ContextTypeInfo->ContextSize;
      memset(&v24[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      ContextTypeInfo = attributes.ContextTypeInfo;
    }
    v24[1].m_ChildListHead.Flink = (_LIST_ENTRY *)ContextTypeInfo;
  }
  if ( !v24 )
    goto LABEL_311;
  v24->m_Globals = m_DeviceBase->m_Globals;
  v26 = 0;
  v24->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&v24->m_Type = 10489880;
  v24->m_SpinLock.m_Lock = 0LL;
  v24->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v24->m_Refcnt = 1;
  *(_DWORD *)&v24->m_ObjectFlags = 0x10000;
  v24->m_ParentObject = 0LL;
  v24->m_ChildListHead.Blink = &v24->m_ChildListHead;
  v24->m_ChildListHead.Flink = &v24->m_ChildListHead;
  v24->m_ChildEntry.Blink = &v24->m_ChildEntry;
  v24->m_ChildEntry.Flink = &v24->m_ChildEntry;
  v27 = v24->m_Globals;
  v24->m_DisposeSingleEntry.Next = 0LL;
  v24->m_DeviceBase = 0LL;
  if ( v27->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v24, v23, 0);
  v24->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  v24->m_NPLock.m_Lock = 0LL;
  v24->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v24->m_ObjectFlags) < 0 )
  {
    v88 = v24->m_Globals;
    if ( v88->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v88, v24);
      v24[-1].IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)VerifierLock;
    }
  }
  v24->m_PkgContext = 0LL;
  v24->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  v24->m_DeviceBase = m_DeviceBase;
  v24->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  v24->m_FileObject.m_FileObject = FileObject;
  v28 = KeAcquireSpinLockRaiseToDpc(&v24->m_SpinLock.m_Lock);
  v24->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v28);
  v159 = 0LL;
  if ( !v24->m_ObjectSize )
  {
    v26 = -1073741816;
LABEL_167:
    FxObject::DeleteFromFailedCreate(v24);
LABEL_312:
    v143 = this->m_DeviceBase;
    v144 = v143->m_ObjectSize;
    v145 = (const void *)((unsigned __int64)v143 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v144 )
      v145 = 0LL;
    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v145, v26);
    goto LABEL_315;
  }
  if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
  {
    v29 = KeAcquireSpinLockRaiseToDpc(&v24->m_SpinLock.m_Lock);
    v24->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v29);
  }
  v159 = (PIRP)m_DeviceBase;
  v30 = KeAcquireSpinLockRaiseToDpc(&v24->m_SpinLock.m_Lock);
  v31 = v24->m_ObjectState == 1;
  LOBYTE(Embedded) = v30;
  if ( !v31 )
  {
    FxObject::TraceDroppedEvent(v24, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, (KIRQL)Embedded);
    v26 = -1073741738;
    goto LABEL_167;
  }
  if ( v24->m_ParentObject )
  {
    KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, v30);
    v26 = -1071644147;
    goto LABEL_167;
  }
  v32 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
  v31 = m_DeviceBase->m_ObjectState == 1;
  v147 = v32;
  if ( v31 )
  {
    v33 = m_DeviceBase->m_ChildListHead.Blink;
    if ( v33->Flink != &m_DeviceBase->m_ChildListHead )
      __fastfail(3u);
    v24->m_ChildEntry.Flink = &m_DeviceBase->m_ChildListHead;
    v24->m_ChildEntry.Blink = v33;
    v33->Flink = &v24->m_ChildEntry;
    m_DeviceBase->m_ChildListHead.Blink = &v24->m_ChildEntry;
    if ( !v24->m_DeviceBase )
      v24->m_DeviceBase = m_DeviceBase->m_DeviceBase;
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v32);
    v24->m_ParentObject = m_DeviceBase;
  }
  else
  {
    FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v147);
    v26 = -1073741738;
  }
  KeReleaseSpinLock(&v24->m_SpinLock.m_Lock, (KIRQL)Embedded);
  if ( v26 < 0 )
    goto LABEL_167;
  v36 = v24->m_ObjectSize;
  if ( v36 )
    v37 = (char *)v24 + v36;
  else
    v37 = 0LL;
  if ( attributes.EvtDestroyCallback )
    *((_QWORD *)v37 + 3) = attributes.EvtDestroyCallback;
  if ( attributes.EvtCleanupCallback )
  {
    *((_QWORD *)v37 + 2) = attributes.EvtCleanupCallback;
    v24->m_ObjectFlags |= 0x400u;
  }
  v38 = v24->m_Globals;
  v24->m_ObjectFlags |= 8u;
  if ( v38->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v24, v34);
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v35);
    v39 = PreviousIrql;
  }
  else
  {
    v39 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v40 = (_LIST_ENTRY *)&m_DeviceBase[2];
  v41 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  p_m_Link = &v24->m_Link;
  if ( (FxDeviceBase *)v41->~FxObject != &m_DeviceBase[2] )
    __fastfail(3u);
  p_m_Link->Flink = (_LIST_ENTRY *)v41;
  v24->m_Link.Blink = v40;
  v41->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
  v40->Flink = p_m_Link;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v90 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v90, v39, (unsigned __int8)v41);
  }
  else
  {
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v39);
  }
  if ( v13 == 2 )
  {
    FileObject->FsContext = v24;
  }
  else if ( v13 == 3 )
  {
    FileObject->FsContext2 = v24;
  }
  v31 = v24->m_ObjectSize == 0;
  pFxFO = v24;
  if ( v31 )
    v154 = 0LL;
  else
    v154 = (unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v43 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v43 != p_m_FileObjectInfoHeadList )
  {
    while ( 1 )
    {
      v91 = *(__m128i *)&v43[5].Blink;
      Blink = v43;
      v155 = v43;
      *(__m128i *)&attributes.Size = v91;
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = *(_LIST_ENTRY *)((char *)v43 + 104);
      *(_LIST_ENTRY *)&attributes.ParentObject = *(_LIST_ENTRY *)((char *)v43 + 120);
      attributes.ContextTypeInfo = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v43[8].Blink;
      if ( _mm_cvtsi128_si32(v91) )
      {
        attributes.ParentObject = 0LL;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v26 = FxObjectAllocateContext(v24, &attributes, 1u, 0LL);
        if ( v26 < 0 )
          break;
      }
      v43 = v43->Blink;
      if ( v43 == p_m_FileObjectInfoHeadList )
        goto LABEL_53;
    }
    v92 = v43[9].Blink;
    if ( v92 )
      Flink = (unsigned __int64)v92[1].Flink;
    else
      Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
    v94 = *(_WORD *)(Flink + 10);
    v95 = this->m_DeviceBase;
    v96 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v94 )
      v96 = 0LL;
    v97 = v95->m_ObjectSize;
    v98 = (const void *)((unsigned __int64)v95 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v97 )
      v98 = 0LL;
    WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v43[5].Blink, v98, v96, v26);
    v99 = Irp;
    goto LABEL_309;
  }
LABEL_53:
  v5 = Irp;
LABEL_54:
  if ( this->m_DriverCreatedQueue || (this->m_Flags & 0xC) != 0 )
  {
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
      && (Blink = this->m_FileObjectInfoHeadList.Blink, v155 = Blink, BYTE4(Blink[9].Flink)) )
    {
      v101 = Blink[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v101[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v101[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v101[4];
      v45 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v101[5].Flink;
    }
    else
    {
      v44 = this->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v44[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v44[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v44[3].m_Globals;
      v45 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v44[3].m_ChildListHead.Flink;
    }
    v46 = this->m_DeviceBase;
    attributes.ContextTypeInfo = v45;
    VerifierLock = (FxVerifierLock *)v46;
    if ( *(FxDeviceBase **)&v46[1].m_ExecutionLevel != (FxDeviceBase *)&v46[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v47 = 0LL;
    v48 = *(_QWORD *)&v46[3].m_SpinLock.m_DbgFlagIsInitialized;
    v159 = v5->m_Irp;
    Embedded = v46->m_Globals;
    if ( v48 && *(_WORD *)(v48 + 8) == 4354 && *(_BYTE *)(v48 + 1667) )
    {
      v49 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v46[2].m_SpinLock);
      if ( v49 )
        goto LABEL_64;
    }
    else
    {
      ++HIDWORD(v46[2].m_ParentObject);
      v49 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v46[2].m_SpinLock);
      if ( v49 )
      {
LABEL_64:
        if ( !v49 )
          goto LABEL_302;
        v50 = Embedded;
        if ( Embedded->FxPoolTrackingOn )
        {
          FxPoolInsertNonPagedAllocateTracker(
            &Embedded->FxPoolFrameworks,
            v49,
            (unsigned __int64)v46[2].m_CallbackLockObjectPtr,
            Embedded->Tag,
            retaddr);
          v50 = Embedded;
          p_Flink = &v49[1].Link.Flink;
        }
        else
        {
          p_Flink = &v49->Link.Flink;
        }
        *p_Flink = v49;
        v52 = (FxRequest *)(p_Flink + 2);
        p_Flink[1] = v50;
        if ( v50->FxVerifierHandle )
        {
          memset(p_Flink + 2, 0, 0x30uLL);
          LODWORD(v52->m_ChildListHead.Flink) = 1146058822;
          v52 = (FxRequest *)((char *)v52 + 48);
        }
        v52[1].m_Globals = 0LL;
        *(_QWORD *)&v52[1].m_ObjectFlags = 0LL;
        v52[1].m_ChildListHead.Flink = 0LL;
        v52[1].m_ChildListHead.Blink = 0LL;
        *(_QWORD *)&v52[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
        *(_QWORD *)&v52[1].m_Type = v52;
        v53 = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSize = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSize = attributes.ContextTypeInfo->ContextSize;
          memset(&v52[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v53 = attributes.ContextTypeInfo;
        }
        v52[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v53;
        if ( !v52 )
        {
LABEL_302:
          v26 = -1073741670;
          WPP_IFR_SF_d(
            *(_FX_DRIVER_GLOBALS **)&VerifierLock->m_Lock.m_DbgFlagIsInitialized,
            2u,
            0x10u,
            0xAu,
            WPP_FxRequest_cpp_Traceguids,
            -1073741670);
          goto LABEL_303;
        }
        v52->m_Globals = v46->m_Globals;
        v52->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
        *(_DWORD *)&v52->m_Type = 24121352;
        v52->m_SpinLock.m_Lock = 0LL;
        v52->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v52->m_Refcnt = 1;
        *(_DWORD *)&v52->m_ObjectFlags = 0x10000;
        v52->m_ParentObject = 0LL;
        v52->m_ChildListHead.Blink = &v52->m_ChildListHead;
        v52->m_ChildListHead.Flink = &v52->m_ChildListHead;
        v52->m_ChildEntry.Blink = &v52->m_ChildEntry;
        v52->m_ChildEntry.Flink = &v52->m_ChildEntry;
        v54 = v52->m_Globals;
        v52->m_DisposeSingleEntry.Next = 0LL;
        v52->m_DeviceBase = 0LL;
        if ( v54->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v52, v50, 0);
        v52->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        v52->m_NPLock.m_Lock = 0LL;
        v52->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v52->m_ObjectFlags) < 0 )
        {
          v103 = v52->m_Globals;
          if ( v103->FxVerifierLock )
          {
            v161 = 0LL;
            FxVerifierLock::CreateAndInitialize(&v161, v103, v52);
            v52[-1].m_ForwardProgressList.Flink = (_LIST_ENTRY *)v161;
          }
        }
        v55 = v159;
        v52->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        v52->m_Irp.m_Irp = v55;
        v52->m_CancelRoutine.m_Cancel = 0LL;
        v52->m_CompletionRoutine.m_Completion = 0LL;
        v31 = v52->m_Irp.m_Irp == 0LL;
        *(_WORD *)&v52->m_TargetFlags = 0;
        v52->m_CanComplete = 1;
        v52->m_Target = 0LL;
        v52->m_TargetCompletionContext = 0LL;
        v56 = v31;
        v52->m_Completed = v56;
        v52->m_Canceled = 0;
        v52->m_PriorityBoost = 0;
        v52->m_RequestContext = 0LL;
        v52->m_Timer = 0LL;
        v52->m_CsqContext.Irp = (_IRP *)&v52->120;
        v52->m_ListEntry.Flink = (_LIST_ENTRY *)&v52->120;
        v52->m_DrainSingleEntry.Next = 0LL;
        *(_QWORD *)&v52->m_SystemBufferOffset = 216LL;
        v52->m_IrpQueue = 0LL;
        v52->m_IrpCompletionReferenceCount = 0;
        v52->m_AllocatedMdl = 0LL;
        *(_DWORD *)&v52->m_OutputBufferOffset = 232;
        v52->m_CompletionState = 0;
        v52->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
        v52->m_SystemBuffer.m_Buffer = 0LL;
        v52->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
        v52->m_OutputBuffer.m_Buffer = 0LL;
        v52->m_IoQueue = 0LL;
        v52->m_PowerStopState = 0;
        v52->m_OwnerListEntry.Blink = &v52->m_OwnerListEntry;
        v52->m_OwnerListEntry.Flink = &v52->m_OwnerListEntry;
        v52->m_OwnerListEntry2.Blink = &v52->m_OwnerListEntry2;
        v52->m_OwnerListEntry2.Flink = &v52->m_OwnerListEntry2;
        v52->m_ForwardProgressList.Blink = &v52->m_ForwardProgressList;
        v52->m_ForwardProgressList.Flink = &v52->m_ForwardProgressList;
        v52->__vftable = (FxRequest_vtbl *)FxRequestFromLookaside::`vftable';
        v52->m_Presented = 0;
        *(_WORD *)&v52->m_Reserved = 0;
        v52->m_ForwardProgressQueue = 0LL;
        v52->m_InternalContext = 0LL;
        v52->m_DeviceBase = v46->m_DeviceBase;
        if ( !v55
          || (v57 = v52->m_Irp.m_Irp,
              v58 = v57->Tail.Overlay.CurrentStackLocation,
              MajorFunction = v58->MajorFunction,
              v58->MajorFunction < 3u) )
        {
LABEL_78:
          if ( v46->m_Globals->FxRequestParentOptimizationOn )
          {
            v31 = v52->m_ObjectSize == 0;
            v60 = 0LL;
            PPObject = 0LL;
            if ( v31 )
            {
              v26 = -1073741816;
              goto LABEL_223;
            }
            if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
            {
              FxObject::MarkPassiveCallbacks(v52, ObjectLock);
              v60 = (_FX_DRIVER_GLOBALS *)PPObject;
            }
            if ( attributes.ParentObject )
            {
              FxObjectHandleGetPtr(v52->m_Globals, (unsigned __int64)attributes.ParentObject, 0x1000u, &PPObject);
              v60 = (_FX_DRIVER_GLOBALS *)PPObject;
            }
            if ( !v60 || (v26 = FxObject::AssignParentObject(v52, (FxObject *)v60), v26 >= 0) )
            {
              v61 = v52->m_ObjectSize;
              if ( v61 )
                v62 = (char *)v52 + v61;
              else
                v62 = 0LL;
              if ( attributes.EvtDestroyCallback )
                *((_QWORD *)v62 + 3) = attributes.EvtDestroyCallback;
              if ( attributes.EvtCleanupCallback )
              {
                *((_QWORD *)v62 + 2) = attributes.EvtCleanupCallback;
                v52->m_ObjectFlags |= 0x400u;
              }
              v63 = v52->m_Globals;
              v52->m_ObjectFlags |= 8u;
              if ( v63->FxVerifierOn )
                FxObject::Vf_VerifyLeakDetectionConsiderObject(v52, v60);
              v26 = 0;
              goto LABEL_94;
            }
          }
          else
          {
            v26 = FxObject::Commit(v52, &attributes, 0LL, v46, 0);
          }
          if ( v26 >= 0 )
          {
LABEL_94:
            v47 = v52;
            goto LABEL_95;
          }
LABEL_223:
          WPP_IFR_SF_d(
            *(_FX_DRIVER_GLOBALS **)&VerifierLock->m_Lock.m_DbgFlagIsInitialized,
            2u,
            0x10u,
            0xBu,
            WPP_FxRequest_cpp_Traceguids,
            v26);
          FxObject::DeleteFromFailedCreate(v52);
LABEL_95:
          if ( v26 >= 0 )
          {
            v64 = this->m_FileObjectInfoHeadList.Blink->Blink;
            if ( v64 == p_m_FileObjectInfoHeadList )
            {
LABEL_97:
              if ( KeGetCurrentIrql() <= 1u )
              {
                KeEnterCriticalRegion();
                v148 = 1;
              }
              if ( (this->m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
              {
                v69 = 0;
LABEL_114:
                if ( (this->m_Flags & 4) != 0 )
                {
                  v132 = this->m_FileObjectInfoHeadList.Blink;
                  if ( v132 != p_m_FileObjectInfoHeadList )
                  {
                    do
                    {
                      Blink = v132;
                      if ( !BYTE4(v132[9].Flink) )
                        break;
                      if ( v24 )
                        v24->m_PkgContext = v132->Blink;
                      v133 = (unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL;
                      Request = (FxRequest *)this->m_DeviceBase;
                      if ( !v47->m_ObjectSize )
                        v133 = 0LL;
                      v31 = v132[2].Blink == 0LL;
                      v164 = Request->m_ObjectSize;
                      if ( !v31 )
                      {
                        LOBYTE(Embedded) = 0;
                        FxLockedCallback::CallbackStart((FxLockedCallback *)&v132[2], (unsigned __int8 *)&Embedded);
                        v134 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
                        if ( !v164 )
                          v134 = 0LL;
                        v135 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v132[2].Blink)(
                                 v134,
                                 v133,
                                 v154);
                        FxLockedCallback::CallbackEnd((FxLockedCallback *)&v132[2], (unsigned __int8)Embedded);
                        if ( v135 )
                          goto LABEL_125;
                      }
                      v132 = v132->Blink;
                    }
                    while ( v132 != p_m_FileObjectInfoHeadList );
                    v69 = v166;
                  }
                }
                m_DriverCreatedQueue = this->m_DriverCreatedQueue;
                if ( !m_DriverCreatedQueue )
                {
                  if ( (this->m_Flags & 8) != 0 )
                  {
                    if ( v47->m_ObjectSize )
                      v71 = (unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    else
                      v71 = 0LL;
                    v72 = this->m_DeviceBase;
                    if ( v72->m_ObjectSize )
                      v73 = (unsigned __int64)v72 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    else
                      v73 = 0LL;
                    if ( Blink[1].Blink )
                    {
                      v74 = Blink[1].Flink;
                      v147 = 0;
                      if ( v74 )
                        ((void (__fastcall *)(_LIST_ENTRY *, KIRQL *, _QWORD))v74->Flink[1].Flink)(v74, &v147, 0LL);
                      ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))Blink[1].Blink)(
                        v73,
                        v71,
                        v154);
                      v75 = Blink[1].Flink;
                      if ( v75 )
                      {
                        ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v75->Flink[1].Blink)(v75, v147);
                        v26 = 259;
                        goto $RequestIsGone;
                      }
                    }
                  }
                  else
                  {
                    if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                    {
                      FxRequest::Complete(v47, 0);
                      v26 = 259;
                      goto $RequestIsGone;
                    }
                    FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v47);
                  }
LABEL_125:
                  v26 = 259;
                  goto $RequestIsGone;
                }
                if ( v69 )
                {
                  v136 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v47);
                  if ( v136 < 0 )
                  {
                    v137 = this->m_DriverCreatedQueue;
                    v138 = v137->m_ObjectSize;
                    v139 = (const void *)((unsigned __int64)v137 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !v138 )
                      v139 = 0LL;
                    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v139, v136);
                    FxRequest::Complete(v47, v136);
                    v26 = 259;
                    goto $RequestIsGone;
                  }
                  goto LABEL_125;
                }
                v26 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v47);
                if ( v26 >= 0 )
                  goto $RequestIsGone;
                v127 = this->m_DriverCreatedQueue;
                v128 = v127->m_ObjectSize;
                v126 = (const void *)((unsigned __int64)v127 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v128 )
                  v126 = 0LL;
                v124 = 29;
LABEL_265:
                WPP_IFR_SF_qd(globals, 2u, 0xDu, v124, WPP_FxPkgGeneral_cpp_Traceguids, v126, v26);
                goto $RequestIsGone;
              }
              if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
              {
                m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
                Request = v47;
                if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
                  && (v118 = *(FxVerifierLock **)&m_DefaultQueueForCreates[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                {
                  FxVerifierLock::Lock(v118, (unsigned __int8 *)&v164, 0);
                  v66 = v164;
                }
                else
                {
                  v66 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
                  LOBYTE(v164) = v66;
                }
                if ( v47->m_Reserved )
                  FxObject::AddRef(
                    v47,
                    (void *)0x50647746,
                    2311,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                m_QueueState = m_DefaultQueueForCreates->m_QueueState;
                if ( (m_QueueState & 1) == 0 )
                {
                  v119 = m_DefaultQueueForCreates->m_Globals;
                  v26 = -1073741436;
                  if ( v119->FxVerboseOn )
                  {
                    v120 = "power stopping (Drain) in progress,";
                    if ( (m_QueueState & 0x10000) == 0 )
                      v120 = a5;
                    if ( v47->m_ObjectSize )
                      v121 = (const void *)((unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v121 = 0LL;
                    v122 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !m_DefaultQueueForCreates->m_ObjectSize )
                      v122 = 0LL;
                    WPP_IFR_SF_qLsqd(
                      v119,
                      5u,
                      (unsigned int)v121,
                      0x29u,
                      Tag,
                      v122,
                      m_QueueState,
                      v120,
                      v121,
                      -1073741436);
                  }
                  FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v66);
                  v47->m_Irp.m_Irp->IoStatus.Information = 0LL;
                  FxRequest::Complete(v47, -1073741436);
                  v47->Release(
                    v47,
                    (void *)1886220099,
                    2338,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                  v123 = this->m_DefaultQueueForCreates;
                  v124 = 27;
                  v125 = v123->m_ObjectSize;
                  v126 = (const void *)((unsigned __int64)v123 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !v125 )
                    v126 = 0LL;
                  goto LABEL_265;
                }
                v68 = m_DefaultQueueForCreates->m_Globals;
                if ( v68->FxVerboseOn )
                {
                  v129 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                  v130 = 0LL;
                  if ( !m_DefaultQueueForCreates->m_ObjectSize )
                    v129 = 0LL;
                  if ( v47->m_ObjectSize )
                    v130 = (const void *)((unsigned __int64)v47 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qq(v68, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v130, v129);
                }
                if ( v47->m_Globals->FxVerifierIO )
                {
                  FxNonPagedObject::Lock(v47, v150);
                  v131 = v47->m_Globals;
                  if ( v131->FxVerifierOn )
                    FxRequest::Vf_VerifyRequestIsNotCompleted(v47, v131);
                  FxNonPagedObject::Unlock(v47, v150[0]);
                }
                v47->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                if ( v47->m_Reserved )
                {
                  if ( m_DefaultQueueForCreates->m_Dispatching )
                  {
                    FxIoQueue::InsertNewRequestLocked(m_DefaultQueueForCreates, &Request, v164);
                    FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v164);
                    v24 = pFxFO;
                    goto LABEL_112;
                  }
                  v24 = pFxFO;
                  v66 = v164;
                }
                FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v66, v47);
LABEL_112:
                if ( FxIoQueue::GetRequest(this->m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
                  goto LABEL_125;
                Blink = v155;
                v69 = 1;
                v166 = 1;
                goto LABEL_114;
              }
              v26 = -1073741808;
              v115 = this->m_DeviceBase;
              v99 = Irp;
              v116 = v115->m_ObjectSize;
              v117 = (const void *)((unsigned __int64)v115 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v116 )
                v117 = 0LL;
              WPP_IFR_SF_qid(
                globals,
                2u,
                0xDu,
                0x1Au,
                WPP_FxPkgGeneral_cpp_Traceguids,
                v117,
                (__int64)Irp->m_Irp,
                -1073741808);
              goto LABEL_307;
            }
            while ( 1 )
            {
              v31 = BYTE4(v64[9].Flink) == 0;
              Blink = v64;
              v155 = v64;
              if ( v31 )
              {
                v107 = this->m_DeviceBase;
                *(_OWORD *)&attributes.Size = *(_OWORD *)&v107[2].m_ExecutionLevel;
                *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v107[3].FxNonPagedObject::FxObject::__vftable;
                *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v107[3].m_Globals;
                v106 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v107[3].m_ChildListHead.Flink;
              }
              else
              {
                v105 = v64[9].Blink;
                *(_LIST_ENTRY *)&attributes.Size = v105[2];
                *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v105[3];
                *(_LIST_ENTRY *)&attributes.ParentObject = v105[4];
                v106 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v105[5].Flink;
              }
              attributes.ContextTypeInfo = v106;
              if ( attributes.Size )
              {
                attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                attributes.ParentObject = 0LL;
                v26 = FxObjectAllocateContext(v47, &attributes, 1u, 0LL);
                if ( v26 < 0 )
                  break;
              }
              v64 = v64->Blink;
              if ( v64 == p_m_FileObjectInfoHeadList )
                goto LABEL_97;
            }
            v108 = v64[9].Blink;
            if ( v108 )
              m_Driver = (unsigned __int64)v108[1].Flink;
            else
              m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
            v110 = *(_WORD *)(m_Driver + 10);
            v111 = this->m_DeviceBase;
            v112 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v110 )
              v112 = 0LL;
            v113 = v111->m_ObjectSize;
            v114 = (const void *)((unsigned __int64)v111 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v113 )
              v114 = 0LL;
            WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v114, v112, v26);
LABEL_306:
            v99 = Irp;
LABEL_307:
            if ( v47 )
              FxObject::DeleteFromFailedCreate(v47);
LABEL_309:
            if ( v24 )
              FxFileObject::DeleteFileObjectFromFailedCreate(v24);
            goto LABEL_316;
          }
LABEL_303:
          v140 = this->m_DeviceBase;
          v141 = v140->m_ObjectSize;
          v142 = (const void *)((unsigned __int64)v140 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v141 )
            v142 = 0LL;
          WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v142, v26);
          goto LABEL_306;
        }
        if ( MajorFunction <= 4u )
        {
          if ( v46[1].m_Refcnt == 1 )
          {
            if ( v57->RequestorMode )
              goto LABEL_78;
            UserBuffer = v57->UserBuffer;
            goto LABEL_217;
          }
          if ( v46[1].m_Refcnt != 2 )
            goto LABEL_78;
        }
        else
        {
          if ( (unsigned __int8)(MajorFunction - 14) > 1u )
            goto LABEL_78;
          if ( (v58->Parameters.Read.ByteOffset.LowPart & 3) == 0 )
          {
            v52->m_SystemBuffer.m_Buffer = v57->AssociatedIrp.MasterIrp;
            v52->m_OutputBuffer.m_Buffer = v57->AssociatedIrp.MasterIrp;
LABEL_218:
            if ( v52->m_SystemBuffer.m_Buffer )
              v52->m_RequestBaseStaticFlags |= 1u;
            if ( v52->m_OutputBuffer.m_Buffer )
              v52->m_RequestBaseStaticFlags |= 2u;
            goto LABEL_78;
          }
          if ( (v58->Parameters.Read.ByteOffset.LowPart & 3) != 1 && (v58->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
          {
            if ( (v58->Parameters.Read.ByteOffset.LowPart & 3) == 3 )
            {
              if ( v58->MajorFunction != 15 && v57->RequestorMode )
                goto LABEL_78;
              v52->m_SystemBuffer.m_Buffer = v58->Parameters.CreatePipe.Parameters;
              v52->m_OutputBuffer.m_Buffer = v57->UserBuffer;
            }
            goto LABEL_218;
          }
        }
        UserBuffer = v57->AssociatedIrp.MasterIrp;
LABEL_217:
        v52->m_SystemBuffer.m_Buffer = UserBuffer;
        goto LABEL_218;
      }
      ++LODWORD(v46[2].m_ChildEntry.Flink);
    }
    v49 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v46[2].m_DeviceBase)(
                               HIDWORD(v46[2].m_ChildEntry.Blink),
                               HIDWORD(v46[2].m_DisposeSingleEntry.Next),
                               LODWORD(v46[2].m_DisposeSingleEntry.Next));
    goto LABEL_64;
  }
  v77 = v5->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    v78 = v77->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v78[-1].MajorFunction = *(_OWORD *)&v78->MajorFunction;
    *(_OWORD *)&v78[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v78->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v78[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v78->Parameters.QueryDeviceRelations + 6);
    v78[-1].FileObject = v78->FileObject;
    v78[-1].Control = 0;
    v79 = IoSetCompletionRoutineEx(
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            v5->m_Irp,
            FxPkgGeneral::_CreateCompletionRoutine,
            this,
            1u,
            1u,
            1u);
    v80 = Irp;
    if ( v79 < 0 )
    {
      v100 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v100[-1].CompletionRoutine = FxPkgGeneral::_CreateCompletionRoutine;
      v100[-1].Context = this;
      v100[-1].Control = -32;
    }
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, v80->m_Irp);
  }
  else
  {
    v77->IoStatus.Status = 0;
    v26 = 0;
    v5->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(v5->m_Irp, 0);
    Irp->m_Irp = 0LL;
  }
  return (unsigned int)v26;
}
