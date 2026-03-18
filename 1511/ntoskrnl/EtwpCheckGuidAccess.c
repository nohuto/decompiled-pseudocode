/*
 * XREFs of EtwpCheckGuidAccess @ 0x1404CEC4C
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404CDDBC (EtwpCheckProviderLoggingAccess.c)
 *     EtwpValidateEnableNotification @ 0x1404CE7A0 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405453E4 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406651C8 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x140667720 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x14046D564 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14046E010 (EtwpGetSecurityDescriptorByGuid.c)
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
