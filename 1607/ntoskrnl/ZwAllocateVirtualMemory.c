/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14015A4F0
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     PspWow64ThunkProcessParameters @ 0x1400A9FB8 (PspWow64ThunkProcessParameters.c)
 *     RtlpInitializeHeapSegment @ 0x14012ED0C (RtlpInitializeHeapSegment.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     RtlpStdExtendLowerWatermark @ 0x1402116DC (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1402117B8 (RtlpStdExtendUpperWatermark.c)
 *     EtwpFindUserBufferSpace @ 0x1404923D0 (EtwpFindUserBufferSpace.c)
 *     MiCheckForUserStackOverflow @ 0x1404B0850 (MiCheckForUserStackOverflow.c)
 *     RtlpWow64CreateUserStack @ 0x1404B6458 (RtlpWow64CreateUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1404C2878 (PspSetupReservedUserMappings.c)
 *     RtlCreateUserStack @ 0x1404EE628 (RtlCreateUserStack.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140696094 (SepAdtCopyToLsaSharedMemory.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
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
