/*
 * XREFs of ZwFreeVirtualMemory @ 0x1401509E0
 * Callers:
 *     RtlpExtendHeap @ 0x1400D2F14 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x1400D34B0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspSetupUserStack @ 0x1403F2A8C (PspSetupUserStack.c)
 *     RtlCreateUserStack @ 0x1403F2BA0 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1404B0B04 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1404C073C (PspDeleteUserStack.c)
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140656640 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x140667A80 (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 *     VfZwFreeVirtualMemory @ 0x1406D2510 (VfZwFreeVirtualMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
