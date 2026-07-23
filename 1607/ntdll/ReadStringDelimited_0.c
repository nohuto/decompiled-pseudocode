/*
 * XREFs of ReadStringDelimited_0 @ 0x1800A35C0
 * Callers:
 *     _input_s @ 0x1800A3754 (_input_s.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ReadString_0 @ 0x1800A340C (ReadString_0.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        FILE *Stream,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 v13; // bl
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  int v19[8]; // [rsp+50h] [rbp-58h] BYREF

  v13 = 0;
  memset(v19, 0, sizeof(v19));
  v14 = ++*a2;
  if ( **a2 == 94 )
  {
    ++v14;
    a1 |= 8u;
  }
  if ( *v14 == 93 )
  {
    v13 = 93;
    HIBYTE(v19[2]) = 32;
    ++v14;
  }
  while ( 1 )
  {
    v17 = *v14;
    if ( *v14 == 93 )
      break;
    ++v14;
    if ( v17 == 45 && v13 && (v15 = *v14, *v14 != 93) )
    {
      ++v14;
      if ( v13 >= v15 )
      {
        v16 = v13;
        v13 = v15;
      }
      else
      {
        v16 = v15;
      }
      while ( v13 <= v16 )
      {
        *((_BYTE *)v19 + ((unsigned __int64)v13 >> 3)) |= 1 << (v13 & 7);
        ++v13;
      }
      v13 = 0;
    }
    else
    {
      v13 = v17;
      *((_BYTE *)v19 + ((unsigned __int64)v17 >> 3)) |= 1 << (v17 & 7);
    }
  }
  *a2 = v14;
  return ReadString_0(a1, (__int64)v19, a3, a4, a5, a6, Stream, a8, a9);
}
