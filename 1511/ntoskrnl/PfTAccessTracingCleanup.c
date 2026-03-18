/*
 * XREFs of PfTAccessTracingCleanup @ 0x1403A57AC
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x1403A56C8 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x1403E725C (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x1400FAAA8 (MmFreeAccessPfnBuffer.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     MmSetAccessLogging @ 0x14011B6E8 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1403A5F24 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x1403A6C30 (PfTAccessTracingInitialize.c)
 */

__int64 __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  char v6; // bp
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // rcx

  v3 = (volatile signed __int64 *)(a1 + 16);
  v6 = a3 == 4;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_140317AE8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v8 = RtlpInterlockedFlushSList(&stru_140317B00);
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
