/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828
 * Callers:
 *     RtlDosPathNameToNtPathName_U @ 0x180011710 (RtlDosPathNameToNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011740 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180011800 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  int v9; // edx
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v10, a3);
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a2;
    return RtlDosPathNameToRelativeNtPathName(0, v9, (unsigned int)v10, 0, a4, 0LL, a5, a6);
  }
  return result;
}
