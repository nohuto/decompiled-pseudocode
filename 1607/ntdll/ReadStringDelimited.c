/*
 * XREFs of ReadStringDelimited @ 0x18009FE64
 * Callers:
 *     _input_l @ 0x18009FFF0 (_input_l.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ReadString @ 0x18009FCA4 (ReadString.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // r8
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // al
  int v18[8]; // [rsp+40h] [rbp-58h] BYREF

  v12 = 0;
  memset(v18, 0, sizeof(v18));
  v13 = ++*a2;
  if ( **a2 == 94 )
  {
    ++v13;
    a1 |= 8u;
  }
  if ( *v13 == 93 )
  {
    v12 = 93;
    HIBYTE(v18[2]) = 32;
    ++v13;
  }
  while ( 1 )
  {
    v16 = *v13;
    if ( *v13 == 93 )
      break;
    ++v13;
    if ( v16 == 45 && v12 && (v14 = *v13, *v13 != 93) )
    {
      ++v13;
      if ( v12 >= v14 )
      {
        v15 = v12;
        v12 = v14;
      }
      else
      {
        v15 = v14;
      }
      while ( v12 <= v15 )
      {
        *((_BYTE *)v18 + ((unsigned __int64)v12 >> 3)) |= 1 << (v12 & 7);
        ++v12;
      }
      v12 = 0;
    }
    else
    {
      v12 = v16;
      *((_BYTE *)v18 + ((unsigned __int64)v16 >> 3)) |= 1 << (v16 & 7);
    }
  }
  *a2 = v13;
  return ReadString(a1, (__int64)v18, a3, a4, SrcCh, a6, Stream, a8);
}
