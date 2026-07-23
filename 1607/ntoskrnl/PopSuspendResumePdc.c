/*
 * XREFs of PopSuspendResumePdc @ 0x140530918
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_140329010 + 1);
  if ( *(&xmmword_140329010 + 1) )
    return ((__int64 (*)(void))*(&xmmword_140329010 + 1))();
  return result;
}
