/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14017F2F0
 * Callers:
 *     RtlpExtendHeap @ 0x140109394 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x14010AFC4 (RtlpFindAndCommitPages.c)
 *     PspWow64ThunkProcessParameters @ 0x14012A964 (PspWow64ThunkProcessParameters.c)
 *     RtlpInitializeHeapSegment @ 0x14015858C (RtlpInitializeHeapSegment.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     RtlpStdExtendLowerWatermark @ 0x140245DE4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x140245F04 (RtlpStdExtendUpperWatermark.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     RtlCreateUserStack @ 0x1404510C4 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     EtwpFindUserBufferSpace @ 0x1404A257C (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x140530548 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x140546148 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1406D8AF8 (SepAdtCopyToLsaSharedMemory.c)
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 *     VfZwAllocateVirtualMemory @ 0x140754DAC (VfZwAllocateVirtualMemory.c)
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
  return KiServiceInternal(ProcessHandle);
}
