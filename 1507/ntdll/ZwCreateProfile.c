/*
 * XREFs of ZwCreateProfile @ 0x1800943E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        KAFFINITY Affinity)
{
  NTSTATUS result; // eax

  result = 174;
  __asm { syscall; Low latency system call }
  return result;
}
