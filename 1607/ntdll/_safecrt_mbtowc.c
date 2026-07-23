/*
 * XREFs of _safecrt_mbtowc @ 0x1800A30E8
 * Callers:
 *     _woutput_s @ 0x1800A41B0 (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1800183C0 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall safecrt_mbtowc(WCHAR *a1, UCHAR *a2, __int64 a3)
{
  UCHAR *result; // rax
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  if ( a2 && a3 )
  {
    if ( *a2 )
    {
      SourceCharacter = a2;
      *a1 = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (UCHAR *)(SourceCharacter - a2);
    }
    else if ( a1 )
    {
      *a1 = 0;
    }
  }
  return result;
}
