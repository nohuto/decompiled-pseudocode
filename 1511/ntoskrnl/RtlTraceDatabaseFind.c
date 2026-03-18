/*
 * XREFs of RtlTraceDatabaseFind @ 0x1401FBB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x1401FBBE8 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalFind @ 0x1401FBDE8 (RtlpTraceDatabaseInternalFind.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1401FBE90 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseFind(
        PRTL_TRACE_DATABASE Database,
        ULONG Count,
        PVOID *Trace,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  BOOLEAN v8; // bl

  RtlpTraceDatabaseAcquireLock();
  v8 = RtlpTraceDatabaseInternalFind(Database, Count, Trace, TraceBlock);
  if ( v8 )
    ++*(_QWORD *)&Database->HashCounter[4];
  RtlpTraceDatabaseReleaseLock(Database);
  return v8;
}
