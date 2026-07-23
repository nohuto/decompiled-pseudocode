/*
 * XREFs of NtCreateProfileEx @ 0x1406B8318
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 */

NTSTATUS __stdcall NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE ProcessHandle,
        PVOID ImageBase,
        SIZE_T ImageSize,
        ULONG Granularity,
        PVOID Buffer,
        ULONG ProfilingSize,
        KPROFILE_SOURCE Source,
        USHORT GroupCount,
        PGROUP_AFFINITY Affinity)
{
  return ExpProfileCreate(
           (__int64)ProfileHandle,
           (__int64)ProcessHandle,
           (__int64)ImageBase,
           ImageSize,
           Granularity,
           (__int64)Buffer,
           ProfilingSize,
           Source);
}
