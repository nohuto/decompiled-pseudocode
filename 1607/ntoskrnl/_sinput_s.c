/*
 * XREFs of _sinput_s @ 0x14015554C
 * Callers:
 *     _snscanf_s @ 0x140152144 (_snscanf_s.c)
 *     sscanf_s @ 0x140152B54 (sscanf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _input_s @ 0x140154C74 (_input_s.c)
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
