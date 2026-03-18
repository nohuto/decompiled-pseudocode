/*
 * XREFs of SeAuditingAnyFileEventsWithContext @ 0x1406D3CB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingAnyFileEventsWithContext(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingAnyFileEventsWithContextEx((__int64)SecurityDescriptor, (__int64)SubjectSecurityContext, 0LL);
}
