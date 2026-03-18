/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B8DAC
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EFEB4 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C01181C4 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

void UmfdHostLifeTimeManager::TerminateUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v5);
  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0, v2, v3)
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
  if ( v5 )
  {
    GreReleasePushLockShared(v5);
    KeLeaveCriticalRegion();
  }
}
