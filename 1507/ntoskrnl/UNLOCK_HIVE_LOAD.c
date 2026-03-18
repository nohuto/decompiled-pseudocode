/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x140446020
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall UNLOCK_HIVE_LOAD(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v3; // rcx
  ULONG_PTR v4; // rtt
  __int16 v5; // ax

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  _m_prefetchw(&CmpLoadHiveLock);
  v3 = CmpLoadHiveLock - 16;
  if ( (CmpLoadHiveLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (CmpLoadHiveLock & 2) != 0
    || (v4 = CmpLoadHiveLock,
        v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpLoadHiveLock, v3, CmpLoadHiveLock)) )
  {
    ExfReleasePushLock(&CmpLoadHiveLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&CmpLoadHiveLock);
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
