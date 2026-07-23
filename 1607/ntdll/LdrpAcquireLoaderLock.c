/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18002D50C
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F008 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrLockLoaderLock @ 0x18004E630 (LdrLockLoaderLock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006E310 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrEnumerateLoadedModules @ 0x18007A550 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  unsigned __int32 v0; // ebx

  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5248, -1, -1, -1, 0LL, 0LL);
  v0 = RtlEnterCriticalSection(&LdrpLoaderLock);
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5249, -1, -1, -1, 0LL, 0LL);
  return v0;
}
