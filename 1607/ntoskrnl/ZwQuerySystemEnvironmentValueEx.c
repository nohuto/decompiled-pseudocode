/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14015CB90
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14056C340 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1406D4940 (BiDeleteEfiVariable.c)
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
  return KiServiceInternal(VariableName);
}
