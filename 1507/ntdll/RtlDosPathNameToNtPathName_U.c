/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18006DF80
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1800FA7B0 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
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
           (__int64)NtFileName,
           (__int64)FilePart,
           (__int64)RelativeName) >= 0;
}
