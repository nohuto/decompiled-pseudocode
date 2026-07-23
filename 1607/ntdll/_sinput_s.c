/*
 * XREFs of _sinput_s @ 0x1800A4034
 * Callers:
 *     _snscanf_s @ 0x1800A13D0 (_snscanf_s.c)
 *     sscanf_s @ 0x1800A1EA0 (sscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _input_s @ 0x1800A3754 (_input_s.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, _DWORD *a4)
{
  FILE v5; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    v5._base = a1;
    v5._ptr = a1;
    v5._cnt = a2;
    v5._flag = 73;
    return input_s(&v5, a3, a4);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
