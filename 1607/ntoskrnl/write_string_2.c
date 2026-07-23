/*
 * XREFs of write_string_2 @ 0x140154E4C
 * Callers:
 *     _woutput_s @ 0x1401544D0 (_woutput_s.c)
 * Callees:
 *     write_char_1 @ 0x140154DA8 (write_char_1.c)
 */

__int64 __fastcall write_string_2(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  result = *(unsigned int *)(a3 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = write_char_1(*a1++, a3, a4);
      while ( *a4 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
