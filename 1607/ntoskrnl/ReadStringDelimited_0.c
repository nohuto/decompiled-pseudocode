/*
 * XREFs of ReadStringDelimited_0 @ 0x140155D54
 * Callers:
 *     _winput_s @ 0x140155FEC (_winput_s.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ReadString_0 @ 0x140155B1C (ReadString_0.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  unsigned __int16 v12; // bx
  unsigned __int16 *v14; // r8
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // ax
  int v19[2048]; // [rsp+50h] [rbp-2048h] BYREF

  v12 = 0;
  memset(v19, 0, sizeof(v19));
  v14 = ++*a2;
  if ( **a2 == 94 )
  {
    ++v14;
    a1 |= 8u;
  }
  if ( *v14 == 93 )
  {
    v12 = 93;
    HIBYTE(v19[2]) = 32;
    ++v14;
  }
  while ( 1 )
  {
    v17 = *v14;
    if ( *v14 == 93 )
      break;
    ++v14;
    if ( v17 == 45 && v12 && (v15 = *v14, *v14 != 93) )
    {
      ++v14;
      if ( v12 >= v15 )
      {
        v16 = v12;
        v12 = v15;
      }
      else
      {
        v16 = v15;
      }
      while ( v12 <= v16 )
      {
        *((_BYTE *)v19 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
        ++v12;
      }
      v12 = 0;
    }
    else
    {
      v12 = v17;
      *((_BYTE *)v19 + ((unsigned __int64)v17 >> 3)) |= 1 << (v17 & 7);
    }
  }
  *a2 = v14;
  return ReadString_0(a1, (__int64)v19, a3, a4, a5, a6, File, Src, a9);
}
