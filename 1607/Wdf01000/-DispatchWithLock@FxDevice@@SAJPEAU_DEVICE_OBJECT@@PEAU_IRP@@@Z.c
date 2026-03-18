/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002FB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004990 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
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
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001C200 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D2E8 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C002B3DC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0034324 (WPP_IFR_SF_qqcq.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0034BDC (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0034C7C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C003B5AC (WPP_IFR_SF_qqcDq.c)
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

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  _QWORD *v11; // r8
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rsi
  unsigned __int8 MinorFunction; // r15
  __int64 v15; // rcx
  _QWORD *v16; // r9
  int v17; // ecx
  FxPkgIo *v18; // rsi
  int (__fastcall *Dispatch)(FxPackage *, _IRP *); // rax
  unsigned int FileObjectFromWdm; // r14d
  NTSTATUS v23; // eax
  unsigned int v24; // esi
  _FX_DRIVER_GLOBALS *v25; // r10
  _IO_STACK_LOCATION *v26; // rcx
  unsigned __int8 v27; // al
  _FILE_OBJECT *v28; // r8
  unsigned __int64 v29; // r15
  unsigned __int8 v30; // r8
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v33; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *Flink; // rbx
  unsigned __int8 v36; // r8
  _LIST_ENTRY *v37; // rcx
  _LIST_ENTRY *v38; // rdx
  FxIoQueue *p_Blink; // r15
  _LIST_ENTRY *v40; // rbx
  _LIST_ENTRY *v41; // rax
  unsigned int v42; // edx
  _LIST_ENTRY *v43; // rax
  unsigned __int8 v44; // r8
  FxIrpQueue *p_m_Queue; // r9
  _IRP *p_m_RequestCount; // rax
  FxIrpQueue *v47; // rdx
  __int64 v48; // rdx
  unsigned __int8 v49; // r8
  unsigned int (__fastcall *Release)(FxObject *, void *, int, char *); // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v52; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v54; // rbx
  void (__fastcall *v55)(unsigned __int64, __int64, FxTagTracker *); // rax
  void (__fastcall *v56)(unsigned __int64, __int64, FxTagTracker *); // rax
  unsigned __int16 v57; // ax
  _QWORD *v58; // rcx
  _QWORD *v59; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  FxFileObject *(__fastcall *v61)(FxFileObject *, char); // rax
  void (__fastcall **m_Lock)(FxObject *); // rcx
  void (__fastcall **v63)(FxObject *); // rcx
  FX_POOL_TRACKER *v64; // rbx
  unsigned __int8 v65; // dl
  unsigned __int8 v66; // r8
  _LIST_ENTRY *v67; // rbx
  _LIST_ENTRY *v68; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int v70; // r11d
  unsigned int v71; // r10d
  unsigned int v72; // edx
  _LIST_ENTRY *v73; // rax
  _MDL *v74; // rcx
  void (__fastcall **v75)(FxObject *); // rcx
  void (__fastcall **v76)(FxObject *); // rbx
  FxRequestTimer *v77; // rcx
  _IO_STACK_LOCATION *v78; // rax
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v81; // rax
  FxVerifierLock *v82; // rcx
  FxTagTracker *v83; // rcx
  FxVerifierLock *v84; // rcx
  FxVerifierLock *v85; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v87; // rbx
  FxRequest *v88; // rbx
  FxRequest_vtbl *v89; // rax
  FxTagTracker *v90; // rcx
  FxVerifierLock *v91; // rcx
  void (__fastcall **v92)(FxObject *); // rcx
  FxVerifierLock *v93; // rcx
  FxVerifierLock *v94; // rcx
  FxTagTracker *v95; // rcx
  FxVerifierLock *v96; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v98; // r10
  unsigned int v99; // edx
  char *v100; // r8
  _FX_DRIVER_GLOBALS *v101; // r11
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-69h]
  void *_a1; // [rsp+28h] [rbp-61h]
  void *_a2; // [rsp+30h] [rbp-59h]
  _LIST_ENTRY *v105; // [rsp+50h] [rbp-39h] BYREF
  _LIST_ENTRY *v106; // [rsp+58h] [rbp-31h]
  int v107; // [rsp+60h] [rbp-29h]
  FxTagTracker *v108; // [rsp+68h] [rbp-21h]
  FxIrp v109; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v110; // [rsp+78h] [rbp-11h]
  _FILE_OBJECT *FileObject; // [rsp+80h] [rbp-9h]
  FxIrp FxIrp; // [rsp+88h] [rbp-1h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+90h] [rbp+7h] BYREF
  FxIrp v114; // [rsp+A0h] [rbp+17h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v116; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int8 v117; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+108h] [rbp+7Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u )
    goto LABEL_2;
  if ( MajorFunction <= 0x17u )
    goto LABEL_24;
  if ( MajorFunction != 27 )
  {
LABEL_2:
    v6 = 3;
    goto LABEL_3;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
    v6 = 2;
  else
LABEL_24:
    v6 = 1;
LABEL_3:
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 || (v114.m_Irp = Irp, ((__int64)DeviceObject[1].CurrentIrp & 1) == 0) )
      {
LABEL_7:
        v9 = 0LL;
        v10 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
        v11 = *(_QWORD **)(v10 + 368);
        if ( v11 != (_QWORD *)(v10 + 368) )
        {
          v12 = Irp->Tail.Overlay.CurrentStackLocation;
          v13 = v12->MajorFunction;
          MinorFunction = v12->MinorFunction;
          v15 = 3 * v13;
          while ( 1 )
          {
            v16 = v11;
            v11 = (_QWORD *)*v11;
            if ( v16[v15 + 2] )
              break;
LABEL_10:
            if ( v11 == (_QWORD *)(v10 + 368) )
              goto LABEL_11;
          }
          v70 = v16[v15 + 3];
          if ( v70 )
          {
            v71 = 0;
            while ( *(_BYTE *)(v71 + v16[v15 + 4]) != MinorFunction )
            {
              if ( ++v71 >= v70 )
                goto LABEL_10;
            }
          }
          if ( *((_BYTE *)v16 + 688) )
          {
            if ( *(_WORD *)(v10 + 10) )
              v9 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
          }
          else if ( *(_WORD *)(v10 + 10) )
          {
            v9 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
          }
          FileObjectFromWdm = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v16[3 * (unsigned __int8)v13
                                                                                             + 2])(
                                v9,
                                Irp,
                                v11);
          if ( (unsigned __int8)v13 >= 0x16u
            && ((unsigned __int8)v13 <= 0x17u || (_BYTE)v13 == 27 && MinorFunction != 2) )
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v10 + 144) + 336LL), Irp, 0x20u);
          }
          return FileObjectFromWdm;
        }
