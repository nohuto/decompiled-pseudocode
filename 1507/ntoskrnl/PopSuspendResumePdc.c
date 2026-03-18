/*
 * XREFs of PopSuspendResumePdc @ 0x1405666AC
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_14032E5B0 + 1);
  if ( *(&xmmword_14032E5B0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_14032E5B0 + 1))();
  return result;
}
