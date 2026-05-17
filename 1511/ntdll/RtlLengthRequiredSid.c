/*
 * XREFs of RtlLengthRequiredSid @ 0x180062ED0
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     WerpFreeSid @ 0x180002E94 (WerpFreeSid.c)
 *     WerpAllocateAndInitializeSid @ 0x180002EE8 (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlCreateServiceSid @ 0x180062A60 (RtlCreateServiceSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180062C6C (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x180062D7C (RtlpValidateSidBuffer.c)
 *     RtlAllocateAndInitializeSid @ 0x180062DC0 (RtlAllocateAndInitializeSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180065190 (RtlCreateVirtualAccountSid.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1800D6C80 (RtlAllocateAndInitializeSidEx.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
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
