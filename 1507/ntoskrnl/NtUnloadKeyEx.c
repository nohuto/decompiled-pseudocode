/*
 * XREFs of NtUnloadKeyEx @ 0x1404ED38C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     CmpEnableLazyFlush @ 0x1400D2744 (CmpEnableLazyFlush.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmCloseRmHandle @ 0x1404EDFBC (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EDFDC (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x14065A634 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  void *v4; // r12
  PVOID v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v7; // r14
  unsigned __int64 v8; // rtt
  char v9; // r15
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS v11; // ebx
  NTSTATUS v12; // eax
  struct _KTHREAD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  struct _KTHREAD *v21; // rax
  signed __int64 v22; // rcx
  unsigned __int64 v23; // rtt
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // r8
  void *v30; // r15
  __int64 v31; // r14
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  signed int v35; // ebx
  struct _KTHREAD *v36; // rdx
  __int16 v37; // ax
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  unsigned __int64 v44; // rtt
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  __int16 v49; // ax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  signed __int32 v60[8]; // [rsp+0h] [rbp-100h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+40h] [rbp-C0h]
  char v63; // [rsp+41h] [rbp-BFh]
  _BYTE v64[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v65; // [rsp+44h] [rbp-BCh] BYREF
  PVOID v66; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD *v69[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v70[3]; // [rsp+68h] [rbp-98h] BYREF
  PVOID v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v73[6]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v74[48]; // [rsp+C0h] [rbp-40h] BYREF
  char v75; // [rsp+1A0h] [rbp+A0h]

  v4 = 0LL;
  v66 = 0LL;
  memset(v74, 0, 136);
  v62 = 0;
  v63 = 0;
  memset(v73, 0, 40);
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v68 = 0;
  v7 = 0;
  v75 = 0;
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v8 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v39 = KeGetCurrentThread();
    v40 = v39->KernelApcDisable + 1;
    v39->KernelApcDisable = v40;
    if ( !v40
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
  v9 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v41 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v41 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v42 = KeGetCurrentThread();
    v43 = v42->KernelApcDisable + 1;
    v42->KernelApcDisable = v43;
    if ( !v43
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
      && !v42->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741727;
  }
  v74[6] = 4;
  v74[0] = 5;
  v11 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          0LL,
          0x20006u,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          v74,
          (__int64 *)&v66);
  if ( v11 < 0 )
    goto LABEL_59;
  if ( Event )
  {
    v12 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v71, 0LL);
    v5 = v71;
    v11 = v12;
    if ( v12 >= 0 )
    {
      KeResetEvent((PRKEVENT)v71);
      goto LABEL_7;
    }
    ObfDereferenceObject(v66);
LABEL_59:
    _m_prefetchw(&CmpShutdownRundown);
    v44 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v44 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v45 = KeGetCurrentThread();
    v46 = v45->KernelApcDisable + 1;
    v45->KernelApcDisable = v46;
    if ( !v46 )
      goto LABEL_62;
    return v11;
  }
LABEL_7:
  v70[1] = v70;
  v70[0] = v70;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v73[0] = v66;
    v73[1] = v5;
    v11 = CmpCallCallBacks(0x22u, (__int64)v73, 1, 35LL, (__int64)v66, (__int64)v70);
  }
  if ( v11 < 0 )
  {
    if ( v11 == -1073740541 )
      v11 = 0;
LABEL_39:
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
      && !v36->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(v66);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( !v9 )
      return v11;
    goto LABEL_59;
  }
  v69[1] = v69;
  v69[0] = v69;
  CmpLockRegistry();
  CmpRunDownDelayDerefKCBEngine(0LL, 0LL);
  CmpUnlockRegistry();
  v14 = 1;
  CmpDelayCloseWorker(1LL);
  while ( 1 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v18 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v22 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
    v23 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  v22,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      break;
    }
    v65 = 6;
    LOCK_HIVE_LOAD(v22, v15, v16, v17);
    CmpLockRegistryFreezeAware(v14);
    v25 = *((_QWORD *)v66 + 1);
    v26 = *(_DWORD *)(v25 + 4);
    v27 = *(_QWORD *)(v25 + 32);
    if ( (v26 & 0x80u) != 0 )
    {
      v35 = -1073741790;
      goto LABEL_103;
    }
    if ( (v26 & 0x20000) != 0 )
    {
      LOBYTE(v24) = -(v14 & *((_BYTE *)v66 + 48));
      v35 = ((unsigned __int8)v14 & *((_BYTE *)v66 + 48)) != 0 ? -1073740763 : -1073741444;
LABEL_103:
      v9 = 1;
LABEL_29:
      if ( v75 )
      {
        if ( v35 < 0 )
        {
          *(_DWORD *)(v25 + 4) &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)(v27 + 2776), 0LL);
          *(_DWORD *)(v27 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 5500), 1u) & 0x7F) + 5504) = 4;
        }
        v24 = 0xFFFFFFFFLL;
        if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v60, 0);
          if ( CmpActiveHiveRundownEvent )
            ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
        }
      }
      goto LABEL_30;
    }
    if ( (v26 & 0x40000) != 0 && !v7 )
    {
      v9 = 1;
      v35 = -1073740763;
LABEL_30:
      if ( (v65 & 2) != 0 )
        CmpUnlockRegistry();
      if ( (v65 & 4) != 0 )
        UNLOCK_HIVE_LOAD(v24, v15);
      if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 && KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
      CmpSignalDeferredPosts(v69);
      v11 = CmPostCallbackNotification(35, (__int64)v66, v35, (__int64)v73, v70);
      goto LABEL_39;
    }
    CmpReportNotify(v25, v27, *(_DWORD *)(v25 + 40), 0LL, 4, (__int64)v69);
    CmpFlushNotify((__int64)v66, v14, (__int64)v69, v28);
    v24 = *(_QWORD *)(v25 + 32);
    v30 = 0LL;
    v31 = *(_QWORD *)(v27 + 5400);
    if ( (*(_DWORD *)(v24 + 5360) & 4) != 0
      || v24 == CmpMasterHive
      || (v24 = *(_QWORD *)(v24 + 64), *(_DWORD *)(v24 + 36) != *(_DWORD *)(v25 + 40)) )
    {
      v35 = (*(_BYTE *)(v27 + 5360) & 4) != 0 ? -1073741790 : -1073741811;
      goto LABEL_103;
    }
    if ( *(_DWORD *)v25 == 2 )
      goto LABEL_85;
    if ( (unsigned int)CmpSearchForOpenSubKeys(v25, 0LL, v29, 0LL, (_DWORD)Object) || *(_DWORD *)v25 != 2 )
    {
      *(_DWORD *)(v27 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 5500), v14) & 0x7F) + 5504) = 5;
LABEL_25:
      _m_prefetchw(&CmpShutdownRundown);
      v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v32 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v9 = 0;
      v35 = CmUnloadKeyEx(v25, v5, &v65);
      goto LABEL_29;
    }
    if ( v75 )
    {
LABEL_85:
      if ( !v31 || v62 )
        goto LABEL_25;
      v35 = CmSnapshotRMTxArray(v31, &v67, &v72);
      if ( v35 < 0 )
        goto LABEL_103;
      CmpUnlockRegistry();
      v55 = v67;
      if ( v67 )
      {
        UNLOCK_HIVE_LOAD(v54, v53);
        v4 = 0LL;
        v65 = 0;
        v35 = CmpRollbackTransactionArray(v55, v72, v64, &v68);
        if ( v35 < 0 )
          goto LABEL_103;
        v14 = 1;
        if ( v64[0] == 1 )
        {
          CmObliterateRMTxArray(v31);
          goto LABEL_98;
        }
        v7 = v75;
      }
      else
      {
        if ( v63 )
        {
          v14 = 1;
          LOBYTE(v53) = 1;
          CmShutdownCmRM(v31, v53);
          v62 = 1;
        }
        else
        {
          v30 = (void *)CmCloseRmHandle(v31, 0LL);
          v57 = CmCloseTmHandle(v56);
          v14 = v58 + 1;
          v4 = (void *)v57;
          v63 = v58 + 1;
        }
        UNLOCK_HIVE_LOAD(v59, v58);
        if ( v30 )
          ZwClose(v30);
        v7 = v75;
        if ( v4 )
        {
          ZwClose(v4);
          v4 = 0LL;
LABEL_98:
          v7 = v75;
        }
        else
        {
          v4 = 0LL;
        }
      }
    }
    else
    {
      *(_DWORD *)(v25 + 4) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v51, v50);
      _InterlockedAdd(&CmpActiveHiveRundownCount, v14);
      v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 2776), 1LL, 0LL);
      if ( v52 >= 2 )
        ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(v27 + 2776), v52);
      _InterlockedExchange64((volatile __int64 *)(v27 + 2776), 1LL);
      v14 = 1;
      v75 = 1;
      v4 = 0LL;
      v7 = 1;
      *(_DWORD *)(v27 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 5500), 1u) & 0x7F) + 5504) = 3;
    }
  }
  v47 = KeGetCurrentThread();
  v48 = v47->KernelApcDisable + 1;
  v47->KernelApcDisable = v48;
  if ( !v48
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
    && !v47->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v11 = -1073741431;
  v45 = KeGetCurrentThread();
  v49 = v45->KernelApcDisable + 1;
  v45->KernelApcDisable = v49;
  if ( v49 )
    return v11;
LABEL_62:
  if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 && !v45->SpecialApcDisable )
    KiCheckForKernelApcDelivery();
  return v11;
}