LABEL_11:
        v17 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
        if ( v17 == 27 )
        {
LABEL_15:
          v18 = *(FxPkgIo **)(v10 + 648);
          if ( !v18 )
LABEL_162:
            v18 = *(FxPkgIo **)(v10 + 672);
        }
        else if ( v17 == 14 )
        {
LABEL_112:
          v18 = *(FxPkgIo **)(v10 + 640);
        }
        else
        {
          switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
          {
            case 0u:
            case 2u:
            case 0x10u:
            case 0x12u:
              v18 = *(FxPkgIo **)(v10 + 656);
              break;
            case 3u:
            case 4u:
            case 0xFu:
              goto LABEL_112;
            case 0x16u:
              goto LABEL_15;
            case 0x17u:
              v18 = *(FxPkgIo **)(v10 + 664);
              break;
            default:
              goto LABEL_162;
          }
        }
        Dispatch = v18->Dispatch;
        if ( (char *)Dispatch != (char *)FxPkgGeneral::Dispatch )
        {
          if ( (char *)Dispatch == (char *)FxPkgIo::Dispatch )
          {
            m_Globals = v18->m_Globals;
            if ( m_Globals->FxTrackDriverForMiniDumpLog )
              *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                              + FxLibraryGlobals.DriverTracker.m_EntrySize
                                              * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
            if ( v18->m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v18->m_DeviceBase);
              WPP_IFR_SF_qqcDq(
                v101,
                *(_QWORD *)(v98 + 144),
                (unsigned int)v100,
                0xCu,
                WPP_FxPkgIo_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v98 + 144),
                *v100,
                v99,
                Irp);
            }
            return (unsigned int)FxPkgIo::DispatchStep1(v18, Irp, v18->m_DynamicDispatchInfoListHead.Flink);
          }
          else
          {
            return (unsigned int)Dispatch(v18, Irp);
          }
        }
        v25 = v18->m_Globals;
        FxIrp.m_Irp = Irp;
        if ( v25->FxTrackDriverForMiniDumpLog )
          *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                          + FxLibraryGlobals.DriverTracker.m_EntrySize
                                          * HIDWORD(KeGetPcr()[1].LockArray)) = v25;
        if ( v25->FxVerboseOn )
        {
          m_DeviceBase = v18->m_DeviceBase;
          m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          if ( m_DeviceBase->m_ObjectSize )
            v81 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v81 = 0LL;
          WPP_IFR_SF_qqcq(
            v25,
            5u,
            0xDu,
            0x14u,
            WPP_FxPkgGeneral_cpp_Traceguids,
            v81,
            m_DeviceObject,
            Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
            Irp);
        }
        v26 = Irp->Tail.Overlay.CurrentStackLocation;
        v27 = v26->MajorFunction;
        if ( v26->MajorFunction )
        {
          if ( v27 != 18 )
          {
            if ( v27 == 2 )
            {
              return (unsigned int)FxPkgGeneral::OnClose((FxPkgGeneral *)v18, &FxIrp);
            }
            else
            {
              if ( v27 != 16 )
              {
                FileObjectFromWdm = -1073741637;
                Irp->IoStatus.Status = -1073741637;
                IofCompleteRequest(Irp, 0);
                return FileObjectFromWdm;
              }
              return (unsigned int)FxPkgGeneral::OnShutdown((FxPkgGeneral *)v18, &FxIrp);
            }
          }
          v28 = v26->FileObject;
          v29 = 0LL;
          ppFxFileObject = 0LL;
          if ( v28 && (v28->Flags & 0x100) != 0 )
          {
            FileObjectFromWdm = 0;
          }
          else
          {
            FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                                  v18->m_Device,
                                  (_WDF_FILEOBJECT_CLASS)LODWORD(v18->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                                  v28,
                                  &ppFxFileObject);
            v110 = FileObjectFromWdm;
            if ( ppFxFileObject )
            {
              if ( (FileObjectFromWdm & 0x80000000) == 0 && ppFxFileObject->m_ObjectSize )
                v29 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
              m_PkgContext = (_LIST_ENTRY *)ppFxFileObject->m_PkgContext;
              if ( !m_PkgContext )
                m_PkgContext = &v18->m_IoQueueListHead;
            }
            else
            {
              m_PkgContext = v18->m_IoQueueListHead.Blink;
              if ( m_PkgContext != &v18->m_IoQueueListHead )
              {
                while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
                {
                  m_PkgContext = m_PkgContext->Blink;
                  if ( m_PkgContext == &v18->m_IoQueueListHead )
                    goto LABEL_40;
                }
                m_PkgContext = m_PkgContext->Blink;
              }
            }
LABEL_40:
            for ( i = m_PkgContext->Flink; i != &v18->m_IoQueueListHead; i = i->Flink )
            {
              if ( i[3].Blink )
              {
                PreviousIrql = 0;
                FxLockedCallback::CallbackStart((FxLockedCallback *)&i[3], &PreviousIrql);
                ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v29);
                FxLockedCallback::CallbackEnd((FxLockedCallback *)&i[3], PreviousIrql);
              }
            }
            FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
            if ( FileObject )
            {
              v33 = v18->m_DeviceBase;
              v107 = 2;
              Blink = v33[3].m_ChildListHead.Blink;
              v106 = (_LIST_ENTRY *)&v105;
              v105 = (_LIST_ENTRY *)&v105;
              Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
              if ( KeGetCurrentIrql() )
              {
                WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
                FxVerifierDbgBreakPoint(Flink);
              }
              else
              {
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v82 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
                {
                  FxVerifierLock::Lock(v82, &v116, v30);
                  v36 = v116;
                }
                else
                {
                  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                  v116 = v36;
                }
                v37 = Blink + 8;
                v38 = Blink[8].Flink;
                if ( v38->Blink != &Blink[8] )
                  __fastfail(3u);
                v105 = Blink[8].Flink;
                v106 = Blink + 8;
                p_Blink = 0LL;
                v38->Blink = (_LIST_ENTRY *)&v105;
                v40 = v105;
                v37->Flink = (_LIST_ENTRY *)&v105;
                v41 = v106;
                if ( (_LIST_ENTRY **)v40->Blink != &v105 || (_LIST_ENTRY **)v106->Flink != &v105 )
                  __fastfail(3u);
                v106->Flink = v40;
                v40->Blink = v41;
                v106 = (_LIST_ENTRY *)&v105;
                v105 = (_LIST_ENTRY *)&v105;
                if ( v40 != v37 )
                {
                  while ( LODWORD(v40[1].Flink) != 1 )
                  {
                    v40 = v40->Flink;
                    if ( v40 == v37 )
                      goto LABEL_56;
                  }
                  p_Blink = (FxIoQueue *)&v40[-57].Blink;
                  v42 = _InterlockedIncrement((volatile signed __int32 *)&v40[-56].Flink + 1);
                  if ( SLOBYTE(v40[-55].Flink) < 0 )
                  {
                    v83 = (FxTagTracker *)v40[-59].Blink;
                    if ( v83 )
                      FxTagTracker::UpdateTagHistory(
                        v83,
                        (void *)0x73756C66,
                        1686,
                        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                        TagAddRef,
                        v42);
                  }
                  v43 = v40->Flink;
                  if ( v40->Flink->Blink != v40 )
                    __fastfail(3u);
                  v36 = v116;
                  v105 = v40->Flink;
                  v106 = v40;
                  v43->Blink = (_LIST_ENTRY *)&v105;
                  v40->Flink = (_LIST_ENTRY *)&v105;
                }
LABEL_56:
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v84 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
                  FxVerifierLock::Unlock(v84, v36, v36);
                else
                  KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v36);
                while ( p_Blink )
                {
                  if ( p_Blink->m_SupportForwardProgress )
                    FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
                    && (v85 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
                  {
                    FxVerifierLock::Lock(v85, &v117, v44);
                  }
                  else
                  {
                    v117 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
                  }
                  while ( 1 )
                  {
                    p_m_Queue = &p_Blink->m_Queue;
                    p_m_RequestCount = 0LL;
                    v47 = (FxIrpQueue *)p_Blink->m_Queue.m_Queue.Flink;
                    if ( v47 != &p_Blink->m_Queue )
                    {
                      do
                      {
                        p_m_RequestCount = (_IRP *)&v47[-5].m_RequestCount;
                        if ( !FileObject )
                          break;
                        if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                          break;
                        v47 = (FxIrpQueue *)v47->m_Queue.Flink;
                        p_m_RequestCount = 0LL;
                      }
                      while ( v47 != p_m_Queue );
                    }
                    v109.m_Irp = p_m_RequestCount;
                    if ( !p_m_RequestCount )
                      break;
                    while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
                    {
                      p_m_RequestCount = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, v109.m_Irp, FileObject);
                      v109.m_Irp = p_m_RequestCount;
                      if ( !p_m_RequestCount )
                        goto LABEL_65;
                      p_m_Queue = &p_Blink->m_Queue;
                    }
                    FxIrpQueue::RemoveIrpFromListEntry(p_m_Queue, &v109);
                    m_Irp = v109.m_Irp;
                    v87 = v109.m_Irp->Tail.Overlay.DriverContext[3];
                    if ( *(_DWORD *)v87 == 1 )
                      v87[1] = 0LL;
                    m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
                    v88 = (FxRequest *)(v87 - 15);
                    v89 = v88->__vftable;
                    v88->m_IrpQueue = 0LL;
                    v89->Release(
                      v88,
                      (void *)1969583441,
                      2102,
                      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                    FxObject::AddRef(
                      v88,
                      (void *)0x75657551,
                      4328,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    FxIoQueue::CancelForQueue(p_Blink, v88, v117);
                    FxNonPagedObject::Lock(p_Blink, &v117);
                  }
LABEL_65:
                  FxIoQueue::DispatchEvents(p_Blink, v117, 0LL);
                  Release = p_Blink->Release;
                  if ( Release == FxObject::Release )
                  {
                    if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    {
                      v90 = (FxTagTracker *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink;
                      if ( v90 )
                        FxTagTracker::UpdateTagHistory(
                          v90,
                          (void *)0x73756C66,
                          1441,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagRelease,
                          p_Blink->m_Refcnt - 1);
                    }
                    if ( _InterlockedExchangeAdd(&p_Blink->m_Refcnt, 0xFFFFFFFF) != 1 )
                      goto LABEL_102;
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
                        v52 = (FxTagTracker *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink;
                        v108 = v52;
                        if ( v52 )
                        {
                          FxTagTracker::CheckForAbandondedTags(v52);
                          v52 = v108;
                        }
                      }
                      else
                      {
                        v52 = 0LL;
                        v108 = 0LL;
                      }
                      m_ObjectSize = p_Blink->m_ObjectSize;
                      if ( m_ObjectSize && (p_Blink->m_ObjectFlags & 8) != 0 )
                      {
                        v54 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + m_ObjectSize);
                        if ( v54 )
                        {
                          do
                          {
                            v55 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v54[2];
                            if ( v55 )
                            {
                              v55((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, v48, v52);
                              v54[2] = 0LL;
                            }
                            v56 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v54[3];
                            if ( v56 )
                            {
                              v56((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, v48, v52);
                              v54[3] = 0LL;
                            }
                            v54 = (_QWORD *)v54[1];
                          }
                          while ( v54 );
                          FileObjectFromWdm = v110;
                          v52 = v108;
                        }
                        v57 = p_Blink->m_ObjectSize;
                        LOBYTE(v48) = 1;
                        if ( v57 )
                        {
                          v58 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v57);
                          if ( v58 )
                          {
                            do
                            {
                              v59 = (_QWORD *)v58[1];
                              if ( !(_BYTE)v48 )
                                FxPoolFree(v58);
                              LOBYTE(v48) = 0;
                              v58 = v59;
                            }
                            while ( v59 );
                            v52 = v108;
                          }
                        }
                      }
                      if ( v52 )
                      {
                        p_Blink[-1].m_IoPkgListNode.m_ListEntry.Flink = 0LL;
                        FxTagTracker::`scalar deleting destructor'(v52, v48);
                      }
                      SelfDestruct = p_Blink->SelfDestruct;
                      if ( SelfDestruct == FxObject::SelfDestruct )
                      {
                        v61 = (FxFileObject *(__fastcall *)(FxFileObject *, char))p_Blink->~FxObject;
                        if ( (char *)v61 == (char *)FxRegKey::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                          m_Lock = (void (__fastcall **)(FxObject *))p_Blink->m_NPLock.m_Lock;
                          if ( m_Lock )
                          {
                            ZwClose(m_Lock);
                            p_Blink->m_NPLock.m_Lock = 0LL;
                          }
                          v63 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_NPLock.m_DbgFlagIsInitialized;
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
                          if ( v63 )
                          {
                            FxPoolFree(v63);
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
                          if ( v61 != FxFileObject::`vector deleting destructor' )
                          {
                            if ( (char *)v61 == (char *)FxRequest::`scalar deleting destructor' )
                            {
                              p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxRequestBase::`vftable';
                              v74 = (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink;
                              if ( v74 )
                              {
                                if ( p_Blink->m_Globals->FxVerifierOn )
                                  FxMdlFreeDebug(p_Blink->m_Globals, (_MDL *)p_Blink->m_DriverCancelable.m_Queue.Blink);
                                else
                                  IoFreeMdl(v74);
                              }
                              v75 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                              v76 = (void (__fastcall **)(FxObject *))p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink;
                              if ( v75 )
                              {
                                if ( v76 )
                                  (*((void (__fastcall **)(void (__fastcall **)(FxObject *), FxIoQueue *))*v75 + 3))(
                                    v75,
                                    p_Blink);
                                v92 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                                if ( v92 )
                                  (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v92)(v92, 1LL);
                              }
                              if ( v76 && BYTE5(p_Blink->m_Queue.m_LockObject) == 1 )
                                IoFreeIrp((PIRP)p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink);
                              v77 = *(FxRequestTimer **)&p_Blink->m_PowerState;
                              if ( v77 )
                                FxRequestTimer::`scalar deleting destructor'(v77, (unsigned int)SelfDestruct);
                              p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxNonPagedObject::`vftable';
                              if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                              {
                                v93 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink;
                                if ( v93 )
                                {
                                  FxVerifierLock::`scalar deleting destructor'(v93, (unsigned int)SelfDestruct);
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
                              v61((FxFileObject *)p_Blink, 1);
                            }
                            goto LABEL_102;
                          }
                          p_Blink->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxNonPagedObject::`vftable';
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                          {
                            v91 = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink;
                            if ( v91 )
                            {
                              FxVerifierLock::`scalar deleting destructor'(v91, (unsigned int)SelfDestruct);
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
                          v64 = *(FX_POOL_TRACKER **)&p_Blink[-1].m_IoPkgListNode.m_Type;
                          if ( LOBYTE(p_Blink[-1].m_PowerSListEntry.Next[33].Next) )
                          {
                            if ( FxIsPagedPoolType(v64->PoolType) )
                              FxPoolRemovePagedAllocateTracker(v64);
                            else
                              FxPoolRemoveNonPagedAllocateTracker(v64);
                            memset(v64, 0, v64->Size + 64);
                          }
                          ExFreePoolWithTag(v64, 0);
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
LABEL_102:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v94 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
                  {
                    FxVerifierLock::Lock(v94, &v116, v49);
                    v65 = v116;
                  }
                  else
                  {
                    v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                    v116 = v65;
                  }
                  v67 = v105;
                  v68 = v106;
                  p_Blink = 0LL;
                  if ( (_LIST_ENTRY **)v105->Blink != &v105 || (_LIST_ENTRY **)v106->Flink != &v105 )
                    __fastfail(3u);
                  v106->Flink = v105;
                  v67->Blink = v68;
                  v106 = (_LIST_ENTRY *)&v105;
                  v105 = (_LIST_ENTRY *)&v105;
                  if ( v67 != &Blink[8] )
                  {
                    while ( LODWORD(v67[1].Flink) != 1 )
                    {
                      v67 = v67->Flink;
                      if ( v67 == &Blink[8] )
                        goto LABEL_107;
                    }
                    p_Blink = (FxIoQueue *)&v67[-57].Blink;
                    v72 = _InterlockedIncrement((volatile signed __int32 *)&v67[-56].Flink + 1);
                    if ( SLOBYTE(v67[-55].Flink) < 0 )
                    {
                      v95 = (FxTagTracker *)v67[-59].Blink;
                      if ( v95 )
                        FxTagTracker::UpdateTagHistory(
                          v95,
                          (void *)0x73756C66,
                          1686,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagAddRef,
                          v72);
                    }
                    v73 = v67->Flink;
                    if ( v67->Flink->Blink != v67 )
                      __fastfail(3u);
                    v65 = v116;
                    v105 = v67->Flink;
                    v106 = v67;
                    v73->Blink = (_LIST_ENTRY *)&v105;
                    v67->Flink = (_LIST_ENTRY *)&v105;
                  }
LABEL_107:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v96 = (FxVerifierLock *)Blink[-2].Blink) != 0LL )
                    FxVerifierLock::Unlock(v96, v65, v66);
                  else
                    KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v65);
                }
              }
            }
          }
          if ( !BYTE1(v18->m_DeviceBase[1].m_ChildEntry.Blink) )
          {
            Irp->IoStatus.Status = FileObjectFromWdm;
            Irp->IoStatus.Information = 0LL;
            IofCompleteRequest(Irp, 0);
            return FileObjectFromWdm;
          }
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          return (unsigned int)IofCallDriver(v18->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
        }
        else
        {
          return (unsigned int)FxPkgGeneral::OnCreate((FxPkgGeneral *)v18, &FxIrp);
        }
      }
      v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &a5, 1u, 0x20u);
      v24 = v23;
      if ( v23 >= 0 )
      {
        v78 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v78[-1].MajorFunction = *(_OWORD *)&v78->MajorFunction;
        *(_OWORD *)&v78[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v78->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v78[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v78->Parameters.QueryDeviceRelations + 6);
        v78[-1].FileObject = v78->FileObject;
        v78[-1].Control = 0;
        FxIrp::SetCompletionRoutineEx(
          &v114,
          DeviceObject,
          FxDevice::_CompletionRoutineForRemlockMaintenance,
          DeviceObject,
          RemlockSize[0],
          (unsigned __int8)_a1,
          (unsigned __int8)_a2);
        --Irp->CurrentLocation;
        --Irp->Tail.Overlay.CurrentStackLocation;
        goto LABEL_7;
      }
    }
    else
    {
      v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &a5, 1u, 0x20u);
      v24 = v23;
      if ( v23 >= 0 )
      {
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
        goto LABEL_7;
      }
    }
  }
  else
  {
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, &a5, 1u, 0x20u);
    v24 = v23;
    if ( v23 >= 0 )
      goto LABEL_7;
  }
  Irp->IoStatus.Status = v23;
  IofCompleteRequest(Irp, 0);
  return v24;
}
