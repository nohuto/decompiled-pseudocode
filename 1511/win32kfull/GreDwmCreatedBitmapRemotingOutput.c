/*
 * XREFs of GreDwmCreatedBitmapRemotingOutput @ 0x1C014F3C4
 * Callers:
 *     NtGdiDwmCreatedBitmapRemotingOutput @ 0x1C014F3B0 (NtGdiDwmCreatedBitmapRemotingOutput.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     DrvModeChangeCompleteNotify @ 0x1C014F454 (DrvModeChangeCompleteNotify.c)
 */

void GreDwmCreatedBitmapRemotingOutput()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v4, ghsemDynamicModeChange);
  GreAcquireSemaphoreSharedInternal(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( (unsigned int)UserIsCurrentProcessDwm() && (unsigned int)UserIsRemoteConnection(v1, v0, v2, v3) )
    DrvModeChangeCompleteNotify();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v4);
}
