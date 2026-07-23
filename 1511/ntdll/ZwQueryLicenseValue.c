/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A7850
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180073990 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x18007EA60 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800EAE30 (RtlpGetWindowsPolicy.c)
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

  result = 317;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
