/*
 * XREFs of ZwProtectVirtualMemory @ 0x140151020
 * Callers:
 *     KiOpPatchCode @ 0x1401CB744 (KiOpPatchCode.c)
 *     MiCheckForUserStackOverflow @ 0x1404A7F9C (MiCheckForUserStackOverflow.c)
 *     VfZwProtectVirtualMemory @ 0x1406D316C (VfZwProtectVirtualMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
