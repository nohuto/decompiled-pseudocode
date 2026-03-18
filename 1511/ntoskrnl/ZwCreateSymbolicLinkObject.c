/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x140151C80
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x1404C1FE0 (IoCreateSymbolicLink.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1405F9E7C (IoCreateUnprotectedSymbolicLink.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1406D1DEC (VfZwCreateSymbolicLinkObject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SymbolicLinkHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
