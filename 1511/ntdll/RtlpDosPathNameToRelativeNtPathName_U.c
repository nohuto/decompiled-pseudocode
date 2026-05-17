/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180042E60 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180047290 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180078220 (RtlDosPathNameToNtPathName_U.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 result; // rax
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx((__int64)&v9, a3);
  if ( (int)result >= 0 )
    return RtlDosPathNameToRelativeNtPathName(0, a2, &v9, 0LL, a4, 0LL, a5, a6);
  return result;
}
