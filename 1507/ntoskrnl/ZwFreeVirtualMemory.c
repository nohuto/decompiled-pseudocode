/*
 * XREFs of ZwFreeVirtualMemory @ 0x14017F3B0
 * Callers:
 *     RtlpExtendHeap @ 0x140109394 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x140109420 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x140109914 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     RtlCreateUserStack @ 0x1404510C4 (RtlCreateUserStack.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     RtlpWow64CreateUserStack @ 0x140546148 (RtlpWow64CreateUserStack.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405839D0 (RtlDestroyHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x1406D8AF8 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1406EADAC (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 *     VfZwFreeVirtualMemory @ 0x1407560D8 (VfZwFreeVirtualMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
