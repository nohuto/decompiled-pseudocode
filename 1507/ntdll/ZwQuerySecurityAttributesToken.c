/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x180094D10
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x180064A9C (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 321;
  __asm { syscall; Low latency system call }
  return result;
}
