/*
 * XREFs of write_multi_char_1 @ 0x140154E00
 * Callers:
 *     _woutput_s @ 0x1401544D0 (_woutput_s.c)
 * Callees:
 *     write_char_1 @ 0x140154DA8 (write_char_1.c)
 */

__int64 __fastcall write_multi_char_1(__int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  if ( a2 > 0 )
  {
    do
      result = write_char_1(a1, a3, a4);
    while ( *a4 != -1 && v8 > 0 );
  }
  return result;
}
