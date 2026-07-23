/*
 * XREFs of CmFreezeRegistry @ 0x140602C74
 * Callers:
 *     NtFreezeRegistry @ 0x1401B2E94 (NtFreezeRegistry.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDisableLazyFlush @ 0x1400B3DE8 (CmpDisableLazyFlush.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  BOOLEAN v5; // si
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *NextActiveHive; // rax
  __int64 v17; // rbx
  int v18; // eax
  struct _KTHREAD *v19; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _EX_RUNDOWN_REF *v25; // rbx

  v2 = 0;
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v6, v7);
LABEL_3:
    CmpUnlockRegistry();
    v2 = -1073741431;
    goto LABEL_4;
  }
  if ( CmpFreezeThawState )
    goto LABEL_3;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v17 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v17 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (NextActiveHive[18] & 3) == 0 )
    {
      *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
      *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
      *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
      v13 = NextActiveHive[8];
      *(_QWORD *)(v13 + 112) = 0LL;
      *(_QWORD *)(v13 + 120) = 0LL;
      v14 = *(_QWORD *)(v17 + 64);
      *(_QWORD *)(v14 + 148) = 0LL;
      *(_QWORD *)(v14 + 156) = 0LL;
      v15 = *(_QWORD *)(v17 + 64);
      *(_QWORD *)(v15 + 128) = 0LL;
      *(_QWORD *)(v15 + 136) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v17 + 64) + 164LL) = 0;
      if ( (*(_DWORD *)(v17 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v17 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v17 + 2840));
        HvMarkBaseBlockDirty(v17);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v17 + 2840));
      }
    }
  }
  v18 = CmFreezeThawTimeoutInSeconds;
  CmpFreezeThawState = 1;
  if ( a1 )
    v18 = a1;
  KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v18, 0, 0, (__int64)&CmpFreezeThawDpc);
  CmpDisableLazyFlush(2u);
  CmpUnlockRegistry();
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  for ( j = 0LL; ; j = v25 )
  {
    v21 = CmpGetNextActiveHive(j);
    v25 = (struct _EX_RUNDOWN_REF *)v21;
    if ( !v21 )
      break;
    if ( (v21[18] & 3) == 0 )
    {
      v2 = CmpFlushHive((ULONG_PTR)v21, 0xDu);
      if ( v2 < 0 )
      {
        ExReleaseRundownProtection(v25 + 347);
        CmThawRegistry();
        v2 = -1073741491;
        break;
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
LABEL_4:
  if ( v5 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  return (unsigned int)v2;
}
