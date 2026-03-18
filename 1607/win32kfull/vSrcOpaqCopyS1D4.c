/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C02809A0
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
  __int64 v10; // r12
  int v12; // r11d
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r13
  int v17; // r9d
  int v18; // r10d
  unsigned __int8 *v19; // r8
  int v20; // edx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  int v23; // r11d
  int v24; // ecx
  _BYTE *v25; // rdx
  __int64 v26; // r9
  unsigned __int8 *v27; // r11
  _BYTE *v28; // r8
  int v29; // r10d
  char v30; // r14
  _BYTE *v31; // r11
  int v32; // ebx
  _BYTE *v33; // r15
  unsigned __int8 v34; // r9
  _BYTE *v35; // rdi
  int v36; // ecx
  unsigned __int64 v37; // rdx
  _BYTE *v38; // r11
  int v39; // ecx
  int v40; // esi
  char v41; // bl
  __int64 v42; // r12
  _BYTE *v43; // r14
  unsigned __int8 v44; // r9
  int v45; // edi
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // r9
  _BYTE *v48; // r8
  int v49; // esi
  unsigned __int8 *v50; // rbx
  unsigned __int8 v51; // r11
  int v52; // edx
  unsigned __int64 v53; // rcx
  __int64 v55; // [rsp+0h] [rbp-20h]
  __int64 v56; // [rsp+10h] [rbp-10h]
  unsigned __int8 *v57; // [rsp+18h] [rbp-8h]
  __int64 v58; // [rsp+50h] [rbp+30h]

  v58 = a1;
  v10 = a5;
  v12 = a6 - a5;
  LOBYTE(a5) = a10 | (16 * a10);
  BYTE1(a5) = a9 | (16 * a5);
  v14 = a2;
  HIBYTE(a5) = a9 | (16 * BYTE1(a5));
  v15 = a2 & 7;
  v55 = a3;
  BYTE2(a5) = a10 | (16 * HIBYTE(a5));
  v16 = a3 * (__int64)a8;
  v17 = v12 + a2;
  a10 = 8 - v15;
  a9 = v12 + a2;
  v18 = ((_BYTE)v12 + (_BYTE)a2) & 7;
  v19 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  v57 = &v19[v16];
  v20 = v15 != 0 ? 8 - v15 : 0;
  v21 = a7;
  LOBYTE(v22) = v20 + v18;
  v23 = v12 - (v20 + v18);
  if ( v23 > 0 )
  {
    v24 = a7 - (v23 >> 1);
    v25 = (_BYTE *)(a4 + ((__int64)(v20 + (int)v10) >> 1));
    v26 = (__int64)v23 >> 3;
    v56 = a3 - (v23 >> 3);
    do
    {
      v27 = &v19[v26];
      do
      {
        v22 = *v19++;
        *v25 = *((_BYTE *)&a5 + (v22 >> 6));
        v25[1] = *((_BYTE *)&a5 + (((unsigned int)v22 >> 4) & 3));
        v25[2] = *((_BYTE *)&a5 + (((unsigned int)v22 >> 2) & 3));
        LOBYTE(v22) = *((_BYTE *)&a5 + (v22 & 3));
        v25[3] = v22;
        v25 += 4;
      }
      while ( v19 != v27 );
      v19 += v56;
      v25 += v24;
    }
    while ( v19 != v57 );
    a1 = v58;
    v17 = a9;
  }
  if ( v15 )
  {
    LOBYTE(v22) = v14 ^ v17;
    v28 = (_BYTE *)(a4 + (v10 >> 1));
    if ( (((unsigned int)v14 ^ v17) & 0xFFFFFFF8) == 0 )
    {
      v29 = v18 - v15;
      if ( v29 > 0 )
      {
        v30 = v15 & 0xFE;
        v31 = (_BYTE *)(a1 + (v14 >> 3));
        v32 = v15 & 1;
        v33 = &v31[v16];
        do
        {
          v34 = *v31 << v30;
          v35 = v28;
          v36 = v29;
          if ( v32 )
          {
            v35 = v28 + 1;
            v36 = v29 - 1;
            *v28 ^= (*v28 ^ *((_BYTE *)&a5 + ((unsigned __int64)v34 >> 6))) & 0xF;
            v34 *= 4;
          }
          if ( v36 >= 2 )
          {
            v37 = (unsigned __int64)(unsigned int)v36 >> 1;
            v36 -= 2 * ((unsigned int)v36 >> 1);
            do
            {
              v22 = (unsigned __int64)v34 >> 6;
              v34 *= 4;
              LOBYTE(v22) = *((_BYTE *)&a5 + v22);
              *v35++ = v22;
              --v37;
            }
            while ( v37 );
          }
          if ( v36 )
          {
            v22 = (unsigned __int64)v34 >> 6;
            *v35 = *((_BYTE *)&a5 + v22) ^ (*v35 ^ *((_BYTE *)&a5 + v22)) & 0xF;
          }
          v31 += v55;
          v28 += v21;
        }
        while ( v31 != v33 );
      }
      return v22;
    }
    v38 = (_BYTE *)(a1 + (v14 >> 3));
    LODWORD(v22) = (9 - v15) >> 1;
    v39 = v21;
    v40 = a10;
    v41 = v15 & 0xFE;
    v42 = v39 - (int)v22;
    v43 = &v38[v16];
    do
    {
      v44 = *v38 << v41;
      v45 = v40;
      if ( (v40 & 1) != 0 )
      {
        v46 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        *v28 ^= (*v28 ^ *((_BYTE *)&a5 + v46)) & 0xF;
        ++v28;
        v45 = v40 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v22 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        LOBYTE(v22) = *((_BYTE *)&a5 + v22);
        *v28++ = v22;
      }
      v38 += v55;
      v28 += v42;
    }
    while ( v38 != v43 );
    LODWORD(v21) = a7;
  }
  if ( v18 )
  {
    v47 = (unsigned __int8 *)(v58 + ((__int64)a9 >> 3));
    v48 = (_BYTE *)(a4 + ((__int64)(a6 - v18) >> 1));
    LODWORD(v22) = (v18 + 1) >> 1;
    v49 = v21 - v22;
    v50 = &v47[v16];
    do
    {
      v51 = *v47;
      v52 = v18;
      if ( v18 >= 2 )
      {
        v53 = (unsigned __int64)(unsigned int)v18 >> 1;
        v52 = v18 - 2 * v53;
        do
        {
          v22 = (unsigned __int64)v51 >> 6;
          v51 *= 4;
          LOBYTE(v22) = *((_BYTE *)&a5 + v22);
          *v48++ = v22;
          --v53;
        }
        while ( v53 );
      }
      if ( v52 )
      {
        v22 = (unsigned __int64)v51 >> 6;
        *v48 = *((_BYTE *)&a5 + v22) ^ (*v48 ^ *((_BYTE *)&a5 + v22)) & 0xF;
        ++v48;
      }
      v47 += v55;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v22;
}
