/*
 * XREFs of sub_14014B554 @ 0x14014B554
 * Callers:
 *     _woutput_s @ 0x14014AB90 (_woutput_s.c)
 * Callees:
 *     sub_14014B4B0 @ 0x14014B4B0 (sub_14014B4B0.c)
 */

__int64 __fastcall sub_14014B554(__int16 *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  result = *(unsigned int *)(a3 + 24);
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
        result = sub_14014B4B0(*a1++, a3, a4);
      while ( *a4 != -1 && v8 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
