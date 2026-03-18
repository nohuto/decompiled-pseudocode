/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B99D0
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A39A4 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EA834 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0127548 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

void UmfdHostLifeTimeManager::TerminateUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v3);
  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0)
    && UmfdHostLifeTimeManager::s_UmfdHostProcess
    && ObOpenObjectByPointer(
         UmfdHostLifeTimeManager::s_UmfdHostProcess,
         0x200u,
         0LL,
         1u,
         (POBJECT_TYPE)PsProcessType,
         0,
         &ProcessHandle) >= 0 )
  {
    ZwTerminateProcess(ProcessHandle, 258);
    ZwClose(ProcessHandle);
  }
  if ( v3 )
  {
    GreReleasePushLockShared(v3);
    KeLeaveCriticalRegion();
  }
}
