/*
 * XREFs of write_string_1 @ 0x140154350
 * Callers:
 *     _output_s @ 0x1401538E4 (_output_s.c)
 * Callees:
 *     write_char_0 @ 0x140151390 (write_char_0.c)
 */

int __fastcall write_string_1(char *a1, int a2, FILE *a3, _DWORD *a4)
{
  int result; // eax
  int v7; // ebx

  result = a3->_flag;
  v7 = a2;
  if ( (result & 0x40) == 0 || a3->_base )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        result = write_char_0(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
