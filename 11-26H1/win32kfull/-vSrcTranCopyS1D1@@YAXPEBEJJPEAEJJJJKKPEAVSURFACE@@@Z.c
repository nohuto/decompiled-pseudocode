/*
 * XREFs of ?vSrcTranCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401EE820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D1(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned __int32 v10; // ebx
  __int64 v11; // rdi
  unsigned __int32 v13; // r11d
  int v14; // r9d
  int v15; // esi
  const unsigned __int8 *v16; // rcx
  const unsigned __int8 *v17; // rax
  const unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // rdx
  int v20; // r8d
  int v21; // r11d
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rdi
  const unsigned __int8 *v26; // r8
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rbp
  __int64 v30; // rdi
  const unsigned __int8 *v31; // r8
  int v32; // eax
  int v33; // r11d
  int v34; // eax

  v10 = -1;
  v11 = a3;
  v13 = -1;
  v14 = ((_BYTE)a2 - (_BYTE)a5 + (_BYTE)a6) & 0x1F;
  v15 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v13 = _byteswap_ulong(0xFFFFFFFF >> v15);
  if ( (((_BYTE)a2 - (_BYTE)a5 + (_BYTE)a6) & 0x1F) != 0 )
    v10 = _byteswap_ulong(-1 << (32 - v14));
  v16 = &a1[((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v17 = &a1[((__int64)(a2 - a5 + a6) >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v18 = &v16[a3 * (__int64)a8];
  v19 = &a4[((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v20 = (_DWORD)v17 - (_DWORD)v16;
  if ( a9 )
  {
    if ( v16 == v17 )
    {
      v33 = v10 & v13;
      do
      {
        v34 = *(_DWORD *)v16;
        v16 += v11;
        *(_DWORD *)v19 |= v33 & v34;
        v19 += a7;
      }
      while ( v16 != v18 );
    }
    else
    {
      v28 = v20;
      v29 = a7 - v20;
      v30 = (int)v11 - v20;
      do
      {
        v31 = &v16[v28];
        if ( v15 )
        {
          *(_DWORD *)v19 |= v13 & *(_DWORD *)v16;
          v19 += 4;
          v16 += 4;
        }
        while ( v16 != v31 )
        {
          v32 = *(_DWORD *)v16;
          v16 += 4;
          *(_DWORD *)v19 |= v32;
          v19 += 4;
        }
        if ( v14 )
          *(_DWORD *)v19 |= v10 & *(_DWORD *)v16;
        v16 += v30;
        v19 += v29;
      }
      while ( v16 != v18 );
    }
  }
  else if ( v16 == v17 )
  {
    v21 = v10 & v13;
    do
    {
      v22 = *(_DWORD *)v16;
      v16 += v11;
      *(_DWORD *)v19 &= ~(v21 & v22);
      v19 += a7;
    }
    while ( v16 != v18 );
  }
  else
  {
    v23 = v20;
    v24 = a7 - v20;
    v25 = (int)v11 - v20;
    do
    {
      v26 = &v16[v23];
      if ( v15 )
      {
        *(_DWORD *)v19 &= ~(v13 & *(_DWORD *)v16);
        v19 += 4;
        v16 += 4;
      }
      while ( v16 != v26 )
      {
        v27 = *(_DWORD *)v16;
        v16 += 4;
        *(_DWORD *)v19 &= ~v27;
        v19 += 4;
      }
      if ( v14 )
        *(_DWORD *)v19 &= ~(v10 & *(_DWORD *)v16);
      v16 += v25;
      v19 += v24;
    }
    while ( v16 != v18 );
  }
}
