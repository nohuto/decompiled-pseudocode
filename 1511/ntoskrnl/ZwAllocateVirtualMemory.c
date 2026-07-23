/*
 * XREFs of ZwAllocateVirtualMemory @ 0x140150920
 * Callers:
 *     PspWow64ThunkProcessParameters @ 0x14009AD88 (PspWow64ThunkProcessParameters.c)
 *     RtlpExtendHeap @ 0x1400D2F14 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140124F28 (RtlpInitializeHeapSegment.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     RtlpStdExtendLowerWatermark @ 0x1401F7148 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1401F7224 (RtlpStdExtendUpperWatermark.c)
 *     RtlCreateUserStack @ 0x1403F2BA0 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1404A7F9C (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1404B0B04 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1404B7C1C (PspSetupReservedUserMappings.c)
 *     EtwpFindUserBufferSpace @ 0x1404CB178 (EtwpFindUserBufferSpace.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140656640 (SepAdtCopyToLsaSharedMemory.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 *     VfZwAllocateVirtualMemory @ 0x1406D11E4 (VfZwAllocateVirtualMemory.c)
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
