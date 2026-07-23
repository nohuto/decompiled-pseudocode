/*
 * XREFs of ZwProtectVirtualMemory @ 0x14015ABF0
 * Callers:
 *     KiOpPatchCode @ 0x1401DB18C (KiOpPatchCode.c)
 *     MiCheckForUserStackOverflow @ 0x1404B0850 (MiCheckForUserStackOverflow.c)
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
