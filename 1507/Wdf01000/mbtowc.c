/*
 * XREFs of mbtowc @ 0x1C0031978
 * Callers:
 *     _woutput_l @ 0x1C0030EC4 (_woutput_l.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar_0 @ 0x1C0031A5E (RtlAnsiCharToUnicodeChar_0.c)
 */

signed __int64 __fastcall mbtowc(wchar_t *pwc, char *s, unsigned __int64 n)
{
  signed __int64 result; // rax
  char *s1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( s && n )
  {
    if ( *s )
    {
      s1 = s;
      *pwc = RtlAnsiCharToUnicodeChar_0((PUCHAR *)&s1);
      return s1 - s;
    }
    else if ( pwc )
    {
      *pwc = 0;
    }
  }
  return result;
}
