/*
 * XREFs of _swinput_s @ 0x1800A4FD0
 * Callers:
 *     _snwscanf_s @ 0x1800A14F0 (_snwscanf_s.c)
 *     swscanf_s @ 0x1800A23D0 (swscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
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
