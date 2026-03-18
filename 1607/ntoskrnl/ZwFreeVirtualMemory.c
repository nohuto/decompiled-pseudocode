/*
 * XREFs of ZwFreeVirtualMemory @ 0x14015A040
 * Callers:
 *     RtlpExtendHeap @ 0x140092FE4 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x140093070 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x1400936CC (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     RtlpWow64CreateUserStack @ 0x1404D29B8 (RtlpWow64CreateUserStack.c)
 *     PspDeleteUserStack @ 0x1404ED8F4 (PspDeleteUserStack.c)
 *     RtlCreateUserStack @ 0x14050B698 (RtlCreateUserStack.c)
 *     PspSetupUserStack @ 0x14050B934 (PspSetupUserStack.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     RtlDestroyHeap @ 0x140533900 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140695FB0 (SepAdtCopyToLsaSharedMemory.c)
 *     EtwpFreeUserBufferSpace @ 0x1406A993C (EtwpFreeUserBufferSpace.c)
 *     ExRaiseHardError @ 0x1406B6068 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, RegionSize);
}
