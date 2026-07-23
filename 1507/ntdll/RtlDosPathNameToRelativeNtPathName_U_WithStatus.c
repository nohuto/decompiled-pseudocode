/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180025B00
 * Callers:
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  unsigned __int64 v4; // rax
  PUNICODE_STRING v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+40h] [rbp-18h] BYREF
  PCWSTR v8; // [rsp+48h] [rbp-10h]

  v8 = DosFileName;
  v7 = 0;
  if ( !DosFileName )
    goto LABEL_6;
  v4 = -1LL;
  do
    ++v4;
  while ( DosFileName[v4] );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v7) = 2 * v4;
    HIWORD(v7) = 2 * v4 + 2;
LABEL_6:
    v6 = NtFileName;
    LOBYTE(NtFileName) = 1;
    return RtlDosPathNameToRelativeNtPathName(
             0,
             (_DWORD)NtFileName,
             (unsigned int)&v7,
             0,
             (__int64)v6,
             0LL,
             (__int64)FilePart,
             (__int64)RelativeName);
  }
  return -1073741562;
}
