/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0006760 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008030 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0014E48 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0014E6C (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0016C94 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D8A0 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C00381F0 (WPP_IFR_SF_qqcq.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003E22C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C003FF20 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *v5; // rcx
  unsigned __int8 v6; // al
  _FILE_OBJECT *v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // r8
  int FileObjectFromWdm; // r15d
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v13; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *Flink; // rbx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  _LIST_ENTRY *v18; // r12
  _LIST_ENTRY *v19; // rcx
  FxIoQueue *p_Blink; // rdi
  _LIST_ENTRY *v21; // rbx
  _LIST_ENTRY *v22; // rax
  unsigned int v23; // edx
  _LIST_ENTRY *v24; // rax
  unsigned __int8 v25; // r8
  FxIrpQueue *p_m_Queue; // r12
  FxIrpQueue *v27; // rdx
  _IRP *j; // rax
  void (__fastcall *FxVerifyLeakDetection)(FxObject *); // rdx
  unsigned __int8 v30; // r8
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // r8
  _LIST_ENTRY *v34; // rbx
  _LIST_ENTRY *v35; // rcx
  unsigned int v38; // edx
  _LIST_ENTRY *v39; // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v41; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v43; // rbx
  void (__fastcall *v44)(unsigned __int64); // rax
  void (__fastcall *v45)(unsigned __int64); // rax
  unsigned __int16 v46; // ax
  _QWORD *v47; // rcx
  _QWORD *v48; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void *(__fastcall *v50)(FxRegKey *, unsigned int); // rax
  void (__fastcall **m_Lock)(FxObject *); // rcx
  void (__fastcall **v52)(FxObject *); // rcx
  FX_POOL_TRACKER *v53; // rbx
  _MDL *v54; // rcx
  void (__fastcall **v55)(FxObject *); // rcx
  void (__fastcall **v56)(FxObject *); // rbx
  FxRequestTimer *v57; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxDeviceBase *m_DeviceBase; // r10
  char MajorFunction; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *_a1; // r10
  FxVerifierLock *v63; // rcx
  FxTagTracker *v64; // rcx
  FxVerifierLock *v65; // rcx
  FxVerifierLock *v66; // rcx
  FxIrpQueue *v67; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v69; // rbx
  FxRequest *v70; // rbx
  FxRequest_vtbl *v71; // rax
  FxTagTracker *v72; // rcx
  void (__fastcall **v73)(FxObject *); // rcx
  FxVerifierLock *v74; // rcx
  FxVerifierLock *v75; // rcx
  FxTagTracker *v76; // rcx
  FxVerifierLock *v77; // rcx
  void *_a2; // [rsp+30h] [rbp-49h]
  char _a3; // [rsp+38h] [rbp-41h]
  void *_a4; // [rsp+40h] [rbp-39h]
  FxIrp v81; // [rsp+50h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+58h] [rbp-21h]
  FxIrp fxIrp; // [rsp+60h] [rbp-19h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+68h] [rbp-11h] BYREF
  _LIST_ENTRY *v85; // [rsp+70h] [rbp-9h] BYREF
  _LIST_ENTRY *v86; // [rsp+78h] [rbp-1h]
  int v87; // [rsp+80h] [rbp+7h]
  ULONG_PTR retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int8 v89; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v90; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+77h] BYREF
  FxTagTracker *v92; // [rsp+F8h] [rbp+7Fh]

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    m_DeviceBase = this->m_DeviceBase;
    _a4 = Irp;
    MajorFunction = CurrentStackLocation->MajorFunction;
    LOWORD(CurrentStackLocation) = m_DeviceBase->m_ObjectSize;
    m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a3 = MajorFunction;
    _a2 = m_DeviceObject;
    if ( !(_WORD)CurrentStackLocation )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(m_Globals, 5u, 0xDu, 0x14u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2, _a3, _a4);
  }
  v5 = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v5->MajorFunction;
  if ( !v5->MajorFunction )
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  if ( v6 != 18 )
  {
    if ( v6 == 2 )
    {
      return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
    }
    else
    {
      if ( v6 != 16 )
      {
        FileObjectFromWdm = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        IofCompleteRequest(Irp, 0);
        return (unsigned int)FileObjectFromWdm;
      }
      return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
    }
  }
  v7 = v5->FileObject;
  v8 = 0LL;
  ppFxFileObject = 0LL;
  if ( v7 && (v7->Flags & 0x100) != 0 )
  {
    FileObjectFromWdm = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          v7,
                          &ppFxFileObject);
    if ( ppFxFileObject )
    {
      if ( FileObjectFromWdm >= 0 && ppFxFileObject->m_ObjectSize )
        v8 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_14;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_14:
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      if ( i[3].Blink )
      {
        PreviousIrql = 0;
        FxLockedCallback::CallbackStart((FxLockedCallback *)&i[3], &PreviousIrql);
        ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v8);
        FxLockedCallback::CallbackEnd((FxLockedCallback *)&i[3], PreviousIrql);
      }
    }
    FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( FileObject )
    {
      v13 = this->m_DeviceBase;
      v87 = 2;
      Blink = v13[3].m_ChildListHead.Blink;
      v86 = (_LIST_ENTRY *)&v85;
      v85 = (_LIST_ENTRY *)&v85;
      Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
        FxVerifierDbgBreakPoint(Flink);
      }
      else
      {
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v63 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v63, &v89, v9);
          v16 = v89;
        }
        else
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
          v89 = v16;
        }
        v18 = Blink + 8;
        v19 = Blink[8].Flink;
        if ( v19->Blink != &Blink[8] )
          __fastfail(3u);
        v85 = Blink[8].Flink;
        v86 = Blink + 8;
        p_Blink = 0LL;
        v19->Blink = (_LIST_ENTRY *)&v85;
        v21 = v85;
        v18->Flink = (_LIST_ENTRY *)&v85;
        v22 = v86;
        if ( (_LIST_ENTRY **)v21->Blink != &v85 || (_LIST_ENTRY **)v86->Flink != &v85 )
          __fastfail(3u);
        v86->Flink = v21;
        v21->Blink = v22;
        v86 = (_LIST_ENTRY *)&v85;
        v85 = (_LIST_ENTRY *)&v85;
        if ( v21 != v18 )
        {
          while ( LODWORD(v21[1].Flink) != 1 )
          {
            v21 = v21->Flink;
            if ( v21 == v18 )
              goto LABEL_30;
          }
          p_Blink = (FxIoQueue *)&v21[-57].Blink;
          v23 = _InterlockedIncrement((volatile signed __int32 *)&v21[-56].Flink + 1);
          if ( SLOBYTE(v21[-55].Flink) < 0 )
          {
            v64 = (FxTagTracker *)v21[-60].Blink;
            if ( v64 )
              FxTagTracker::UpdateTagHistory(
                v64,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v23);
          }
          v24 = v21->Flink;
          if ( v21->Flink->Blink != v21 )
            __fastfail(3u);
          v16 = v89;
          v85 = v21->Flink;
          v86 = v21;
          v24->Blink = (_LIST_ENTRY *)&v85;
          v21->Flink = (_LIST_ENTRY *)&v85;
        }
