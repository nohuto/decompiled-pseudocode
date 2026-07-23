/*
 * XREFs of PsSwapProcessWorkingSet @ 0x14067D570
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     PspComputeExecutionState @ 0x14046940C (PspComputeExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  unsigned int v9; // ebx
  signed __int32 v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  PspLockProcessShared(BugCheckParameter1, (__int64)CurrentThread);
  v6 = *(_QWORD *)(BugCheckParameter1 + 944);
  if ( v6 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    v5 = PspComputeExecutionState(v6);
  }
  if ( a2 )
    v7 = v5 | 2;
  else
    v7 = v5 & 0xFFFFFFFD;
  v8 = *(_DWORD *)(BugCheckParameter1 + 768);
  v9 = v7 << 28;
  do
  {
    v10 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 768), v9 | v8 & 0xCFFFFFFF, v8);
  }
  while ( v8 != v10 );
  if ( v6 )
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter1 + 728));
  KeAbPostRelease(BugCheckParameter1 + 728);
  v11 = PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  return v11;
}
