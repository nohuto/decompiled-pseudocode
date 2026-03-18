/*
 * XREFs of ExInitializeTimeRefresh @ 0x140768010
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ZwLockProductActivationKeys @ 0x1401525C0 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x14053C16C (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  LARGE_INTEGER v0; // rax
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG pPrivateVer; // [rsp+40h] [rbp+8h] BYREF

  pPrivateVer = 12126;
  ZwLockProductActivationKeys(&pPrivateVer, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
    {
      v0.QuadPart = 0LL;
      ExpNtExpirationDate.QuadPart = 0LL;
    }
    else
    {
      v0 = ExpNtExpirationDate;
    }
    MEMORY[0xFFFFF780000002C8] = v0.QuadPart;
    ExpShuttingDown = 0;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_1402D66D8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_1402D66F8 = 0LL;
  qword_1402D66E0 = (__int64)&ExpOkToTimeRefresh;
  qword_1402D66D0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  KeInitializeTimer2((__int64)ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  ExpTimeRefreshInterval = -36000000000LL;
  v2[0] = 0LL;
  KeSetTimer2(ExpTimeRefreshTimer, -36000000000LL, 0LL, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_1402D67C8 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
