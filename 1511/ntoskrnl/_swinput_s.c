/*
 * XREFs of _swinput_s @ 0x14014C640
 * Callers:
 *     _snwscanf_s @ 0x140148EAC (_snwscanf_s.c)
 *     swscanf_s @ 0x140149C18 (swscanf_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _winput_s @ 0x14014C6F4 (_winput_s.c)
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
    PopPoCoalescinCallback();
    return 0xFFFFFFFFLL;
  }
}
