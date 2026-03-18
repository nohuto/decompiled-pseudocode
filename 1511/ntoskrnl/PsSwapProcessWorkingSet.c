/*
 * XREFs of PsSwapProcessWorkingSet @ 0x14063EE24
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PspComputeExecutionState @ 0x1403E90FC (PspComputeExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  signed __int32 DirectoryTableBase; // eax
  unsigned int v9; // ebx
  signed __int32 v10; // edx
  unsigned int v11; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
  v6 = Process[1].Affinity.Bitmap[16];
  if ( v6 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    v5 = PspComputeExecutionState(v6);
  }
  if ( a2 )
    v7 = v5 | 2;
  else
    v7 = v5 & 0xFFFFFFFD;
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v9 = v7 << 28;
  do
  {
    v10 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           v9 | DirectoryTableBase & 0xCFFFFFFF,
                           DirectoryTableBase);
  }
  while ( DirectoryTableBase != v10 );
  if ( v6 )
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  v11 = PspChangeProcessExecutionState(Process);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v11;
}
