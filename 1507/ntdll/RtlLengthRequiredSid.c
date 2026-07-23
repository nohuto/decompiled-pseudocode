/*
 * XREFs of RtlLengthRequiredSid @ 0x18004F340
 * Callers:
 *     WerpFreeSid @ 0x180001F54 (WerpFreeSid.c)
 *     WerpAllocateAndInitializeSid @ 0x180001FA8 (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     RtlCreateServiceSid @ 0x18004F110 (RtlCreateServiceSid.c)
 *     RtlAllocateAndInitializeSid @ 0x18004F230 (RtlAllocateAndInitializeSid.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 *     RtlpValidateSidBuffer @ 0x1800528D8 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18005291C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlCreateVirtualAccountSid @ 0x180052D20 (RtlCreateVirtualAccountSid.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1800CE680 (RtlAllocateAndInitializeSidEx.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
