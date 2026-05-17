/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18002D55C
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrUnlockLoaderLock @ 0x180029EC0 (LdrUnlockLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA88 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006E300 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrEnumerateLoadedModules @ 0x18007A560 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // r9d

  v5 = RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
  if ( a3 < 0 )
  {
    LOBYTE(v6) = a2;
    LdrpLogError((unsigned int)a3, 5282LL, v6, 0LL);
  }
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(v7) = a2;
    LdrpLogEtwEvent(5282, 0, 0, v7, 0LL, 0LL);
  }
  return v5;
}
