/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180078220
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800D57E8 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           (__int64)DosFileName,
           0,
           DosFileName,
           NtFileName,
           (unsigned __int64 *)FilePart,
           (__int64)RelativeName) >= 0;
}
