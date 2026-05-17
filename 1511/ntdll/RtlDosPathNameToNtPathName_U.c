/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180078220
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800D57E8 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, unsigned __int16 *a2, unsigned __int64 *a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4) >= 0;
}
