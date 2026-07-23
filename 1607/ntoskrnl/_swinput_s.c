/*
 * XREFs of _swinput_s @ 0x140155F38
 * Callers:
 *     _snwscanf_s @ 0x1401527FC (_snwscanf_s.c)
 *     swscanf_s @ 0x140153568 (swscanf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _winput_s @ 0x140155FEC (_winput_s.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = 2 * a2;
    File._flag = 73;
    return winput_s(&File);
  }
  else
  {
    xHalFreeMessageTarget();
    return 0xFFFFFFFFLL;
  }
}
