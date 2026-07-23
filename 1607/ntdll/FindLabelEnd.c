/*
 * XREFs of FindLabelEnd @ 0x180056DB0
 * Callers:
 *     punycode_encode @ 0x180053550 (punycode_encode.c)
 *     punycode_decode @ 0x180056848 (punycode_decode.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall FindLabelEnd(_WORD *a1, unsigned __int64 a2, char a3)
{
  _WORD *result; // rax

  if ( a3 )
  {
    for ( result = (_WORD *)(a2 - 2); result >= a1; --result )
    {
      if ( *result == 64 )
        return result;
    }
  }
  else
  {
    while ( (unsigned __int64)a1 < a2 )
    {
      if ( *a1 == 46 )
        return a1;
      ++a1;
    }
  }
  return (_WORD *)a2;
}
