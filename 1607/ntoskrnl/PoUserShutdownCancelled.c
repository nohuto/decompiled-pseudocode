/*
 * XREFs of PoUserShutdownCancelled @ 0x1405319AC
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     PopUserShutdownCancelled @ 0x1405319C8 (PopUserShutdownCancelled.c)
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
