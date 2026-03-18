/*
 * XREFs of vCopyClearTypeBits @ 0x1C00A6DAC
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int16 __fastcall vCopyClearTypeBits(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  __int64 v7; // r12
  size_t v8; // r14
  unsigned __int16 v11; // r10
  unsigned int v13; // ebx
  int v14; // esi
  unsigned __int16 v15; // r8
  int v16; // eax
  __int16 v17; // bp
  __int64 v18; // rsi
  int v19; // eax
  _BYTE *v20; // rcx
  unsigned __int16 v21; // bp
  unsigned int v22; // edx
  _BYTE *v23; // r10
  __int64 v24; // r12
  _BYTE *v25; // r8
  _BYTE *v26; // rbx
  size_t v27; // r9
  size_t i; // rdi
  char v29; // al
  int v30; // r9d
  unsigned __int16 v31; // cx
  __int64 v32; // rsi
  _BYTE *v34; // [rsp+50h] [rbp+8h]

  v7 = (unsigned int)a4[2];
  v8 = (unsigned int)a4[4];
  v11 = a6;
  v13 = 4 * ((unsigned int)(((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v8 + v7 + a4[3]) + 31) >> 5);
  v14 = *(_DWORD *)(a1 + 40) & 0x20000000;
  if ( v14 && a4[1] )
  {
    v30 = (a5 - a6) % 5;
    if ( !(_WORD)v30 )
      LOWORD(v30) = 5;
    v15 = -(__int16)v30 - 5 * (*((_WORD *)a4 + 2) - 1) + a5;
  }
  else
  {
    v15 = a5;
  }
  v16 = *a4;
  if ( *a4 )
  {
    if ( v14 )
    {
      v31 = a6 + 5 * (v16 - 1);
      v11 = 5;
      a3 += v13 * v31;
      v15 -= v31;
    }
    else
    {
      a3 += v13 * v16;
    }
  }
  v17 = *((_WORD *)a4 + 10);
  v18 = a3 + v7;
  *(_DWORD *)(a2 + 8) = v8;
  LOWORD(v19) = 4 * v17;
  v20 = (_BYTE *)(a2 + 16);
  v21 = 5 * v17;
  if ( v21 < v15 )
    v15 = v21;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 )
  {
    LOWORD(v19) = v11;
    *(_DWORD *)(a2 + 12) = v11;
    v22 = v15;
  }
  else
  {
    v22 = a4[5];
    *(_DWORD *)(a2 + 12) = v22;
  }
  v23 = &v20[(unsigned int)v8 * v22];
  if ( v20 >= v23 )
  {
    v26 = v34;
  }
  else
  {
    v24 = v13;
    v25 = &v20[v8];
    LOWORD(v19) = 0;
    do
    {
      v26 = v20;
      v27 = v25 - v20;
      if ( v20 > v25 )
        v27 = 0LL;
      if ( v27 )
      {
        for ( i = 0LL; i < v27; ++i )
        {
          v29 = *(_BYTE *)(i + v18);
          *v26++ = v29;
        }
        LOWORD(v19) = 0;
      }
      v20 += v8;
      v25 += v8;
      v18 += v24;
    }
    while ( v20 < v23 );
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 )
  {
    LOWORD(v19) = v21;
    if ( v22 < v21 )
    {
      v19 = a4[5];
      if ( 5 * v19 != v22 )
      {
        v32 = 5 * v19 - v22;
        do
        {
          LOWORD(v19) = (unsigned __int16)memset(v26, 0, v8);
          v26 += v8;
          --v32;
        }
        while ( v32 );
      }
    }
  }
  return v19;
}
