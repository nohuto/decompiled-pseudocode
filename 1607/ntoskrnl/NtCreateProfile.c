/*
 * XREFs of NtCreateProfile @ 0x1406B8244
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x1400F8D14 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
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
