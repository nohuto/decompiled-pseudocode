/*
 * XREFs of CmpTryToRundownHive @ 0x1400D2794
 * Callers:
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpUnblockPushLock @ 0x1400D2C68 (ExpUnblockPushLock.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmCloseRmHandle @ 0x1404EDFBC (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EDFDC (CmCloseTmHandle.c)
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x14065A634 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 */

char CmpTryToRundownHive(__int64 a1, _DWORD *a2, char *a3, ...)
{
  char v3; // r12
  char v7; // r15
  char v8; // r14
  unsigned __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v12; // rax
  unsigned __int64 v13; // rtt
  bool v14; // zf
  __int64 v15; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v20; // r14
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rcx
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  int v34; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v35[10]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+18h] BYREF
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, _QWORD);
  v3 = *a3;
  v34 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( *a3 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v9 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v11;
      if ( !v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(CurrentThread);
      }
    }
    v12 = KeGetCurrentThread();
    *a3 = 0;
    --v12->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v27);
      }
      goto LABEL_28;
    }
    v14 = *a2 == 2;
    *a3 = 1;
    if ( !v14 && ((unsigned int)CmpSearchForOpenSubKeys(a2, 0LL, a3, 0LL, v34) || *a2 != 2) )
      goto LABEL_28;
    if ( !v7 )
    {
      a2[1] |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedAdd(&CmpActiveHiveRundownCount, 1u);
      v7 = 1;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2776), 1LL, 0LL);
      if ( v17 >= 2 )
        ExfWaitForRundownProtectionRelease(a1 + 2776, v17);
      _InterlockedExchange64((volatile __int64 *)(a1 + 2776), 1LL);
      goto LABEL_18;
    }
    v15 = *(_QWORD *)(a1 + 5400);
    if ( !v15 || v8 )
      break;
    if ( (int)CmSnapshotRMTxArray(v15, &v36, v35) < 0 )
      goto LABEL_28;
    CmpUnlockRegistry();
    v19 = v36;
    if ( v36 )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpRollbackTransactionArray(v19, v35[0], (__int64 *)va, &v34) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v29) = 1;
        CmpLockRegistryFreezeAware(v29);
LABEL_28:
        if ( v7 )
        {
          a2[1] &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)(a1 + 2776), 0LL);
          if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v33, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
          }
        }
        if ( *a3 )
        {
          _m_prefetchw(&CmpShutdownRundown);
          v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v24 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v25 = KeGetCurrentThread();
          v26 = v25->KernelApcDisable + 1;
          v25->KernelApcDisable = v26;
          if ( !v26
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
            && !v25->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v25);
          }
          *a3 = 0;
        }
        return 0;
      }
      if ( (_BYTE)v37 == 1 )
        CmObliterateRMTxArray(*(_QWORD *)(a1 + 5400));
LABEL_18:
      LOCK_HIVE_LOAD();
      LOBYTE(v18) = 1;
      CmpLockRegistryFreezeAware(v18);
    }
    else
    {
      v20 = (void *)CmCloseRmHandle(*(_QWORD *)(a1 + 5400), 0LL);
      v21 = (void *)CmCloseTmHandle(*(_QWORD *)(a1 + 5400));
      UNLOCK_HIVE_LOAD();
      if ( v20 )
        ZwClose(v20);
      if ( v21 )
        ZwClose(v21);
      LOCK_HIVE_LOAD();
      LOBYTE(v22) = 1;
      CmShutdownCmRM(*(_QWORD *)(a1 + 5400), v22);
      LOBYTE(v23) = 1;
      CmpLockRegistryFreezeAware(v23);
      v8 = 1;
    }
  }
  if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v33, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  if ( !v3 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v30 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v31);
    }
    *a3 = 0;
  }
  return 1;
}
