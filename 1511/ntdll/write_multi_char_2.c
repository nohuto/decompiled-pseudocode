/*
 * XREFs of write_multi_char_2 @ 0x1800A372C
 * Callers:
 *     _woutput_s @ 0x1800A2DA4 (_woutput_s.c)
 * Callees:
 *     write_char_2 @ 0x1800A36CC (write_char_2.c)
 */

__int64 __fastcall write_multi_char_2(__int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  if ( a2 > 0 )
  {
    do
      result = write_char_2(a1, a3, a4);
    while ( *a4 != -1 && v8 > 0 );
  }
  return result;
}
