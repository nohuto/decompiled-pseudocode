/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x140215B58
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x140215CBC (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140215F64 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseEnumerate(
        PRTL_TRACE_DATABASE Database,
        PRTL_TRACE_ENUMERATE TraceEnumerate,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  BOOLEAN v6; // di
  ULONG v7; // eax
  struct _RTL_TRACE_BLOCK *v8; // rdx

  RtlpTraceDatabaseAcquireLock();
  v6 = 0;
  if ( TraceEnumerate->Database )
  {
    if ( TraceEnumerate->Database != Database || TraceEnumerate->Index >= LODWORD(Database->NoOfTraces) )
      goto LABEL_12;
  }
  else
  {
    TraceEnumerate->Database = Database;
    TraceEnumerate->Index = 0;
    TraceEnumerate->Block = *(struct _RTL_TRACE_BLOCK **)Database->NoOfHits;
  }
  if ( !TraceEnumerate->Block )
  {
    do
    {
      v7 = ++TraceEnumerate->Index;
      if ( v7 >= LODWORD(Database->NoOfTraces) )
        break;
      v8 = *(struct _RTL_TRACE_BLOCK **)(Database->NoOfHits + 8LL * v7);
      TraceEnumerate->Block = v8;
    }
    while ( !v8 );
  }
  if ( TraceEnumerate->Index < LODWORD(Database->NoOfTraces) || TraceEnumerate->Block )
  {
    v6 = 1;
    *TraceBlock = TraceEnumerate->Block;
    TraceEnumerate->Block = (struct _RTL_TRACE_BLOCK *)TraceEnumerate->Block->Trace;
  }
  else
  {
    *TraceBlock = 0LL;
  }
LABEL_12:
  RtlpTraceDatabaseReleaseLock(Database);
  return v6;
}
