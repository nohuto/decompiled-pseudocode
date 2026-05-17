/*
 * XREFs of _fputwc_nolock @ 0x1800A0A00
 * Callers:
 *     write_char_0 @ 0x18009E350 (write_char_0.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B68 (_invalid_parameter.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Character, FILE *Stream)
{
  wint_t result; // ax
  int v3; // eax

  if ( Stream )
  {
    v3 = Stream->_cnt - 2;
    Stream->_cnt = v3;
    if ( v3 < 0 )
    {
      return flswbuf(Character);
    }
    else
    {
      *(_WORD *)Stream->_ptr = Character;
      result = Character;
      Stream->_ptr += 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
