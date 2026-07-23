/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18002D54C
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrUnlockLoaderLock @ 0x180029EB0 (LdrUnlockLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006E2F0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrEnumerateLoadedModules @ 0x18007A550 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2BE4 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  unsigned __int32 v5; // esi
  __int64 v6; // r8
  int v7; // r9d

  v5 = RtlLeaveCriticalSection(&LdrpLoaderLock);
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
