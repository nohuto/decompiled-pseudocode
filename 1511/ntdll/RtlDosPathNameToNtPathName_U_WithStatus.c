/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180047290
 * Callers:
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(a1, 0, a1, a2, a3, a4);
}
