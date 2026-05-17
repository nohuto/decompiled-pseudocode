/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180011710
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800DDB90 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x180104A74 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(int a1, int a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4) >= 0;
}
