/*
 * XREFs of _mbstrlen @ 0x18009E758
 * Callers:
 *     mbstowcs @ 0x1800991D0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180014C20 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *String)
{
  const char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = String;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar((unsigned __int8 **)&v3) )
    ;
  return v3 - String - 1;
}
