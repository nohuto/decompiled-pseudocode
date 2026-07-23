/*
 * XREFs of RtlTraceDatabaseValidate @ 0x140215C84
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x140215CBC (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140215F64 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseValidate(PRTL_TRACE_DATABASE Database)
{
  unsigned int NoOfTraces; // ecx
  SIZE_T NoOfHits; // rdx
  __int64 v4; // r8

  RtlpTraceDatabaseAcquireLock(Database);
  NoOfTraces = Database->NoOfTraces;
  if ( NoOfTraces )
  {
    NoOfHits = Database->NoOfHits;
    v4 = NoOfTraces;
    do
    {
      NoOfHits += 8LL;
      --v4;
    }
    while ( v4 );
  }
  RtlpTraceDatabaseReleaseLock(Database);
  return 1;
}
