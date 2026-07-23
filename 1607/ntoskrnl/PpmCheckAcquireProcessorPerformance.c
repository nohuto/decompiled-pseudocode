/*
 * XREFs of PpmCheckAcquireProcessorPerformance @ 0x1400D2660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckAcquireProcessorPerformance()
{
  __int64 v0; // rcx
  char v1; // al
  bool v2; // zf

  v0 = PpmPerfDomainHead;
  v1 = 0;
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    do
    {
      v2 = *(_BYTE *)(v0 + 407) == 0;
      v0 = *(_QWORD *)v0;
      if ( !v2 )
        v1 = 1;
    }
    while ( (__int64 *)v0 != &PpmPerfDomainHead );
    if ( v1 )
      return PpmPerfControlExecuteAction(PpmPerfControlAcquirePerformance, &PpmPerfDomainHead, 1LL);
  }
  PpmCheckPipelineIndex += 2;
  return 1;
}
