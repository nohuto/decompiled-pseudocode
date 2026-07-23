/*
 * XREFs of _sinput_s @ 0x140155ABC
 * Callers:
 *     _snscanf_s @ 0x140152704 (_snscanf_s.c)
 *     sscanf_s @ 0x140153114 (sscanf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _input_s @ 0x1401551E4 (_input_s.c)
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
    xHalFreeMessageTarget();
    return 0xFFFFFFFFLL;
  }
}
