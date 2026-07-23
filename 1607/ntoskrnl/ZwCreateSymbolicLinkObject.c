/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14015B890
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     IoCreateSymbolicLink @ 0x1404D107C (IoCreateSymbolicLink.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14057A128 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1406238A8 (IoCreateUnprotectedSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING Name)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SymbolicLinkHandle);
}
