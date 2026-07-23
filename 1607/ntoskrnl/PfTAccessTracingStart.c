/*
 * XREFs of PfTAccessTracingStart @ 0x1403C83DC
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403D049C (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 * Callees:
 *     MmSetAccessLogging @ 0x140001EB8 (MmSetAccessLogging.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403C8460 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rsi
  int v7; // edi
  bool v8; // zf
  int DefaultPagePriority; // eax
  __int64 v10; // rcx

  v3 = (volatile signed __int64 *)(a1 + 16);
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)(a1 + 16));
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
  KeLeaveCriticalRegion();
}
