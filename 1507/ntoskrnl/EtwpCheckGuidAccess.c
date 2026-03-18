/*
 * XREFs of EtwpCheckGuidAccess @ 0x1404D4700
 * Callers:
 *     EtwpCheckProviderLoggingAccess @ 0x1404D525C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpValidateEnableNotification @ 0x1404D5D50 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404D5EA8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405C4B58 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406E82C4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404D2714 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404D3424 (EtwpFreeSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
