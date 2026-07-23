/*
 * XREFs of _fgetwc_nolock @ 0x1800A5A78
 * Callers:
 *     ReadString_1 @ 0x1800A4BA8 (ReadString_1.c)
 *     _whiteout @ 0x1800A503C (_whiteout.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *Stream)
{
  wint_t result; // ax
  int v3; // eax
  char *ptr; // rcx

  if ( Stream )
  {
    v3 = Stream->_cnt - 2;
    Stream->_cnt = v3;
    if ( v3 < 0 )
    {
      return filwbuf_s();
    }
    else
    {
      ptr = Stream->_ptr;
      result = *(_WORD *)ptr;
      Stream->_ptr = ptr + 2;
    }
  }
  else
  {
    invalid_parameter();
    return -1;
  }
  return result;
}
