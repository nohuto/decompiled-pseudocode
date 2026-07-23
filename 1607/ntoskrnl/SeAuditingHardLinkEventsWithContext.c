/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x1404D2914
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int16 v3; // ax
  __int64 v5; // rax
  char *v6; // rax

  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v3 & 0x10) == 0 )
    return 0;
  if ( v3 >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v5 )
      return 0;
    v6 = (char *)SecurityDescriptor + v5;
  }
  return v6
      && *((_WORD *)v6 + 2)
      && (unsigned __int8)SepAdtAuditThisEventWithContext(
                            117LL,
                            AccessGranted,
                            AccessGranted == 0,
                            (__int64)SubjectSecurityContext);
}
