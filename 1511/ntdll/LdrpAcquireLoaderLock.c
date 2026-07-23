/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18000A414
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180003D80 (LdrEnumerateLoadedModules.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPrepareModuleForExecution @ 0x18000BAC0 (LdrpPrepareModuleForExecution.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006CDE0 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  unsigned __int32 v0; // ebx

  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5248, -1, -1, -1, 0LL);
  v0 = RtlEnterCriticalSection(&LdrpLoaderLock);
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5249, -1, -1, -1, 0LL);
  return v0;
}
