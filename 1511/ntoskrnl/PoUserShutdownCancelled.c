/*
 * XREFs of PoUserShutdownCancelled @ 0x1404F8770
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     PopUserShutdownCancelled @ 0x1404F878C (PopUserShutdownCancelled.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al
  __int64 v1; // rcx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    LOBYTE(v1) = 1;
    return PopUserShutdownCancelled(v1);
  }
  return result;
}
