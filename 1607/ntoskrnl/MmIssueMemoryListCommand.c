/*
 * XREFs of MmIssueMemoryListCommand @ 0x1405467E8
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x14052FB44 (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  unsigned int v3; // ebx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( *a1 > 5 )
    return 3221225485LL;
  if ( v3 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand(v3);
  return 3221225569LL;
}
