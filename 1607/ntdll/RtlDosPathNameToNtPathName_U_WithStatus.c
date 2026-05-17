/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180011800
 * Callers:
 *     EtwpCreateFile @ 0x180054F48 (EtwpCreateFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(int a1, int a2, __int64 a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4);
}
