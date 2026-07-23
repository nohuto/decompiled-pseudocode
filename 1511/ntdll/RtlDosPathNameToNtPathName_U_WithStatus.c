/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180047290
 * Callers:
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
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
           (__int64)RelativeName);
}
