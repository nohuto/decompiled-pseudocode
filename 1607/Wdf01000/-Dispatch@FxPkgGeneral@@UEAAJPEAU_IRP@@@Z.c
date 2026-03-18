/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002FB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004990 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C0013E8C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C0013EAC (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D2E8 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0034324 (WPP_IFR_SF_qqcq.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0034BDC (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0034C7C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C003C2A8 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
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
  unsigned int v29; // edx
  unsigned __int8 v30; // r8
  unsigned int (__fastcall *Release)(FxObject *, void *, int, char *); // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v33; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v35; // rbx
  void (__fastcall *v36)(unsigned __int64); // rax
  void (__fastcall *v37)(unsigned __int64); // rax
  unsigned __int16 v38; // ax
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  FxFileObject *(__fastcall *v42)(FxFileObject *, char); // rax
  void (__fastcall **m_Lock)(FxObject *); // rcx
  void (__fastcall **v44)(FxObject *); // rcx
  FX_POOL_TRACKER *v45; // rbx
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // r8
  _LIST_ENTRY *v48; // rbx
  _LIST_ENTRY *v49; // rcx
  unsigned int v52; // edx
  _LIST_ENTRY *v53; // rax
  _MDL *v54; // rcx
  void (__fastcall **v55)(FxObject *); // rcx
  void (__fastcall **v56)(FxObject *); // rbx
  FxRequestTimer *v57; // rcx
  char _a3; // dl
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // r8
  const void *_a1; // rax
  FxVerifierLock *v62; // rcx
  FxTagTracker *v63; // rcx
  FxVerifierLock *v64; // rcx
  FxVerifierLock *v65; // rcx
  FxIrpQueue *v66; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v68; // rbx
  FxRequest *v69; // rbx
  FxRequest_vtbl *v70; // rax
  FxTagTracker *v71; // rcx
  FxVerifierLock *v72; // rcx
  void (__fastcall **v73)(FxObject *); // rcx
  FxVerifierLock *v74; // rcx
  FxVerifierLock *v75; // rcx
  FxTagTracker *v76; // rcx
  FxVerifierLock *v77; // rcx
  FxIrp v78; // [rsp+50h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+58h] [rbp-21h]
  FxIrp fxIrp; // [rsp+60h] [rbp-19h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+68h] [rbp-11h] BYREF
  _LIST_ENTRY *v82; // [rsp+70h] [rbp-9h] BYREF
  _LIST_ENTRY *v83; // [rsp+78h] [rbp-1h]
  int v84; // [rsp+80h] [rbp+7h]
  ULONG_PTR retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int8 v86; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v87; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+77h] BYREF
  FxTagTracker *v89; // [rsp+F8h] [rbp+7Fh]

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a3 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(m_Globals, 5u, 0xDu, 0x14u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2, _a3, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
    return (unsigned int)FxPkgGeneral::OnCreate(this, &fxIrp);
  if ( MajorFunction != 18 )
  {
    if ( MajorFunction == 2 )
    {
      return (unsigned int)FxPkgGeneral::OnClose(this, &fxIrp);
    }
    else
    {
      if ( MajorFunction != 16 )
      {
        FileObjectFromWdm = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        IofCompleteRequest(Irp, 0);
        return (unsigned int)FileObjectFromWdm;
      }
      return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
    }
  }
  v7 = CurrentStackLocation->FileObject;
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
      v84 = 2;
      Blink = v13[3].m_ChildListHead.Blink;
      v83 = (_LIST_ENTRY *)&v82;
      v82 = (_LIST_ENTRY *)&v82;
      Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
        FxVerifierDbgBreakPoint(Flink);
      }
      else
      {
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v62 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v62, &v86, v9);
          v16 = v86;
        }
        else
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
          v86 = v16;
        }
        v18 = Blink + 8;
        v19 = Blink[8].Flink;
        if ( v19->Blink != &Blink[8] )
          __fastfail(3u);
        v82 = Blink[8].Flink;
        v83 = Blink + 8;
        p_Blink = 0LL;
        v19->Blink = (_LIST_ENTRY *)&v82;
        v21 = v82;
        v18->Flink = (_LIST_ENTRY *)&v82;
        v22 = v83;
        if ( (_LIST_ENTRY **)v21->Blink != &v82 || (_LIST_ENTRY **)v83->Flink != &v82 )
          __fastfail(3u);
        v83->Flink = v21;
        v21->Blink = v22;
        v83 = (_LIST_ENTRY *)&v82;
        v82 = (_LIST_ENTRY *)&v82;
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
            v63 = (FxTagTracker *)v21[-59].Blink;
            if ( v63 )
              FxTagTracker::UpdateTagHistory(
                v63,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v23);
          }
          v24 = v21->Flink;
          if ( v21->Flink->Blink != v21 )
            __fastfail(3u);
          v16 = v86;
          v82 = v21->Flink;
          v83 = v21;
          v24->Blink = (_LIST_ENTRY *)&v82;
          v21->Flink = (_LIST_ENTRY *)&v82;
        }
