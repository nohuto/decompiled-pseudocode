/*
 * XREFs of write_char_1 @ 0x180090748
 * Callers:
 *     _output_s @ 0x18008FCB4 (_output_s.c)
 *     write_multi_char_1 @ 0x180090798 (write_multi_char_1.c)
 *     write_string_1 @ 0x1800907F0 (write_string_1.c)
 * Callees:
 *     _flsbuf @ 0x18008A528 (_flsbuf.c)
 */

int __fastcall write_char_1(char a1, FILE *a2, _DWORD *a3)
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
