/*
 * XREFs of toupper @ 0x18009B030
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180014C20 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007AB90 (RtlUpcaseUnicodeToMultiByteN.c)
 */

int __cdecl toupper(int C)
{
  int result; // eax
  unsigned __int8 *v2; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+59h] [rbp+19h]
  unsigned __int16 v6; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+28h] BYREF

  v3 = C;
  v2 = (unsigned __int8 *)&v3;
  v6 = RtlAnsiCharToUnicodeChar(&v2);
  if ( (int)RtlUpcaseUnicodeToMultiByteN(&v4, 2u, &v7, &v6, 2u) < 0 )
    return v3;
  result = v4;
  if ( v7 != 1 )
    return v5 | (v4 << 8);
  return result;
}
