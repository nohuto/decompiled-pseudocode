/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1401FBBA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlTraceDatabaseUnlock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseReleaseLock(Database);
}
