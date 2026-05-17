/*
 * XREFs of RtlInitializeSListHead @ 0x180076C90
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x18007F714 (RtlpHpLfhContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180083420 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E2FE0 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x1800F8AE8 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800FC04C (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180107010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  *ListHead = 0uLL;
}
