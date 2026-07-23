/*
 * XREFs of ZwQueryLicenseValue @ 0x180094CA0
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180045940 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180072DB0 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800E6350 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 314;
  __asm { syscall; Low latency system call }
  return result;
}
