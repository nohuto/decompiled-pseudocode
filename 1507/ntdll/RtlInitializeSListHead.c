/*
 * XREFs of RtlInitializeSListHead @ 0x1800663A0
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x1800040E8 (RtlpHpLfhContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180072B40 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800D1E10 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E47A0 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x1800EF07C (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F08C4 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x1800FD010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
