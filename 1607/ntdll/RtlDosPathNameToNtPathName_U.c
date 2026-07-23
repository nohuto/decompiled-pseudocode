/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180011700
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800DDC50 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1801049B4 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(DosFileName, 0LL, DosFileName, NtFileName, FilePart, RelativeName) >= 0;
}
