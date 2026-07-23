/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180011890
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC0DC (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  NTSTATUS result; // eax
  int v8; // edx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, DosFileName);
  if ( result >= 0 )
  {
    LOBYTE(v8) = 1;
    return RtlDosPathNameToRelativeNtPathName(
             0,
             v8,
             (unsigned int)&DestinationString,
             0,
             (__int64)NtFileName,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  }
  return result;
}
