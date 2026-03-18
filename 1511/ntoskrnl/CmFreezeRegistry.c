/*
 * XREFs of CmFreezeRegistry @ 0x1405188CC
 * Callers:
 *     NtFreezeRegistry @ 0x14012F37C (NtFreezeRegistry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     CmpDisableLazyFlush @ 0x1400F46E8 (CmpDisableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v4; // si
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  struct _KTHREAD *v12; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rbx

  v2 = 0;
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v4 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_22;
  }
  if ( CmpFreezeThawState )
  {
LABEL_22:
    CmpUnlockRegistry();
    v2 = -1073741431;
    goto LABEL_18;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v7 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v7 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (NextActiveHive[18] & 3) == 0 )
    {
      *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
      *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
      *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
      v8 = NextActiveHive[8];
      *(_QWORD *)(v8 + 112) = 0LL;
      *(_QWORD *)(v8 + 120) = 0LL;
      v9 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v9 + 148) = 0LL;
      *(_QWORD *)(v9 + 156) = 0LL;
      v10 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v10 + 128) = 0LL;
      *(_QWORD *)(v10 + 136) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v7 + 64) + 164LL) = 0;
      if ( (*(_DWORD *)(v7 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v7 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v7 + 2840));
        HvMarkBaseBlockDirty(v7);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v7 + 2840));
      }
    }
  }
  v11 = CmFreezeThawTimeoutInSeconds;
  CmpFreezeThawState = 1;
  if ( a1 )
    v11 = a1;
  KeSetTimer(&CmpFreezeThawTimer, (LARGE_INTEGER)(-10000000LL * v11), &CmpFreezeThawDpc);
  CmpDisableLazyFlush(2u);
  CmpUnlockRegistry();
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  for ( j = 0LL; ; j = v15 )
  {
    v14 = CmpGetNextActiveHive(j);
    v15 = (struct _EX_RUNDOWN_REF *)v14;
    if ( !v14 )
      break;
    if ( (v14[18] & 3) == 0 )
    {
      v2 = CmpFlushHive((ULONG_PTR)v14, 0xDu);
      if ( v2 < 0 )
      {
        ExReleaseRundownProtection_0(v15 + 347);
        CmThawRegistry();
        v2 = -1073741491;
        break;
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_18:
  if ( v4 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v2;
}
