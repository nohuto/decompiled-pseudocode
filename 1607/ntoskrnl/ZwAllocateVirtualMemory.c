/*
 * XREFs of ZwAllocateVirtualMemory @ 0x140159F80
 * Callers:
 *     RtlpExtendHeap @ 0x140092FE4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094D74 (RtlpFindAndCommitPages.c)
 *     PspWow64ThunkProcessParameters @ 0x1400ABA50 (PspWow64ThunkProcessParameters.c)
 *     RtlpInitializeHeapSegment @ 0x14012E79C (RtlpInitializeHeapSegment.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     RtlpStdExtendLowerWatermark @ 0x1402118B0 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x14021198C (RtlpStdExtendUpperWatermark.c)
 *     EtwpFindUserBufferSpace @ 0x140491940 (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1404CAE24 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1404D29B8 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1404DF274 (PspSetupReservedUserMappings.c)
 *     RtlCreateUserStack @ 0x14050B698 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140695FB0 (SepAdtCopyToLsaSharedMemory.c)
 *     ExRaiseHardError @ 0x1406B6068 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, ZeroBits);
}
