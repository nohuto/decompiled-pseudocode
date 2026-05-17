/*
 * XREFs of RtlLengthRequiredSid @ 0x18000BB10
 * Callers:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DB0 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x180008E9C (WerpFreeSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180008FE0 (RtlCreateVirtualAccountSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18000B784 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x18000B894 (RtlpValidateSidBuffer.c)
 *     RtlCreateServiceSid @ 0x18000B8E0 (RtlCreateServiceSid.c)
 *     RtlAllocateAndInitializeSid @ 0x18000BA00 (RtlAllocateAndInitializeSid.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1800DF5D0 (RtlAllocateAndInitializeSidEx.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthRequiredSid(unsigned int a1)
{
  if ( a1 > 0x3FFFFFF7 )
    return 0xFFFFFFFFLL;
  else
    return 4 * a1 + 8;
}
