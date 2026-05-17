/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x18001C280
 * Callers:
 *     EtwpCreateFile @ 0x1800787B8 (EtwpCreateFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(int a1, int a2, __int64 a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4);
}
