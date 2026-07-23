/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x140181FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
