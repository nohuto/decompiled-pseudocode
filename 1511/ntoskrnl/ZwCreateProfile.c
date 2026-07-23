/*
 * XREFs of ZwCreateProfile @ 0x140151C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE ProcessHandle,
        PVOID ImageBase,
        ULONG ImageSize,
        ULONG Granularity,
        PVOID Buffer,
        ULONG ProfilingSize,
        KPROFILE_SOURCE Source,
        KAFFINITY ProcessorMask)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
