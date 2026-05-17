/*
 * XREFs of _safecrt_mbtowc @ 0x1800A1CDC
 * Callers:
 *     _woutput_s @ 0x1800A2DA4 (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180014C20 (RtlAnsiCharToUnicodeChar.c)
 */

unsigned __int8 *__fastcall safecrt_mbtowc(_WORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      v5 = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&v5);
      return (unsigned __int8 *)(v5 - a2);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
