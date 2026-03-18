/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1401FB884
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1401FBBE8 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1401FBC38 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1401FBE90 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseAdd(
        PRTL_TRACE_DATABASE Database,
        ULONG Count,
        PVOID *Trace,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(TraceBlock) = RtlpTraceDatabaseInternalAdd(Database, Count, Trace, TraceBlock);
  RtlpTraceDatabaseReleaseLock(Database);
  return (unsigned __int8)TraceBlock;
}
