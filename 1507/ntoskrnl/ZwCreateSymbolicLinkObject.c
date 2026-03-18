/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x140180630
 * Callers:
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IoCreateSymbolicLink @ 0x14058107C (IoCreateSymbolicLink.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140674108 (IoCreateUnprotectedSymbolicLink.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1407559B4 (VfZwCreateSymbolicLinkObject.c)
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
