/*
 * XREFs of RtlInitializeSListHead @ 0x180076C80
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x18007F704 (RtlpHpLfhContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180083410 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E30A0 (RtlResetMemoryBlockLookaside.c)
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
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
