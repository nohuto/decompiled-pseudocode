/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18001C280 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18006DF80 (RtlDosPathNameToNtPathName_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
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
