/*
 * XREFs of MmIssueMemoryListCommand @ 0x1404F9CC0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1404F7A38 (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( (unsigned int)a2 < 4 )
    return 3221225476LL;
  v4 = *a1;
  if ( *a1 > 5 )
    return 3221225485LL;
  if ( v4 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand(v4, a2, a3, a4);
  return 3221225569LL;
}
