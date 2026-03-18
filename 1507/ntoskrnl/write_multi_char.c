/*
 * XREFs of write_multi_char @ 0x14017514C
 * Callers:
 *     _woutput_l @ 0x1401747E0 (_woutput_l.c)
 * Callees:
 *     write_char @ 0x140175100 (write_char.c)
 */

__int16 __fastcall write_multi_char(wchar_t a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  __int16 result; // ax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
