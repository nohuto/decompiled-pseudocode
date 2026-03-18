/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617A28
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617474 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1400C8450 (KeAbPreWait.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     VrpLockDiffHiveEntry @ 0x14061771C (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14061798C (VrpUnlockDiffHiveEntry.c)
 */

_BYTE *__fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  KeInitializeEvent((PRKEVENT)&v6[1], SynchronizationEvent, 0);
  v6[0] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v6;
  VrpUnlockDiffHiveEntry(a1);
  v2 = KeAbPreAcquire(a1 + 40, 0LL, 0);
  v4 = v2;
  if ( v2 )
    KeAbPreWait(v2, v3);
  KeWaitForSingleObject(&v6[1], Executive, 0, 0, 0LL);
  if ( v4 )
  {
    KeAbPreAcquire(a1 + 40, v4, 0);
    KeAbPostReleaseEx(a1 + 40, v4);
  }
  return VrpLockDiffHiveEntry(a1);
}
