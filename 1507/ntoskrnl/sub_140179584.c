/*
 * XREFs of sub_140179584 @ 0x140179584
 * Callers:
 *     _woutput_s @ 0x140178C0C (_woutput_s.c)
 * Callees:
 *     sub_14017952C @ 0x14017952C (sub_14017952C.c)
 */

__int64 __fastcall sub_140179584(__int16 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // r11d

  if ( a2 > 0 )
  {
    do
      result = sub_14017952C(a1, a3, a4);
    while ( *a4 != -1 && v8 > 0 );
  }
  return result;
}
