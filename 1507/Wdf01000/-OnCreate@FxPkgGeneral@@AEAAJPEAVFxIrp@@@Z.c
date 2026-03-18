/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0003EA0 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C0005710 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C000F430 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C005BA6C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C0076CD8 (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0095AF4 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x1C00A4BCC (-Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  const void *v3; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxIrp *v6; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *Blink; // r13
  _FILE_OBJECT *v9; // r9
  FxDeviceBase *m_DeviceBase; // rdi
  int v11; // eax
  unsigned __int64 ContextSizeOverride; // rcx
  WDFFILEOBJECT__ *ContextTypeInfo; // rdx
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r8
  int v15; // r12d
  _FX_DRIVER_GLOBALS *v16; // r14
  unsigned __int64 flags; // rax
  ULONG v18; // r9d
  SIZE_T v19; // rcx
  int id; // r15d
  _LIST_ENTRY *Caller; // rax
  _QWORD *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rdx
  unsigned __int64 v24; // r15
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v25; // rax
  _LIST_ENTRY *v26; // r14
  __int64 v27; // rax
  KIRQL v28; // al
  KIRQL v29; // al
  KIRQL v30; // al
  unsigned __int16 v31; // cx
  KIRQL v32; // dl
  KIRQL v33; // al
  unsigned __int16 m_ObjectState; // cx
  KIRQL v35; // dl
  _LIST_ENTRY *v36; // rcx
  int v37; // r14d
  unsigned __int8 v38; // r8
  unsigned __int16 v39; // ax
  char *v40; // rax
  unsigned __int8 v41; // r8
  FxDeviceBase_vtbl *v42; // rdx
  FxDeviceBase_vtbl *v43; // rax
  _LIST_ENTRY *v44; // rdi
  FxDeviceBase *v45; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v46; // xmm1_8
  FxDeviceBase *v47; // r14
  FxRequest *v48; // r12
  __int64 v49; // rax
  PSLIST_ENTRY v50; // rdi
  _FX_DRIVER_GLOBALS *v51; // rcx
  _SLIST_ENTRY *v52; // rax
  FxRequest *v53; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v54; // rax
  _FX_DRIVER_GLOBALS *v55; // rax
  _IRP *v56; // rcx
  FxObject *v57; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v59; // rax
  _LIST_ENTRY *v60; // rdi
  _LIST_ENTRY *v61; // rax
  char v62; // dl
  WDFFILEOBJECT__ *v63; // r14
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v65; // r12
  FxDeviceBase *v66; // rbx
  unsigned __int64 v67; // rbx
  _LIST_ENTRY *v68; // rcx
  _LIST_ENTRY *v69; // rcx
  const void *v71; // rdi
  _FX_DRIVER_GLOBALS *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 ContextSize; // r8
  __int64 v76; // rcx
  FxVerifierLock *v77; // rax
  _KEVENT *v78; // rax
  const void *v79; // rdx
  const void *v80; // rdx
  FxVerifierLock *m_CallbackLockObjectPtr; // rcx
  FxVerifierLock *v82; // rcx
  _LIST_ENTRY *v83; // rcx
  unsigned __int64 Flink; // rcx
  const void *v85; // rcx
  FxDeviceBase *v86; // rdx
  const void *v87; // rdx
  FxIrp *v88; // rdi
  _LIST_ENTRY *v89; // rax
  FX_POOL *p_FxPoolFrameworks; // rdx
  _SLIST_ENTRY *v91; // r8
  KIRQL v92; // al
  FX_POOL *v93; // rcx
  KIRQL v94; // r9
  PSLIST_ENTRY *v95; // r8
  _LIST_ENTRY *p_NonPagedHead; // rdx
  char *v97; // rdx
  unsigned int NonPagedAllocations; // eax
  unsigned __int64 v99; // r8
  _FX_DRIVER_GLOBALS *v100; // rcx
  FxVerifierLock *v101; // rax
  FX_POOL *v102; // rax
  __int64 v103; // rdx
  _LIST_ENTRY *v104; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v105; // xmm1_8
  FxDeviceBase *v106; // rax
  _QWORD *Owner; // rax
  FxDriver *m_Driver; // rax
  unsigned __int64 v109; // rax
  FxDeviceBase *v110; // rcx
  const void *v111; // rcx
  FxDeviceBase *v112; // rax
  const void *v113; // rax
  FxIoQueue *m_DefaultQueueForCreates; // rax
  const void *v115; // rax
  unsigned __int16 v116; // r9
  _FX_DRIVER_GLOBALS *v117; // rax
  WDFREQUEST__ *v118; // r8
  FxDeviceBase *v119; // rdx
  WDFDEVICE__ *v120; // rdx
  int v121; // eax
  int v122; // edi
  FxIoQueue *v123; // rcx
  const void *v124; // rcx
  unsigned int v125; // r8d
  FxDeviceBase *v126; // rbx
  _FX_DRIVER_GLOBALS *v127; // rcx
  FxIoQueue *v128; // rax
  FxDeviceBase *v129; // rbx
  _FX_DRIVER_GLOBALS *v130; // rcx
  const void *v131; // rax
  FxDeviceBase *v132; // rax
  const void *v133; // rax
  FxDeviceBase *v134; // rax
  const void *v135; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-A9h]
  const _GUID *Taga; // [rsp+20h] [rbp-A9h]
  KIRQL v138; // [rsp+50h] [rbp-79h]
  unsigned __int8 PreviousIrql[7]; // [rsp+51h] [rbp-78h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-71h]
  WDFFILEOBJECT__ *v141; // [rsp+60h] [rbp-69h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+68h] [rbp-61h] BYREF
  void *PPObject; // [rsp+A0h] [rbp-29h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp-21h] BYREF
  FX_POOL *v145; // [rsp+B0h] [rbp-19h]
  _FILE_OBJECT *FileObject; // [rsp+B8h] [rbp-11h]
  FxIrp v147; // [rsp+C0h] [rbp-9h]
  FxDeviceBase *v148; // [rsp+C8h] [rbp-1h]
  FxRequest *outputRequest; // [rsp+D0h] [rbp+7h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+128h] [rbp+5Fh]
  char v151; // [rsp+130h] [rbp+67h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+140h] [rbp+77h] BYREF
  char v154; // [rsp+148h] [rbp+7Fh]

  m_Irp = FxIrp->m_Irp;
  v3 = 0LL;
  m_Globals = this->m_Globals;
  v141 = 0LL;
  v6 = FxIrp;
  v154 = 0;
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
    ContextSizeOverride = 0LL;
    ContextTypeInfo = 0LL;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
    p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    memset(&attributes.Size + 1, 0, 20);
    memset(&attributes.ParentObject, 0, 24);
    attributes.Size = 56;
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
    {
      Blink = this->m_FileObjectInfoHeadList.Blink;
      if ( LODWORD(Blink[5].Blink) )
      {
        attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
        ContextTypeInfo = (WDFFILEOBJECT__ *)attributes.ContextTypeInfo;
        ContextSizeOverride = attributes.ContextSizeOverride;
      }
      attributes.ExecutionLevel = this->m_ExecutionLevel;
      attributes.SynchronizationScope = this->m_SynchronizationScope;
    }
    v15 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    v16 = m_DeviceBase->m_Globals;
    if ( v15 == 1 )
    {
      v24 = 0LL;
      goto LABEL_52;
    }
    if ( !v9 && (v15 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
    {
      if ( v16->FxVerboseOn )
        WPP_IFR_SF_q(v16, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v6->m_Irp);
      v72 = m_DeviceBase->m_Globals;
      LODWORD(SpinLock) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v72->Public.DriverName,
        (const char *)&SpinLock,
        v72->Public.DriverName,
        (const char *)&SpinLock);
      if ( *(_BYTE *)(v73 + 318) )
      {
        DbgBreakPoint();
        m_Globals = globals;
      }
      v37 = -1073741438;
      goto LABEL_311;
    }
    flags = 0LL;
    v18 = v16->Tag;
    LODWORD(FxDriverGlobals) = ExDefaultNonPagedPoolType;
    LODWORD(SpinLock) = v18;
    if ( ContextTypeInfo )
    {
      flags = ContextSizeOverride;
      if ( !ContextSizeOverride )
        flags = *((_QWORD *)ContextTypeInfo + 2);
    }
    v19 = 208LL;
    id = 0;
    v141 = (WDFFILEOBJECT__ *)208;
    if ( flags )
    {
      v74 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v74 < flags )
      {
LABEL_310:
        v37 = -1073741670;
        goto LABEL_311;
      }
      ContextTypeInfo = (WDFFILEOBJECT__ *)(v74 + 208);
      if ( (unsigned __int64)ContextTypeInfo < 0xD0 )
      {
        v141 = (WDFFILEOBJECT__ *)-1LL;
        id = -1073741675;
        goto LABEL_141;
      }
      v19 = (SIZE_T)ContextTypeInfo;
      v141 = ContextTypeInfo;
    }
    if ( v16->FxVerifierHandle )
    {
      ContextTypeInfo = (WDFFILEOBJECT__ *)(v19 + 32);
      if ( v19 + 32 < v19 )
      {
        v19 = -1LL;
        id = -1073741675;
        v141 = (WDFFILEOBJECT__ *)-1LL;
      }
      else
      {
        v19 += 32LL;
        v141 = ContextTypeInfo;
        id = 0;
      }
    }
    if ( id >= 0 )
    {
      if ( v16->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v22 = FxPoolAllocator(v16, (_LIST_ENTRY *)&v16->FxPoolFrameworks, ExDefaultNonPagedPoolType, v19, v18, Caller);
      v24 = (unsigned __int64)v22;
      if ( v22 )
      {
        if ( v16->FxVerifierHandle )
        {
          memset(v22, 0, 0x20uLL);
          *(_DWORD *)(v24 + 28) = 1146058822;
          v24 += 32LL;
        }
        memset((void *)(v24 + 160), 0, 0x30uLL);
        *(_QWORD *)(v24 + 160) = v24;
        v25 = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSize = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSize = attributes.ContextTypeInfo->ContextSize;
          memset((void *)(v24 + 208), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v25 = attributes.ContextTypeInfo;
        }
        *(_QWORD *)(v24 + 192) = v25;
      }
      if ( v24 )
      {
        v26 = (_LIST_ENTRY *)(v24 + 72);
        *(_QWORD *)(v24 + 16) = m_DeviceBase->m_Globals;
        *(_QWORD *)v24 = &FxObject::`vftable';
        *(_DWORD *)(v24 + 8) = 10489880;
        *(_QWORD *)(v24 + 56) = 0LL;
        *(_BYTE *)(v24 + 48) = 1;
        *(_DWORD *)(v24 + 12) = 1;
        *(_DWORD *)(v24 + 24) = 0x10000;
        *(_QWORD *)(v24 + 64) = 0LL;
        *(_QWORD *)(v24 + 40) = v24 + 32;
        *(_QWORD *)(v24 + 32) = v24 + 32;
        *(_QWORD *)(v24 + 80) = v24 + 72;
        *(_QWORD *)(v24 + 72) = v24 + 72;
        v27 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 88) = 0LL;
        *(_QWORD *)(v24 + 96) = 0LL;
        if ( *(_BYTE *)(v27 + 316) )
          FxObject::Vf_VerifyConstruct((FxObject *)v24, v23, 0);
        *(_QWORD *)v24 = &FxNonPagedObject::`vftable';
        *(_QWORD *)(v24 + 112) = 0LL;
        *(_BYTE *)(v24 + 104) = 1;
        if ( *(char *)(v24 + 24) < 0 )
        {
          v76 = *(_QWORD *)(v24 + 16);
          FxDriverGlobals = (_FX_DRIVER_GLOBALS *)v76;
          if ( *(_BYTE *)(v76 + 322) )
          {
            v77 = (FxVerifierLock *)FxPoolAllocator(
                                      (_FX_DRIVER_GLOBALS *)v76,
                                      (_LIST_ENTRY *)(v76 + 104),
                                      ExDefaultNonPagedPoolType,
                                      0xB0uLL,
                                      *(_DWORD *)(v76 + 68),
                                      retaddr);
            if ( v77 && (FxVerifierLock::FxVerifierLock(v77, FxDriverGlobals, (FxObject *)v24), (PPObject = v78) != 0LL) )
            {
              if ( v78[5].Header.Size )
              {
                v78[2].Header.LockNV = 1;
                v78[2].Header.WaitListHead.Flink = 0LL;
                LODWORD(v78[2].Header.WaitListHead.Blink) = 0;
                KeInitializeEvent(v78 + 3, SynchronizationEvent, 0);
                v78 = (_KEVENT *)PPObject;
                *((_BYTE *)PPObject + 40) = 1;
              }
            }
            else
            {
              WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
              v78 = 0LL;
            }
            *(_QWORD *)(v24 - 24) = v78;
          }
        }
        *(_QWORD *)(v24 + 136) = 0LL;
        *(_QWORD *)v24 = &FxFileObject::`vftable'{for `FxNonPagedObject'};
        *(_QWORD *)(v24 + 96) = m_DeviceBase;
        *(_QWORD *)(v24 + 120) = &FxFileObject::`vftable'{for `IFxHasCallbacks'};
        *(_QWORD *)(v24 + 128) = FileObject;
        v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
        *(_WORD *)(v24 + 24) |= 2u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v28);
        v145 = 0LL;
        if ( *(_WORD *)(v24 + 10) )
        {
          if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
          {
            v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
            *(_WORD *)(v24 + 24) |= 0x11u;
            KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v29);
          }
          v145 = (FX_POOL *)m_DeviceBase;
          v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 56));
          v31 = *(_WORD *)(v24 + 26);
          v32 = v30;
          LOBYTE(FxDriverGlobals) = v30;
          if ( v31 == 1 )
          {
            if ( *(_QWORD *)(v24 + 64) )
            {
              KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v30);
              v37 = -1071644147;
            }
            else
            {
              v33 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
              m_ObjectState = m_DeviceBase->m_ObjectState;
              v35 = v33;
              v138 = v33;
              if ( m_ObjectState == 1 )
              {
                v36 = m_DeviceBase->m_ChildListHead.Blink;
                v26->Flink = &m_DeviceBase->m_ChildListHead;
                *(_QWORD *)(v24 + 80) = v36;
                if ( v36->Flink != &m_DeviceBase->m_ChildListHead )
                  __fastfail(3u);
                v36->Flink = v26;
                m_DeviceBase->m_ChildListHead.Blink = v26;
                if ( !*(_QWORD *)(v24 + 96) )
                  *(_QWORD *)(v24 + 96) = m_DeviceBase->m_DeviceBase;
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v33);
                v37 = 0;
                *(_QWORD *)(v24 + 64) = m_DeviceBase;
              }
              else
              {
                if ( (m_DeviceBase->m_ObjectFlags & 0x200) != 0 )
                {
                  if ( m_DeviceBase->m_ObjectSize )
                    v80 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v80 = 0LL;
                  WPP_IFR_SF_qqLL(
                    m_DeviceBase->m_Globals,
                    4u,
                    0x14u,
                    0xBu,
                    WPP_FxObject_hpp_Traceguids,
                    m_DeviceBase,
                    v80,
                    m_ObjectState,
                    1u);
                  v35 = v138;
                }
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v35);
                v37 = -1073741738;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), (KIRQL)FxDriverGlobals);
              if ( v37 >= 0 )
              {
                v39 = *(_WORD *)(v24 + 10);
                if ( v39 )
                  v40 = (char *)(v24 + v39);
                else
                  v40 = 0LL;
                if ( attributes.EvtDestroyCallback )
                  *((_QWORD *)v40 + 3) = attributes.EvtDestroyCallback;
                if ( attributes.EvtCleanupCallback )
                {
                  *((_QWORD *)v40 + 2) = attributes.EvtCleanupCallback;
                  *(_WORD *)(v24 + 24) |= 0x400u;
                }
                *(_WORD *)(v24 + 24) |= 8u;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (m_CallbackLockObjectPtr = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Lock(m_CallbackLockObjectPtr, PreviousIrql, v38);
                  v41 = PreviousIrql[0];
                }
                else
                {
                  v41 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
                }
                v42 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
                v43 = (FxDeviceBase_vtbl *)(v24 + 144);
                *(_QWORD *)(v24 + 144) = v42;
                *(_QWORD *)(v24 + 152) = m_DeviceBase + 2;
                if ( (FxDeviceBase *)v42->~FxObject != &m_DeviceBase[2] )
                  __fastfail(3u);
                v42->~FxObject = (void (__fastcall *)(FxObject *))v43;
                m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable = v43;
                if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
                  && (v82 = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
                {
                  FxVerifierLock::Unlock(v82, v41, v41);
                }
                else
                {
                  KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v41);
                }
                if ( v15 == 2 )
                {
                  FileObject->FsContext = (void *)v24;
                }
                else if ( v15 == 3 )
                {
                  FileObject->FsContext2 = (void *)v24;
                }
                if ( *(_WORD *)(v24 + 10) )
                  v141 = (WDFFILEOBJECT__ *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v141 = 0LL;
                p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
                v44 = this->m_FileObjectInfoHeadList.Blink->Blink;
                if ( v44 != &this->m_FileObjectInfoHeadList )
                {
                  do
                  {
                    Blink = v44;
                    attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v44[5].Blink;
                    if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
                    {
                      attributes.ParentObject = 0LL;
                      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                      v37 = FxObjectAllocateContext((FxObject *)v24, &attributes, 1u, 0LL);
                      if ( v37 < 0 )
                      {
                        v83 = v44[9].Blink;
                        if ( v83 )
                          Flink = (unsigned __int64)v83[1].Flink;
                        else
                          Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
                        if ( *(_WORD *)(Flink + 10) )
                          v85 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v85 = 0LL;
                        v86 = this->m_DeviceBase;
                        if ( v86->m_ObjectSize )
                          v87 = (const void *)((unsigned __int64)v86 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v87 = 0LL;
                        WPP_IFR_SF_qqqd(
                          globals,
                          2u,
                          0xDu,
                          0x17u,
                          WPP_FxPkgGeneral_cpp_Traceguids,
                          &v44[5].Blink,
                          v87,
                          v85,
                          v37);
                        v88 = FxIrp;
                        goto LABEL_307;
                      }
                      p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
                    }
                    v44 = v44->Blink;
                  }
                  while ( v44 != p_m_FileObjectInfoHeadList );
                }
                v6 = FxIrp;
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
                    v37 = 0;
                    v6->m_Irp->IoStatus.Status = 0;
                    v6->m_Irp->IoStatus.Information = 0LL;
                    IofCompleteRequest(v6->m_Irp, 0);
                    FxIrp->m_Irp = 0LL;
                  }
                  return (unsigned int)v37;
                }
                if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
                  && (Blink = this->m_FileObjectInfoHeadList.Blink, BYTE4(Blink[9].Flink)) )
                {
                  v89 = Blink[9].Blink;
                  *(_LIST_ENTRY *)&attributes.Size = v89[2];
                  *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v89[3];
                  *(_LIST_ENTRY *)&attributes.ParentObject = v89[4];
                  v46 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v89[5].Flink;
                }
                else
                {
                  v45 = this->m_DeviceBase;
                  *(_OWORD *)&attributes.Size = *(_OWORD *)&v45[2].m_ExecutionLevel;
                  *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v45[3].FxNonPagedObject::FxObject::__vftable;
                  *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v45[3].m_Globals;
                  v46 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v45[3].m_ChildListHead.Flink;
                }
                v47 = this->m_DeviceBase;
                attributes.ContextTypeInfo = v46;
                v148 = v47;
                if ( *(FxDeviceBase **)&v47[1].m_ExecutionLevel != (FxDeviceBase *)&v47[1].m_ExecutionLevel )
                {
                  attributes.ExecutionLevel = WdfExecutionLevelDispatch;
                  attributes.SynchronizationScope = WdfSynchronizationScopeNone;
                  attributes.ParentObject = 0LL;
                }
                v48 = 0LL;
                v147.m_Irp = v6->m_Irp;
                FxDriverGlobals = v47->m_Globals;
                v49 = *(_QWORD *)&v47[3].m_SpinLock.m_DbgFlagIsInitialized;
                if ( v49 && *(_WORD *)(v49 + 8) == 4354 && *(_BYTE *)(v49 + 1451) )
                {
                  v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v47[2].m_SpinLock);
                  if ( v50 )
                    goto LABEL_62;
                }
                else
                {
                  ++HIDWORD(v47[2].m_ParentObject);
                  v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v47[2].m_SpinLock);
                  if ( v50 )
                  {
LABEL_62:
                    if ( !v50 )
                      goto LABEL_299;
                    v51 = FxDriverGlobals;
                    if ( FxDriverGlobals->FxPoolTrackingOn )
                    {
                      p_FxPoolFrameworks = &FxDriverGlobals->FxPoolFrameworks;
                      v91 = (_SLIST_ENTRY *)v47[2].m_CallbackLockObjectPtr;
                      *((_DWORD *)&v50[1].Next + 2) = FxDriverGlobals->Tag;
                      *((_DWORD *)&v50[2].Next + 2) = ExDefaultNonPagedPoolType;
                      v50[3].Next = (_SLIST_ENTRY *)retaddr;
                      PPObject = v91;
                      v145 = p_FxPoolFrameworks;
                      v50[1].Next = (_SLIST_ENTRY *)p_FxPoolFrameworks;
                      v50[2].Next = v91;
                      SpinLock = &v51->FxPoolFrameworks.NonPagedLock.m_Lock;
                      v92 = KeAcquireSpinLockRaiseToDpc(&v51->FxPoolFrameworks.NonPagedLock.m_Lock);
                      v93 = v145;
                      v94 = v92;
                      v95 = (PSLIST_ENTRY *)v145->NonPagedHead.Blink;
                      p_NonPagedHead = &v145->NonPagedHead;
                      v50->Next = (_SLIST_ENTRY *)&v145->NonPagedHead;
                      *((_QWORD *)&v50->Next + 1) = v95;
                      if ( *v95 != (PSLIST_ENTRY)p_NonPagedHead )
                        __fastfail(3u);
                      *v95 = v50;
                      p_NonPagedHead->Blink = (_LIST_ENTRY *)v50;
                      ++v93->NonPagedAllocations;
                      v97 = (char *)PPObject + v93->NonPagedBytes;
                      NonPagedAllocations = v93->NonPagedAllocations;
                      v93->NonPagedBytes = (unsigned __int64)v97;
                      if ( (unsigned __int64)v97 > v93->PeakNonPagedBytes )
                        v93->PeakNonPagedBytes = (unsigned __int64)v97;
                      if ( NonPagedAllocations > v93->PeakNonPagedAllocations )
                        v93->PeakNonPagedAllocations = NonPagedAllocations;
                      KeReleaseSpinLock(SpinLock, v94);
                      v51 = FxDriverGlobals;
                      v52 = v50 + 4;
                    }
                    else
                    {
                      v52 = v50;
                    }
                    v52->Next = v50;
                    v53 = (FxRequest *)&v52[1];
                    *((_QWORD *)&v52->Next + 1) = v51;
                    if ( v51->FxVerifierHandle )
                    {
                      memset(&v52[1], 0, 0x20uLL);
                      *(_DWORD *)(&v53->m_ObjectState + 1) = 1146058822;
                      v53 = (FxRequest *)((char *)v53 + 32);
                    }
                    memset(&v53[1].m_Type, 0, 0x30uLL);
                    *(_QWORD *)&v53[1].m_Type = v53;
                    v54 = attributes.ContextTypeInfo;
                    if ( attributes.ContextTypeInfo )
                    {
                      v99 = attributes.ContextSizeOverride;
                      if ( !attributes.ContextSizeOverride )
                        v99 = attributes.ContextTypeInfo->ContextSize;
                      memset(&v53[1].m_SpinLock.m_Lock, 0, (v99 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                      v54 = attributes.ContextTypeInfo;
                    }
                    v53[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v54;
                    if ( !v53 )
                    {
LABEL_299:
                      WPP_IFR_SF_d(v47->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
                      v37 = -1073741670;
                      goto LABEL_300;
                    }
                    v53->m_Globals = v47->m_Globals;
                    v53->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
                    *(_DWORD *)&v53->m_Type = 24121352;
                    v53->m_SpinLock.m_Lock = 0LL;
                    v53->m_SpinLock.m_DbgFlagIsInitialized = 1;
                    v53->m_Refcnt = 1;
                    *(_DWORD *)&v53->m_ObjectFlags = 0x10000;
                    v53->m_ParentObject = 0LL;
                    v53->m_ChildListHead.Blink = &v53->m_ChildListHead;
                    v53->m_ChildListHead.Flink = &v53->m_ChildListHead;
                    v53->m_ChildEntry.Blink = &v53->m_ChildEntry;
                    v53->m_ChildEntry.Flink = &v53->m_ChildEntry;
                    v55 = v53->m_Globals;
                    v53->m_DisposeSingleEntry.Next = 0LL;
                    v53->m_DeviceBase = 0LL;
                    if ( v55->FxVerifierOn )
                      FxObject::Vf_VerifyConstruct(v53, (_FX_DRIVER_GLOBALS *)1, 0);
                    v53->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
                    v53->m_NPLock.m_Lock = 0LL;
                    v53->m_NPLock.m_DbgFlagIsInitialized = 1;
                    if ( SLOBYTE(v53->m_ObjectFlags) < 0 )
                    {
                      v100 = v53->m_Globals;
                      FxDriverGlobals = v100;
                      if ( v100->FxVerifierLock )
                      {
                        v101 = (FxVerifierLock *)FxPoolAllocator(
                                                   v100,
                                                   (_LIST_ENTRY *)&v100->FxPoolFrameworks,
                                                   ExDefaultNonPagedPoolType,
                                                   0xB0uLL,
                                                   v100->Tag,
                                                   retaddr);
                        if ( v101 && (FxVerifierLock::FxVerifierLock(v101, FxDriverGlobals, v53), (v145 = v102) != 0LL) )
                        {
                          if ( BYTE2(v102->PagedBytes) )
                          {
                            *(_QWORD *)&v102->PagedLock.m_Lock.Contention = 0LL;
                            LODWORD(v102->PagedLock.m_Lock.Owner) = 1;
                            v102->PagedLock.m_Lock.Event.Header.LockNV = 0;
                            KeInitializeEvent(
                              (PRKEVENT)&v102->PagedLock.m_Lock.Event.Header.WaitListHead,
                              SynchronizationEvent,
                              0);
                            v102 = v145;
                            LOBYTE(v145->PagedLock.m_Lock.Count) = 1;
                          }
                        }
                        else
                        {
                          WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
                          v102 = 0LL;
                        }
                        v53[-1].m_ForwardProgressQueue = (FxIoQueue *)v102;
                      }
                    }
                    v56 = v147.m_Irp;
                    v53->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
                    v53->m_Irp.m_Irp = v56;
                    v53->m_CancelRoutine.m_Cancel = 0LL;
                    v53->m_CompletionRoutine.m_Completion = 0LL;
                    *(_WORD *)&v53->m_TargetFlags = 0;
                    v53->m_CanComplete = 1;
                    v53->m_Target = 0LL;
                    v53->m_TargetCompletionContext = 0LL;
                    v53->m_Completed = v53->m_Irp.m_Irp == 0LL;
                    v53->m_Canceled = 0;
                    v53->m_PriorityBoost = 0;
                    v53->m_RequestContext = 0LL;
                    v53->m_Timer = 0LL;
                    v53->m_CsqContext.Irp = (_IRP *)&v53->120;
                    v53->m_ListEntry.Flink = (_LIST_ENTRY *)&v53->120;
                    v53->m_DrainSingleEntry.Next = 0LL;
                    *(_QWORD *)&v53->m_SystemBufferOffset = 216LL;
                    v53->m_IrpQueue = 0LL;
                    v53->m_IrpCompletionReferenceCount = 0;
                    v53->m_AllocatedMdl = 0LL;
                    *(_DWORD *)&v53->m_OutputBufferOffset = 232;
                    v53->m_CompletionState = 0;
                    v53->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
                    v53->m_SystemBuffer.m_Buffer = 0LL;
                    v53->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
                    v53->m_OutputBuffer.m_Buffer = 0LL;
                    v53->m_IoQueue = 0LL;
                    v53->m_PowerStopState = 0;
                    v53->m_OwnerListEntry.Blink = &v53->m_OwnerListEntry;
                    v53->m_OwnerListEntry.Flink = &v53->m_OwnerListEntry;
                    v53->m_OwnerListEntry2.Blink = &v53->m_OwnerListEntry2;
                    v53->m_OwnerListEntry2.Flink = &v53->m_OwnerListEntry2;
                    v53->m_ForwardProgressList.Blink = &v53->m_ForwardProgressList;
                    v53->m_ForwardProgressList.Flink = &v53->m_ForwardProgressList;
                    v53->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
                    v53->m_Presented = 0;
                    *(_WORD *)&v53->m_Reserved = 0;
                    v53->m_ForwardProgressQueue = 0LL;
                    v53->m_InternalContext = 0LL;
                    v53->m_DeviceBase = v47->m_DeviceBase;
                    if ( v56 )
                      FxRequest::AssignMemoryBuffers(v53, (_WDF_DEVICE_IO_TYPE)v47[1].m_Refcnt);
                    if ( v47->m_Globals->FxRequestParentOptimizationOn )
                    {
                      v57 = 0LL;
                      PPObject = 0LL;
                      if ( !v53->m_ObjectSize )
                      {
                        v37 = -1073741816;
                        goto LABEL_216;
                      }
                      if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
                      {
                        FxObject::MarkPassiveCallbacks(v53, ObjectLock);
                        v57 = (FxObject *)PPObject;
                      }
                      if ( attributes.ParentObject )
                      {
                        v57 = (FxObject *)(~(__int64)attributes.ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
                        LOWORD(v103) = 0;
                        if ( ((__int64)attributes.ParentObject & 1) != 0 )
                        {
                          v103 = LOWORD(v57->__vftable);
                          v57 = (FxObject *)((char *)v57 - v103);
                        }
                        if ( v57->m_Type == 4096 )
                        {
                          PPObject = v57;
                        }
                        else
                        {
                          FxObjectHandleGetPtrQI(v57, &PPObject, attributes.ParentObject, 0x1000u, v103);
                          v57 = (FxObject *)PPObject;
                        }
                      }
                      if ( !v57 || (v37 = FxObject::AssignParentObject(v53, v57), v37 >= 0) )
                      {
                        m_ObjectSize = v53->m_ObjectSize;
                        if ( m_ObjectSize )
                          v59 = (char *)v53 + m_ObjectSize;
                        else
                          v59 = 0LL;
                        if ( attributes.EvtDestroyCallback )
                          *((_QWORD *)v59 + 3) = attributes.EvtDestroyCallback;
                        if ( attributes.EvtCleanupCallback )
                        {
                          *((_QWORD *)v59 + 2) = attributes.EvtCleanupCallback;
                          v53->m_ObjectFlags |= 0x400u;
                        }
                        v53->m_ObjectFlags |= 8u;
                        v37 = 0;
                        goto LABEL_87;
                      }
                    }
                    else
                    {
                      v37 = FxObject::Commit(v53, &attributes, 0LL, v47, 0);
                    }
                    if ( v37 >= 0 )
                    {
LABEL_87:
                      v48 = v53;
                      goto LABEL_88;
                    }
LABEL_216:
                    WPP_IFR_SF_d(v148->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v37);
                    FxObject::DeleteFromFailedCreate(v53);
LABEL_88:
                    if ( v37 >= 0 )
                    {
                      v60 = &this->m_FileObjectInfoHeadList;
                      v61 = this->m_FileObjectInfoHeadList.Blink->Blink;
                      FxDriverGlobals = (_FX_DRIVER_GLOBALS *)v61;
                      if ( v61 == &this->m_FileObjectInfoHeadList )
                      {
LABEL_90:
                        if ( KeGetCurrentIrql() <= 1u )
                        {
                          KeEnterCriticalRegion();
                          v154 = 1;
                        }
                        if ( (this->m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
                        {
                          v62 = 0;
                          goto LABEL_99;
                        }
                        if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
                        {
                          v37 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, v48);
                          if ( v37 < 0 )
                          {
                            m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
                            if ( m_DefaultQueueForCreates->m_ObjectSize )
                              v115 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
                            else
                              v115 = 0LL;
                            v116 = 27;
                            goto LABEL_255;
                          }
                          if ( FxIoQueue::GetRequest(this->m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
                            goto LABEL_110;
                          v62 = 1;
                          v151 = 1;
LABEL_99:
                          v63 = v141;
                          if ( (this->m_Flags & 4) != 0 )
                          {
                            v117 = (_FX_DRIVER_GLOBALS *)this->m_FileObjectInfoHeadList.Blink;
                            FxDriverGlobals = v117;
                            if ( v117 != (_FX_DRIVER_GLOBALS *)v60 )
                            {
                              do
                              {
                                Blink = &v117->Linkage;
                                if ( !*((_BYTE *)&v117->FxPoolFrameworks.PagedLock.m_Lock.Count + 4) )
                                  break;
                                if ( v24 )
                                {
                                  *(_QWORD *)(v24 + 136) = v117->Linkage.Blink;
                                  v117 = FxDriverGlobals;
                                }
                                if ( v48->m_ObjectSize )
                                  v118 = (WDFREQUEST__ *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                else
                                  v118 = 0LL;
                                v119 = this->m_DeviceBase;
                                if ( v119->m_ObjectSize )
                                  v120 = (WDFDEVICE__ *)((unsigned __int64)v119 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                else
                                  v120 = 0LL;
                                if ( FxCxFileObjectFileCreate::Invoke(
                                       (FxCxFileObjectFileCreate *)&v117->DestroyEvent.m_Event.Header.WaitListHead,
                                       v120,
                                       v118,
                                       v63) )
                                {
                                  goto LABEL_110;
                                }
                                v117 = (_FX_DRIVER_GLOBALS *)FxDriverGlobals->Linkage.Blink;
                                FxDriverGlobals = v117;
                              }
                              while ( v117 != (_FX_DRIVER_GLOBALS *)v60 );
                              v62 = v151;
                            }
                          }
                          m_DriverCreatedQueue = this->m_DriverCreatedQueue;
                          if ( !m_DriverCreatedQueue )
                          {
                            if ( (this->m_Flags & 8) != 0 )
                            {
                              if ( v48->m_ObjectSize )
                                v65 = (unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL;
                              else
                                v65 = 0LL;
                              v66 = this->m_DeviceBase;
                              if ( v66->m_ObjectSize )
                                v67 = (unsigned __int64)v66 ^ 0xFFFFFFFFFFFFFFF8uLL;
                              else
                                v67 = 0LL;
                              if ( Blink[1].Blink )
                              {
                                v68 = Blink[1].Flink;
                                LOBYTE(FxDriverGlobals) = 0;
                                if ( v68 )
                                  ((void (__fastcall *)(_LIST_ENTRY *, _FX_DRIVER_GLOBALS **))v68->Flink[1].Flink)(
                                    v68,
                                    &FxDriverGlobals);
                                ((void (__fastcall *)(unsigned __int64, unsigned __int64, WDFFILEOBJECT__ *))Blink[1].Blink)(
                                  v67,
                                  v65,
                                  v63);
                                v69 = Blink[1].Flink;
                                if ( v69 )
                                {
                                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v69->Flink[1].Blink)(
                                    v69,
                                    (unsigned __int8)FxDriverGlobals);
                                  v37 = 259;
                                  goto $RequestIsGone;
                                }
                              }
                            }
                            else
                            {
                              if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
                              {
                                v129 = v48->m_DeviceBase;
                                v130 = v48->m_Globals;
                                if ( v130->FxVerboseOn )
                                {
                                  if ( v48->m_ObjectSize )
                                    v131 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                  else
                                    v131 = 0LL;
                                  WPP_IFR_SF_qqxd(
                                    v130,
                                    (unsigned __int8)v48->m_Irp.m_Irp,
                                    v48->m_Irp.m_Irp->IoStatus.Information,
                                    0xBu,
                                    Tag,
                                    v131,
                                    v48->m_Irp.m_Irp,
                                    v48->m_Irp.m_Irp->IoStatus.Information,
                                    0);
                                }
                                if ( v129 )
                                  v48->m_PriorityBoost = HIBYTE(v129[1].m_Globals);
                                else
                                  v48->m_PriorityBoost = 0;
                                FxRequest::CompleteInternal(v48, 0);
                                v37 = 259;
                                goto $RequestIsGone;
                              }
                              FxPkgGeneral::ForwardCreateRequest(
                                this,
                                FxIrp,
                                FxPkgGeneral::_CreateCompletionRoutine2,
                                v48);
                            }
LABEL_110:
                            v37 = 259;
                            goto $RequestIsGone;
                          }
                          if ( v62 )
                          {
                            v121 = FxIoQueue::ForwardRequest(
                                     this->m_DefaultQueueForCreates,
                                     this->m_DriverCreatedQueue,
                                     v48);
                            v122 = v121;
                            if ( v121 < 0 )
                            {
                              v123 = this->m_DriverCreatedQueue;
                              if ( v123->m_ObjectSize )
                                v124 = (const void *)((unsigned __int64)v123 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              else
                                v124 = 0LL;
                              WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v124, v121);
                              v126 = v48->m_DeviceBase;
                              v127 = v48->m_Globals;
                              if ( v127->FxVerboseOn )
                              {
                                if ( v48->m_ObjectSize )
                                  v3 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                WPP_IFR_SF_qqxd(
                                  v127,
                                  v48->m_Irp.m_Irp->IoStatus.Information,
                                  v125,
                                  0xBu,
                                  Taga,
                                  v3,
                                  v48->m_Irp.m_Irp,
                                  v48->m_Irp.m_Irp->IoStatus.Information,
                                  v122);
                              }
                              if ( v126 )
                                v48->m_PriorityBoost = HIBYTE(v126[1].m_Globals);
                              else
                                v48->m_PriorityBoost = 0;
                              FxRequest::CompleteInternal(v48, v122);
                              v37 = 259;
                              goto $RequestIsGone;
                            }
                            goto LABEL_110;
                          }
                          v37 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v48);
                          if ( v37 >= 0 )
                            goto $RequestIsGone;
                          v128 = this->m_DriverCreatedQueue;
                          if ( v128->m_ObjectSize )
                            v115 = (const void *)((unsigned __int64)v128 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v115 = 0LL;
                          v116 = 29;
LABEL_255:
                          WPP_IFR_SF_qd(globals, 2u, 0xDu, v116, WPP_FxPkgGeneral_cpp_Traceguids, v115, v37);
                          goto $RequestIsGone;
                        }
                        v37 = -1073741808;
                        v112 = this->m_DeviceBase;
                        v88 = FxIrp;
                        if ( v112->m_ObjectSize )
                          v113 = (const void *)((unsigned __int64)v112 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          v113 = 0LL;
                        WPP_IFR_SF_qid(
                          globals,
                          2u,
                          0xDu,
                          0x1Au,
                          WPP_FxPkgGeneral_cpp_Traceguids,
                          v113,
                          (__int64)FxIrp->m_Irp,
                          -1073741808);
$Error:
                        if ( v48 )
                          FxObject::DeleteFromFailedCreate(v48);
LABEL_307:
                        if ( v24 )
                          FxFileObject::DeleteFileObjectFromFailedCreate((FxFileObject *)v24);
                        goto LABEL_316;
                      }
                      while ( 1 )
                      {
                        Blink = v61;
                        if ( BYTE4(v61[9].Flink) )
                        {
                          v104 = v61[9].Blink;
                          *(_LIST_ENTRY *)&attributes.Size = v104[2];
                          *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v104[3];
                          *(_LIST_ENTRY *)&attributes.ParentObject = v104[4];
                          v105 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v104[5].Flink;
                        }
                        else
                        {
                          v106 = this->m_DeviceBase;
                          *(_OWORD *)&attributes.Size = *(_OWORD *)&v106[2].m_ExecutionLevel;
                          *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v106[3].FxNonPagedObject::FxObject::__vftable;
                          *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v106[3].m_Globals;
                          v105 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v106[3].m_ChildListHead.Flink;
                        }
                        attributes.ContextTypeInfo = v105;
                        if ( attributes.Size )
                        {
                          attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
                          attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
                          attributes.ParentObject = 0LL;
                          v37 = FxObjectAllocateContext(v48, &attributes, 1u, 0LL);
                          if ( v37 < 0 )
                            break;
                        }
                        v61 = FxDriverGlobals->Linkage.Blink;
                        FxDriverGlobals = (_FX_DRIVER_GLOBALS *)v61;
                        if ( v61 == v60 )
                          goto LABEL_90;
                      }
                      Owner = FxDriverGlobals->FxPoolFrameworks.PagedLock.m_Lock.Owner;
                      if ( Owner )
                        m_Driver = (FxDriver *)Owner[2];
                      else
                        m_Driver = this->m_DeviceBase->m_Driver;
                      if ( m_Driver->m_ObjectSize )
                        v109 = (unsigned __int64)m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                      else
                        v109 = 0LL;
                      v110 = this->m_DeviceBase;
                      if ( v110->m_ObjectSize )
                        v111 = (const void *)((unsigned __int64)v110 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v111 = 0LL;
                      WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v111, v109, v37);
LABEL_304:
                      v88 = FxIrp;
                      goto $Error;
                    }
LABEL_300:
                    v132 = this->m_DeviceBase;
                    if ( v132->m_ObjectSize )
                      v133 = (const void *)((unsigned __int64)v132 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v133 = 0LL;
                    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v133, v37);
                    goto LABEL_304;
                  }
                  ++LODWORD(v47[2].m_ChildEntry.Flink);
                }
                v50 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v47[2].m_DeviceBase)(
                                      HIDWORD(v47[2].m_ChildEntry.Blink),
                                      HIDWORD(v47[2].m_DisposeSingleEntry.Next),
                                      LODWORD(v47[2].m_DisposeSingleEntry.Next));
                goto LABEL_62;
              }
            }
          }
          else
          {
            if ( (*(_WORD *)(v24 + 24) & 0x200) != 0 )
            {
              if ( *(_WORD *)(v24 + 10) )
                v79 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v79 = 0LL;
              WPP_IFR_SF_qqLL(
                *(_FX_DRIVER_GLOBALS **)(v24 + 16),
                4u,
                0x14u,
                0xBu,
                WPP_FxObject_hpp_Traceguids,
                (const void *)v24,
                v79,
                v31,
                0);
              v32 = (unsigned __int8)FxDriverGlobals;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 56), v32);
            v37 = -1073741738;
          }
        }
        else
        {
          v37 = -1073741816;
        }
        FxObject::DeleteFromFailedCreate((FxObject *)v24);
        m_Globals = globals;
LABEL_311:
        v134 = this->m_DeviceBase;
        if ( v134->m_ObjectSize )
          v135 = (const void *)((unsigned __int64)v134 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v135 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v135, v37);
        goto LABEL_315;
      }
      goto LABEL_309;
    }
LABEL_141:
    WPP_IFR_SF_DDxd(v16, (unsigned __int8)ContextTypeInfo, ExDefaultNonPagedPoolType, v18, Tag, 0xA0u, 0, flags, id);
LABEL_309:
    m_Globals = globals;
    goto LABEL_310;
  }
  if ( m_DeviceBase->m_ObjectSize )
    v71 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v71 = 0LL;
  WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v71);
  v37 = -1073741790;
LABEL_315:
  v88 = FxIrp;
LABEL_316:
  FxPkgGeneral::DecrementOpenHandleCount(this);
  v88->m_Irp->IoStatus.Status = v37;
  v88->m_Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(v88->m_Irp, 0);
  v88->m_Irp = 0LL;
$RequestIsGone:
  if ( v154 )
    KeLeaveCriticalRegion();
  return (unsigned int)v37;
}