LABEL_30:
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v65 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
          FxVerifierLock::Unlock(v65, v16, v17);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v16);
        while ( p_Blink )
        {
          if ( p_Blink->m_SupportForwardProgress )
            FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
            && (v66 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v66, &v90, v25);
          }
          else
          {
            v90 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
          }
          p_m_Queue = &p_Blink->m_Queue;
          while ( 1 )
          {
            v27 = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
            for ( j = 0LL; v27 != p_m_Queue; j = 0LL )
            {
              j = (_IRP *)&v27[-5].m_RequestCount;
              if ( !FileObject )
                break;
              if ( j->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                break;
              v27 = (FxIrpQueue *)v27->m_Queue.Flink;
            }
            v81.m_Irp = j;
            if ( !j )
              break;
            while ( 1 )
            {
              v67 = &p_Blink->m_Queue;
              if ( _InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
                break;
              j = FxIrpQueue::PeekNextIrpFromQueue(v67, v81.m_Irp, FileObject);
              v81.m_Irp = j;
              if ( !j )
                goto LABEL_40;
            }
            FxIrpQueue::RemoveIrpFromListEntry(v67, &v81);
            m_Irp = v81.m_Irp;
            v69 = v81.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v69 == 1 )
              v69[1] = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v70 = (FxRequest *)(v69 - 15);
            v71 = v70->__vftable;
            v70->m_IrpQueue = 0LL;
            v71->Release(v70, (void *)1969583441, 2102, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            FxObject::AddRef(
              v70,
              (void *)0x75657551,
              4331,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(p_Blink, v70, v90);
            FxNonPagedObject::Lock(p_Blink, &v90);
          }
LABEL_40:
          FxIoQueue::DispatchEvents(p_Blink, v90, 0LL);
          Release = p_Blink->Release;
          if ( Release == FxObject::Release )
          {
            if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
            {
              v72 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
              if ( v72 )
                FxTagTracker::UpdateTagHistory(
                  v72,
                  (void *)0x73756C66,
                  1441,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagRelease,
                  p_Blink->m_Refcnt - 1);
            }
            if ( _InterlockedDecrement(&p_Blink->m_Refcnt) )
              goto LABEL_43;
            m_ObjectFlags = p_Blink->m_ObjectFlags;
            if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
            {
              FxObject::SetObjectStateLocked(p_Blink, FxObjectStateDeferedDestroy);
              FxDisposeList::Add(p_Blink->m_Globals->Driver->m_DisposeList, p_Blink);
            }
            else
            {
              if ( (m_ObjectFlags & 0x80u) != 0 )
              {
                v41 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
                v92 = v41;
                if ( v41 )
                {
                  FxTagTracker::CheckForAbandondedTags(v41);
                  v41 = v92;
                }
              }
              else
              {
                v41 = 0LL;
                v92 = 0LL;
              }
              m_ObjectSize = p_Blink->m_ObjectSize;
              if ( m_ObjectSize && (p_Blink->m_ObjectFlags & 8) != 0 )
              {
                v43 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + m_ObjectSize);
                if ( v43 )
                {
                  do
                  {
                    v44 = (void (__fastcall *)(unsigned __int64))v43[2];
                    if ( v44 )
                    {
                      v44((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v43[2] = 0LL;
                    }
                    v45 = (void (__fastcall *)(unsigned __int64))v43[3];
                    if ( v45 )
                    {
                      v45((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v43[3] = 0LL;
                    }
                    v43 = (_QWORD *)v43[1];
                  }
                  while ( v43 );
                  v41 = v92;
                }
                v46 = p_Blink->m_ObjectSize;
                LOBYTE(FxVerifyLeakDetection) = 1;
                if ( v46 )
                {
                  v47 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v46);
                  if ( v47 )
                  {
                    do
                    {
                      v48 = (_QWORD *)v47[1];
                      if ( !(_BYTE)FxVerifyLeakDetection )
                        FxPoolFree(v47);
                      LOBYTE(FxVerifyLeakDetection) = 0;
                      v47 = v48;
                    }
                    while ( v48 );
                    v41 = v92;
                  }
                }
              }
              if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
              {
                if ( BYTE4(p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) )
                {
                  _InterlockedDecrement(&p_Blink->m_Globals->FxVerifyLeakDetection->ObjectCnt);
                  if ( p_Blink->FxNonPagedObject::FxObject::m_Type == 4098
                    && _InterlockedExchangeAdd(&p_Blink->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
                  {
                    FxVerifyLeakDetection = (void (__fastcall *)(FxObject *))p_Blink->m_Globals->FxVerifyLeakDetection;
                    _InterlockedExchangeAdd(
                      (volatile signed __int32 *)FxVerifyLeakDetection + 2,
                      -*((_DWORD *)FxVerifyLeakDetection + 1));
                  }
                }
              }
              if ( v41 )
              {
                p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink = 0LL;
                FxTagTracker::`scalar deleting destructor'(v41, (unsigned int)FxVerifyLeakDetection);
              }
              SelfDestruct = p_Blink->SelfDestruct;
              if ( SelfDestruct == FxObject::SelfDestruct )
              {
                v50 = (void *(__fastcall *)(FxRegKey *, unsigned int))p_Blink->~FxObject;
                if ( v50 == FxRegKey::`scalar deleting destructor' )
                {
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRegKey::`vftable';
                  m_Lock = (void (__fastcall **)(FxObject *))p_Blink->m_NPLock.m_Lock;
                  if ( m_Lock )
                  {
                    ZwClose(m_Lock);
                    p_Blink->m_NPLock.m_Lock = 0LL;
                  }
                  v52 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_NPLock.m_DbgFlagIsInitialized;
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxPagedObject::`vftable';
                  if ( v52 )
                  {
                    FxPoolFree(v52);
                    *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                  }
                  FxObject::~FxObject(p_Blink);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_94:
                  if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
                  {
                    v53 = *(FX_POOL_TRACKER **)&p_Blink[-1].m_IoPkgListNode.m_Type;
                    if ( LOBYTE(p_Blink[-1].m_PowerSListEntry.Next[33].Next) )
                    {
                      if ( FxIsPagedPoolType(v53->PoolType) )
                        FxPoolRemovePagedAllocateTracker(v53);
                      else
                        FxPoolRemoveNonPagedAllocateTracker(v53);
                      memset(v53, 0, v53->Size + 64);
                    }
                    ExFreePoolWithTag(v53, 0);
                  }
                  else
                  {
                    ExFreePoolWithTag(p_Blink, 0);
                  }
                  goto LABEL_43;
                }
                if ( (char *)v50 == (char *)FxRequest::`scalar deleting destructor' )
                {
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRequestBase::`vftable';
                  v54 = (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink;
                  if ( v54 )
                  {
                    if ( p_Blink->m_Globals->FxVerifierOn )
                      FxMdlFreeDebug(p_Blink->m_Globals, (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink);
                    else
                      IoFreeMdl(v54);
                  }
                  v55 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                  v56 = (void (__fastcall **)(FxObject *))p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink;
                  if ( v55 )
                  {
                    if ( v56 )
                      (*((void (__fastcall **)(void (__fastcall **)(FxObject *), FxIoQueue *))*v55 + 3))(v55, p_Blink);
                    v73 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                    if ( v73 )
                      (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v73)(v73, 1LL);
                  }
                  if ( v56 && BYTE5(p_Blink->m_Queue.m_LockObject) == 1 )
                    IoFreeIrp((PIRP)p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink);
                  v57 = *(FxRequestTimer **)&p_Blink->m_PowerState;
                  if ( v57 )
                    FxRequestTimer::`scalar deleting destructor'(v57, (unsigned int)SelfDestruct);
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxNonPagedObject::`vftable';
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                  {
                    v74 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized;
                    if ( v74 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v74, (unsigned int)SelfDestruct);
                      *(_QWORD *)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized = 0LL;
                    }
                  }
                  p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0;
                  FxObject::~FxObject(p_Blink);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                  FxPoolFree(p_Blink);
                  goto LABEL_43;
                }
                if ( (char *)v50 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                {
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
                  *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                  FxObject::~FxObject(p_Blink);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                  goto LABEL_94;
                }
                v50((FxRegKey *)p_Blink, 1u);
              }
              else
              {
                p_Blink->SelfDestruct(p_Blink);
              }
            }
          }
          else
          {
            Release(
              p_Blink,
              (void *)1937075302,
              1441,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
          }
LABEL_43:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v75 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v75, &v89, v30);
            v32 = v89;
          }
          else
          {
            v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
            v89 = v32;
          }
          v34 = v85;
          v35 = v86;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v85->Blink != &v85 || (_LIST_ENTRY **)v86->Flink != &v85 )
            __fastfail(3u);
          v86->Flink = v85;
          v34->Blink = v35;
          v86 = (_LIST_ENTRY *)&v85;
          v85 = (_LIST_ENTRY *)&v85;
          if ( v34 != &Blink[8] )
          {
            while ( LODWORD(v34[1].Flink) != 1 )
            {
              v34 = v34->Flink;
              if ( v34 == &Blink[8] )
                goto LABEL_48;
            }
            p_Blink = (FxIoQueue *)&v34[-57].Blink;
            v38 = _InterlockedIncrement((volatile signed __int32 *)&v34[-56].Flink + 1);
            if ( SLOBYTE(v34[-55].Flink) < 0 )
            {
              v76 = (FxTagTracker *)v34[-60].Blink;
              if ( v76 )
                FxTagTracker::UpdateTagHistory(
                  v76,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v38);
            }
            v39 = v34->Flink;
            if ( v34->Flink->Blink != v34 )
              __fastfail(3u);
            v32 = v89;
            v85 = v34->Flink;
            v86 = v34;
            v39->Blink = (_LIST_ENTRY *)&v85;
            v34->Flink = (_LIST_ENTRY *)&v85;
          }
LABEL_48:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v77 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
            FxVerifierLock::Unlock(v77, v32, v33);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v32);
        }
      }
    }
  }
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
  }
  Irp->IoStatus.Status = FileObjectFromWdm;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)FileObjectFromWdm;
}
