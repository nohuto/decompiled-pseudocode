/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140498D48
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400D2A60 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  _DWORD *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v4; // zf
  char v5; // al
  ULONG_PTR v6; // rdi
  char v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 2;
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 22;
  v2 = *(_DWORD **)(a1 + 4104);
  if ( (*(_DWORD *)(a1 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 23;
LABEL_17:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    return CmpDereferenceHive(a1);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 24;
    goto LABEL_17;
  }
  v4 = *(_BYTE *)(a1 + 4112) == 0;
  v8 = 1;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 25;
LABEL_9:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
    ++CmpActiveAppHiveUnloadCount;
  v5 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v2, &v8);
  *(_QWORD *)(a1 + 4120) = 0LL;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 4104);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 30;
    if ( (int)CmUnloadKey(v6, 0LL, &v9) >= 0 )
    {
      CmpLockRegistry();
      CmpDereferenceKeyControlBlock(v6);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v8 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return CmpDereferenceHive(a1);
}
