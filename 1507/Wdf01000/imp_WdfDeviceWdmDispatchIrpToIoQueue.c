/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0003EA0 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0020680 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0030B08 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0030CC4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00329A0 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0032A98 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0032B08 (WPP_IFR_SF_qLsqd.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0032CBC (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00D0180 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        unsigned int Flags)
{
  const void *v5; // rsi
  FxDevice *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  FxPkgIo *m_PkgIo; // rcx
  __int64 v18; // r15
  __int64 p_m_ExecutionLevel; // r15
  FxDeviceBase *m_DeviceBase; // rdx
  FxRequest *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rcx
  PSLIST_ENTRY v24; // rbx
  _FX_DRIVER_GLOBALS *v25; // rcx
  _SLIST_ENTRY *v26; // rax
  FxRequest *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r8
  FxDeviceBase *v30; // r11
  _FX_DRIVER_GLOBALS *v31; // rax
  unsigned __int64 v32; // r8
  FxObject *v33; // r11
  FxObject *v34; // rcx
  unsigned __int16 m_ObjectSize; // ax
  char *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // r13d
  bool v40; // al
  FxPkgIo *v41; // rbx
  FxIoInCallerContext *v42; // rax
  char v43; // al
  unsigned __int8 v44; // r8
  unsigned __int8 *p_m_Reserved; // rbx
  unsigned int _a4; // ecx
  _FX_DRIVER_GLOBALS *v47; // rcx
  unsigned __int16 v48; // r9
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // ebx
  FxIoInCallerContext *v53; // rax
  FxIoInCallerContext *p_m_InCallerContextCallback; // rax
  _SLIST_ENTRY *p_FxPoolFrameworks; // rdx
  _SLIST_ENTRY *m_CallbackLockObjectPtr; // r8
  KIRQL v57; // al
  char *v58; // rcx
  KIRQL v59; // r9
  PSLIST_ENTRY *v60; // r8
  char *v61; // rdx
  unsigned __int64 v62; // rdx
  unsigned int v63; // eax
  _FX_DRIVER_GLOBALS *v64; // r13
  FxVerifierLock *v65; // rax
  FxIoQueue *v66; // rax
  FxIoQueue *v67; // r13
  FxIoQueue *v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  int v73; // eax
  FxVerifierLock *v74; // rcx
  signed __int32 v75; // edx
  unsigned int v76; // edx
  _LIST_ENTRY *Blink; // rcx
  _FX_DRIVER_GLOBALS *v78; // r10
  const char *_a5; // r8
  const void *globals; // rdx
  const void *v81; // rax
  FxVerifierLock *v82; // rcx
  __int64 v83; // r8
  unsigned __int16 v84; // r9
  FxDeviceBase *v85; // rbx
  _FX_DRIVER_GLOBALS *v86; // rcx
  const void *v87; // rax
  unsigned __int8 v88; // bl
  unsigned __int8 v89; // r8
  FxVerifierLock *v90; // rcx
  const _GUID *Offset; // [rsp+20h] [rbp-71h]
  bool v92; // [rsp+50h] [rbp-41h]
  char v93; // [rsp+51h] [rbp-40h]
  FxDeviceBase *v94; // [rsp+58h] [rbp-39h]
  FxRequest *ReservedRequest; // [rsp+60h] [rbp-31h] BYREF
  void *PPObject; // [rsp+68h] [rbp-29h] BYREF
  void *v97; // [rsp+70h] [rbp-21h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-19h] BYREF
  void *v99; // [rsp+80h] [rbp-11h] BYREF
  FxPkgIo *v100; // [rsp+88h] [rbp-9h]
  char *p_m_SpinLock; // [rsp+90h] [rbp-1h]
  FxIoInCallerContext *InCallerContextInfo; // [rsp+98h] [rbp+7h]
  _FX_DRIVER_GLOBALS *v103; // [rsp+A0h] [rbp+Fh]
  _SLIST_ENTRY *v104; // [rsp+A8h] [rbp+17h]
  _IRP *ppIrp; // [rsp+B0h] [rbp+1Fh] BYREF
  _LIST_ENTRY *Caller; // [rsp+E8h] [rbp+57h]
  unsigned __int8 PreviousIrql; // [rsp+F8h] [rbp+67h] BYREF

  v5 = 0LL;
  v97 = 0LL;
  InCallerContextInfo = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  v10 = 0LL;
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4098 )
  {
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, (void *)Device, 0x1002u, v10);
    v9 = (FxDevice *)PPObject;
  }
  m_Globals = v9->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + (unsigned int)((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64))PfnKeGetCurrentProcessorNumberEx)(
                                                      0LL,
                                                      Device,
                                                      v10)
                                    * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
    v9 = (FxDevice *)PPObject;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v12 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v13) = 0;
  if ( (Queue & 1) != 0 )
  {
    v13 = *(unsigned __int16 *)v12;
    v12 -= v13;
  }
  if ( *(_WORD *)(v12 + 8) == 4099 )
  {
    v97 = (void *)v12;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v12, &v97, (void *)Queue, 0x1003u, v13);
    v9 = (FxDevice *)PPObject;
    v12 = (unsigned __int64)v97;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, Caller);
  v14 = Flags;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v51 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, v9, Irp, (FxIoQueue *)v12, v14);
    v52 = v51;
    if ( v51 < 0 )
    {
      Irp->IoStatus.Status = v51;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v52;
    }
    v12 = (unsigned __int64)v97;
    v9 = (FxDevice *)PPObject;
  }
  if ( v9->m_ParentDevice == *(FxDevice **)(v12 + 96) )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v16 = --Irp->Tail.Overlay.CurrentStackLocation;
    PPObject = (void *)*((_QWORD *)PPObject + 28);
    v16->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
    v12 = (unsigned __int64)v97;
    v9 = (FxDevice *)PPObject;
  }
  if ( (v14 & 1) != 0 )
  {
    v53 = *(FxIoInCallerContext **)(v12 + 360);
    if ( v53 )
      p_m_InCallerContextCallback = v53 + 3;
    else
      p_m_InCallerContextCallback = &v9->m_PkgIo->m_InCallerContextCallback;
    InCallerContextInfo = p_m_InCallerContextCallback;
  }
  m_PkgIo = v9->m_PkgIo;
  v100 = m_PkgIo;
  v93 = 0;
  v92 = v12 && *(_BYTE *)(v12 + 136);
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    m_PkgIo = v100;
    v93 = 1;
  }
  if ( v12 && (v18 = *(_QWORD *)(v12 + 360)) != 0 )
    p_m_ExecutionLevel = v18 + 32;
  else
    p_m_ExecutionLevel = (__int64)&m_PkgIo->m_DeviceBase[2].m_ExecutionLevel;
  m_DeviceBase = m_PkgIo->m_DeviceBase;
  v21 = 0LL;
  v94 = m_DeviceBase;
  v22 = p_m_ExecutionLevel;
  ReservedRequest = 0LL;
  v23 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v103 = m_DeviceBase->m_Globals;
  if ( v23 && *(_WORD *)(v23 + 8) == 4354 && *(_BYTE *)(v23 + 1451) )
  {
    p_m_SpinLock = (char *)&m_DeviceBase[2].m_SpinLock;
    v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v24 )
      goto LABEL_31;
    v50 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))p_m_SpinLock + 6))(
            *((unsigned int *)p_m_SpinLock + 9),
            *((unsigned int *)p_m_SpinLock + 11),
            *((unsigned int *)p_m_SpinLock + 10));
    goto LABEL_84;
  }
  ++HIDWORD(m_DeviceBase[2].m_ParentObject);
  v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
  if ( !v24 )
  {
    ++LODWORD(v94[2].m_ChildEntry.Flink);
    v50 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v94[2].m_DeviceBase)(
            HIDWORD(v94[2].m_ChildEntry.Blink),
            HIDWORD(v94[2].m_DisposeSingleEntry.Next),
            LODWORD(v94[2].m_DisposeSingleEntry.Next));
