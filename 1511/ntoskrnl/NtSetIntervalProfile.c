/*
 * XREFs of NtSetIntervalProfile @ 0x1404E34AC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1404E34F8 (KeSetIntervalProfile.c)
 */

NTSTATUS __stdcall NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)ClockSource);
  return 0;
}
