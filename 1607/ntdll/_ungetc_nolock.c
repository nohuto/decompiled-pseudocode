/*
 * XREFs of _ungetc_nolock @ 0x1800A0AD0
 * Callers:
 *     ReadString @ 0x18009FCA4 (ReadString.c)
 *     _input_l @ 0x18009FFF0 (_input_l.c)
 *     ReadString_0 @ 0x1800A340C (ReadString_0.c)
 *     _input_s @ 0x1800A3754 (_input_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _getbuf @ 0x1800A0B80 (_getbuf.c)
 */

int __cdecl ungetc_nolock(int Character, FILE *Stream)
{
  unsigned __int8 v3; // di
  int flag; // eax
  char *v6; // rax

  v3 = Character;
  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  if ( !Stream->_base )
    getbuf(Stream);
  if ( Stream->_ptr == Stream->_base )
  {
    if ( Stream->_cnt )
      return -1;
    ++Stream->_ptr;
  }
  v6 = --Stream->_ptr;
  if ( (Stream->_flag & 0x40) != 0 )
  {
    if ( *v6 != v3 )
    {
      Stream->_ptr = v6 + 1;
      return -1;
    }
  }
  else
  {
    *v6 = v3;
  }
  ++Stream->_cnt;
  Stream->_flag &= ~0x10u;
  Stream->_flag |= 1u;
  return v3;
}
