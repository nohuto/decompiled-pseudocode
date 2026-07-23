/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140517B00
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14010B700 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  _DWORD *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // zf
  char v8; // al
  __int64 v9; // rdx
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // [rsp+30h] [rbp+8h] BYREF
  int v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = 2;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 24;
    goto LABEL_17;
  }
  v7 = *(_BYTE *)(a1 + 4112) == 0;
  v18 = 1;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 25;
LABEL_9:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    ExReleaseRundownProtection(&CmpShutdownRundown);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
    ++CmpActiveAppHiveUnloadCount;
  v8 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v2, &v18);
  *(_QWORD *)(a1 + 4120) = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 4104);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 30;
    if ( (int)CmUnloadKey(v10, v9, &v19) >= 0 )
    {
      CmpLockRegistry();
      CmpDereferenceKeyControlBlock(v10);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v18 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  return CmpDereferenceHive(a1);
}
