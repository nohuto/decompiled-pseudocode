/*
 * XREFs of sub_14014AA10 @ 0x14014AA10
 * Callers:
 *     _output_s @ 0x140149F94 (_output_s.c)
 * Callees:
 *     write_char_0 @ 0x140147A34 (write_char_0.c)
 */

int __fastcall sub_14014AA10(char *a1, int a2, FILE *a3, _DWORD *a4)
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
