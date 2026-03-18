/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1404EE17C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 */

void __fastcall CmpLateUnloadHiveWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  char v8; // al
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rtt
  __int16 v24; // ax
  unsigned __int64 v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  signed __int32 v28[18]; // [rsp+0h] [rbp-48h] BYREF
  char v29; // [rsp+50h] [rbp+8h] BYREF
  int v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = 2;
  LOCK_HIVE_LOAD(a1, a2, a3, a4);
  CmpLockRegistryFreezeAware(1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 22;
  v5 = *(_DWORD **)(a1 + 4104);
  if ( (*(_DWORD *)(a1 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 23;
LABEL_22:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v18, v17);
LABEL_19:
    CmpDereferenceHive(a1);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 24;
    goto LABEL_22;
  }
  v29 = 1;
  if ( *(_BYTE *)(a1 + 4112) )
  {
    if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
      ++CmpActiveAppHiveUnloadCount;
    v8 = CmpTryToRundownHive(a1, v5, &v29);
    *(_QWORD *)(a1 + 4120) = 0LL;
    if ( !v8 )
    {
      if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 && !--CmpActiveAppHiveUnloadCount )
      {
        _InterlockedOr(v28, 0);
        if ( CmpActiveAppHiveUnloadEvent )
          ExfUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL);
      }
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v16, v15);
      if ( v29 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v25 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v25 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v26 = KeGetCurrentThread();
        v27 = v26->KernelApcDisable + 1;
        v26->KernelApcDisable = v27;
        if ( !v27
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
          && !v26->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      goto LABEL_19;
    }
    v9 = *(_QWORD *)(a1 + 4104);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 30;
    if ( (int)CmUnloadKey(v9, 0LL, &v30) >= 0 )
    {
      CmpLockRegistry();
      CmpDereferenceKeyControlBlock(v9);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v11, v10);
    CmpDereferenceHive(a1);
    _m_prefetchw(&CmpShutdownRundown);
    v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14 )
      goto LABEL_12;
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 25;
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v22, v21);
    CmpDereferenceHive(a1);
    _m_prefetchw(&CmpShutdownRundown);
    v23 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v13 = KeGetCurrentThread();
    v24 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v24;
    if ( !v24 )
    {
LABEL_12:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
