/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000BDA0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000D120 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C000F964 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C000F984 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001E40C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00289E4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0028A44 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C002F624 (WPP_IFR_SF_qqcq.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C008EAA0 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _FILE_OBJECT *v7; // r8
  unsigned __int64 v8; // r14
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
  __int64 *p_Blink; // r14
  _LIST_ENTRY *v21; // rbx
  _LIST_ENTRY *v22; // rax
  unsigned int v23; // edx
  _LIST_ENTRY *v24; // rax
  unsigned __int8 v25; // r8
  FxIrpQueue *v26; // r9
  _IRP *p_m_RequestCount; // rax
  FxIrpQueue *v28; // rdx
  unsigned __int8 v29; // r8
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r8
  _LIST_ENTRY *v32; // rbx
  _LIST_ENTRY *v33; // rcx
  unsigned int v36; // edx
  _LIST_ENTRY *v37; // rax
  char _a3; // dl
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // r8
  const void *_a1; // rax
  FxVerifierLock *v42; // rcx
  FxTagTracker *v43; // rcx
  FxVerifierLock *v44; // rcx
  FxVerifierLock *v45; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v47; // rbx
  FxRequest *v48; // rbx
  FxRequest_vtbl *v49; // rax
  unsigned __int8 v50; // r8
  FxVerifierLock *v51; // rcx
  FxTagTracker *v52; // rcx
  FxVerifierLock *v53; // rcx
  _FILE_OBJECT *FileObject; // [rsp+50h] [rbp-29h]
  FxIrp fxIrp; // [rsp+58h] [rbp-21h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+60h] [rbp-19h] BYREF
  _LIST_ENTRY *v57; // [rsp+70h] [rbp-9h] BYREF
  _LIST_ENTRY *v58; // [rsp+78h] [rbp-1h]
  int v59; // [rsp+80h] [rbp+7h]
  unsigned __int8 v60; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v61; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 PreviousIrql; // [rsp+F0h] [rbp+77h] BYREF
  FxIrp v63; // [rsp+F8h] [rbp+7Fh] BYREF

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
                          (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
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
      v59 = 2;
      Blink = v13[3].m_ChildListHead.Blink;
      v58 = (_LIST_ENTRY *)&v57;
      v57 = (_LIST_ENTRY *)&v57;
      Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
        FxVerifierDbgBreakPoint(Flink);
      }
      else
      {
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v42 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v42, &v60, v9);
          v16 = v60;
        }
        else
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
          v60 = v16;
        }
        v18 = Blink + 8;
        v19 = Blink[8].Flink;
        v57 = v19;
        v58 = Blink + 8;
        if ( v19->Blink != &Blink[8] )
          __fastfail(3u);
        p_Blink = 0LL;
        v19->Blink = (_LIST_ENTRY *)&v57;
        v21 = v57;
        v18->Flink = (_LIST_ENTRY *)&v57;
        v22 = v58;
        if ( (_LIST_ENTRY **)v21->Blink != &v57 || (_LIST_ENTRY **)v58->Flink != &v57 )
          __fastfail(3u);
        v58->Flink = v21;
        v21->Blink = v22;
        v58 = (_LIST_ENTRY *)&v57;
        v57 = (_LIST_ENTRY *)&v57;
        if ( v21 != v18 )
        {
          while ( LODWORD(v21[1].Flink) != 1 )
          {
            v21 = v21->Flink;
            if ( v21 == v18 )
              goto LABEL_30;
          }
          p_Blink = (__int64 *)&v21[-57].Blink;
          v23 = _InterlockedIncrement((volatile signed __int32 *)&v21[-56].Flink + 1);
          if ( SLOBYTE(v21[-55].Flink) < 0 )
          {
            v43 = (FxTagTracker *)v21[-59].Blink;
            if ( v43 )
              FxTagTracker::UpdateTagHistory(
                v43,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v23);
          }
          v24 = v21->Flink;
          v57 = v24;
          v58 = v21;
          if ( v24->Blink != v21 )
            __fastfail(3u);
          v16 = v60;
          v24->Blink = (_LIST_ENTRY *)&v57;
          v21->Flink = (_LIST_ENTRY *)&v57;
        }
