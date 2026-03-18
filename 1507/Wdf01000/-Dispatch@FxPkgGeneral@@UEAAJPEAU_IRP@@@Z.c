/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00023C0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C000B79C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0029320 (WPP_IFR_SF_qqcq.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C002D644 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C002D6E4 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00A4C58 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _FILE_OBJECT *v7; // r8
  unsigned __int64 v8; // r14
  int FileObjectFromWdm; // eax
  unsigned __int8 v10; // r8
  unsigned int v11; // r15d
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v14; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *v16; // rbx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // r12
  _LIST_ENTRY *v20; // rcx
  __int64 *p_Blink; // rbx
  _LIST_ENTRY *v22; // r14
  _LIST_ENTRY *v23; // rax
  unsigned int v24; // edx
  _LIST_ENTRY *v25; // rax
  unsigned __int8 v26; // r8
  _QWORD **v27; // r14
  _QWORD *v28; // rdx
  _IRP *j; // rax
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  _LIST_ENTRY *v33; // r14
  _LIST_ENTRY *v34; // rcx
  unsigned int v37; // edx
  _LIST_ENTRY *v38; // rax
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v43; // rcx
  const char *v44; // rdx
  FxVerifierLock *v45; // rcx
  FxTagTracker *v46; // rcx
  FxVerifierLock *v47; // rcx
  FxVerifierLock *v48; // rcx
  FxIrpQueue *v49; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v51; // rcx
  FxRequest *v52; // rcx
  FxRequest_vtbl *v53; // rax
  FxRequest *v54; // rcx
  unsigned int v55; // edx
  FxTagTracker *v56; // rax
  unsigned __int8 v57; // r8
  FxVerifierLock *v58; // rcx
  FxTagTracker *v59; // rcx
  FxVerifierLock *v60; // rcx
  FxIrp v61; // [rsp+50h] [rbp-29h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+58h] [rbp-21h]
  FxIrp fxIrp; // [rsp+60h] [rbp-19h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+68h] [rbp-11h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-9h]
  _LIST_ENTRY *v66; // [rsp+78h] [rbp-1h] BYREF
  _LIST_ENTRY *v67; // [rsp+80h] [rbp+7h]
  int v68; // [rsp+88h] [rbp+Fh]
  unsigned __int8 PreviousIrql; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 v70; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 v71; // [rsp+F0h] [rbp+77h] BYREF
  int v72; // [rsp+F8h] [rbp+7Fh] BYREF

  m_Globals = this->m_Globals;
  fxIrp.m_Irp = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      _a2,
      Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp);
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
        v11 = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        IofCompleteRequest(Irp, 0);
        return v11;
      }
      return (unsigned int)FxPkgGeneral::OnShutdown(this, &fxIrp);
    }
  }
  v7 = CurrentStackLocation->FileObject;
  v8 = 0LL;
  ppFxFileObject = 0LL;
  if ( v7 && (v7->Flags & 0x100) != 0 )
  {
    v11 = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          v7,
                          &ppFxFileObject);
    v11 = FileObjectFromWdm;
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
        Flink = i[3].Flink;
        v71 = 0;
        if ( Flink )
          ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v71);
        ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v8);
        v43 = i[3].Flink;
        if ( v43 )
          ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v43->Flink[1].Blink)(v43, v71);
      }
    }
    FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( FileObject )
    {
      v14 = this->m_DeviceBase;
      v68 = 2;
      Blink = v14[3].m_ChildListHead.Blink;
      v67 = (_LIST_ENTRY *)&v66;
      v66 = (_LIST_ENTRY *)&v66;
      v16 = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
      if ( KeGetCurrentIrql() )
      {
        WPP_IFR_SF_(v16, 2u, 0xDu, 0x21u, (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock);
        v72 = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          v16->Public.DriverName,
          (const char *)&v72,
          v16->Public.DriverName,
          (const char *)&v72);
        if ( v16->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
        else
          Mx::MxDbgPrint(
            "Turn on framework verifier for %s.%s to automatically break into the debugger next time it happens.\n",
            v44,
            (const char *)&v72);
      }
      else
      {
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v45 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v45, &PreviousIrql, v10);
          v17 = PreviousIrql;
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
          PreviousIrql = v17;
        }
        v19 = Blink + 8;
        v20 = Blink[8].Flink;
        v66 = v20;
        v67 = Blink + 8;
        if ( v20->Blink != &Blink[8] )
          __fastfail(3u);
        p_Blink = 0LL;
        v20->Blink = (_LIST_ENTRY *)&v66;
        v22 = v66;
        v19->Flink = (_LIST_ENTRY *)&v66;
        v23 = v67;
        if ( (_LIST_ENTRY **)v22->Blink != &v66 || (_LIST_ENTRY **)v67->Flink != &v66 )
          __fastfail(3u);
        v67->Flink = v22;
        v22->Blink = v23;
        v67 = (_LIST_ENTRY *)&v66;
        v66 = (_LIST_ENTRY *)&v66;
        if ( v22 != v19 )
        {
          while ( LODWORD(v22[1].Flink) != 1 )
          {
            v22 = v22->Flink;
            if ( v22 == v19 )
              goto LABEL_29;
          }
          p_Blink = (__int64 *)&v22[-57].Blink;
          v24 = _InterlockedIncrement((volatile signed __int32 *)&v22[-56].Flink + 1);
          if ( SLOBYTE(v22[-55].Flink) < 0 )
          {
            v46 = (FxTagTracker *)v22[-59].Blink;
            if ( v46 )
              FxTagTracker::UpdateTagHistory(
                v46,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                v24);
          }
          v25 = v22->Flink;
          v66 = v25;
          v67 = v22;
          if ( v25->Blink != v22 )
            __fastfail(3u);
          v17 = PreviousIrql;
          v25->Blink = (_LIST_ENTRY *)&v66;
          v22->Flink = (_LIST_ENTRY *)&v66;
        }
LABEL_29:
        if ( SLOBYTE(Blink[1].Blink) < 0 && (v47 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          FxVerifierLock::Unlock(v47, v17, v18);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v17);
        while ( p_Blink )
        {
          if ( *((_BYTE *)p_Blink + 136) )
            FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)p_Blink, FileObject);
          if ( *((char *)p_Blink + 24) < 0 && (v48 = (FxVerifierLock *)*(p_Blink - 3)) != 0LL )
            FxVerifierLock::Lock(v48, &v70, v26);
          else
            v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Blink + 14);
          v27 = (_QWORD **)(p_Blink + 24);
          while ( 1 )
          {
            v28 = *v27;
            for ( j = 0LL; v28 != v27; j = 0LL )
            {
              j = (_IRP *)(v28 - 21);
              if ( !FileObject )
                break;
              if ( j->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                break;
              v28 = (_QWORD *)*v28;
            }
            v61.m_Irp = j;
            if ( !j )
              break;
            while ( 1 )
            {
              v49 = (FxIrpQueue *)(p_Blink + 24);
              if ( _InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
                break;
              j = FxIrpQueue::PeekNextIrpFromQueue(v49, v61.m_Irp, FileObject);
              v61.m_Irp = j;
              if ( !j )
                goto LABEL_39;
            }
            FxIrpQueue::RemoveIrpFromListEntry(v49, &v61);
            m_Irp = v61.m_Irp;
            v51 = v61.m_Irp->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v51 == 1 )
              v51[1] = 0LL;
            v52 = (FxRequest *)(v51 - 15);
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            pRequest = v52;
            v53 = v52->__vftable;
            v52->m_IrpQueue = 0LL;
            v53->Release(v52, (void *)1969583441, 2094, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            v54 = pRequest;
            v55 = _InterlockedIncrement(&pRequest->m_Refcnt);
            if ( SLOBYTE(v54->m_ObjectFlags) < 0 )
            {
              v56 = (FxTagTracker *)v54[-1].m_ForwardProgressList.Blink;
              if ( v56 )
              {
                FxTagTracker::UpdateTagHistory(
                  v56,
                  (void *)0x75657551,
                  4306,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                  TagAddRef,
                  v55);
                v54 = pRequest;
              }
            }
            FxIoQueue::CancelForQueue((FxIoQueue *)p_Blink, v54, v70);
            FxNonPagedObject::Lock((FxNonPagedObject *)p_Blink, &v70, v57);
          }
LABEL_39:
          FxIoQueue::DispatchEvents((FxIoQueue *)p_Blink, v70, 0LL);
          (*(void (__fastcall **)(__int64 *, __int64, __int64, const char *))(*p_Blink + 16))(
            p_Blink,
            1937075302LL,
            1441LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v58 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
          {
            FxVerifierLock::Lock(v58, &PreviousIrql, v30);
            v31 = PreviousIrql;
          }
          else
          {
            v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
            PreviousIrql = v31;
          }
          v33 = v66;
          v34 = v67;
          p_Blink = 0LL;
          if ( (_LIST_ENTRY **)v66->Blink != &v66 || (_LIST_ENTRY **)v67->Flink != &v66 )
            __fastfail(3u);
          v67->Flink = v66;
          v33->Blink = v34;
          v67 = (_LIST_ENTRY *)&v66;
          v66 = (_LIST_ENTRY *)&v66;
          if ( v33 != v19 )
          {
            while ( LODWORD(v33[1].Flink) != 1 )
            {
              v33 = v33->Flink;
              if ( v33 == v19 )
                goto LABEL_44;
            }
            p_Blink = (__int64 *)&v33[-57].Blink;
            v37 = _InterlockedIncrement((volatile signed __int32 *)&v33[-56].Flink + 1);
            if ( SLOBYTE(v33[-55].Flink) < 0 )
            {
              v59 = (FxTagTracker *)v33[-59].Blink;
              if ( v59 )
                FxTagTracker::UpdateTagHistory(
                  v59,
                  (void *)0x73756C66,
                  1686,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                  TagAddRef,
                  v37);
            }
            v38 = v33->Flink;
            v66 = v38;
            v67 = v33;
            if ( v38->Blink != v33 )
              __fastfail(3u);
            v31 = PreviousIrql;
            v38->Blink = (_LIST_ENTRY *)&v66;
            v33->Flink = (_LIST_ENTRY *)&v66;
          }
LABEL_44:
          if ( SLOBYTE(Blink[1].Blink) < 0 && (v60 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
            FxVerifierLock::Unlock(v60, v31, v32);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v31);
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
  Irp->IoStatus.Status = v11;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return v11;
}
