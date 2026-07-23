/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800E3060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddIntegrityLabelToBoundaryDescriptor(
        POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor,
        PSID IntegrityLabel)
{
  return RtlAddSIDToBoundaryDescriptorEx((__int64)BoundaryDescriptor, (unsigned __int8 *)IntegrityLabel, 1);
}