LABEL_84:
    v24 = (PSLIST_ENTRY)v50;
  }
LABEL_31:
  if ( v24 )
  {
    v25 = v103;
    if ( v103->FxPoolTrackingOn )
    {
      p_FxPoolFrameworks = (_SLIST_ENTRY *)&v103->FxPoolFrameworks;
      p_m_SpinLock = (char *)&v103->FxPoolFrameworks;
      m_CallbackLockObjectPtr = (_SLIST_ENTRY *)v94[2].m_CallbackLockObjectPtr;
      *((_DWORD *)&v24[1].Next + 2) = v103->Tag;
      *((_DWORD *)&v24[2].Next + 2) = ExDefaultNonPagedPoolType;
      v24[3].Next = (_SLIST_ENTRY *)Caller;
      v104 = m_CallbackLockObjectPtr;
      v24[1].Next = p_FxPoolFrameworks;
      v24[2].Next = m_CallbackLockObjectPtr;
      SpinLock = &v25->FxPoolFrameworks.NonPagedLock.m_Lock;
      v57 = KeAcquireSpinLockRaiseToDpc(&v25->FxPoolFrameworks.NonPagedLock.m_Lock);
      v58 = p_m_SpinLock;
      v59 = v57;
      v60 = (PSLIST_ENTRY *)*((_QWORD *)p_m_SpinLock + 3);
      v61 = p_m_SpinLock + 16;
      v24->Next = (_SLIST_ENTRY *)(p_m_SpinLock + 16);
      *((_QWORD *)&v24->Next + 1) = v60;
      if ( *v60 != (PSLIST_ENTRY)v61 )
        __fastfail(3u);
      *v60 = v24;
      *((_QWORD *)v61 + 1) = v24;
      ++*((_DWORD *)v58 + 32);
      v62 = (unsigned __int64)v104 + *((_QWORD *)v58 + 14);
      v63 = *((_DWORD *)v58 + 32);
      *((_QWORD *)v58 + 14) = v62;
      if ( v62 > *((_QWORD *)v58 + 17) )
        *((_QWORD *)v58 + 17) = v62;
      if ( v63 > *((_DWORD *)v58 + 38) )
        *((_DWORD *)v58 + 38) = v63;
      KeReleaseSpinLock(SpinLock, v59);
      v25 = v103;
      v26 = v24 + 4;
    }
    else
    {
      v26 = v24;
    }
    v26->Next = v24;
    v27 = (FxRequest *)&v26[1];
    *((_QWORD *)&v26->Next + 1) = v25;
    if ( !p_m_ExecutionLevel )
      v22 = (__int64)&v94[2].m_ExecutionLevel;
    if ( v25->FxVerifierHandle )
    {
      memset(&v26[1], 0, 0x20uLL);
      *(_DWORD *)(&v27->m_ObjectState + 1) = 1146058822;
      v27 = (FxRequest *)((char *)v27 + 32);
    }
    v27[1].m_Globals = 0LL;
    *(_QWORD *)&v27[1].m_ObjectFlags = 0LL;
    v27[1].m_ChildListHead.Flink = 0LL;
    v27[1].m_ChildListHead.Blink = 0LL;
    *(_QWORD *)&v27[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    *(_QWORD *)&v27[1].m_Type = v27;
    if ( v22 )
    {
      v28 = *(_QWORD *)(v22 + 48);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v22 + 40);
        if ( !v29 )
          v29 = *(_QWORD *)(v28 + 16);
        memset(&v27[1].m_SpinLock.m_Lock, 0, (v29 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v27[1].m_ChildListHead.Blink = *(_LIST_ENTRY **)(v22 + 48);
    }
    if ( v27 )
    {
      v30 = v94;
      v27->m_Globals = v94->m_Globals;
      v27->__vftable = (FxRequest_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v27->m_Type = 24121352;
      v27->m_SpinLock.m_Lock = 0LL;
      v27->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v27->m_Refcnt = 1;
      *(_DWORD *)&v27->m_ObjectFlags = 0x10000;
      v27->m_ParentObject = 0LL;
      v27->m_ChildListHead.Blink = &v27->m_ChildListHead;
      v27->m_ChildListHead.Flink = &v27->m_ChildListHead;
      v27->m_ChildEntry.Blink = &v27->m_ChildEntry;
      v27->m_ChildEntry.Flink = &v27->m_ChildEntry;
      v31 = v27->m_Globals;
      v27->m_DisposeSingleEntry.Next = 0LL;
      v27->m_DeviceBase = 0LL;
      if ( v31->FxVerifierOn )
      {
        FxObject::Vf_VerifyConstruct(v27, (_FX_DRIVER_GLOBALS *)1, 0);
        v30 = v94;
      }
      v27->__vftable = (FxRequest_vtbl *)&FxNonPagedObject::`vftable';
      v27->m_NPLock.m_Lock = 0LL;
      v27->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v27->m_ObjectFlags) < 0 )
      {
        v64 = v27->m_Globals;
        SpinLock = (PKSPIN_LOCK)v64;
        if ( v64->FxVerifierLock )
        {
          v65 = (FxVerifierLock *)FxPoolAllocator(
                                    v64,
                                    (_LIST_ENTRY *)&v64->FxPoolFrameworks,
                                    ExDefaultNonPagedPoolType,
                                    0xB0uLL,
                                    v64->Tag,
                                    Caller);
          if ( v65 && (FxVerifierLock::FxVerifierLock(v65, v64, v27), (v67 = v66) != 0LL) )
          {
            if ( BYTE2(v66->IFxHasCallbacks::__vftable) )
            {
              v66->m_SpinLock.m_Lock = 0LL;
              *(_DWORD *)&v66->m_SpinLock.m_DbgFlagIsInitialized = 1;
              LODWORD(v66->m_ParentObject) = 0;
              KeInitializeEvent((PRKEVENT)&v66->m_ChildEntry, SynchronizationEvent, 0);
              LOBYTE(v67->m_ChildListHead.Blink) = 1;
            }
            v68 = v67;
          }
          else
          {
            WPP_IFR_SF_d(
              (_FX_DRIVER_GLOBALS *)SpinLock,
              2u,
              0x12u,
              0xCu,
              WPP_FxVerifierLock_hpp_Traceguids,
              -1073741670);
            v68 = 0LL;
          }
          v30 = v94;
          v27[-1].m_ForwardProgressQueue = v68;
        }
      }
      v27->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
      v27->m_Irp.m_Irp = Irp;
      v27->m_CancelRoutine.m_Cancel = 0LL;
      v27->m_CompletionRoutine.m_Completion = 0LL;
      *(_WORD *)&v27->m_TargetFlags = 0;
      v27->m_CanComplete = 1;
      v27->m_Target = 0LL;
      v27->m_TargetCompletionContext = 0LL;
      v27->m_Completed = v27->m_Irp.m_Irp == 0LL;
      v27->m_Canceled = 0;
      v27->m_PriorityBoost = 0;
      v27->m_RequestContext = 0LL;
      v27->m_Timer = 0LL;
      v27->m_CsqContext.Irp = (_IRP *)&v27->120;
      v27->m_ListEntry.Flink = (_LIST_ENTRY *)&v27->120;
      v27->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v27->m_SystemBufferOffset = 216LL;
      v27->m_IrpQueue = 0LL;
      v27->m_IrpCompletionReferenceCount = 0;
      v27->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v27->m_OutputBufferOffset = 232;
      v27->m_CompletionState = 0;
      v27->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)&FxRequestSystemBuffer::`vftable';
      v27->m_SystemBuffer.m_Buffer = 0LL;
      v27->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)&FxRequestOutputBuffer::`vftable';
      v27->m_OutputBuffer.m_Buffer = 0LL;
      v27->m_IoQueue = 0LL;
      v27->m_PowerStopState = 0;
      v27->m_OwnerListEntry.Blink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry.Flink = &v27->m_OwnerListEntry;
      v27->m_OwnerListEntry2.Blink = &v27->m_OwnerListEntry2;
      v27->m_OwnerListEntry2.Flink = &v27->m_OwnerListEntry2;
      v27->m_ForwardProgressList.Blink = &v27->m_ForwardProgressList;
      v27->m_ForwardProgressList.Flink = &v27->m_ForwardProgressList;
      v27->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
      v27->m_Presented = 0;
      *(_WORD *)&v27->m_Reserved = 0;
      v27->m_ForwardProgressQueue = 0LL;
      v27->m_InternalContext = 0LL;
      v27->m_DeviceBase = v30->m_DeviceBase;
      FxRequest::AssignMemoryBuffers(v27, (_WDF_DEVICE_IO_TYPE)v30[1].m_Refcnt);
      if ( v33->m_Globals->FxRequestParentOptimizationOn )
      {
        v34 = 0LL;
        v99 = 0LL;
        if ( !v27->m_ObjectSize )
        {
          v39 = -1073741816;
LABEL_129:
          WPP_IFR_SF_d(v33->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v39);
          FxObject::DeleteFromFailedCreate(v27);
          goto LABEL_63;
        }
        if ( !p_m_ExecutionLevel )
        {
LABEL_61:
          v27->m_ObjectFlags |= 8u;
          v39 = 0;
LABEL_62:
          v21 = v27;
          ReservedRequest = v27;
          goto LABEL_63;
        }
        if ( *(_DWORD *)(p_m_ExecutionLevel + 24) == 2 )
        {
          FxObject::MarkPassiveCallbacks(v27, ObjectLock);
          v34 = (FxObject *)v99;
        }
        v32 = *(_QWORD *)(p_m_ExecutionLevel + 32);
        if ( v32 )
        {
          v34 = (FxObject *)(~v32 & 0xFFFFFFFFFFFFFFF8uLL);
          LOWORD(v69) = 0;
          if ( (v32 & 1) != 0 )
          {
            v69 = LOWORD(v34->__vftable);
            v34 = (FxObject *)((char *)v34 - v69);
          }
          if ( v34->m_Type == 4096 )
          {
            v99 = v34;
          }
          else
          {
            FxObjectHandleGetPtrQI(v34, &v99, (void *)v32, 0x1000u, v69);
            v34 = (FxObject *)v99;
          }
        }
        if ( !v34 || (v39 = FxObject::AssignParentObject(v27, v34), v39 >= 0) )
        {
          m_ObjectSize = v27->m_ObjectSize;
          if ( m_ObjectSize )
            v36 = (char *)v27 + m_ObjectSize;
          else
            v36 = 0LL;
          v37 = *(_QWORD *)(p_m_ExecutionLevel + 16);
          if ( v37 )
            *((_QWORD *)v36 + 3) = v37;
          v38 = *(_QWORD *)(p_m_ExecutionLevel + 8);
          if ( v38 )
          {
            *((_QWORD *)v36 + 2) = v38;
            v27->m_ObjectFlags |= 0x400u;
          }
          goto LABEL_61;
        }
      }
      else
      {
        v39 = FxObject::Commit(v27, (_WDF_OBJECT_ATTRIBUTES *)p_m_ExecutionLevel, 0LL, v33, 0);
      }
      if ( v39 >= 0 )
        goto LABEL_62;
      v33 = v94;
      goto LABEL_129;
    }
  }
  v39 = -1073741670;
  WPP_IFR_SF_d(v94->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
LABEL_63:
  v40 = v92;
  v41 = v100;
  if ( v92 )
  {
    if ( v39 < 0 )
    {
LABEL_131:
      if ( v41->m_Filter && !v12 )
        goto LABEL_147;
      if ( v40 )
      {
        v70 = FxIoQueue::GetReservedRequest((FxIoQueue *)v12, Irp, &ReservedRequest);
        v39 = v70;
        if ( v70 == 259 )
          goto LABEL_80;
        if ( v70 >= 0 )
          goto LABEL_136;
      }
      else
      {
        WPP_IFR_SF_d(
          v41->m_Globals,
          2u,
          0xDu,
          0x10u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
          v39);
      }
LABEL_147:
      Irp->IoStatus.Status = v39;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      goto LABEL_80;
    }
    if ( (v100->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      v39 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v100, v21);
    v40 = v92;
  }
  if ( v39 < 0 )
    goto LABEL_131;
  if ( v40 && *(_QWORD *)(*(_QWORD *)(v12 + 128) + 16LL) )
  {
    v21->m_Presented = 1;
    v71 = v21->m_ObjectSize ? (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    v72 = *(_WORD *)(v12 + 10) ? v12 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)(v12 + 128) + 16LL))(v72, v71) < 0 )
    {
      FxRequest::FreeRequest(v21);
      ReservedRequest = 0LL;
      v73 = FxIoQueue::GetReservedRequest((FxIoQueue *)v12, Irp, &ReservedRequest);
      v39 = v73;
      if ( v73 == 259 )
        goto LABEL_80;
      if ( v73 < 0 )
        goto LABEL_147;
LABEL_136:
      v21 = ReservedRequest;
    }
  }
  v42 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v21->m_Reserved )
  {
    v21->m_InternalContext = (void *)v12;
    v39 = FxPkgIo::DispathToInCallerContextCallback(v41, v42, v21, Irp);
    goto LABEL_80;
  }
  v43 = *(_BYTE *)(v12 + 24);
  SpinLock = (PKSPIN_LOCK)v21;
  if ( v43 < 0 && (v74 = *(FxVerifierLock **)(v12 - 24)) != 0LL )
    FxVerifierLock::Lock(v74, &PreviousIrql, v32);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 112));
  p_m_Reserved = &v21->m_Reserved;
  if ( v21->m_Reserved )
  {
    v75 = _InterlockedExchangeAdd(&v21->m_Refcnt, 1u);
    v21 = ReservedRequest;
    v76 = v75 + 1;
    if ( SLOBYTE(ReservedRequest->m_ObjectFlags) < 0 )
    {
      Blink = ReservedRequest[-1].m_ForwardProgressList.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x50647746,
          2286,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v76);
    }
  }
  _a4 = *(_DWORD *)(v12 + 188);
  if ( (_a4 & 1) == 0 )
  {
    v78 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
    v39 = -1073741436;
    if ( v78->FxVerboseOn )
    {
      _a5 = "power stopping (Drain) in progress,";
      if ( (_a4 & 0x10000) == 0 )
        _a5 = &a5;
      if ( v21->m_ObjectSize )
        globals = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        globals = 0LL;
      if ( *(_WORD *)(v12 + 10) )
        v81 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v81 = 0LL;
      WPP_IFR_SF_qLsqd(v78, 5u, (unsigned int)_a5, 0x27u, Offset, v81, _a4, _a5, globals, -1073741436);
    }
    if ( *(char *)(v12 + 24) < 0 && (v82 = *(FxVerifierLock **)(v12 - 24)) != 0LL )
      FxVerifierLock::Unlock(v82, PreviousIrql, v44);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 112), PreviousIrql);
    v21->m_Irp.m_Irp->IoStatus.Information = 0LL;
    v85 = v21->m_DeviceBase;
    v86 = v21->m_Globals;
    if ( v86->FxVerboseOn )
    {
      if ( v21->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqxd(
        v86,
        v21->m_Irp.m_Irp->IoStatus.Information,
        v83,
        0xBu,
        Offset,
        v5,
        v21->m_Irp.m_Irp,
        v21->m_Irp.m_Irp->IoStatus.Information,
        -1073741436);
    }
    if ( v85 )
      v21->m_PriorityBoost = HIBYTE(v85[1].m_Globals);
    else
      v21->m_PriorityBoost = 0;
    FxRequest::CompleteInternal(v21, (_FX_DRIVER_GLOBALS *)0xC0000184LL, v83, v84);
    v21->Release(v21, (void *)1886220099, 2313, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    goto LABEL_80;
  }
  v47 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  if ( v47->FxVerboseOn )
  {
    if ( *(_WORD *)(v12 + 10) )
      v87 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v87 = 0LL;
    if ( v21->m_ObjectSize )
      v5 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qq(
      v47,
      5u,
      0xDu,
      0x28u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v5,
      v87);
  }
  FxRequest::GetIrp(v21, &ppIrp);
  v21->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( *p_m_Reserved )
  {
    if ( *(_DWORD *)(v12 + 368) )
    {
      v88 = PreviousIrql;
      FxIoQueue::InsertNewRequestLocked((FxIoQueue *)v12, (FxRequest **)&SpinLock, PreviousIrql);
      if ( *(char *)(v12 + 24) < 0 && (v90 = *(FxVerifierLock **)(v12 - 24)) != 0LL )
        FxVerifierLock::Unlock(v90, v88, v89);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 112), v88);
      goto LABEL_79;
    }
    v21 = ReservedRequest;
  }
  FxIoQueue::DispatchEvents((FxIoQueue *)v12, PreviousIrql, v21, v48);
LABEL_79:
  v39 = 259;
LABEL_80:
  if ( v93 )
    KeLeaveCriticalRegion();
  return (unsigned int)v39;
}
