/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320
 * Callers:
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
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
