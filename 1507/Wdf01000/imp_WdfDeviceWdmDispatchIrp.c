/*
 * XREFs of imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50
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
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C005BEB0 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00D0030 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00D1948 (-Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        _LIST_ENTRY *DispatchContext)
{
  FxDevice *v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  FxPkgIo *m_PkgIo; // r15
  unsigned __int64 v11; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v13; // esi
  FxDeviceBase *m_DeviceBase; // rcx
  const void *v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int64 v19; // rdx
  _IO_STACK_LOCATION *v20; // r9
  __int64 v21; // rcx
  FxIoQueue *v22; // r14
  FxIoInCallerContext *p_m_InCallerContextCallback; // rax
  FxDeviceBase *v24; // rax
  const void *v25; // rax
  _IO_STACK_LOCATION *v26; // rax
  FxDeviceBase *v27; // rcx
  __int64 LowPart; // r9
  unsigned __int8 MajorFunction; // r11
  unsigned __int64 v30; // rcx
  unsigned int (__fastcall *v31)(unsigned __int64, unsigned __int64, _IO_STACK_LOCATION *, __int64, __int64, _IRP *, unsigned __int64); // rax
  __int64 v32; // r10
  FxIoInCallerContext *m_CxDeviceInfo; // rax
  FxCxDeviceInfo *v35; // rax
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rax
  FxObject *v37; // r12
  FxRequest *v38; // rdi
  __int64 v39; // rax
  _LIST_ENTRY *p_m_ChildListHead; // rsi
  _FX_DRIVER_GLOBALS *v41; // rdx
  PSLIST_ENTRY v42; // rbx
  _BYTE *v43; // rax
  char *v44; // rsi
  _SLIST_ENTRY *v45; // r12
  unsigned __int64 m_Lock; // rcx
  KIRQL v47; // r9
  PSLIST_ENTRY *v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned int v51; // eax
  FxRequest *v52; // rbx
  _FX_DRIVER_GLOBALS *p_m_ParentObject; // r12
  __int64 v54; // rax
  _LIST_ENTRY *Blink; // r8
  _FX_DRIVER_GLOBALS *v56; // rax
  _FX_DRIVER_GLOBALS *v57; // r12
  FxVerifierLock *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r12
  FxIoQueue *v61; // rax
  bool v62; // zf
  unsigned __int64 ParentObject; // r8
  _IRP *m_Irp; // rcx
  unsigned __int8 v65; // al
  void *MasterIrp; // rax
  void *UserBuffer; // rax
  FxObject *v68; // rcx
  unsigned __int8 v69; // al
  int v70; // eax
  FxIoInCallerContext *v71; // rdx
  _WDF_OBJECT_ATTRIBUTES *v72; // rsi
  __int64 v73; // rdx
  unsigned __int16 m_ObjectSize; // ax
  char *v75; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  FxVerifierLock *v80; // rcx
  unsigned int *v81; // r8
  unsigned __int16 v82; // r9
  unsigned __int8 *p_m_Reserved; // rbx
  signed __int32 v84; // ecx
  unsigned int v85; // ecx
  FxTagTracker *v86; // rax
  unsigned int m_QueueState; // edx
  _FX_DRIVER_GLOBALS *v88; // r10
  const char *v89; // r8
  const void *v90; // rcx
  const void *v91; // rax
  FxVerifierLock *v92; // rcx
  __int64 v93; // r8
  unsigned __int16 v94; // r9
  FxDeviceBase *v95; // rbx
  _FX_DRIVER_GLOBALS *v96; // rcx
  const void *v97; // rax
  _FX_DRIVER_GLOBALS *v98; // r10
  const void *v99; // rcx
  const void *v100; // rax
  unsigned __int8 v101; // r8
  _FX_DRIVER_GLOBALS *v102; // rdx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  KIRQL v104; // bl
  unsigned __int8 v105; // r8
  FxVerifierLock *v106; // rcx
  const _GUID *Offset; // [rsp+28h] [rbp-49h]
  ULONG Offseta; // [rsp+28h] [rbp-49h]
  KIRQL NewIrql; // [rsp+58h] [rbp-19h] BYREF
  char v111; // [rsp+59h] [rbp-18h]
  FxObject *Parent; // [rsp+60h] [rbp-11h]
  FxRequest *ReservedRequest; // [rsp+68h] [rbp-9h] BYREF
  void *v114; // [rsp+70h] [rbp-1h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+78h] [rbp+7h]
  _FX_DRIVER_GLOBALS *v116; // [rsp+80h] [rbp+Fh] BYREF
  void *PPObject; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v118; // [rsp+90h] [rbp+1Fh]
  FxIoInCallerContext *InCallerContextInfo; // [rsp+98h] [rbp+27h]
  _LIST_ENTRY *retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned __int8 PreviousIrql; // [rsp+E0h] [rbp+6Fh] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  v8 = 1;
  LOWORD(v9) = 0;
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - v9);
  }
  if ( v7->m_Type == 4098 )
  {
    PPObject = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, &PPObject, (void *)Device, 0x1002u, v9);
    v7 = (FxDevice *)PPObject;
    v8 = 1;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( !DispatchContext )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( ((unsigned __int8)DispatchContext & 1) == 0 )
  {
    if ( v7->m_Globals->FxVerifierOn )
    {
      Vf_VerifyWdfDeviceWdmDispatchIrp((_FX_DRIVER_GLOBALS *)v7, DriverGlobals, v7, DispatchContext);
      v7 = (FxDevice *)PPObject;
    }
    return (unsigned int)FxDevice::DispatchPreprocessedIrp(v7, Irp, DispatchContext);
  }
  m_PkgIo = v7->m_PkgIo;
  v11 = (unsigned __int64)DispatchContext & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (_LIST_ENTRY *)v11 != &m_PkgIo->m_DynamicDispatchInfoListHead )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 3u:
        v17 = 0;
        break;
      case 4u:
        v17 = 1;
        break;
      case 0xEu:
        v17 = 2;
        break;
      case 0xFu:
        v17 = 3;
        break;
      default:
        v13 = -1073741811;
        m_DeviceBase = m_PkgIo->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          v15 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        WPP_IFR_SF_qcDqd(
          m_PkgIo->m_Globals,
          CurrentStackLocation->MajorFunction,
          0xDu,
          0xEu,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
          Irp,
          CurrentStackLocation->MajorFunction,
          CurrentStackLocation->MinorFunction,
          v15);
        LODWORD(Parent) = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( *(_BYTE *)(v16 + 318) )
          DbgBreakPoint();
LABEL_45:
        Irp->IoStatus.Status = v13;
        Irp->IoStatus.Information = 0LL;
        IofCompleteRequest(Irp, 0);
        return (unsigned int)v13;
    }
    m_Globals = m_PkgIo->m_Globals;
    if ( m_Globals->FxVerifierOn )
      v13 = FxPkgIo::Vf_VerifyDispatchContext(m_PkgIo, m_Globals, (void *)v11);
    else
      v13 = 0;
    if ( v13 < 0 )
      goto LABEL_45;
    while ( 1 )
    {
      v19 = v11;
      v11 = *(_QWORD *)v11;
      if ( *(_QWORD *)(v19 + 16LL * v17 + 16) )
        break;
      if ( (_LIST_ENTRY *)v11 == &m_PkgIo->m_DynamicDispatchInfoListHead )
      {
        v8 = 1;
        goto LABEL_34;
      }
    }
    v26 = Irp->Tail.Overlay.CurrentStackLocation;
    v27 = m_PkgIo->m_DeviceBase;
    LowPart = v26->Parameters.Read.ByteOffset.LowPart;
    LOBYTE(CurrentStackLocation) = v26->MinorFunction;
    MajorFunction = v26->MajorFunction;
    if ( v27->m_ObjectSize )
      v30 = (unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v30 = 0LL;
    v31 = *(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64, _IO_STACK_LOCATION *, __int64, __int64, _IRP *, unsigned __int64))(v19 + 16LL * v17 + 16);
    v32 = *(_QWORD *)(v19 + 16LL * v17 + 24);
    LOBYTE(v19) = MajorFunction;
    return v31(v30, v19, CurrentStackLocation, LowPart, v32, Irp, v11 | 1);
  }
LABEL_34:
  v20 = Irp->Tail.Overlay.CurrentStackLocation;
  v21 = v20->MajorFunction;
  v22 = m_PkgIo->m_DispatchTable[v21];
  if ( v22 )
  {
    m_CxDeviceInfo = (FxIoInCallerContext *)v22->m_CxDeviceInfo;
    if ( m_CxDeviceInfo )
      p_m_InCallerContextCallback = m_CxDeviceInfo + 3;
    else
      p_m_InCallerContextCallback = &m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = p_m_InCallerContextCallback;
  }
  else
  {
    p_m_InCallerContextCallback = &m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = &m_PkgIo->m_InCallerContextCallback;
    if ( !m_PkgIo->m_InCallerContextCallback.m_Method )
    {
      if ( !m_PkgIo->m_Filter )
      {
        v13 = -1073741808;
        v24 = m_PkgIo->m_DeviceBase;
        if ( v24->m_ObjectSize )
          v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v25 = 0LL;
        WPP_IFR_SF_qid(
          m_PkgIo->m_Globals,
          2u,
          0xDu,
          0xFu,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
          v25,
          (__int64)Irp,
          -1073741808);
        goto LABEL_45;
      }
      goto LABEL_54;
    }
  }
  if ( m_PkgIo->m_Filter
    && !p_m_InCallerContextCallback->m_Method
    && v22 == m_PkgIo->m_DefaultQueue
    && !FxIoQueue::IsIoEventHandlerRegistered(v22, (_WDF_REQUEST_TYPE)v21) )
  {
LABEL_54:
    Irp->CurrentLocation += v8;
    Irp->Tail.Overlay.CurrentStackLocation = v20 + 1;
    return (unsigned int)IofCallDriver(m_PkgIo->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
  }
  v111 = 0;
  if ( !v22 || (PreviousIrql = v8, !v22->m_SupportForwardProgress) )
    PreviousIrql = 0;
  if ( KeGetCurrentIrql() <= (unsigned __int8)v8 )
  {
    KeEnterCriticalRegion();
    v8 = 1;
    v111 = 1;
  }
  if ( v22 && (v35 = v22->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = &v35->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  v37 = m_PkgIo->m_DeviceBase;
  v38 = 0LL;
  Attributes = p_RequestAttributes;
  v116 = (_FX_DRIVER_GLOBALS *)p_RequestAttributes;
  Parent = v37;
  v114 = v37->m_Globals;
  v39 = *(_QWORD *)&v37[6].m_ObjectFlags;
  ReservedRequest = 0LL;
  if ( v39 && *(_WORD *)(v39 + 8) == 4354 && *(_BYTE *)(v39 + 1451) )
  {
    p_m_ChildListHead = &v37[4].m_ChildListHead;
    v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v37[4].m_ChildListHead);
    if ( v42 )
      goto LABEL_72;
  }
  else
  {
    p_m_ChildListHead = &v37[4].m_ChildListHead;
    *((_DWORD *)&v37[4].m_SpinLock.m_DbgFlagIsInitialized + 1) += v8;
    v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v37[4].m_ChildListHead);
    if ( v42 )
      goto LABEL_72;
    ++LODWORD(v37[4].m_SpinLock.m_Lock);
  }
  v42 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))p_m_ChildListHead[3].Flink)(
                        HIDWORD(p_m_ChildListHead[2].Flink),
                        HIDWORD(p_m_ChildListHead[2].Blink),
                        LODWORD(p_m_ChildListHead[2].Blink));
LABEL_72:
  if ( v42 )
  {
    v43 = v114;
    if ( *((_BYTE *)v114 + 264) )
    {
      v44 = (char *)v114 + 104;
      v45 = v42 + 4;
      m_Lock = Parent[5].m_SpinLock.m_Lock;
      *((_DWORD *)&v42[1].Next + 2) = *((_DWORD *)v114 + 17);
      *((_DWORD *)&v42[2].Next + 2) = ExDefaultNonPagedPoolType;
      v118 = m_Lock;
      v42[2].Next = (_SLIST_ENTRY *)m_Lock;
      v42[3].Next = (_SLIST_ENTRY *)retaddr;
      v42[1].Next = (_SLIST_ENTRY *)v44;
      v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v44 + 1);
      v48 = (PSLIST_ENTRY *)*((_QWORD *)v44 + 3);
      v42->Next = (_SLIST_ENTRY *)(v44 + 16);
      *((_QWORD *)&v42->Next + 1) = v48;
      if ( *v48 != (PSLIST_ENTRY)(v44 + 16) )
        __fastfail(3u);
      v49 = v118;
      *v48 = v42;
      *((_QWORD *)v44 + 3) = v42;
      *((_QWORD *)v44 + 14) += v49;
      ++*((_DWORD *)v44 + 32);
      v50 = *((_QWORD *)v44 + 14);
      v51 = *((_DWORD *)v44 + 32);
      if ( v50 > *((_QWORD *)v44 + 17) )
        *((_QWORD *)v44 + 17) = v50;
      if ( v51 > *((_DWORD *)v44 + 38) )
        *((_DWORD *)v44 + 38) = v51;
      KeReleaseSpinLock((PKSPIN_LOCK)v44 + 1, v47);
      v43 = v114;
    }
    else
    {
      v45 = v42;
    }
    v45->Next = v42;
    v52 = (FxRequest *)&v45[1];
    *((_QWORD *)&v45->Next + 1) = v43;
    if ( Attributes )
      p_m_ParentObject = v116;
    else
      p_m_ParentObject = (_FX_DRIVER_GLOBALS *)&Parent[5].m_ParentObject;
    if ( v43[320] )
    {
      memset(v52, 0, 0x20uLL);
      *(_DWORD *)(&v52->m_ObjectState + 1) = 1146058822;
      v52 = (FxRequest *)((char *)v52 + 32);
    }
    memset(&v52[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v52[1].m_Type = v52;
    if ( p_m_ParentObject )
    {
      v54 = *(_QWORD *)&p_m_ParentObject->DestroyEvent.m_DbgFlagIsInitialized;
      if ( v54 )
      {
        Blink = p_m_ParentObject->DestroyEvent.m_Event.Header.WaitListHead.Blink;
        if ( !Blink )
          Blink = *(_LIST_ENTRY **)(v54 + 16);
        memset(&v52[1].m_SpinLock.m_Lock, 0, ((unsigned __int64)&Blink->Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v52[1].m_ChildListHead.Blink = *(_LIST_ENTRY **)&p_m_ParentObject->DestroyEvent.m_DbgFlagIsInitialized;
    }
    v37 = Parent;
  }
  else
  {
    v52 = 0LL;
  }
  v13 = -1073741670;
  if ( v52 )
  {
    v52->m_Globals = v37->m_Globals;
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
    v56 = v52->m_Globals;
    v52->m_DisposeSingleEntry.Next = 0LL;
    v52->m_DeviceBase = 0LL;
    if ( v56->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v52, v41, 0);
    v52->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
    v52->m_NPLock.m_Lock = 0LL;
    v52->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v52->m_ObjectFlags) < 0 )
    {
      v57 = v52->m_Globals;
      v116 = v57;
      if ( v57->FxVerifierLock )
      {
        Offseta = v57->Tag;
        v118 = 0LL;
        v58 = (FxVerifierLock *)FxPoolAllocator(
                                  v57,
                                  (_LIST_ENTRY *)&v57->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  Offseta,
                                  retaddr);
        if ( v58 )
        {
          FxVerifierLock::FxVerifierLock(v58, v57, v52);
          v60 = v59;
        }
        else
        {
          v60 = 0LL;
        }
        if ( v60 )
        {
          if ( *(_BYTE *)(v60 + 122) )
          {
            *(_QWORD *)(v60 + 56) = 0LL;
            *(_DWORD *)(v60 + 64) = 0;
            *(_DWORD *)(v60 + 48) = 1;
            KeInitializeEvent((PRKEVENT)(v60 + 72), SynchronizationEvent, 0);
            *(_BYTE *)(v60 + 40) = 1;
          }
          v61 = (FxIoQueue *)v60;
        }
        else
        {
          WPP_IFR_SF_d(v116, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
          v61 = (FxIoQueue *)v118;
        }
        v52[-1].m_ForwardProgressQueue = v61;
      }
      v37 = Parent;
    }
    v52->m_Irp.m_Irp = Irp;
    v52->m_CancelRoutine.m_Cancel = 0LL;
    v52->m_CompletionRoutine.m_Completion = 0LL;
    v62 = v52->m_Irp.m_Irp == 0LL;
    *(_WORD *)&v52->m_TargetFlags = 0;
    v52->m_CanComplete = 1;
    v52->m_Completed = v62;
    v52->m_Target = 0LL;
    v52->m_TargetCompletionContext = 0LL;
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
    v52->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
    v52->m_SystemBuffer.m_Buffer = 0LL;
    v52->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
    v52->m_OutputBuffer.m_Buffer = 0LL;
    v52->m_IoQueue = 0LL;
    v52->m_PowerStopState = 0;
    v52->m_OwnerListEntry.Blink = &v52->m_OwnerListEntry;
    v52->m_OwnerListEntry.Flink = &v52->m_OwnerListEntry;
    v52->m_OwnerListEntry2.Blink = &v52->m_OwnerListEntry2;
    v52->m_OwnerListEntry2.Flink = &v52->m_OwnerListEntry2;
    v52->m_ForwardProgressList.Blink = &v52->m_ForwardProgressList;
    v52->m_ForwardProgressList.Flink = &v52->m_ForwardProgressList;
    v52->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
    v52->m_Presented = 0;
    *(_WORD *)&v52->m_Reserved = 0;
    v52->m_ForwardProgressQueue = 0LL;
    v52->m_InternalContext = 0LL;
    v52->m_DeviceBase = v37->m_DeviceBase;
  }
  else
  {
    v52 = 0LL;
  }
  if ( !v52 )
  {
    WPP_IFR_SF_d(v37->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    goto LABEL_140;
  }
  m_Irp = v52->m_Irp.m_Irp;
  ParentObject = (unsigned __int64)m_Irp->Tail.Overlay.CurrentStackLocation;
  v65 = *(_BYTE *)ParentObject;
  if ( *(_BYTE *)ParentObject >= 3u )
  {
    if ( v65 <= 4u )
    {
      if ( HIDWORD(v37[2].__vftable) == 1 )
      {
        if ( m_Irp->RequestorMode )
          goto LABEL_136;
        UserBuffer = m_Irp->UserBuffer;
        goto LABEL_131;
      }
      if ( HIDWORD(v37[2].__vftable) != 2 )
        goto LABEL_136;
    }
    else
    {
      if ( (unsigned __int8)(v65 - 14) > 1u )
        goto LABEL_136;
      if ( (*(_DWORD *)(ParentObject + 24) & 3) == 0 )
      {
        v52->m_SystemBuffer.m_Buffer = m_Irp->AssociatedIrp.MasterIrp;
        MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
        goto LABEL_125;
      }
      if ( (*(_DWORD *)(ParentObject + 24) & 3) != 1 && (*(_DWORD *)(ParentObject + 24) & 3) != 2 )
      {
        if ( (*(_DWORD *)(ParentObject + 24) & 3) != 3 )
        {
LABEL_132:
          if ( v52->m_SystemBuffer.m_Buffer )
            v52->m_RequestBaseStaticFlags |= 1u;
          if ( v52->m_OutputBuffer.m_Buffer )
            v52->m_RequestBaseStaticFlags |= 2u;
          goto LABEL_136;
        }
        if ( *(_BYTE *)ParentObject != 15 && m_Irp->RequestorMode )
          goto LABEL_136;
        v52->m_SystemBuffer.m_Buffer = *(void **)(ParentObject + 32);
        MasterIrp = m_Irp->UserBuffer;
LABEL_125:
        v52->m_OutputBuffer.m_Buffer = MasterIrp;
        goto LABEL_132;
      }
    }
    UserBuffer = m_Irp->AssociatedIrp.MasterIrp;
LABEL_131:
    v52->m_SystemBuffer.m_Buffer = UserBuffer;
    goto LABEL_132;
  }
LABEL_136:
  if ( v37->m_Globals->FxRequestParentOptimizationOn )
  {
    v68 = 0LL;
    v114 = 0LL;
    if ( !v52->m_ObjectSize )
    {
      v13 = -1073741816;
LABEL_139:
      WPP_IFR_SF_d(v37->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v13);
      FxObject::DeleteFromFailedCreate(v52);
      goto LABEL_140;
    }
    v72 = Attributes;
    if ( Attributes )
    {
      if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        FxObject::MarkPassiveCallbacks(v52, ObjectLock);
        v68 = (FxObject *)v114;
      }
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        v68 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v73) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v73 = LOWORD(v68->__vftable);
          v68 = (FxObject *)((char *)v68 - v73);
        }
        if ( v68->m_Type == 4096 )
        {
          v114 = v68;
        }
        else
        {
          FxObjectHandleGetPtrQI(v68, &v114, (void *)ParentObject, 0x1000u, v73);
          v68 = (FxObject *)v114;
        }
      }
      if ( v68 )
      {
        v13 = FxObject::AssignParentObject(v52, v68);
        if ( v13 < 0 )
          goto LABEL_177;
        v72 = Attributes;
      }
      m_ObjectSize = v52->m_ObjectSize;
      if ( m_ObjectSize )
        v75 = (char *)v52 + m_ObjectSize;
      else
        v75 = 0LL;
      EvtDestroyCallback = v72->EvtDestroyCallback;
      if ( EvtDestroyCallback )
        *((_QWORD *)v75 + 3) = EvtDestroyCallback;
      EvtCleanupCallback = v72->EvtCleanupCallback;
      if ( EvtCleanupCallback )
      {
        *((_QWORD *)v75 + 2) = EvtCleanupCallback;
        v52->m_ObjectFlags |= 0x400u;
      }
    }
    v52->m_ObjectFlags |= 8u;
    v13 = 0;
  }
  else
  {
    v13 = FxObject::Commit(v52, Attributes, 0LL, v37, 0);
  }
LABEL_177:
  if ( v13 < 0 )
    goto LABEL_139;
  v38 = v52;
  ReservedRequest = v52;
LABEL_140:
  v69 = PreviousIrql;
  if ( PreviousIrql )
  {
    if ( v13 < 0 )
    {
LABEL_146:
      if ( m_PkgIo->m_Filter && !v22 )
        goto LABEL_180;
      if ( !v69 )
      {
        WPP_IFR_SF_d(
          m_PkgIo->m_Globals,
          2u,
          0xDu,
          0x10u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
          v13);
        goto LABEL_180;
      }
LABEL_149:
      v70 = FxIoQueue::GetReservedRequest(v22, Irp, (_LIST_ENTRY **)&ReservedRequest);
      v13 = v70;
      if ( v70 == 259 )
        goto LABEL_249;
      if ( v70 >= 0 )
      {
        v38 = ReservedRequest;
        goto LABEL_152;
      }
LABEL_180:
      Irp->IoStatus.Status = v13;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_249;
    }
    if ( (m_PkgIo->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      v13 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(m_PkgIo, v38);
    v69 = PreviousIrql;
  }
  if ( v13 < 0 )
    goto LABEL_146;
  if ( v69 && v22->m_FwdProgContext->m_IoResourcesAllocate.Method )
  {
    v38->m_Presented = 1;
    v78 = v38->m_ObjectSize ? (unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    v79 = v22->m_ObjectSize ? (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( v22->m_FwdProgContext->m_IoResourcesAllocate.Method((WDFQUEUE__ *)v79, (WDFREQUEST__ *)v78) < 0 )
    {
      FxRequest::FreeRequest(v38);
      ReservedRequest = 0LL;
      goto LABEL_149;
    }
  }
LABEL_152:
  v71 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v38->m_Reserved )
  {
    v38->m_InternalContext = v22;
    v13 = FxPkgIo::DispathToInCallerContextCallback(m_PkgIo, v71, v38, Irp);
    goto LABEL_249;
  }
  v116 = (_FX_DRIVER_GLOBALS *)v38;
  if ( SLOBYTE(v22->m_ObjectFlags) < 0 && (v80 = (FxVerifierLock *)v22[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Lock(v80, &PreviousIrql, ParentObject);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&v22->m_NPLock.m_Lock);
  p_m_Reserved = &v38->m_Reserved;
  if ( v38->m_Reserved )
  {
    v84 = _InterlockedExchangeAdd(&v38->m_Refcnt, 1u);
    v38 = ReservedRequest;
    v85 = v84 + 1;
    v86 = (ReservedRequest->m_ObjectFlags & 0x80) != 0
        ? (FxTagTracker *)ReservedRequest[-1].m_ForwardProgressList.Blink
        : 0LL;
    if ( v86 )
      FxTagTracker::UpdateTagHistory(
        v86,
        (void *)0x50647746,
        2286,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        v85);
  }
  m_QueueState = v22->m_QueueState;
  if ( (m_QueueState & 1) == 0 )
  {
    v88 = v22->m_Globals;
    v13 = -1073741436;
    if ( v88->FxVerboseOn )
    {
      v89 = "power stopping (Drain) in progress,";
      if ( (m_QueueState & 0x10000) == 0 )
        v89 = &a5;
      if ( v38->m_ObjectSize )
        v90 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v90 = 0LL;
      if ( v22->m_ObjectSize )
        v91 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v91 = 0LL;
      WPP_IFR_SF_qLsqd(v88, 5u, (unsigned int)v89, 0x27u, Offset, v91, m_QueueState, v89, v90, -1073741436);
    }
    if ( (v22->m_ObjectFlags & 0x80) != 0 && (v92 = (FxVerifierLock *)v22[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock(v92, PreviousIrql, (unsigned __int8)v81);
    else
      KeReleaseSpinLock(&v22->m_NPLock.m_Lock, PreviousIrql);
    v38->m_Irp.m_Irp->IoStatus.Information = 0LL;
    v95 = v38->m_DeviceBase;
    v96 = v38->m_Globals;
    if ( v96->FxVerboseOn )
    {
      if ( v38->m_ObjectSize )
        v97 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v97 = 0LL;
      WPP_IFR_SF_qqxd(
        v96,
        (unsigned __int8)v38->m_Irp.m_Irp,
        v38->m_Irp.m_Irp->IoStatus.Information,
        0xBu,
        Offset,
        v97,
        v38->m_Irp.m_Irp,
        v38->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( v95 )
      v38->m_PriorityBoost = HIBYTE(v95[1].m_Globals);
    else
      v38->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(v38, (_FX_DRIVER_GLOBALS *)0xC0000184LL, v93, v94);
    v38->Release(v38, (void *)1886220099, 2313, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_249;
  }
  v98 = v22->m_Globals;
  if ( v98->FxVerboseOn )
  {
    if ( v22->m_ObjectSize )
      v99 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v99 = 0LL;
    if ( v38->m_ObjectSize )
      v100 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v100 = 0LL;
    WPP_IFR_SF_qq(
      v98,
      5u,
      0xDu,
      0x28u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v100,
      v99);
  }
  if ( v38->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v38, &NewIrql, (unsigned __int8)v81);
    v102 = v38->m_Globals;
    if ( v102->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(v38, v102);
    if ( (v38->m_ObjectFlags & 0x80) != 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)v38[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, NewIrql, v101);
    }
    else
    {
      KeReleaseSpinLock(&v38->m_NPLock.m_Lock, NewIrql);
    }
  }
  v38->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( *p_m_Reserved )
  {
    if ( v22->m_Dispatching )
    {
      v104 = PreviousIrql;
      LOBYTE(v81) = PreviousIrql;
      FxIoQueue::InsertNewRequestLocked(v22, (FxRequest **)&v116, v81);
      if ( (v22->m_ObjectFlags & 0x80) != 0
        && (v106 = (FxVerifierLock *)v22[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      {
        FxVerifierLock::Unlock(v106, v104, v105);
      }
      else
      {
        KeReleaseSpinLock(&v22->m_NPLock.m_Lock, v104);
      }
      goto LABEL_248;
    }
    v38 = ReservedRequest;
  }
  FxIoQueue::DispatchEvents(v22, PreviousIrql, v38, v82);
LABEL_248:
  v13 = 259;
LABEL_249:
  if ( v111 )
    KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
