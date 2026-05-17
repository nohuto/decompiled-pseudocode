/*
 * XREFs of _swinput_s @ 0x18009246C
 * Callers:
 *     _snwscanf_s @ 0x18008E930 (_snwscanf_s.c)
 *     swscanf_s @ 0x18008F810 (swscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180083FB8 (_invalid_parameter.c)
 *     _winput_s @ 0x180092530 (_winput_s.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE Stream; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._cnt = 2 * a2;
    Stream._flag = 73;
    return winput_s(&Stream);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
