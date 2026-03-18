/*
 * XREFs of SeReportSecurityEvent @ 0x14021A0B8
 * Callers:
 *     <none>
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x1400761AC (SeReportSecurityEventWithSubCategory.c)
 */

NTSTATUS __stdcall SeReportSecurityEvent(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters)
{
  if ( AuditParameters )
    AuditParameters->CategoryId = 3;
  return SeReportSecurityEventWithSubCategory(Flags, SourceName, UserSid, AuditParameters, 0x7Bu);
}
