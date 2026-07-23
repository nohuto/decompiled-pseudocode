/*
 * XREFs of EtwpCheckGuidAccess @ 0x140491D18
 * Callers:
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14048F734 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpValidateEnableNotification @ 0x14048F810 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckNotificationAccess @ 0x140491C9C (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140581100 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6CD4 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
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
