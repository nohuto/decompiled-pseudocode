/*
 * XREFs of RtlIoEncodeMemIoResource @ 0x1800E8F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIoEncodeMemIoResource(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int16 v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  __int64 j; // rax
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  __int64 i; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
LABEL_5:
    if ( a3 > 0xFFFFFFFF || a4 > 0xFFFFFFFF )
      return 3221225485LL;
    *(_QWORD *)(a1 + 16) = a5;
    *(_QWORD *)(a1 + 24) = a6;
    *(_BYTE *)(a1 + 1) = 1;
    goto LABEL_8;
  }
  *(_WORD *)(a1 + 4) &= 0xF1FFu;
  v7 = *(_WORD *)(a1 + 4);
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 24) = a6;
  if ( a3 <= 0xFFFFFFFF && a4 <= 0xFFFFFFFF )
  {
    *(_BYTE *)(a1 + 1) = 3;
LABEL_8:
    *(_DWORD *)(a1 + 12) = a4;
    *(_DWORD *)(a1 + 8) = a3;
    return 0LL;
  }
  if ( a3 > 0xFFFFFFFF00LL )
  {
    if ( a3 > 0xFFFFFFFF0000LL )
    {
      if ( a3 <= 0xFFFFFFFF00000000uLL )
      {
        v8 = HIDWORD(a3);
        if ( a3 == HIDWORD(a3) << 32 && a4 <= 0xFFFFFFFF00000000uLL )
        {
          v9 = HIDWORD(a4);
          v15 = HIDWORD(a4);
          while ( a4 != v15 << 32 )
          {
            v16 = a4;
            a4 *= 2LL;
            if ( a4 < v16 )
              return 3221225473LL;
            v15 = HIDWORD(a4);
            v9 = HIDWORD(a4);
          }
          v12 = 2048;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v8 = a3 >> 16;
      if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 16) << 16 && a4 <= 0xFFFFFFFF0000LL )
      {
        v9 = a4 >> 16;
        for ( i = (unsigned int)(a4 >> 16); a4 != i << 16; i = (unsigned int)v9 )
        {
          v14 = a4;
          a4 *= 2LL;
          if ( a4 < v14 )
            return 3221225473LL;
          LODWORD(v9) = a4 >> 16;
        }
        v12 = 1024;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v8 = a3 >> 8;
    if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 8) << 8 && a4 <= 0xFFFFFFFF00LL )
    {
      v9 = a4 >> 8;
      for ( j = (unsigned int)(a4 >> 8); a4 != j << 8; j = (unsigned int)v9 )
      {
        v11 = a4;
        a4 *= 2LL;
        if ( a4 < v11 )
          return 3221225473LL;
        LODWORD(v9) = a4 >> 8;
      }
      v12 = 512;
LABEL_21:
      *(_BYTE *)(a1 + 1) = 7;
      *(_WORD *)(a1 + 4) = v12 | v7;
      *(_DWORD *)(a1 + 8) = v8;
      *(_DWORD *)(a1 + 12) = v9;
      return 0LL;
    }
  }
  return 3221225473LL;
}
