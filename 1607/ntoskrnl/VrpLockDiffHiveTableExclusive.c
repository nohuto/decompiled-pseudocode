/*
 * XREFs of VrpLockDiffHiveTableExclusive @ 0x14061782C
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x140617090 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14061736C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *VrpLockDiffHiveTableExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, result, (ULONG_PTR)&gLoadedDiffHivesLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
