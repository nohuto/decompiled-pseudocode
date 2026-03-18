/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C0282B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcOpaqCopyS1D4(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v11; // rsi
  int v12; // r11d
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // r13d
  __int64 v16; // r12
  int v17; // r10d
  unsigned __int8 *v18; // r9
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  int v23; // r11d
  int v24; // ecx
  __int64 v25; // r13
  _BYTE *v26; // r8
  __int64 v27; // r11
  unsigned __int8 *v28; // rdx
  _BYTE *v29; // r8
  int v30; // r10d
  char v31; // si
  _BYTE *v32; // r11
  int v33; // ebx
  _BYTE *v34; // r15
  unsigned __int8 v35; // r9
  _BYTE *v36; // rdi
  int v37; // ecx
  unsigned __int64 v38; // rdx
  _BYTE *v39; // r11
  int v40; // ecx
  int v41; // r14d
  int v42; // ecx
  char v43; // bl
  _BYTE *v44; // rsi
  __int64 v45; // rdx
  unsigned __int8 v46; // r9
  int v47; // edi
  unsigned __int64 v48; // rcx
  unsigned __int8 *v49; // r9
  unsigned __int8 *v50; // rbx
  _BYTE *v51; // r8
  int v52; // r14d
  unsigned __int8 v53; // r11
  int v54; // edx
  unsigned __int64 v55; // rcx
  __int64 v57; // [rsp+0h] [rbp-20h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-10h]
  __int64 v59; // [rsp+10h] [rbp-10h]
  __int64 v60; // [rsp+50h] [rbp+30h]

  v60 = a1;
  v11 = a5;
  v12 = a6 - a5;
  v13 = a2;
  LOBYTE(a5) = a10 | (16 * a10);
  v14 = a2 & 7;
  BYTE1(a5) = a9 | (16 * a5);
  v15 = v12 + a2;
  HIBYTE(a5) = a9 | (16 * BYTE1(a5));
  v16 = a3;
  BYTE2(a5) = a10 | (16 * HIBYTE(a5));
  v17 = ((_BYTE)v12 + (_BYTE)a2) & 7;
  v18 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  a10 = 8 - v14;
  a9 = v12 + a2;
  v19 = a8 * a3;
  v57 = v19;
  v58 = &v18[v19];
  v20 = v14 != 0 ? 8 - v14 : 0;
  v21 = a7;
  LOBYTE(v22) = v20 + v17;
  v23 = v12 - (v20 + v17);
  if ( v23 > 0 )
  {
    v24 = v16 - (v23 >> 3);
    v25 = a7 - (v23 >> 1);
    v26 = (_BYTE *)(a4 + ((__int64)(v20 + (int)v11) >> 1));
    v27 = (__int64)v23 >> 3;
    do
    {
      v28 = &v18[v27];
      do
      {
        v22 = *v18++;
        *v26 = *((_BYTE *)&a5 + (v22 >> 6));
        v26[1] = *((_BYTE *)&a5 + (((unsigned int)v22 >> 4) & 3));
        v26[2] = *((_BYTE *)&a5 + (((unsigned int)v22 >> 2) & 3));
        LOBYTE(v22) = *((_BYTE *)&a5 + (v22 & 3));
        v26[3] = v22;
        v26 += 4;
      }
      while ( v18 != v28 );
      v18 += v24;
      v26 += v25;
    }
    while ( v18 != v58 );
    a1 = v60;
    v19 = v57;
    v15 = a9;
  }
  if ( v14 )
  {
    LOBYTE(v22) = v13 ^ v15;
    v29 = (_BYTE *)(a4 + (v11 >> 1));
    if ( (((unsigned int)v13 ^ v15) & 0xFFFFFFF8) == 0 )
    {
      v30 = v17 - v14;
      if ( v30 > 0 )
      {
        v31 = v14 & 0xFE;
        v32 = (_BYTE *)(a1 + (v13 >> 3));
        v33 = v14 & 1;
        v34 = &v32[v19];
        do
        {
          v35 = *v32 << v31;
          v36 = v29;
          v37 = v30;
          if ( v33 )
          {
            v36 = v29 + 1;
            v37 = v30 - 1;
            *v29 ^= (*v29 ^ *((_BYTE *)&a5 + ((unsigned __int64)v35 >> 6))) & 0xF;
            v35 *= 4;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v22 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              LOBYTE(v22) = *((_BYTE *)&a5 + v22);
              *v36++ = v22;
              --v38;
            }
            while ( v38 );
          }
          if ( v37 )
          {
            v22 = (unsigned __int64)v35 >> 6;
            *v36 = *((_BYTE *)&a5 + v22) ^ (*v36 ^ *((_BYTE *)&a5 + v22)) & 0xF;
          }
          v32 += v16;
          v29 += v21;
        }
        while ( v32 != v34 );
      }
      return v22;
    }
    v39 = (_BYTE *)(a1 + (v13 >> 3));
    LODWORD(v22) = (9 - v14) >> 1;
    v40 = v21;
    v41 = a10;
    v42 = v40 - v22;
    v43 = v14 & 0xFE;
    v44 = &v39[v19];
    v45 = v42;
    v59 = v42;
    do
    {
      v46 = *v39 << v43;
      v47 = v41;
      if ( (v41 & 1) != 0 )
      {
        v48 = (unsigned __int64)v46 >> 6;
        v46 *= 4;
        *v29 ^= (*v29 ^ *((_BYTE *)&a5 + v48)) & 0xF;
        ++v29;
        v45 = v59;
        v47 = v41 - 1;
      }
      for ( ; v47; v47 -= 2 )
      {
        v22 = (unsigned __int64)v46 >> 6;
        v46 *= 4;
        LOBYTE(v22) = *((_BYTE *)&a5 + v22);
        *v29++ = v22;
      }
      v39 += v16;
      v29 += v45;
    }
    while ( v39 != v44 );
    LODWORD(v21) = a7;
  }
  if ( v17 )
  {
    v49 = (unsigned __int8 *)(v60 + ((__int64)a9 >> 3));
    v50 = &v49[v57];
    v51 = (_BYTE *)(a4 + ((__int64)(a6 - v17) >> 1));
    LODWORD(v22) = (v17 + 1) >> 1;
    v52 = v21 - v22;
    do
    {
      v53 = *v49;
      v54 = v17;
      if ( v17 >= 2 )
      {
        v55 = (unsigned __int64)(unsigned int)v17 >> 1;
        v54 = v17 - 2 * v55;
        do
        {
          v22 = (unsigned __int64)v53 >> 6;
          v53 *= 4;
          LOBYTE(v22) = *((_BYTE *)&a5 + v22);
          *v51++ = v22;
          --v55;
        }
        while ( v55 );
      }
      if ( v54 )
      {
        v22 = (unsigned __int64)v53 >> 6;
        *v51 = *((_BYTE *)&a5 + v22) ^ (*v51 ^ *((_BYTE *)&a5 + v22)) & 0xF;
        ++v51;
      }
      v49 += v16;
      v51 += v52;
    }
    while ( v49 != v50 );
  }
  return v22;
}
