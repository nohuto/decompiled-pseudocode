/*
 * XREFs of NtQueryInformationToken @ 0x1800A6840
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F010 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800152A0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B254 (EtwpWriteToPrivateBuffers.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B014 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18006B250 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlRemovePrivileges @ 0x1800880F0 (RtlRemovePrivileges.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D4970 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D4A80 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800D64D0 (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E1128 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationToken()
{
  __int64 result; // rax

  result = 33LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
