/*
 * XREFs of write_multi_char @ 0x18009D97C
 * Callers:
 *     _output_l @ 0x18009D0E0 (_output_l.c)
 * Callees:
 *     write_char @ 0x18009D92C (write_char.c)
 */

void __fastcall write_multi_char(unsigned __int8 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      write_char(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
}
