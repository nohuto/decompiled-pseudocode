/*
 * XREFs of MmIssueMemoryListCommand @ 0x14058324C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1405666C4 (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
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
