/*
 * XREFs of vSrcOpaqCopyS1D1 @ 0x1C0282000
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
  __int64 v13; // rdi
  int v14; // r11d
  unsigned int v15; // r9d
  int v16; // ebx
  unsigned int *v17; // r14
  unsigned int *v18; // rdx
  _DWORD *v19; // r8
  unsigned int *v20; // rbp
  int v21; // ecx
  __int64 v22; // r13
  __int64 result; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  unsigned int *v26; // r11
  int v27; // r9d
  int v28; // ebx
  __int64 v29; // rbx
  __int64 v30; // rdi
  unsigned int *v31; // r11
  int v32; // eax
  int v33; // r9d
  int v34; // ecx
  int v35; // r11d
  int v36; // ebx
  int v37; // r11d
  __int64 v38; // rsi
  __int64 v39; // r14
  unsigned int *v40; // rdi
  unsigned int v41; // eax
  int v42; // r9d
  int v43; // ecx
  __int64 v44; // [rsp+30h] [rbp+8h]

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
  v44 = v16;
  v19 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v20 = (unsigned int *)((char *)v18 + v13 * a8);
  v21 = (_DWORD)v17 - (_DWORD)v18;
  v22 = v14;
  if ( (a9 & 1) != 0 )
  {
    if ( (a10 & 1) == 0 )
    {
      if ( v18 == v17 )
      {
        v27 = v10 & v15;
        do
        {
          result = v27 & *v18;
          v18 = (unsigned int *)((char *)v18 + v13);
          *v19 = result | *v19 & ~v27;
          v19 = (_DWORD *)((char *)v19 + a7);
        }
        while ( v18 != v20 );
      }
      else
      {
        result = (unsigned int)(a7 - v21);
        v24 = (int)v13 - v21;
        v25 = (int)result;
        do
        {
          v26 = (unsigned int *)((char *)v18 + v21);
          if ( v44 )
          {
            result = v15 & *v18;
            *v19 = result | *v19 & ~v15;
            ++v19;
            ++v18;
          }
          while ( v18 != v26 )
          {
            result = *v18++;
            *v19++ = result;
          }
          if ( v22 )
          {
            result = v10 & *v18;
            *v19 = result | *v19 & ~v10;
          }
          v18 = (unsigned int *)((char *)v18 + v24);
          v19 = (_DWORD *)((char *)v19 + v25);
        }
        while ( v18 != v20 );
      }
      return result;
    }
    if ( (a9 & 1) != v12 )
    {
      v28 = 255;
LABEL_37:
      v35 = 0;
      v36 = (((v28 << 8) | v28) << 16) | (v28 << 8) | v28;
      if ( v12 == 1 )
        v35 = 255;
      v37 = (((v35 << 8) | v35) << 16) | (v35 << 8) | v35;
      if ( v18 == v17 )
      {
        v42 = v10 & v15;
        do
        {
          result = *v19 & (unsigned int)~v42;
          v43 = v37 ^ v36 & *v18;
          v18 = (unsigned int *)((char *)v18 + v13);
          *v19 = result | v42 & v43;
          v19 = (_DWORD *)((char *)v19 + a7);
        }
        while ( v18 != v20 );
      }
      else
      {
        result = (unsigned int)(a7 - v21);
        v38 = (int)v13 - v21;
        v39 = (int)result;
        do
        {
          v40 = (unsigned int *)((char *)v18 + v21);
          if ( v44 )
          {
            result = *v19 & ~v15;
            *v19++ = result | v15 & (v37 ^ v36 & *v18++);
          }
          while ( v18 != v40 )
          {
            v41 = *v18++;
            result = v37 ^ v36 & v41;
            *v19++ = result;
          }
          if ( v22 )
          {
            result = *v19 & ~v10;
            *v19 = result | v10 & (v37 ^ v36 & *v18);
          }
          v18 = (unsigned int *)((char *)v18 + v38);
          v19 = (_DWORD *)((char *)v19 + v39);
        }
        while ( v18 != v20 );
      }
      return result;
    }
LABEL_36:
    v28 = 0;
    goto LABEL_37;
  }
  if ( (a10 & 1) == 0 )
    goto LABEL_36;
  if ( v18 == v17 )
  {
    v33 = v10 & v15;
    do
    {
      result = *v19 & (unsigned int)~v33;
      v34 = v33 & ~*v18;
      v18 = (unsigned int *)((char *)v18 + v13);
      *v19 = result | v34;
      v19 = (_DWORD *)((char *)v19 + a7);
    }
    while ( v18 != v20 );
  }
  else
  {
    result = (unsigned int)(a7 - v21);
    v29 = (int)v13 - v21;
    v30 = (int)result;
    do
    {
      v31 = (unsigned int *)((char *)v18 + v21);
      if ( v44 )
      {
        result = *v19 & ~v15;
        *v19++ = result | v15 & ~*v18++;
      }
      while ( v18 != v31 )
      {
        v32 = *v18++;
        result = (unsigned int)~v32;
        *v19++ = result;
      }
      if ( v22 )
      {
        result = *v19 & ~v10;
        *v19 = result | v10 & ~*v18;
      }
      v18 = (unsigned int *)((char *)v18 + v29);
      v19 = (_DWORD *)((char *)v19 + v30);
    }
    while ( v18 != v20 );
  }
  return result;
}