LABEL_30:
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v64 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          FxVerifierLock::Unlock(v64, v16, v17);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v16);
        while ( p_Blink )
        {
          if ( p_Blink->m_SupportForwardProgress )
            FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
            && (v65 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          {
            FxVerifierLock::Lock(v65, &v87, v25);
          }
          else
          {
            v87 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
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
            v78.m_Irp = j;
            if ( !j )
              break;
            while ( 1 )
            {
              v66 = &p_Blink->m_Queue;
              if ( _InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
                break;
              j = FxIrpQueue::PeekNextIrpFromQueue(v66, v78.m_Irp, FileObject);
              v78.m_Irp = j;
              if ( !j )
                goto LABEL_40;
            }
            FxIrpQueue::RemoveIrpFromListEntry(v66, &v78);
            m_Irp = v78.m_Irp;
            v68 = v78.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v68 == 1 )
              v68[1] = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v69 = (FxRequest *)(v68 - 15);
            v70 = v69->__vftable;
            v69->m_IrpQueue = 0LL;
            v70->Release(v69, (void *)1969583441, 2102, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            FxObject::AddRef(
              v69,
              (void *)0x75657551,
              4328,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(p_Blink, v69, v87);
            FxNonPagedObject::Lock(p_Blink, &v87);
          }
LABEL_40:
          FxIoQueue::DispatchEvents(p_Blink, v87, 0LL);
          Release = p_Blink->Release;
          if ( Release == FxObject::Release )
          {
            if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
            {
              v71 = (FxTagTracker *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink;
              if ( v71 )
                FxTagTracker::UpdateTagHistory(
                  v71,
                  (void *)0x73756C66,
                  1441,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagRelease,
                  p_Blink->m_Refcnt - 1);
            }
            if ( _InterlockedDecrement(&p_Blink->m_Refcnt) )
              goto LABEL_77;
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
                v33 = (FxTagTracker *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink;
                v89 = v33;
                if ( v33 )
                {
                  FxTagTracker::CheckForAbandondedTags(v33);
                  v33 = v89;
                }
              }
              else
              {
                v33 = 0LL;
                v89 = 0LL;
              }
              m_ObjectSize = p_Blink->m_ObjectSize;
              if ( m_ObjectSize && (p_Blink->m_ObjectFlags & 8) != 0 )
              {
                v35 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + m_ObjectSize);
                if ( v35 )
                {
                  do
                  {
                    v36 = (void (__fastcall *)(unsigned __int64))v35[2];
                    if ( v36 )
                    {
                      v36((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v35[2] = 0LL;
                    }
                    v37 = (void (__fastcall *)(unsigned __int64))v35[3];
                    if ( v37 )
                    {
                      v37((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v35[3] = 0LL;
                    }
                    v35 = (_QWORD *)v35[1];
                  }
                  while ( v35 );
                  v33 = v89;
                }
                v38 = p_Blink->m_ObjectSize;
                LOBYTE(v29) = 1;
                if ( v38 )
                {
                  v39 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v38);
                  if ( v39 )
                  {
                    do
                    {
                      v40 = (_QWORD *)v39[1];
                      if ( !(_BYTE)v29 )
                        FxPoolFree(v39);
                      LOBYTE(v29) = 0;
                      v39 = v40;
                    }
                    while ( v40 );
                    v33 = v89;
                  }
                }
              }
              if ( v33 )
              {
                p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink = 0LL;
                FxTagTracker::`scalar deleting destructor'(v33, v29);
              }
              SelfDestruct = p_Blink->SelfDestruct;
              if ( SelfDestruct == FxObject::SelfDestruct )
              {
                v42 = (FxFileObject *(__fastcall *)(FxFileObject *, char))p_Blink->~FxObject;
                if ( (char *)v42 == (char *)FxRegKey::`scalar deleting destructor' )
                {
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                  m_Lock = (void (__fastcall **)(FxObject *))p_Blink->m_NPLock.m_Lock;
                  if ( m_Lock )
                  {
                    ZwClose(m_Lock);
                    p_Blink->m_NPLock.m_Lock = 0LL;
                  }
                  v44 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_NPLock.m_DbgFlagIsInitialized;
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
                  if ( v44 )
                  {
                    FxPoolFree(v44);
                    *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                  }
                  FxObject::~FxObject(p_Blink);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    p_Blink = (FxIoQueue *)((char *)p_Blink - 32);
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                }
                else
                {
                  if ( v42 != FxFileObject::`vector deleting destructor' )
                  {
                    if ( (char *)v42 == (char *)FxRequest::`scalar deleting destructor' )
                    {
                      p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxRequestBase::`vftable';
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
                          (*((void (__fastcall **)(void (__fastcall **)(FxObject *), FxIoQueue *))*v55 + 3))(
                            v55,
                            p_Blink);
                        v73 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                        if ( v73 )
                          (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v73)(v73, 1LL);
                      }
                      if ( v56 && BYTE5(p_Blink->m_Queue.m_LockObject) == 1 )
                        IoFreeIrp((PIRP)p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink);
                      v57 = *(FxRequestTimer **)&p_Blink->m_PowerState;
                      if ( v57 )
                        FxRequestTimer::`scalar deleting destructor'(v57, (unsigned int)SelfDestruct);
                      p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxNonPagedObject::`vftable';
                      if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                      {
                        v74 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink;
                        if ( v74 )
                        {
                          FxVerifierLock::`scalar deleting destructor'(v74, (unsigned int)SelfDestruct);
                          p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink = 0LL;
                        }
                      }
                      p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0;
                      FxObject::~FxObject(p_Blink);
                      if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                        p_Blink = (FxIoQueue *)((char *)p_Blink - 32);
                      FxPoolFree(p_Blink);
                    }
                    else
                    {
                      v42((FxFileObject *)p_Blink, 1);
                    }
                    goto LABEL_77;
                  }
                  p_Blink->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
                  p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxNonPagedObject::`vftable';
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                  {
                    v72 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink;
                    if ( v72 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v72, (unsigned int)SelfDestruct);
                      p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink = 0LL;
                    }
                  }
                  p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0;
                  FxObject::~FxObject(p_Blink);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    p_Blink = (FxIoQueue *)((char *)p_Blink - 32);
                  if ( !p_Blink )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                }
                if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
                {
                  v45 = *(FX_POOL_TRACKER **)&p_Blink[-1].m_IoPkgListNode.m_Type;
                  if ( LOBYTE(p_Blink[-1].m_PowerSListEntry.Next[33].Next) )
                  {
                    if ( FxIsPagedPoolType(v45->PoolType) )
                      FxPoolRemovePagedAllocateTracker(v45);
                    else
                      FxPoolRemoveNonPagedAllocateTracker(v45);
                    memset(v45, 0, v45->Size + 64);
                  }
                  ExFreePoolWithTag(v45, 0);
                }
                else
                {
                  ExFreePoolWithTag(p_Blink, 0);
                }
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
LABEL_77:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v75 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v75, &v86, v30);
            v46 = v86;
          }
          else
          {
            v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
            v86 = v46;
          }
          v48 = v82;
          v49 = v83;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v82->Blink != &v82 || (_LIST_ENTRY **)v83->Flink != &v82 )
            __fastfail(3u);
          v83->Flink = v82;
          v48->Blink = v49;
          v83 = (_LIST_ENTRY *)&v82;
          v82 = (_LIST_ENTRY *)&v82;
          if ( v48 != &Blink[8] )
          {
            while ( LODWORD(v48[1].Flink) != 1 )
            {
              v48 = v48->Flink;
              if ( v48 == &Blink[8] )
                goto LABEL_82;
            }
            p_Blink = (FxIoQueue *)&v48[-57].Blink;
            v52 = _InterlockedIncrement((volatile signed __int32 *)&v48[-56].Flink + 1);
            if ( SLOBYTE(v48[-55].Flink) < 0 )
            {
              v76 = (FxTagTracker *)v48[-59].Blink;
              if ( v76 )
                FxTagTracker::UpdateTagHistory(
                  v76,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v52);
            }
            v53 = v48->Flink;
            if ( v48->Flink->Blink != v48 )
              __fastfail(3u);
            v46 = v86;
            v82 = v48->Flink;
            v83 = v48;
            v53->Blink = (_LIST_ENTRY *)&v82;
            v48->Flink = (_LIST_ENTRY *)&v82;
          }
LABEL_82:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v77 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
            FxVerifierLock::Unlock(v77, v46, v47);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v46);
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
