/*
 * XREFs of ExInitializeTimeRefresh @ 0x1407D8EFC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     ZwLockProductActivationKeys @ 0x140180F30 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1405A6944 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  LARGE_INTEGER v0; // rax
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG pPrivateVer; // [rsp+40h] [rbp+8h] BYREF

  pPrivateVer = 31401;
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
  ExpTimeRefreshDpc = 275;
  qword_1403256F8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140325718 = 0LL;
  qword_140325700 = (__int64)&ExpOkToTimeRefresh;
  qword_1403256F0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  KeInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  ExpTimeRefreshInterval = -36000000000LL;
  v2[0] = 0LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, 0LL, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140325948 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
