/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x180086C30
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3D4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlSetAttributesSecurityDescriptor @ 0x1800DFD30 (RtlSetAttributesSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet)
{
  if ( (~ControlBitsOfInterest & ControlBitsToSet) != 0 || (ControlBitsOfInterest & 0xC03F) != 0 )
    return -1073741811;
  *((_WORD *)SecurityDescriptor + 1) = ControlBitsToSet | *((_WORD *)SecurityDescriptor + 1) & ~ControlBitsOfInterest;
  return 0;
}
