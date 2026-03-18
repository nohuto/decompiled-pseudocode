/*
 * XREFs of PfTAccessTracingStart @ 0x1403A5E98
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403A56C8 (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     MmSetAccessLogging @ 0x14011B6E8 (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403A5F24 (MmEnablePeriodicAccessClearing.c)
 */

__int64 __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rsi
  int v7; // edi
  bool v8; // zf
  int DefaultPagePriority; // eax
  __int64 v10; // rcx

  v3 = (volatile signed __int64 *)(a1 + 16);
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 16));
  v7 = ~a3;
  v8 = (v7 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v7;
  if ( v8 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v10) = 1;
    MmEnablePeriodicAccessClearing(v10);
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
