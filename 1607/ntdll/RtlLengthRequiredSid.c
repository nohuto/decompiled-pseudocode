/*
 * XREFs of RtlLengthRequiredSid @ 0x18000BB00
 * Callers:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DA0 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x180008E8C (WerpFreeSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180008FD0 (RtlCreateVirtualAccountSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B774 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x18000B884 (RtlpValidateSidBuffer.c)
 *     RtlCreateServiceSid @ 0x18000B8D0 (RtlCreateServiceSid.c)
 *     RtlAllocateAndInitializeSid @ 0x18000B9F0 (RtlAllocateAndInitializeSid.c)
 *     RtlDefaultNpAcl @ 0x18008B240 (RtlDefaultNpAcl.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1800DF690 (RtlAllocateAndInitializeSidEx.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
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
