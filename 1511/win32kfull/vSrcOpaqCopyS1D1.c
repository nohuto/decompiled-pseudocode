/*
 * XREFs of vSrcOpaqCopyS1D1 @ 0x1C0282370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcOpaqCopyS1D1(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  unsigned int v10; // r10d
  int v12; // esi
  __int64 v13; // r11
  int v14; // ebx
  unsigned int v15; // r9d
  int v16; // edi
  unsigned int *v17; // rbp
  unsigned int *v18; // rdx
  _DWORD *v19; // r8
  __int64 v20; // r12
  __int64 v21; // r13
  int v22; // ecx
  unsigned int *v23; // r14
  __int64 result; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int *v27; // r11
  int v28; // r9d
  int v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rbx
  unsigned int *v32; // r11
  int v33; // eax
  int v34; // r9d
  int v35; // ecx
  int v36; // ebx
  int v37; // edi
  int v38; // ebx
  __int64 v39; // rbp
  __int64 v40; // rsi
  unsigned int *v41; // r11
  unsigned int v42; // eax
  int v43; // r9d
  int v44; // ecx

  v10 = -1;
  v12 = a10 & 1;
  v13 = a3;
  v14 = ((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F;
  v15 = -1;
  v16 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v15 = (((0xFFFFFFFF >> v16) & 0xFF00 | (0xFFFFFFFF >> v16 << 16)) << 8) | (((0xFFFFFFFF >> v16 >> 16) | (0xFFFFFFFF >> v16) & 0xFF0000) >> 8);
  if ( (((_BYTE)a2 + (_BYTE)a6 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = (((-1 << (32 - v14)) & 0xFF00 | (-1 << (32 - v14) << 16)) << 8) | ((((unsigned int)(-1 << (32 - v14)) >> 16) | (-1 << (32 - v14)) & 0xFF0000) >> 8);
  v17 = (unsigned int *)(a1 + (((__int64)(a2 + a6 - a5) >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v18 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v20 = v14;
  v21 = v16;
  v22 = (_DWORD)v17 - (_DWORD)v18;
  v23 = (unsigned int *)((char *)v18 + a8 * (int)v13);
  if ( (a9 & 1) != 0 )
  {
    if ( (a10 & 1) == 0 )
    {
      if ( v18 == v17 )
      {
        v28 = v10 & v15;
        do
        {
          result = v28 & *v18;
          v18 = (unsigned int *)((char *)v18 + v13);
          *v19 = result | *v19 & ~v28;
          v19 = (_DWORD *)((char *)v19 + a7);
        }
        while ( v18 != v23 );
      }
      else
      {
        result = (unsigned int)(a7 - v22);
        v25 = (int)result;
        v26 = (int)v13 - v22;
        do
        {
          v27 = (unsigned int *)((char *)v18 + v22);
          if ( v21 )
          {
            result = v15 & *v18;
            *v19 = result | *v19 & ~v15;
            ++v19;
            ++v18;
          }
          while ( v18 != v27 )
          {
            result = *v18++;
            *v19++ = result;
          }
          if ( v20 )
          {
            result = v10 & *v18;
            *v19 = result | *v19 & ~v10;
          }
          v18 = (unsigned int *)((char *)v18 + v26);
          v19 = (_DWORD *)((char *)v19 + v25);
        }
        while ( v18 != v23 );
      }
      return result;
    }
    if ( (a9 & 1) != v12 )
    {
      v29 = 255;
LABEL_37:
      v36 = 0;
      v37 = (((v29 << 8) | v29) << 16) | (v29 << 8) | v29;
      if ( v12 == 1 )
        v36 = 255;
      v38 = (((v36 << 8) | v36) << 16) | (v36 << 8) | v36;
      if ( v18 == v17 )
      {
        v43 = v10 & v15;
        do
        {
          result = *v19 & (unsigned int)~v43;
          v44 = v38 ^ v37 & *v18;
          v18 = (unsigned int *)((char *)v18 + v13);
          *v19 = result | v43 & v44;
          v19 = (_DWORD *)((char *)v19 + a7);
        }
        while ( v18 != v23 );
      }
      else
      {
        result = (unsigned int)(a7 - v22);
        v39 = (int)result;
        v40 = (int)v13 - v22;
        do
        {
          v41 = (unsigned int *)((char *)v18 + v22);
          if ( v21 )
          {
            result = *v19 & ~v15;
            *v19++ = result | v15 & (v38 ^ v37 & *v18++);
          }
          while ( v18 != v41 )
          {
            v42 = *v18++;
            result = v38 ^ v37 & v42;
            *v19++ = result;
          }
          if ( v20 )
          {
            result = *v19 & ~v10;
            *v19 = result | v10 & (v38 ^ v37 & *v18);
          }
          v18 = (unsigned int *)((char *)v18 + v40);
          v19 = (_DWORD *)((char *)v19 + v39);
        }
        while ( v18 != v23 );
      }
      return result;
    }
LABEL_36:
    v29 = 0;
    goto LABEL_37;
  }
  if ( (a10 & 1) == 0 )
    goto LABEL_36;
  if ( v18 == v17 )
  {
    v34 = v10 & v15;
    do
    {
      result = *v19 & (unsigned int)~v34;
      v35 = v34 & ~*v18;
      v18 = (unsigned int *)((char *)v18 + v13);
      *v19 = result | v35;
      v19 = (_DWORD *)((char *)v19 + a7);
    }
    while ( v18 != v23 );
  }
  else
  {
    result = (unsigned int)(a7 - v22);
    v30 = (int)result;
    v31 = (int)v13 - v22;
    do
    {
      v32 = (unsigned int *)((char *)v18 + v22);
      if ( v21 )
      {
        result = *v19 & ~v15;
        *v19++ = result | v15 & ~*v18++;
      }
      while ( v18 != v32 )
      {
        v33 = *v18++;
        result = (unsigned int)~v33;
        *v19++ = result;
      }
      if ( v20 )
      {
        result = *v19 & ~v10;
        *v19 = result | v10 & ~*v18;
      }
      v18 = (unsigned int *)((char *)v18 + v31);
      v19 = (_DWORD *)((char *)v19 + v30);
    }
    while ( v18 != v23 );
  }
  return result;
}
