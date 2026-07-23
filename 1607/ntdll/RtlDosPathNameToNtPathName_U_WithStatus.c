/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800117F0
 * Callers:
 *     EtwpCreateFile @ 0x180054F38 (EtwpCreateFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(DosFileName, 0LL, DosFileName, NtFileName, FilePart, RelativeName);
}
