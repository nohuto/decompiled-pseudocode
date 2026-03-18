/*
 * XREFs of ?vSrcTranCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401D6FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D8(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r14d
  int v11; // r11d
  int v12; // edi
  int v14; // r12d
  __int64 v15; // r10
  unsigned int v17; // ebp
  unsigned __int8 *v18; // r8
  const unsigned __int8 *v19; // rsi
  const unsigned __int8 *v20; // r9
  unsigned int v21; // edx
  int v22; // r15d
  int v23; // r8d
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // r9
  const unsigned __int8 *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r10
  char v29; // dl
  unsigned __int8 *v30; // r8
  __int64 v31; // r11
  unsigned __int8 *v32; // rbp
  unsigned __int8 *v33; // r10
  unsigned __int64 v34; // rax
  _BYTE *v35; // r9
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int8 *v38; // rdx
  unsigned __int8 *v39; // r10
  __int64 v40; // r8
  char v41; // al
  unsigned __int8 *v42; // rcx
  unsigned __int8 *v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  int v45; // [rsp+78h] [rbp+10h]

  v9 = a5;
  v11 = a7;
  v12 = a6;
  v14 = a3;
  v15 = a5 & 0xFFFFFFF8;
  v17 = a5 & 7;
  v18 = &a4[v15];
  v45 = 255 >> (a5 & 7);
  v19 = &a1[(__int64)a2 >> 3];
  v20 = v19;
  v21 = (a6 & 0xFFFFFFF8) - v15;
  v44 = a8 * a7;
  v43 = &v18[v44];
  v22 = a3 - (v21 >> 3);
  if ( (a6 & 0xFFFFFFF8) != (_DWORD)v15 )
  {
    v31 = 0x101010101010101LL * a9;
    v32 = &v18[v44];
    do
    {
      v33 = &v18[v21];
      if ( (*v20 & (unsigned __int8)v45) != 0 )
      {
        v31 = 0x101010101010101LL * a9;
        v34 = dword_140362BB0[(unsigned __int64)(unsigned __int8)(*v20 & v45) >> 4] | ((unsigned __int64)dword_140362BB0[*v20 & (unsigned __int8)v45 & 0xF] << 32);
        *(_QWORD *)v18 = v31 & v34 | *(_QWORD *)v18 & ~v34;
      }
      v35 = v20 + 1;
      v36 = (unsigned __int64 *)(v18 + 8);
      if ( v36 != (unsigned __int64 *)v33 )
      {
        do
        {
          if ( *v35 )
          {
            v37 = dword_140362BB0[(unsigned __int64)(unsigned __int8)*v35 >> 4] | ((unsigned __int64)dword_140362BB0[*v35 & 0xF] << 32);
            *v36 = v31 & v37 | *v36 & ~v37;
          }
          ++v35;
          ++v36;
        }
        while ( v36 != (unsigned __int64 *)v33 );
        v32 = v43;
      }
      v18 = (unsigned __int8 *)v36 + (int)(a7 - v21);
      v20 = &v35[v22];
    }
    while ( v18 != v32 );
    v11 = a7;
    v12 = a6;
    v17 = a5 & 7;
    v9 = a5;
    v14 = a3;
  }
  v23 = v12 & 7;
  if ( (v12 & 7) != 0 )
  {
    if ( ((v12 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v24 = &a4[v12 & 0xFFFFFFFFFFFFFFF8uLL];
      v25 = &v24[v44];
      v26 = &a1[(__int64)(v12 + a2 - v9) >> 3];
      v27 = v12 & 7;
      v28 = v11 - v23;
      do
      {
        v29 = *v26;
        v30 = &v24[v27];
        if ( *v26 )
        {
          do
          {
            if ( v29 < 0 )
              *v24 = a9;
            v29 *= 2;
            ++v24;
          }
          while ( v24 != v30 );
        }
        else
        {
          v24 += v27;
        }
        v24 += v28;
        v26 += v14;
      }
      while ( v24 != v25 );
    }
    else if ( (int)(v23 - v17) > 0 )
    {
      v38 = &a4[v9];
      v39 = &v38[v44];
      v40 = (int)(v11 - (v23 - v17));
      do
      {
        v41 = *v19 << v17;
        v42 = &v38[(v12 & 7) - (unsigned __int64)v17];
        do
        {
          if ( v41 < 0 )
            *v38 = a9;
          v41 *= 2;
          ++v38;
        }
        while ( v38 != v42 );
        v38 += v40;
        v19 += v14;
      }
      while ( v38 != v39 );
    }
  }
}
