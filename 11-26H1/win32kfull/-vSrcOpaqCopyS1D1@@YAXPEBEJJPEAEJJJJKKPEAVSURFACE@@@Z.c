/*
 * XREFs of ?vSrcOpaqCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401C79D0
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D1(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  unsigned __int32 v10; // r10d
  int v11; // r11d
  int v12; // ebp
  __int64 v13; // rbx
  int v14; // r14d
  unsigned __int32 v16; // r9d
  int v17; // r13d
  const unsigned __int8 *v18; // rdx
  const unsigned __int8 *v19; // r12
  unsigned __int8 *v20; // r8
  int v21; // r11d
  const unsigned __int8 *v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rbx
  const unsigned __int8 *v26; // r11
  int v27; // eax
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rbx
  const unsigned __int8 *v31; // r11
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  int v35; // r9d
  int v36; // ecx
  int v37; // esi
  int v38; // ebp
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // rbx
  const unsigned __int8 *v42; // r11
  int v43; // eax
  int v44; // r9d
  int v45; // ecx

  v10 = -1;
  v11 = a6 + a2 - a5;
  v12 = a10 & 1;
  v13 = a3;
  v14 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v16 = -1;
  v17 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v16 = _byteswap_ulong(0xFFFFFFFF >> v17);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = _byteswap_ulong(-1 << (32 - v14));
  v18 = &a1[((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v19 = &a1[((__int64)v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v20 = &a4[((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v21 = (_DWORD)v19 - (_DWORD)v18;
  v22 = &v18[v13 * a8];
  if ( (a9 & 1) != 0 )
  {
    if ( (a10 & 1) == 0 )
    {
      if ( v18 == v19 )
      {
        v33 = v10 & v16;
        do
        {
          v34 = v33 & *(_DWORD *)v18;
          v18 += v13;
          *(_DWORD *)v20 = v34 | ~v33 & *(_DWORD *)v20;
          v20 += a7;
        }
        while ( v18 != v22 );
      }
      else
      {
        v23 = v21;
        v24 = a7 - v21;
        v25 = (int)v13 - v21;
        do
        {
          v26 = &v18[v23];
          if ( v17 )
          {
            *(_DWORD *)v20 = v16 & *(_DWORD *)v18 | *(_DWORD *)v20 & ~v16;
            v20 += 4;
            v18 += 4;
          }
          while ( v18 != v26 )
          {
            v27 = *(_DWORD *)v18;
            v18 += 4;
            *(_DWORD *)v20 = v27;
            v20 += 4;
          }
          if ( v14 )
            *(_DWORD *)v20 = v10 & *(_DWORD *)v18 | *(_DWORD *)v20 & ~v10;
          v18 += v25;
          v20 += v24;
        }
        while ( v18 != v22 );
      }
      return;
    }
    goto LABEL_34;
  }
  if ( (a10 & 1) == 0 )
  {
LABEL_34:
    v37 = (unsigned __int8)-(v12 != (a9 & 1)) | ((unsigned __int8)-(v12 != (a9 & 1)) << 8) | (((unsigned __int8)-(v12 != (a9 & 1)) | ((unsigned __int8)-(v12 != (a9 & 1)) << 8)) << 16);
    v38 = (unsigned __int8)-(v12 != 0) | ((unsigned __int8)-(v12 != 0) << 8) | (((unsigned __int8)-(v12 != 0) | ((unsigned __int8)-(v12 != 0) << 8)) << 16);
    if ( v18 == v19 )
    {
      v44 = v10 & v16;
      do
      {
        v45 = *(_DWORD *)v18;
        v18 += v13;
        *(_DWORD *)v20 = ~v44 & *(_DWORD *)v20 | v44 & (v38 ^ v37 & v45);
        v20 += a7;
      }
      while ( v18 != v22 );
    }
    else
    {
      v39 = v21;
      v40 = a7 - v21;
      v41 = (int)v13 - v21;
      do
      {
        v42 = &v18[v39];
        if ( v17 )
        {
          *(_DWORD *)v20 = *(_DWORD *)v20 & ~v16 | v16 & (v38 ^ v37 & *(_DWORD *)v18);
          v20 += 4;
          v18 += 4;
        }
        while ( v18 != v42 )
        {
          v43 = *(_DWORD *)v18;
          v18 += 4;
          *(_DWORD *)v20 = v38 ^ v37 & v43;
          v20 += 4;
        }
        if ( v14 )
          *(_DWORD *)v20 = *(_DWORD *)v20 & ~v10 | v10 & (v38 ^ v37 & *(_DWORD *)v18);
        v18 += v41;
        v20 += v40;
      }
      while ( v18 != v22 );
    }
    return;
  }
  if ( v18 == v19 )
  {
    v35 = v10 & v16;
    do
    {
      v36 = *(_DWORD *)v18;
      v18 += v13;
      *(_DWORD *)v20 = ~v35 & *(_DWORD *)v20 | v35 & ~v36;
      v20 += a7;
    }
    while ( v18 != v22 );
  }
  else
  {
    v28 = v21;
    v29 = a7 - v21;
    v30 = (int)v13 - v21;
    do
    {
      v31 = &v18[v28];
      if ( v17 )
      {
        *(_DWORD *)v20 = *(_DWORD *)v20 & ~v16 | v16 & ~*(_DWORD *)v18;
        v20 += 4;
        v18 += 4;
      }
      while ( v18 != v31 )
      {
        v32 = *(_DWORD *)v18;
        v18 += 4;
        *(_DWORD *)v20 = ~v32;
        v20 += 4;
      }
      if ( v14 )
        *(_DWORD *)v20 = *(_DWORD *)v20 & ~v10 | v10 & ~*(_DWORD *)v18;
      v18 += v30;
      v20 += v29;
    }
    while ( v18 != v22 );
  }
}
