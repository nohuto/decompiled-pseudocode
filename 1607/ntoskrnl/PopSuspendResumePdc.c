/*
 * XREFs of PopSuspendResumePdc @ 0x1405303D8
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_140328FD0 + 1);
  if ( *(&xmmword_140328FD0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_140328FD0 + 1))();
  return result;
}
