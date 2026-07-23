/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x14052E5D8
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet)
{
  if ( (~ControlBitsOfInterest & ControlBitsToSet) != 0 || (ControlBitsOfInterest & 0xC03F) != 0 )
    return -1073741811;
  *((_WORD *)SecurityDescriptor + 1) = ControlBitsToSet | *((_WORD *)SecurityDescriptor + 1) & ~ControlBitsOfInterest;
  return 0;
}
