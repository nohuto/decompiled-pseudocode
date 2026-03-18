/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14015B320
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1404CABA0 (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x1404EEF88 (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1406237F4 (IoCreateUnprotectedSymbolicLink.c)
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
