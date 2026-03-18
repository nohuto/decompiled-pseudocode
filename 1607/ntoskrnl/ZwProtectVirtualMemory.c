/*
 * XREFs of ZwProtectVirtualMemory @ 0x14015A680
 * Callers:
 *     KiOpPatchCode @ 0x1401DB360 (KiOpPatchCode.c)
 *     MiCheckForUserStackOverflow @ 0x1404CAE24 (MiCheckForUserStackOverflow.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress, NumberOfBytesToProtect);
}
