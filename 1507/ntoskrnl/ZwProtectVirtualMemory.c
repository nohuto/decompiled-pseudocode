/*
 * XREFs of ZwProtectVirtualMemory @ 0x14017F9F0
 * Callers:
 *     KiOpPatchCode @ 0x14020A738 (KiOpPatchCode.c)
 *     MiCheckForUserStackOverflow @ 0x140530548 (MiCheckForUserStackOverflow.c)
 *     VfZwProtectVirtualMemory @ 0x140756D34 (VfZwProtectVirtualMemory.c)
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
