/*
 * XREFs of PopPdcScreenOff @ 0x140637D18
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 PopPdcScreenOff()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( *(&xmmword_1402DE000 + 1) )
    return ((__int64 (*)(void))*(&xmmword_1402DE000 + 1))();
  return result;
}
