/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0006760 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008030 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
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
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001CEF0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D8A0 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C002C1F8 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C00381F0 (WPP_IFR_SF_qqcq.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003E22C (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C003F060 (WPP_IFR_SF_qqcDq.c)
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
  NTSTATUS v23; // esi
  _FX_DRIVER_GLOBALS *v24; // r11
  _IO_STACK_LOCATION *v25; // rcx
  unsigned __int8 v26; // al
  _FILE_OBJECT *v27; // r8
  unsigned __int64 v28; // r15
  unsigned __int8 v29; // r8
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  FxDeviceBase *v32; // rax
  _LIST_ENTRY *Blink; // r13
  _FX_DRIVER_GLOBALS *Flink; // rbx
  unsigned __int8 v35; // r8
  _LIST_ENTRY *v36; // rcx
  _LIST_ENTRY *v37; // rdx
  FxIoQueue *p_Blink; // r15
  _LIST_ENTRY *v39; // rbx
  _LIST_ENTRY *v40; // rax
  unsigned int v41; // edx
  _LIST_ENTRY *v42; // rax
  unsigned __int8 v43; // r8
  FxIrpQueue *p_m_Queue; // r9
  _IRP *p_m_RequestCount; // rax
  FxIrpQueue *v46; // rdx
  void (__fastcall *FxVerifyLeakDetection)(FxObject *); // rdx
  unsigned __int8 v48; // r8
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // r8
  _LIST_ENTRY *v52; // rbx
  _LIST_ENTRY *v53; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int v55; // r11d
  unsigned int v56; // r10d
  unsigned int v57; // eax
  unsigned int v58; // edx
  _LIST_ENTRY *v59; // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v61; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v63; // rbx
  void (__fastcall *v64)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *); // rax
  void (__fastcall *v65)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *); // rax
  unsigned __int16 v66; // ax
  _QWORD *v67; // rcx
  _QWORD *v68; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void *(__fastcall *v70)(FxRegKey *, unsigned int); // rax
  void (__fastcall **m_Lock)(FxObject *); // rcx
  void (__fastcall **v72)(FxObject *); // rcx
  FX_POOL_TRACKER *v73; // rbx
  _MDL *v74; // rcx
  void (__fastcall **v75)(FxObject *); // rcx
  void (__fastcall **v76)(FxObject *); // rbx
  FxRequestTimer *v77; // rcx
  _IO_STACK_LOCATION *v78; // rax
  unsigned __int64 v79; // rcx
  _IO_STACK_LOCATION *v80; // rax
  FxDeviceBase *m_DeviceBase; // r10
  char v82; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v84; // r10
  FxVerifierLock *v85; // rcx
  FxTagTracker *v86; // rcx
  FxVerifierLock *v87; // rcx
  FxVerifierLock *v88; // rcx
  _IRP *m_Irp; // r9
  _QWORD *v90; // rbx
  FxRequest *v91; // rbx
  FxRequest_vtbl *v92; // rax
  FxTagTracker *v93; // rcx
  void (__fastcall **v94)(FxObject *); // rcx
  FxVerifierLock *v95; // rcx
  FxVerifierLock *v96; // rcx
  FxTagTracker *v97; // rcx
  FxVerifierLock *v98; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v100; // r10
  unsigned int v101; // edx
  char *v102; // r8
  _FX_DRIVER_GLOBALS *v103; // r11
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-69h]
  void *_a1; // [rsp+28h] [rbp-61h]
  void *_a2; // [rsp+30h] [rbp-59h]
  char _a3; // [rsp+38h] [rbp-51h]
  void *_a4; // [rsp+40h] [rbp-49h]
  _LIST_ENTRY *v109; // [rsp+50h] [rbp-39h] BYREF
  _LIST_ENTRY *v110; // [rsp+58h] [rbp-31h]
  int v111; // [rsp+60h] [rbp-29h]
  FxTagTracker *v112; // [rsp+68h] [rbp-21h]
  FxIrp v113; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-11h]
  _FILE_OBJECT *FileObject; // [rsp+80h] [rbp-9h]
  FxIrp FxIrp; // [rsp+88h] [rbp-1h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+90h] [rbp+7h] BYREF
  FxIrp v118; // [rsp+A0h] [rbp+17h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v120; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int8 v121; // [rsp+100h] [rbp+77h] BYREF
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
      if ( v8 != 1 || (v118.m_Irp = Irp, ((__int64)DeviceObject[1].CurrentIrp & 1) == 0) )
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
          v55 = v16[v15 + 3];
          if ( v55 )
          {
            v56 = 0;
            while ( *(_BYTE *)(v56 + v16[v15 + 4]) != MinorFunction )
            {
              if ( ++v56 >= v55 )
                goto LABEL_10;
            }
          }
          if ( *((_BYTE *)v16 + 688) )
          {
            v79 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !*(_WORD *)(v10 + 10) )
              v79 = 0LL;
            v57 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v16[3 * (unsigned __int8)v13 + 2])(
                    v79,
                    Irp,
                    v11);
          }
          else
          {
            if ( *(_WORD *)(v10 + 10) )
              v9 = v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v57 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v16[3 * (unsigned __int8)v13 + 2])(
                    v9,
                    Irp,
                    v11);
          }
          FileObjectFromWdm = v57;
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
LABEL_163:
            v18 = *(FxPkgIo **)(v10 + 672);
        }
        else if ( v17 == 14 )
        {
LABEL_78:
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
              goto LABEL_78;
            case 0x16u:
              goto LABEL_15;
            case 0x17u:
              v18 = *(FxPkgIo **)(v10 + 664);
              break;
            default:
              goto LABEL_163;
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
                v103,
                *(_QWORD *)(v100 + 144),
                (unsigned int)v102,
                0xCu,
                WPP_FxPkgIo_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v100 + 144),
                *v102,
                v101,
                Irp);
            }
            return (unsigned int)FxPkgIo::DispatchStep1(v18, Irp, v18->m_DynamicDispatchInfoListHead.Flink);
          }
          else
          {
            return (unsigned int)Dispatch(v18, Irp);
          }
        }
        v24 = v18->m_Globals;
        FxIrp.m_Irp = Irp;
        if ( v24->FxTrackDriverForMiniDumpLog )
          *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                          + FxLibraryGlobals.DriverTracker.m_EntrySize
                                          * HIDWORD(KeGetPcr()[1].LockArray)) = v24;
        if ( v24->FxVerboseOn )
        {
          v80 = Irp->Tail.Overlay.CurrentStackLocation;
          m_DeviceBase = v18->m_DeviceBase;
          _a4 = Irp;
          v82 = v80->MajorFunction;
          LOWORD(v80) = m_DeviceBase->m_ObjectSize;
          m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          v84 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a3 = v82;
          _a2 = m_DeviceObject;
          if ( !(_WORD)v80 )
            v84 = 0LL;
          WPP_IFR_SF_qqcq(v24, 5u, 0xDu, 0x14u, WPP_FxPkgGeneral_cpp_Traceguids, v84, _a2, _a3, _a4);
        }
        v25 = Irp->Tail.Overlay.CurrentStackLocation;
        v26 = v25->MajorFunction;
        if ( v25->MajorFunction )
        {
          if ( v26 != 18 )
          {
            if ( v26 == 2 )
            {
              return (unsigned int)FxPkgGeneral::OnClose((FxPkgGeneral *)v18, &FxIrp);
            }
            else
            {
              if ( v26 != 16 )
              {
                FileObjectFromWdm = -1073741637;
                Irp->IoStatus.Status = -1073741637;
                IofCompleteRequest(Irp, 0);
                return FileObjectFromWdm;
              }
              return (unsigned int)FxPkgGeneral::OnShutdown((FxPkgGeneral *)v18, &FxIrp);
            }
          }
          v27 = v25->FileObject;
          v28 = 0LL;
          ppFxFileObject = 0LL;
          if ( v27 && (v27->Flags & 0x100) != 0 )
          {
            FileObjectFromWdm = 0;
          }
          else
          {
            FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                                  v18->m_Device,
                                  (_WDF_FILEOBJECT_CLASS)LODWORD(v18->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                                  v27,
                                  &ppFxFileObject);
            v114 = FileObjectFromWdm;
            if ( ppFxFileObject )
            {
              if ( (FileObjectFromWdm & 0x80000000) == 0 && ppFxFileObject->m_ObjectSize )
                v28 = (unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL;
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
                ((void (__fastcall *)(unsigned __int64))i[3].Blink)(v28);
                FxLockedCallback::CallbackEnd((FxLockedCallback *)&i[3], PreviousIrql);
              }
            }
            FileObject = Irp->Tail.Overlay.CurrentStackLocation->FileObject;
            if ( FileObject )
            {
              v32 = v18->m_DeviceBase;
              v111 = 2;
              Blink = v32[3].m_ChildListHead.Blink;
              v110 = (_LIST_ENTRY *)&v109;
              v109 = (_LIST_ENTRY *)&v109;
              Flink = (_FX_DRIVER_GLOBALS *)Blink[1].Flink;
              if ( KeGetCurrentIrql() )
              {
                WPP_IFR_SF_(Flink, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
                FxVerifierDbgBreakPoint(Flink);
              }
              else
              {
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v85 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                {
                  FxVerifierLock::Lock(v85, &v120, v29);
                  v35 = v120;
                }
                else
                {
                  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                  v120 = v35;
                }
                v36 = Blink + 8;
                v37 = Blink[8].Flink;
                if ( v37->Blink != &Blink[8] )
                  __fastfail(3u);
                v109 = Blink[8].Flink;
                v110 = Blink + 8;
                p_Blink = 0LL;
                v37->Blink = (_LIST_ENTRY *)&v109;
                v39 = v109;
                v36->Flink = (_LIST_ENTRY *)&v109;
                v40 = v110;
                if ( (_LIST_ENTRY **)v39->Blink != &v109 || (_LIST_ENTRY **)v110->Flink != &v109 )
                  __fastfail(3u);
                v110->Flink = v39;
                v39->Blink = v40;
                v110 = (_LIST_ENTRY *)&v109;
                v109 = (_LIST_ENTRY *)&v109;
                if ( v39 != v36 )
                {
                  while ( LODWORD(v39[1].Flink) != 1 )
                  {
                    v39 = v39->Flink;
                    if ( v39 == v36 )
                      goto LABEL_56;
                  }
                  p_Blink = (FxIoQueue *)&v39[-57].Blink;
                  v41 = _InterlockedIncrement((volatile signed __int32 *)&v39[-56].Flink + 1);
                  if ( SLOBYTE(v39[-55].Flink) < 0 )
                  {
                    v86 = (FxTagTracker *)v39[-60].Blink;
                    if ( v86 )
                      FxTagTracker::UpdateTagHistory(
                        v86,
                        (void *)0x73756C66,
                        1686,
                        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                        TagAddRef,
                        v41);
                  }
                  v42 = v39->Flink;
                  if ( v39->Flink->Blink != v39 )
                    __fastfail(3u);
                  v35 = v120;
                  v109 = v39->Flink;
                  v110 = v39;
                  v42->Blink = (_LIST_ENTRY *)&v109;
                  v39->Flink = (_LIST_ENTRY *)&v109;
                }
LABEL_56:
                if ( SLOBYTE(Blink[1].Blink) < 0 && (v87 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                  FxVerifierLock::Unlock(v87, v35, v35);
                else
                  KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v35);
                while ( p_Blink )
                {
                  if ( p_Blink->m_SupportForwardProgress )
                    FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
                  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
                    && (v88 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
                  {
                    FxVerifierLock::Lock(v88, &v121, v43);
                  }
                  else
                  {
                    v121 = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
                  }
                  while ( 1 )
                  {
                    p_m_Queue = &p_Blink->m_Queue;
                    p_m_RequestCount = 0LL;
                    v46 = (FxIrpQueue *)p_Blink->m_Queue.m_Queue.Flink;
                    if ( v46 != &p_Blink->m_Queue )
                    {
                      do
                      {
                        p_m_RequestCount = (_IRP *)&v46[-5].m_RequestCount;
                        if ( !FileObject )
                          break;
                        if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
                          break;
                        v46 = (FxIrpQueue *)v46->m_Queue.Flink;
                        p_m_RequestCount = 0LL;
                      }
                      while ( v46 != p_m_Queue );
                    }
                    v113.m_Irp = p_m_RequestCount;
                    if ( !p_m_RequestCount )
                      break;
                    while ( !_InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
                    {
                      p_m_RequestCount = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, v113.m_Irp, FileObject);
                      v113.m_Irp = p_m_RequestCount;
                      if ( !p_m_RequestCount )
                        goto LABEL_65;
                      p_m_Queue = &p_Blink->m_Queue;
                    }
                    FxIrpQueue::RemoveIrpFromListEntry(p_m_Queue, &v113);
                    m_Irp = v113.m_Irp;
                    v90 = v113.m_Irp->Tail.Overlay.DriverContext[3];
                    if ( *(_DWORD *)v90 == 1 )
                      v90[1] = 0LL;
                    m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
                    v91 = (FxRequest *)(v90 - 15);
                    v92 = v91->__vftable;
                    v91->m_IrpQueue = 0LL;
                    v92->Release(
                      v91,
                      (void *)1969583441,
                      2102,
                      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                    FxObject::AddRef(
                      v91,
                      (void *)0x75657551,
                      4331,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                    FxIoQueue::CancelForQueue(p_Blink, v91, v121);
                    FxNonPagedObject::Lock(p_Blink, &v121);
                  }
LABEL_65:
                  FxIoQueue::DispatchEvents(p_Blink, v121, 0LL);
                  Release = p_Blink->Release;
                  if ( Release == FxObject::Release )
                  {
                    if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                    {
                      v93 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
                      if ( v93 )
                        FxTagTracker::UpdateTagHistory(
                          v93,
                          (void *)0x73756C66,
                          1441,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagRelease,
                          p_Blink->m_Refcnt - 1);
                    }
                    if ( _InterlockedExchangeAdd(&p_Blink->m_Refcnt, 0xFFFFFFFF) != 1 )
                      goto LABEL_68;
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
                        v61 = (FxTagTracker *)p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
                        v112 = v61;
                        if ( v61 )
                        {
                          FxTagTracker::CheckForAbandondedTags(v61);
                          v61 = v112;
                        }
                      }
                      else
                      {
                        v61 = 0LL;
                        v112 = 0LL;
                      }
                      m_ObjectSize = p_Blink->m_ObjectSize;
                      if ( m_ObjectSize && (p_Blink->m_ObjectFlags & 8) != 0 )
                      {
                        v63 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + m_ObjectSize);
                        if ( v63 )
                        {
                          do
                          {
                            v64 = (void (__fastcall *)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *))v63[2];
                            if ( v64 )
                            {
                              v64((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v61);
                              v63[2] = 0LL;
                            }
                            v65 = (void (__fastcall *)(unsigned __int64, void (__fastcall *)(FxObject *), FxTagTracker *))v63[3];
                            if ( v65 )
                            {
                              v65((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v61);
                              v63[3] = 0LL;
                            }
                            v63 = (_QWORD *)v63[1];
                          }
                          while ( v63 );
                          FileObjectFromWdm = v114;
                          v61 = v112;
                        }
                        v66 = p_Blink->m_ObjectSize;
                        LOBYTE(FxVerifyLeakDetection) = 1;
                        if ( v66 )
                        {
                          v67 = (FxIoQueue_vtbl **)((char *)&p_Blink->FxNonPagedObject::FxObject::__vftable + v66);
                          if ( v67 )
                          {
                            do
                            {
                              v68 = (_QWORD *)v67[1];
                              if ( !(_BYTE)FxVerifyLeakDetection )
                                FxPoolFree(v67);
                              LOBYTE(FxVerifyLeakDetection) = 0;
                              v67 = v68;
                            }
                            while ( v68 );
                            v61 = v112;
                          }
                        }
                      }
                      if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                      {
                        if ( BYTE4(p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) )
                        {
                          _InterlockedDecrement(&p_Blink->m_Globals->FxVerifyLeakDetection->ObjectCnt);
                          if ( p_Blink->FxNonPagedObject::FxObject::m_Type == 4098
                            && _InterlockedExchangeAdd(
                                 &p_Blink->m_Globals->FxVerifyLeakDetection->DeviceCnt,
                                 0xFFFFFFFF) != 1 )
                          {
                            FxVerifyLeakDetection = (void (__fastcall *)(FxObject *))p_Blink->m_Globals->FxVerifyLeakDetection;
                            _InterlockedExchangeAdd(
                              (volatile signed __int32 *)FxVerifyLeakDetection + 2,
                              -*((_DWORD *)FxVerifyLeakDetection + 1));
                          }
                        }
                      }
                      if ( v61 )
                      {
                        p_Blink[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink = 0LL;
                        FxTagTracker::`scalar deleting destructor'(v61, (unsigned int)FxVerifyLeakDetection);
                      }
                      SelfDestruct = p_Blink->SelfDestruct;
                      if ( SelfDestruct == FxObject::SelfDestruct )
                      {
                        v70 = (void *(__fastcall *)(FxRegKey *, unsigned int))p_Blink->~FxObject;
                        if ( v70 == FxRegKey::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRegKey::`vftable';
                          m_Lock = (void (__fastcall **)(FxObject *))p_Blink->m_NPLock.m_Lock;
                          if ( m_Lock )
                          {
                            ZwClose(m_Lock);
                            p_Blink->m_NPLock.m_Lock = 0LL;
                          }
                          v72 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_NPLock.m_DbgFlagIsInitialized;
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxPagedObject::`vftable';
                          if ( v72 )
                          {
                            FxPoolFree(v72);
                            *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                          }
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          if ( !p_Blink )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_135:
                          if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
                          {
                            v73 = *(FX_POOL_TRACKER **)&p_Blink[-1].m_IoPkgListNode.m_Type;
                            if ( LOBYTE(p_Blink[-1].m_PowerSListEntry.Next[33].Next) )
                            {
                              if ( FxIsPagedPoolType(v73->PoolType) )
                                FxPoolRemovePagedAllocateTracker(v73);
                              else
                                FxPoolRemoveNonPagedAllocateTracker(v73);
                              memset(v73, 0, v73->Size + 64);
                            }
                            ExFreePoolWithTag(v73, 0);
                          }
                          else
                          {
                            ExFreePoolWithTag(p_Blink, 0);
                          }
                          goto LABEL_68;
                        }
                        if ( (char *)v70 == (char *)FxRequest::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxRequestBase::`vftable';
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
                            v94 = *(void (__fastcall ***)(FxObject *))&p_Blink->m_FinishDisposing.m_DbgFlagIsInitialized;
                            if ( v94 )
                              (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v94)(v94, 1LL);
                          }
                          if ( v76 && BYTE5(p_Blink->m_Queue.m_LockObject) == 1 )
                            IoFreeIrp((PIRP)p_Blink->m_FinishDisposing.m_Event.Header.WaitListHead.Flink);
                          v77 = *(FxRequestTimer **)&p_Blink->m_PowerState;
                          if ( v77 )
                            FxRequestTimer::`scalar deleting destructor'(v77, (unsigned int)SelfDestruct);
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxNonPagedObject::`vftable';
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                          {
                            v95 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized;
                            if ( v95 )
                            {
                              FxVerifierLock::`scalar deleting destructor'(v95, (unsigned int)SelfDestruct);
                              *(_QWORD *)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized = 0LL;
                            }
                          }
                          p_Blink->m_NPLock.m_DbgFlagIsInitialized = 0;
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          FxPoolFree(p_Blink);
                          goto LABEL_68;
                        }
                        if ( (char *)v70 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                        {
                          p_Blink->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
                          *(_QWORD *)&p_Blink->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                          FxObject::~FxObject(p_Blink);
                          if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0 )
                            p_Blink = (FxIoQueue *)((char *)p_Blink - 48);
                          if ( !p_Blink )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                          goto LABEL_135;
                        }
                        v70((FxRegKey *)p_Blink, 1u);
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
LABEL_68:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v96 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                  {
                    FxVerifierLock::Lock(v96, &v120, v48);
                    v50 = v120;
                  }
                  else
                  {
                    v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Blink[7]);
                    v120 = v50;
                  }
                  v52 = v109;
                  v53 = v110;
                  p_Blink = 0LL;
                  if ( (_LIST_ENTRY **)v109->Blink != &v109 || (_LIST_ENTRY **)v110->Flink != &v109 )
                    __fastfail(3u);
                  v110->Flink = v109;
                  v52->Blink = v53;
                  v110 = (_LIST_ENTRY *)&v109;
                  v109 = (_LIST_ENTRY *)&v109;
                  if ( v52 != &Blink[8] )
                  {
                    while ( LODWORD(v52[1].Flink) != 1 )
                    {
                      v52 = v52->Flink;
                      if ( v52 == &Blink[8] )
                        goto LABEL_73;
                    }
                    p_Blink = (FxIoQueue *)&v52[-57].Blink;
                    v58 = _InterlockedIncrement((volatile signed __int32 *)&v52[-56].Flink + 1);
                    if ( SLOBYTE(v52[-55].Flink) < 0 )
                    {
                      v97 = (FxTagTracker *)v52[-60].Blink;
                      if ( v97 )
                        FxTagTracker::UpdateTagHistory(
                          v97,
                          (void *)0x73756C66,
                          1686,
                          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                          TagAddRef,
                          v58);
                    }
                    v59 = v52->Flink;
                    if ( v52->Flink->Blink != v52 )
                      __fastfail(3u);
                    v50 = v120;
                    v109 = v52->Flink;
                    v110 = v52;
                    v59->Blink = (_LIST_ENTRY *)&v109;
                    v52->Flink = (_LIST_ENTRY *)&v109;
                  }
LABEL_73:
                  if ( SLOBYTE(Blink[1].Blink) < 0 && (v98 = (FxVerifierLock *)Blink[-3].Blink) != 0LL )
                    FxVerifierLock::Unlock(v98, v50, v51);
                  else
                    KeReleaseSpinLock((PKSPIN_LOCK)&Blink[7], v50);
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
      v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v23 >= 0 )
      {
        v78 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v78[-1].MajorFunction = *(_OWORD *)&v78->MajorFunction;
        *(_OWORD *)&v78[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v78->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v78[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v78->Parameters.QueryDeviceRelations + 6);
        v78[-1].FileObject = v78->FileObject;
        v78[-1].Control = 0;
        FxIrp::SetCompletionRoutineEx(
          &v118,
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
      v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v23 >= 0 )
      {
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
        goto LABEL_7;
      }
    }
  }
  else
  {
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v23 >= 0 )
      goto LABEL_7;
  }
  Irp->IoStatus.Status = v23;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v23;
}
