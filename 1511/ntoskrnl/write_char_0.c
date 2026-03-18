/*
 * XREFs of write_char_0 @ 0x140147A34
 * Callers:
 *     _output_l @ 0x1401471F0 (_output_l.c)
 *     write_string_0 @ 0x140147A7C (write_string_0.c)
 *     _output_s @ 0x140149F94 (_output_s.c)
 *     write_multi_char_0 @ 0x14014A9BC (write_multi_char_0.c)
 *     sub_14014AA10 @ 0x14014AA10 (sub_14014AA10.c)
 * Callees:
 *     _flsbuf @ 0x14014D0C0 (_flsbuf.c)
 */

int __fastcall write_char_0(char a1, FILE *a2, _DWORD *a3)
{
  int result; // eax

  result = a2->_flag;
  if ( (result & 0x40) == 0 || a2->_base )
  {
    if ( --a2->_cnt < 0 )
    {
      result = flsbuf(a1, a2);
    }
    else
    {
      *a2->_ptr++ = a1;
      result = (unsigned __int8)a1;
    }
    if ( result == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
  return result;
}
