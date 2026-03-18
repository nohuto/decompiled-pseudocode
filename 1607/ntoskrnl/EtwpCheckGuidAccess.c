/*
 * XREFs of EtwpCheckGuidAccess @ 0x140491288
 * Callers:
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14048ECA4 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpValidateEnableNotification @ 0x14048ED80 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140490EE8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckNotificationAccess @ 0x14049120C (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140580C54 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1406A6B9C (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x140407E08 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140408098 (EtwpFreeSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x14040EFCC (EtwpAccessCheck.c)
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
