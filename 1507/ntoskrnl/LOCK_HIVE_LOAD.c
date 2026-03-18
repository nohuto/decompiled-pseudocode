/*
 * XREFs of LOCK_HIVE_LOAD @ 0x14044626C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_HIVE_LOAD(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpLoadHiveLock, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (ULONG_PTR)&CmpLoadHiveLock, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
