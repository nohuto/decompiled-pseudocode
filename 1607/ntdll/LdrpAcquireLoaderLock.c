/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18002D51C
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA88 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrLockLoaderLock @ 0x18004E640 (LdrLockLoaderLock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006E320 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrEnumerateLoadedModules @ 0x18007A560 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4250 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  unsigned int v0; // ebx

  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5248, -1, -1, -1, 0LL, 0LL);
  v0 = RtlEnterCriticalSection((__int64)&LdrpLoaderLock);
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5249, -1, -1, -1, 0LL, 0LL);
  return v0;
}
