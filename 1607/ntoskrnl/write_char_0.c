/*
 * XREFs of write_char_0 @ 0x140151390
 * Callers:
 *     _output_l @ 0x140150B48 (_output_l.c)
 *     write_string_0 @ 0x1401513D8 (write_string_0.c)
 *     _output_s @ 0x1401538E4 (_output_s.c)
 *     write_multi_char_0 @ 0x1401542FC (write_multi_char_0.c)
 *     write_string_1 @ 0x140154350 (write_string_1.c)
 * Callees:
 *     _flsbuf @ 0x1401569B8 (_flsbuf.c)
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
