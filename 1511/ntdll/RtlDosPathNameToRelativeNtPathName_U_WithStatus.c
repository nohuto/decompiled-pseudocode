/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320
 * Callers:
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // edx
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = 1;
    return RtlDosPathNameToRelativeNtPathName(0, v8, (unsigned int)v9, 0, a2, 0LL, a3, a4);
  }
  return result;
}
