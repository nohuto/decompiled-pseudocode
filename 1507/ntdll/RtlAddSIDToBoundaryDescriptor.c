/*
 * XREFs of RtlAddSIDToBoundaryDescriptor @ 0x180052D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return RtlAddSIDToBoundaryDescriptorEx((__int64)BoundaryDescriptor, (unsigned __int8 *)RequiredSid, 0);
}
