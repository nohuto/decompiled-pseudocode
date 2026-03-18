/*
 * XREFs of ZwLockVirtualMemory @ 0x14015BCA0
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140221228 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, NumberOfBytesToLock);
}