LABEL_30:
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v44 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          FxVerifierLock::Unlock(v44, v16, v17);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v16);
        while ( p_Blink )
        {
          if ( *((_BYTE *)p_Blink + 136) )
            FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)p_Blink, FileObject);
          if ( *((char *)p_Blink + 24) < 0 && (v45 = (FxVerifierLock *)*(p_Blink - 3)) != 0LL )
            FxVerifierLock::Lock(v45, &v61, v25);
          else
            v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
          while ( 1 )
          {
            v26 = (FxIrpQueue *)(p_Blink + 24);
            p_m_RequestCount = 0LL;
            v28 = (FxIrpQueue *)p_Blink[24];
            if ( v28 != (FxIrpQueue *)(p_Blink + 24) )
            {
              do
              {
                p_m_RequestCount = (_IRP *)&v28[-5].m_RequestCount;
                if ( !FileObject )
                  break;
                if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                  break;
                v28 = (FxIrpQueue *)v28->m_Queue.Flink;
                p_m_RequestCount = 0LL;
              }
              while ( v28 != v26 );
            }
            v63.m_Irp = p_m_RequestCount;
            if ( !p_m_RequestCount )
              break;
            while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
            {
              p_m_RequestCount = FxIrpQueue::PeekNextIrpFromQueue(v26, v63.m_Irp, FileObject);
              v63.m_Irp = p_m_RequestCount;
              if ( !p_m_RequestCount )
                goto LABEL_39;
              v26 = (FxIrpQueue *)(p_Blink + 24);
            }
            FxIrpQueue::RemoveIrpFromListEntry(v26, &v63);
            m_Irp = v63.m_Irp;
            v47 = v63.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v47 == 1 )
              v47[1] = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v48 = (FxRequest *)(v47 - 15);
            v49 = v48->__vftable;
            v48->m_IrpQueue = 0LL;
            v49->Release(v48, (void *)1969583441, 2094, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            FxObject::AddRef(
              v48,
              (void *)0x75657551,
              4306,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v48, v61);
            FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v61, v50);
          }
LABEL_39:
          FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v61, 0LL, (unsigned __int16)v26);
          (*(void (__fastcall **)(__int64 *, __int64, __int64, const char *))(*p_Blink + 16))(
            p_Blink,
            1937075302LL,
            1441LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v51 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v51, &v60, v29);
            v30 = v60;
          }
          else
          {
            v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
            v60 = v30;
          }
          v32 = v57;
          v33 = v58;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v57->Blink != &v57 || (_LIST_ENTRY **)v58->Flink != &v57 )
            __fastfail(3u);
          v58->Flink = v57;
          v32->Blink = v33;
          v58 = (_LIST_ENTRY *)&v57;
          v57 = (_LIST_ENTRY *)&v57;
          if ( v32 != v18 )
          {
            while ( LODWORD(v32[1].Flink) != 1 )
            {
              v32 = v32->Flink;
              if ( v32 == v18 )
                goto LABEL_44;
            }
            p_Blink = (__int64 *)&v32[-57].Blink;
            v36 = _InterlockedIncrement((volatile signed __int32 *)&v32[-56].Flink + 1);
            if ( SLOBYTE(v32[-55].Flink) < 0 )
            {
              v52 = (FxTagTracker *)v32[-59].Blink;
              if ( v52 )
                FxTagTracker::UpdateTagHistory(
                  v52,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v36);
            }
            v37 = v32->Flink;
            v57 = v37;
            v58 = v32;
            if ( v37->Blink != v32 )
              __fastfail(3u);
            v30 = v60;
            v37->Blink = (_LIST_ENTRY *)&v57;
            v32->Flink = (_LIST_ENTRY *)&v57;
          }
LABEL_44:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v53 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
            FxVerifierLock::Unlock(v53, v30, v31);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v30);
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
