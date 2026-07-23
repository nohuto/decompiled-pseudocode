/*
 * XREFs of ExInitializeTimeRefresh @ 0x1407AE678
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14015C1D0 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x14052DFE8 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  LARGE_INTEGER v0; // rax
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
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
  qword_1402FCCD8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_1402FCCF8 = 0LL;
  qword_1402FCCE0 = (__int64)&ExpOkToTimeRefresh;
  qword_1402FCCD0 = 0LL;
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
  qword_1402FCF48 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
