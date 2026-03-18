/*
 * XREFs of ZwOpenSection_0 @ 0x1C0011560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenSection_0(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenSection(SectionHandle, DesiredAccess, ObjectAttributes);
}
