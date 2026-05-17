/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18006DF80
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1800FA7B0 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4) >= 0;
}
