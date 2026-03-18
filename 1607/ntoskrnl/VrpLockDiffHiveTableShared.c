/*
 * XREFs of VrpLockDiffHiveTableShared @ 0x1406177D8
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1406172B8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 VrpLockDiffHiveTableShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, 0);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&gLoadedDiffHivesLock, v1, (ULONG_PTR)&gLoadedDiffHivesLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
