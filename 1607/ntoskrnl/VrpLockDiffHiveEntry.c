/*
 * XREFs of VrpLockDiffHiveEntry @ 0x14061771C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617474 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617A28 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall VrpLockDiffHiveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 24);
  result = (_BYTE *)KeAbPreAcquire(a1 + 24, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
