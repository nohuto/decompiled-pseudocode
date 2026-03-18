/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14015C620
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14056BE00 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1406D4808 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemEnvironmentValueEx(
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
