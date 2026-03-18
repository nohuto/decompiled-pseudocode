/*
 * XREFs of RtlTraceDatabaseLock @ 0x140215E48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
