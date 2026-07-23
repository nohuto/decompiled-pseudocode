/*
 * XREFs of RtlInitializeSListHead @ 0x180072510
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180001010 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpHpLfhContextInitialize @ 0x18005975C (RtlpHpLfhContextInitialize.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800DA330 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E9300 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x1800F0FD4 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F2544 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x1800FD010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
