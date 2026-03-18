/*
 * XREFs of NtCreateProfile @ 0x1406F9F78
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x14002B0B4 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 */

NTSTATUS __stdcall NtCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE ProcessHandle,
        PVOID ImageBase,
        SIZE_T ImageSize,
        ULONG Granularity,
        PVOID Buffer,
        ULONG ProfilingSize,
        KPROFILE_SOURCE Source,
        KAFFINITY ProcessorMask)
{
  USHORT Group; // cx

  Group = KeGetCurrentPrcb()->Group;
  if ( ProcessorMask == -1LL )
    KeQueryGroupAffinity(Group);
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
