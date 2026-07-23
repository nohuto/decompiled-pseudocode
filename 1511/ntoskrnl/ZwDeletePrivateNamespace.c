/*
 * XREFs of ZwDeletePrivateNamespace @ 0x140151F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
