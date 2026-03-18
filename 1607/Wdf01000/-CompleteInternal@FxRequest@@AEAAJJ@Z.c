/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0
 * Callers:
 *     imp_WdfRequestComplete @ 0x1C0003100 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00031C0 (imp_WdfRequestCompleteWithInformation.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00748B4 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0007828 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00140F4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003A78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003B6E0 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003BE40 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0062670 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0063E70 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C006CC30 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0078664 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C0078C44 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C0078D6C (WPP_IFR_SF_qqqi.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007A28C (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8938 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00C89AC (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F8C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *Status,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned int v5; // esi
  _IRP *_a2; // rbp
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // r13
  bool v12; // zf
  FxRequestContext *m_RequestContext; // rcx
  KIRQL v14; // di
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v17; // cx
  char v18; // al
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  int *p_m_IrpReferenceCount; // r15
  unsigned int v21; // r15d
  _IRP *v22; // rcx
  FxRegKey *m_DeviceBase; // r14
  unsigned __int8 v24; // r8
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int8 v26; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rcx
  unsigned int v30; // edx
  unsigned int (__fastcall *Release)(FxObject *, void *, int, char *); // rax
  unsigned __int8 m_CanComplete; // cl
  bool v33; // r13
  unsigned __int8 m_Reserved; // r12
  signed __int32 v35; // edi
  unsigned __int16 v37; // cx
  _LIST_ENTRY *v38; // r15
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rsi
  void (__fastcall *v41)(unsigned __int64); // rax
  void (__fastcall *v42)(unsigned __int64); // rax
  unsigned __int16 v43; // ax
  _QWORD *v44; // rcx
  _QWORD *v45; // rsi
  void (__fastcall *v46)(FxRequestFromLookaside *); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *v49; // r15
  FxRequestContext *v50; // rcx
  _IRP *v51; // rsi
  FxRequestTimer *m_Timer; // rcx
  char v53; // al
  FxRequest *v54; // rbp
  __int64 v55; // rax
  _SLIST_ENTRY *v56; // rbp
  unsigned int v57; // edx
  FxPkgGeneral *v58; // rdi
  unsigned int (__fastcall *v59)(FxObject *, void *, int, char *); // rax
  unsigned __int16 v60; // cx
  FxTagTracker *v61; // rsi
  unsigned __int16 v62; // cx
  _QWORD *j; // rbx
  void (__fastcall *v64)(unsigned __int64); // rax
  void (__fastcall *v65)(unsigned __int64); // rax
  unsigned __int16 v66; // ax
  _QWORD *v67; // rcx
  _QWORD *v68; // rbx
  void (__fastcall *v69)(FxObject *); // rdx
  void *(__fastcall *v70)(FxRegKey *, unsigned int); // rax
  void *m_Key; // rcx
  MxPagedLock *v72; // rcx
  FX_POOL_TRACKER *v73; // rbx
  void (__fastcall *v74)(FxObject *); // rdx
  void (__fastcall *v75)(FxObject *); // rax
  void *m_Lock; // rcx
  void *v77; // rcx
  FxRequest *v78; // rax
  FX_POOL_TRACKER *v79; // rsi
  _MDL *v80; // rdx
  FxCallbackLock *v81; // rcx
  _DEVICE_OBJECT *v82; // rbx
  FxRequestTimer *v83; // rcx
  char v84; // al
  _MDL *v85; // rcx
  FxRequestContext *v86; // rcx
  _IRP *v87; // rsi
  FxRequestTimer *v88; // rcx
  char v89; // al
  FxRequest *v90; // rcx
  _SLIST_ENTRY *m_InternalContext; // rsi
  const void *_a1; // rax
  int v93; // esi
  _FX_DRIVER_GLOBALS *v94; // r10
  const void *v95; // rcx
  _FX_DRIVER_GLOBALS *v96; // rdx
  _FX_DRIVER_GLOBALS *v97; // rcx
  const void *v98; // rax
  _FX_DRIVER_GLOBALS *v99; // r10
  const void *v100; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v102; // rcx
  FxObject *p_Blink; // r15
  KIRQL v104; // al
  int m_ObjectState; // edx
  KIRQL v106; // si
  int v107; // edx
  int v108; // edx
  int v109; // edx
  int v110; // edx
  WDFMEMORY__ *id; // rdi
  WDFMEMORY__ *v112; // rdx
  const void *v113; // rcx
  __int64 v114; // rbp
  _MDL *v115; // rsi
  const void *v116; // rdi
  WDFMEMORY__ *v117; // rax
  unsigned __int8 v118; // dl
  unsigned int v119; // r8d
  __int64 v120; // rbp
  _MDL *v121; // rsi
  const void *v122; // rdi
  WDFMEMORY__ *v123; // rax
  unsigned __int8 v124; // dl
  unsigned int v125; // r8d
  unsigned __int64 v126; // rbx
  FxTagTracker *v127; // rcx
  FxVerifierLock *Blink; // rcx
  FxVerifierLock *v129; // rcx
  KIRQL v130; // al
  FxObject *v131; // rcx
  KIRQL v132; // si
  _FX_DRIVER_GLOBALS *v133; // r10
  const void *v134; // rcx
  _LIST_ENTRY *v135; // rcx
  FxRequestContext *v136; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_HEADER *v138; // rax
  FxVerifierLock *v139; // rcx
  FxRequestContext *v140; // rcx
  FxVerifierLock *v141; // rcx
  FxRequestCompletionState v142; // esi
  FxIoQueue *v143; // rdi
  _IRP *v144; // rcx
  CCHAR m_PriorityBoost; // dl
  FxRequest *v146; // rcx
  FxTagTracker *v147; // rcx
  FxVerifierLock *v148; // rcx
  FxCallbackLock *v149; // rcx
  FxVerifierLock *v150; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-88h]
  FxIrp irp; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  FxRequestCompletionState v155; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v156; // [rsp+B0h] [rbp+8h]
  int v157; // [rsp+B8h] [rbp+10h]
  unsigned __int8 PreviousIrql; // [rsp+C0h] [rbp+18h] BYREF
  KIRQL v159; // [rsp+C8h] [rbp+20h]

  v157 = (int)Status;
  m_Globals = this->m_Globals;
  v5 = (unsigned int)Status;
  _a2 = this->m_Irp.m_Irp;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status), !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)m_Irp, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    switch ( v5 )
    {
      case 0xC0200201:
        v93 = -1073741595;
        break;
      case 0xC0200203:
      case 0xC0200204:
        v93 = -2147483631;
        break;
      case 0xC020020A:
      case 0xC0200213:
        goto LABEL_207;
      case 0xC0200214:
        v93 = -1073741670;
        break;
      default:
        WPP_IFR_SF_D(m_Globals, 0xC0000000, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
LABEL_207:
        v93 = -1073741808;
        break;
    }
    v157 = v93;
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v93);
  }
  if ( this->m_IrpAllocation && !this->m_CanComplete )
    FxVerifierDbgBreakPoint(m_Globals);
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  v155 = m_CompletionState;
  if ( !this->m_IrpAllocation )
  {
    v12 = this->m_Reserved == 0;
    this->m_CompletionState = 0;
    if ( v12 )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  if ( !this->m_Reserved && !this->m_IrpAllocation )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    if ( this->m_ObjectState == 1 )
    {
      m_ParentObject = this->m_ParentObject;
      if ( m_ParentObject )
      {
        if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
          goto LABEL_223;
        }
        this->m_ParentObject = 0LL;
      }
      v159 = v14;
      this->m_ObjectFlags |= 0x100u;
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v94 = this->m_Globals;
        if ( v94->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v95 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v95 = 0LL;
          WPP_IFR_SF_qqLL(v94, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v95, this->m_ObjectState, 3u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 3;
      }
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_ObjectState = 3;
      if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v14) )
      {
        if ( (m_ObjectFlags & 0x200) != 0 )
        {
          v97 = this->m_Globals;
          if ( v97->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v98 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v98 = 0LL;
            WPP_IFR_SF_qqLL(v97, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v98, 3u, 4u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 4;
        }
        this->m_ObjectState = 4;
        if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v14, 1u) )
        {
          v17 = this->m_ObjectFlags;
          if ( (v17 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked(this, v14, 0);
          }
          else
          {
            if ( (v17 & 0x200) != 0 )
            {
              v99 = this->m_Globals;
              if ( v99->FxVerboseOn )
              {
                if ( this->m_ObjectSize )
                  v100 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v100 = 0LL;
                WPP_IFR_SF_qqLL(v99, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v100, this->m_ObjectState, 2u);
              }
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 2;
            }
            this->m_ObjectState = 2;
          }
          v18 = 1;
        }
        else
        {
          v18 = 0;
        }
        if ( v18 )
          goto LABEL_30;
        goto LABEL_224;
      }
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    }
LABEL_223:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
LABEL_224:
    v96 = this->m_Globals;
    if ( v96->FxVerifierOn )
      FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v96);
