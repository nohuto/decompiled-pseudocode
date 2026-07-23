/*
 * XREFs of PfTAccessTracingCleanup @ 0x1403C82C0
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403D049C (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x1403E8368 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 * Callees:
 *     MmSetAccessLogging @ 0x140001EB8 (MmSetAccessLogging.c)
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x1403C838C (PfTAccessTracingInitialize.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403C8460 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  char v6; // bp
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // rcx

  v3 = (volatile signed __int64 *)(a1 + 16);
  v6 = a3 == 4;
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_14033B828 = 0;
  ExWaitForRundownProtectionRelease(&stru_14033B808);
  v8 = RtlpInterlockedFlushSList(&ListHead);
  while ( v8 )
  {
    v9 = (__int64)v8;
    v8 = v8->Next;
    MmFreeAccessPfnBuffer(v9, v6);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
