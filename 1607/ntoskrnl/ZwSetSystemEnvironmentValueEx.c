/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x14015CF40
 * Callers:
 *     BiDeleteEfiVariable @ 0x1406D4808 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName, VendorGuid, Value);
}