LABEL_30:
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
          {
            m_CompletionState = v155;
            goto LABEL_33;
          }
          Flink = p_m_ChildListHead->Flink;
          v102 = p_m_ChildListHead->Flink->Flink;
          if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v102->Blink != Flink )
            __fastfail(3u);
          p_m_ChildListHead->Flink = v102;
          p_Blink = (FxObject *)&Flink[-5].Blink;
          v102->Blink = p_m_ChildListHead;
          Flink->Blink = Flink;
          Flink->Flink = Flink;
          v104 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
          m_ObjectState = p_Blink->m_ObjectState;
          v106 = v104;
          p_Blink->m_ParentObject = 0LL;
          v107 = m_ObjectState - 2;
          if ( v107 )
          {
            v108 = v107 - 2;
            if ( !v108 )
              goto LABEL_251;
            v109 = v108 - 4;
            if ( v109 )
              break;
          }
          FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v104, 1u);
        }
        v110 = v109 - 1;
        if ( v110 )
          break;
        FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
LABEL_251:
        KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v106);
      }
      if ( v110 == 1 )
        goto LABEL_251;
      KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v104);
    }
  }
LABEL_33:
  p_m_IrpReferenceCount = &this->m_IrpReferenceCount;
  if ( this->m_IrpReferenceCount )
  {
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
      id = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
      v112 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    else
      v112 = 0LL;
    if ( this->m_ObjectSize )
      v113 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v113 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      (unsigned __int8)v112,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v113,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v112,
      id);
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v114 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v115 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v116 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v117 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v118, v119, 0x15u, traceGuida, v117, v116, v115, v114);
    }
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v120 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v121 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v122 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v123 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v124, v125, 0x16u, traceGuida, v123, v122, v121, v120);
    }
    if ( this->m_ObjectSize )
      v126 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v126 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v126, *p_m_IrpReferenceCount);
  }
  v21 = v157;
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v157;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return v21;
  }
  v22 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( v22->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = 0LL;
  }
  else
  {
    m_DeviceBase = (FxRegKey *)this->m_DeviceBase;
    v57 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      v127 = (FxTagTracker *)m_DeviceBase[-1].m_DeviceBase;
      if ( v127 )
        FxTagTracker::UpdateTagHistory(
          v127,
          &irp,
          858,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v57);
    }
    v22 = irp.m_Irp;
    v58 = (FxPkgGeneral *)m_DeviceBase[5].FxPagedObject::FxObject::m_Globals;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        v58->m_Device,
        (_WDF_FILEOBJECT_CLASS)v58->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(v58);
      v22 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v22, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
    goto LABEL_55;
  }
  if ( m_CompletionState )
  {
    if ( (m_CompletionState & 0x80u) == 0 )
    {
      v25 = m_IoQueue->m_Globals;
      if ( v25->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v25, this);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (Blink = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Lock(Blink, &PreviousIrql, v24);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      v28 = this->m_OwnerListEntry2.Flink;
      v29 = this->m_OwnerListEntry2.Blink;
      if ( v28->Blink != &this->m_OwnerListEntry2 || v29->Flink != p_m_OwnerListEntry2 )
        __fastfail(3u);
      v29->Flink = v28;
      v28->Blink = v29;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v129 = (FxVerifierLock *)m_IoQueue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        {
          FxVerifierLock::Unlock(v129, PreviousIrql, v26);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      else
      {
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
      }
    }
    this->m_ObjectFlags |= 4u;
    if ( this->m_ParentObject )
    {
      v130 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v131 = this->m_ParentObject;
      v132 = v130;
      if ( v131 )
      {
        if ( FxObject::RemoveChildObjectInternal(v131, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v132);
          goto LABEL_55;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v132);
    }
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      v133 = this->m_Globals;
      if ( v133->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v134 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v134 = 0LL;
        WPP_IFR_SF_qqLL(v133, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v134, this->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_Presented) - 16) = 10;
    }
    this->m_ObjectState = 10;
    FxObject::DestroyChildren(this);
    Release = this->Release;
    if ( (char *)Release == (char *)FxRequest::Release )
    {
      m_CanComplete = this->m_CanComplete;
      v33 = this->m_IrpAllocation == 0;
      m_Reserved = this->m_Reserved;
      v156 = m_CanComplete;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        v135 = this[-1].m_ForwardProgressList.Blink;
        if ( v135 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v135,
            0LL,
            1215,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            this->m_Refcnt - 1);
        m_CanComplete = v156;
      }
      v35 = _InterlockedDecrement(&this->m_Refcnt);
      if ( v35 )
        goto LABEL_53;
      v37 = this->m_ObjectFlags;
      if ( (v37 & 0x20) != 0 || (v37 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
      }
      else
      {
        if ( (v37 & 0x80u) != 0 )
        {
          v38 = this[-1].m_ForwardProgressList.Blink;
          if ( v38 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_ForwardProgressList.Blink);
        }
        else
        {
          v38 = 0LL;
        }
        m_ObjectSize = this->m_ObjectSize;
        if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
        {
          for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
          {
            v41 = (void (__fastcall *)(unsigned __int64))i[2];
            if ( v41 )
            {
              v41((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[2] = 0LL;
            }
            v42 = (void (__fastcall *)(unsigned __int64))i[3];
            if ( v42 )
            {
              v42((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              i[3] = 0LL;
            }
          }
          v43 = this->m_ObjectSize;
          LOBYTE(v30) = 1;
          if ( v43 )
          {
            v44 = (FxRequest_vtbl **)((char *)&this->__vftable + v43);
            if ( v44 )
            {
              do
              {
                v45 = (_QWORD *)v44[1];
                if ( !(_BYTE)v30 )
                  FxPoolFree(v44);
                LOBYTE(v30) = 0;
                v44 = v45;
              }
              while ( v45 );
            }
          }
        }
        if ( v38 )
        {
          this[-1].m_ForwardProgressList.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v38, v30);
        }
        v46 = FxRequestFromLookaside::SelfDestruct;
        SelfDestruct = this->SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
        {
          m_AllocatedMdl = this->m_AllocatedMdl;
          v49 = this->m_DeviceBase;
          this->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
          if ( m_AllocatedMdl )
          {
            if ( this->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
            else
              IoFreeMdl(m_AllocatedMdl);
          }
          v50 = this->m_RequestContext;
          v51 = this->m_Irp.m_Irp;
          if ( v50 )
          {
            if ( v51 )
              v50->ReleaseAndRestore(v50, this);
            v136 = this->m_RequestContext;
            if ( v136 )
              ((void (__fastcall *)(FxRequestContext *, __int64))v136->~FxRequestContext)(v136, 1LL);
          }
          if ( v51 && this->m_IrpAllocation == 1 )
            IoFreeIrp(this->m_Irp.m_Irp);
          m_Timer = this->m_Timer;
          if ( m_Timer )
            FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v46);
          v53 = this->m_ObjectFlags;
          this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
          if ( v53 < 0 )
          {
            m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
            if ( m_ForwardProgressQueue )
            {
              FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, (unsigned int)v46);
              this[-1].m_ForwardProgressQueue = 0LL;
            }
          }
          this->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(this);
          if ( this->m_ForwardRequestToParent )
          {
            v138 = FxObject::_CleanupPointer(this->m_Globals, this);
            ExFreePoolWithTag(v138->Base, 0);
            v21 = v157;
          }
          else
          {
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              v54 = (FxRequest *)((char *)this - 32);
            else
              v54 = this;
            if ( v49->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v54[-1].m_InternalContext);
            v55 = *(_QWORD *)&v49[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v55 && *(_WORD *)(v55 + 8) == 4354 && *(_BYTE *)(v55 + 1651) )
            {
              m_InternalContext = (_SLIST_ENTRY *)v54[-1].m_InternalContext;
              if ( ExQueryDepthSList((PSLIST_HEADER)&v49[2].m_SpinLock) < LOWORD(v49[2].m_ParentObject) )
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&v49[2].m_SpinLock, m_InternalContext);
                m_CanComplete = v156;
                v21 = v157;
                goto LABEL_53;
              }
              (*(void (__fastcall **)(_SLIST_ENTRY *))&v49[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
              v21 = v157;
            }
            else
            {
              v56 = (_SLIST_ENTRY *)v54[-1].m_InternalContext;
              ++HIDWORD(v49[2].m_ChildEntry.Flink);
              if ( ExQueryDepthSList((PSLIST_HEADER)&v49[2].m_SpinLock) >= LOWORD(v49[2].m_ParentObject) )
              {
                ++LODWORD(v49[2].m_ChildEntry.Blink);
                (*(void (__fastcall **)(_SLIST_ENTRY *))&v49[2].m_NPLock.m_DbgFlagIsInitialized)(v56);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&v49[2].m_SpinLock, v56);
              }
              v21 = v157;
            }
          }
        }
        else
        {
          v74 = FxObject::SelfDestruct;
          if ( SelfDestruct == FxObject::SelfDestruct )
          {
            v75 = this->~FxObject;
            if ( (char *)v75 == (char *)FxRegKey::`scalar deleting destructor' )
            {
              this->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
              m_Lock = (void *)this->m_NPLock.m_Lock;
              if ( m_Lock )
              {
                ZwClose(m_Lock);
                this->m_NPLock.m_Lock = 0LL;
              }
              v77 = *(void **)&this->m_NPLock.m_DbgFlagIsInitialized;
              this->__vftable = (FxRequest_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
              if ( v77 )
              {
                FxPoolFree(v77);
                *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = 0LL;
              }
              FxObject::~FxObject(this);
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                v78 = (FxRequest *)((char *)this - 32);
              else
                v78 = this;
              if ( !v78 )
                KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            }
            else
            {
              if ( (char *)v75 != (char *)FxFileObject::`vector deleting destructor' )
              {
                if ( (char *)v75 == (char *)FxRequest::`scalar deleting destructor' )
                {
                  this->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
                  v85 = this->m_AllocatedMdl;
                  if ( v85 )
                  {
                    if ( this->m_Globals->FxVerifierOn )
                      FxMdlFreeDebug(this->m_Globals, this->m_AllocatedMdl);
                    else
                      IoFreeMdl(v85);
                  }
                  v86 = this->m_RequestContext;
                  v87 = this->m_Irp.m_Irp;
                  if ( v86 )
                  {
                    if ( v87 )
                      v86->ReleaseAndRestore(v86, this);
                    v140 = this->m_RequestContext;
                    if ( v140 )
                      ((void (__fastcall *)(FxRequestContext *, __int64))v140->~FxRequestContext)(v140, 1LL);
                  }
                  if ( v87 && this->m_IrpAllocation == 1 )
                    IoFreeIrp(this->m_Irp.m_Irp);
                  v88 = this->m_Timer;
                  if ( v88 )
                    FxRequestTimer::`scalar deleting destructor'(v88, (unsigned int)v74);
                  v89 = this->m_ObjectFlags;
                  this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                  if ( v89 < 0 )
                  {
                    v141 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
                    if ( v141 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v141, (unsigned int)v74);
                      this[-1].m_ForwardProgressQueue = 0LL;
                    }
                  }
                  this->m_NPLock.m_DbgFlagIsInitialized = 0;
                  FxObject::~FxObject(this);
                  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                    v90 = (FxRequest *)((char *)this - 32);
                  else
                    v90 = this;
                  FxPoolFree(v90);
                  m_CanComplete = v156;
                  v21 = v157;
                }
                else
                {
                  ((void (__fastcall *)(FxRequest *, __int64))v75)(this, 1LL);
                  m_CanComplete = v156;
                  v21 = v157;
                }
                goto LABEL_53;
              }
              this->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
              this->m_ListEntry.Flink = (_LIST_ENTRY *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              {
                v139 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
                if ( v139 )
                {
                  FxVerifierLock::`scalar deleting destructor'(v139, (unsigned int)FxObject::SelfDestruct);
                  this[-1].m_ForwardProgressQueue = 0LL;
                }
              }
              this->m_NPLock.m_DbgFlagIsInitialized = 0;
              FxObject::~FxObject(this);
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                v78 = (FxRequest *)((char *)this - 32);
              else
                v78 = this;
              if ( !v78 )
                KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            }
            if ( ((unsigned __int16)v78 & 0xFFF) != 0 )
            {
              v79 = (FX_POOL_TRACKER *)v78[-1].m_InternalContext;
              if ( *(_BYTE *)(*(_QWORD *)&v78[-1].m_Presented + 264LL) )
              {
                if ( FxIsPagedPoolType(v79->PoolType) )
                  FxPoolRemovePagedAllocateTracker(v79);
                else
                  FxPoolRemoveNonPagedAllocateTracker(v79);
                memset(v79, 0, v79->Size + 64);
              }
              ExFreePoolWithTag(v79, 0);
              m_CanComplete = v156;
              v21 = v157;
              goto LABEL_53;
            }
            ExFreePoolWithTag(v78, 0);
            v21 = v157;
          }
          else
          {
            SelfDestruct(this);
            v21 = v157;
          }
        }
      }
      m_CanComplete = v156;
LABEL_53:
      if ( m_Reserved && v35 == 1 && this->m_Completed )
      {
        FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
      }
      else if ( !v33 && m_CanComplete && v35 == 1 && this->m_Completed )
      {
        v142 = this->m_CompletionState;
        v143 = this->m_IoQueue;
        v144 = this->m_Irp.m_Irp;
        m_PriorityBoost = this->m_PriorityBoost;
        this->m_CompletionState = 0;
        this->m_IoQueue = 0LL;
        this->m_Irp.m_Irp = 0LL;
        IofCompleteRequest(v144, m_PriorityBoost);
        FxRequest::PostProcessCompletionForDriverRequest(v146, v142, v143);
      }
      goto LABEL_55;
    }
    Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_55:
  if ( m_DeviceBase )
  {
    v59 = m_DeviceBase->Release;
    if ( v59 != FxObject::Release )
    {
      v59(m_DeviceBase, &irp, 879, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      return v21;
    }
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      v147 = (FxTagTracker *)m_DeviceBase[-1].m_DeviceBase;
      if ( v147 )
        FxTagTracker::UpdateTagHistory(
          v147,
          &irp,
          879,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagRelease,
          m_DeviceBase->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&m_DeviceBase->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      v60 = m_DeviceBase->m_ObjectFlags;
      if ( (v60 & 0x20) != 0 || (v60 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(m_DeviceBase, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(m_DeviceBase->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, m_DeviceBase);
        return v21;
      }
      if ( (v60 & 0x80u) != 0 )
      {
        v61 = (FxTagTracker *)m_DeviceBase[-1].m_DeviceBase;
        if ( v61 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)m_DeviceBase[-1].m_DeviceBase);
      }
      else
      {
        v61 = 0LL;
      }
      v62 = m_DeviceBase->m_ObjectSize;
      if ( v62 && (m_DeviceBase->m_ObjectFlags & 8) != 0 )
      {
        for ( j = (FxRegKey_vtbl **)((char *)&m_DeviceBase->__vftable + v62); j; j = (_QWORD *)j[1] )
        {
          v64 = (void (__fastcall *)(unsigned __int64))j[2];
          if ( v64 )
          {
            v64((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            j[2] = 0LL;
          }
          v65 = (void (__fastcall *)(unsigned __int64))j[3];
          if ( v65 )
          {
            v65((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            j[3] = 0LL;
          }
        }
        v66 = m_DeviceBase->m_ObjectSize;
        LOBYTE(v30) = 1;
        if ( v66 )
        {
          v67 = (FxRegKey_vtbl **)((char *)&m_DeviceBase->__vftable + v66);
          if ( v67 )
          {
            do
            {
              v68 = (_QWORD *)v67[1];
              if ( !(_BYTE)v30 )
                FxPoolFree(v67);
              LOBYTE(v30) = 0;
              v67 = v68;
            }
            while ( v68 );
          }
        }
      }
      if ( v61 )
      {
        m_DeviceBase[-1].m_DeviceBase = 0LL;
        FxTagTracker::`scalar deleting destructor'(v61, v30);
      }
      v69 = m_DeviceBase->SelfDestruct;
      if ( v69 != FxObject::SelfDestruct )
      {
        m_DeviceBase->SelfDestruct(m_DeviceBase);
        return v21;
      }
      v70 = (void *(__fastcall *)(FxRegKey *, unsigned int))m_DeviceBase->~FxObject;
      if ( v70 == FxRegKey::`scalar deleting destructor' )
      {
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
        m_Key = m_DeviceBase->m_Key;
        if ( m_Key )
        {
          ZwClose(m_Key);
          m_DeviceBase->m_Key = 0LL;
        }
        v72 = m_DeviceBase->m_Lock;
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
        if ( v72 )
        {
          FxPoolFree(v72);
          m_DeviceBase->m_Lock = 0LL;
        }
        FxObject::~FxObject(m_DeviceBase);
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
          m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 32);
        if ( !m_DeviceBase )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)m_DeviceBase & 0xFFF) != 0 )
        {
LABEL_132:
          v73 = (FX_POOL_TRACKER *)m_DeviceBase[-1].m_Key;
          if ( m_DeviceBase[-1].m_Globals->FxPoolTrackingOn )
          {
            if ( FxIsPagedPoolType(v73->PoolType) )
              FxPoolRemovePagedAllocateTracker(v73);
            else
              FxPoolRemoveNonPagedAllocateTracker(v73);
            memset(v73, 0, v73->Size + 64);
          }
          ExFreePoolWithTag(v73, 0);
          return v21;
        }
LABEL_351:
        ExFreePoolWithTag(m_DeviceBase, 0);
        return v21;
      }
      if ( (char *)v70 == (char *)FxFileObject::`vector deleting destructor' )
      {
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
        m_DeviceBase->m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
        {
          v148 = (FxVerifierLock *)m_DeviceBase[-1].m_Lock;
          if ( v148 )
          {
            FxVerifierLock::`scalar deleting destructor'(v148, (unsigned int)v69);
            m_DeviceBase[-1].m_Lock = 0LL;
          }
        }
        LOBYTE(m_DeviceBase->m_Lock) = 0;
        FxObject::~FxObject(m_DeviceBase);
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
          m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 32);
        if ( !m_DeviceBase )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)m_DeviceBase & 0xFFF) != 0 )
          goto LABEL_132;
        goto LABEL_351;
      }
      if ( (char *)v70 == (char *)FxRequest::`scalar deleting destructor' )
      {
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
        v80 = (_MDL *)m_DeviceBase[1].m_Key;
        if ( v80 )
          FxMdlFree(m_DeviceBase->FxPagedObject::FxObject::m_Globals, v80);
        v81 = (FxCallbackLock *)m_DeviceBase[1].m_ChildListHead.Blink;
        v82 = *(_DEVICE_OBJECT **)&m_DeviceBase[1].m_ObjectFlags;
        if ( v81 )
        {
          if ( v82 )
            v81->Unlock(v81, (unsigned __int8)m_DeviceBase);
          v149 = (FxCallbackLock *)m_DeviceBase[1].m_ChildListHead.Blink;
          if ( v149 )
            ((void (__fastcall *)(FxCallbackLock *, __int64))v149->~FxCallbackLock)(v149, 1LL);
        }
        if ( v82 && BYTE5(m_DeviceBase[1].m_ChildEntry.Blink) == 1 )
          IoFreeIrp(*(PIRP *)&m_DeviceBase[1].m_ObjectFlags);
        v83 = *(FxRequestTimer **)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v83 )
          FxRequestTimer::`scalar deleting destructor'(v83, (unsigned int)v80);
        v84 = m_DeviceBase->m_ObjectFlags;
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
        if ( v84 < 0 )
        {
          v150 = (FxVerifierLock *)m_DeviceBase[-1].m_Lock;
          if ( v150 )
          {
            FxVerifierLock::`scalar deleting destructor'(v150, (unsigned int)v80);
            m_DeviceBase[-1].m_Lock = 0LL;
          }
        }
        LOBYTE(m_DeviceBase->m_Lock) = 0;
        FxObject::~FxObject(m_DeviceBase);
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
          m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 32);
        FxPoolFree(m_DeviceBase);
      }
      else
      {
        v70(m_DeviceBase, 1u);
      }
    }
  }
  return v21;
}
