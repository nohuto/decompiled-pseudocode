/*
 * XREFs of PopSuspendResumePdc @ 0x1404F7A20
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_1402DDFF0 + 1);
  if ( *(&xmmword_1402DDFF0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_1402DDFF0 + 1))();
  return result;
}
