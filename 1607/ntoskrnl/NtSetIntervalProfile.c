/*
 * XREFs of NtSetIntervalProfile @ 0x14052A318
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x14052A364 (KeSetIntervalProfile.c)
 */

NTSTATUS __stdcall NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)ClockSource);
  return 0;
}
