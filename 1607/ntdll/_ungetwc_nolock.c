/*
 * XREFs of _ungetwc_nolock @ 0x1800A5AD0
 * Callers:
 *     ReadString_1 @ 0x1800A4BA8 (ReadString_1.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Character, FILE *Stream)
{
  int flag; // r9d
  char *v4; // r10
  char *ptr; // rax
  int v6; // eax

  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  v4 = Stream->_base + 2;
  if ( Stream->_ptr < v4 )
  {
    if ( Stream->_cnt || (unsigned __int64)Stream->_bufsiz < 2 )
      return -1;
    Stream->_ptr = v4;
  }
  Stream->_ptr -= 2;
  ptr = Stream->_ptr;
  if ( (flag & 0x40) != 0 )
  {
    if ( *(_WORD *)ptr != Character )
    {
      Stream->_ptr = ptr + 2;
      return -1;
    }
  }
  else
  {
    *(_WORD *)ptr = Character;
  }
  v6 = Stream->_flag;
  Stream->_cnt += 2;
  Stream->_flag = v6 & 0xFFFFFFEE | 1;
  return Character;
}
