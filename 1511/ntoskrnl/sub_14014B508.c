/*
 * XREFs of sub_14014B508 @ 0x14014B508
 * Callers:
 *     _woutput_s @ 0x14014AB90 (_woutput_s.c)
 * Callees:
 *     sub_14014B4B0 @ 0x14014B4B0 (sub_14014B4B0.c)
 */

__int64 __fastcall sub_14014B508(__int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  if ( a2 > 0 )
  {
    do
      result = sub_14014B4B0(a1, a3, a4);
    while ( *a4 != -1 && v8 > 0 );
  }
  return result;
}
