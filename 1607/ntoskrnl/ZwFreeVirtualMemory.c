/*
 * XREFs of ZwFreeVirtualMemory @ 0x14015A5B0
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     RtlpWow64CreateUserStack @ 0x1404B6458 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1404CF9AC (PspDeleteUserStack.c)
 *     RtlCreateUserStack @ 0x1404EE628 (RtlCreateUserStack.c)
 *     PspSetupUserStack @ 0x1404EE8C4 (PspSetupUserStack.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     RtlDestroyHeap @ 0x140533E40 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140696094 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1406A9A74 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
