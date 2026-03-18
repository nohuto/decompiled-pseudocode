/*
 * XREFs of PopPdcScreenOff @ 0x1406B7AA4
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopPdcScreenOff()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( *(&xmmword_14032E5C0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_14032E5C0 + 1))();
  return result;
}
