/*
 * XREFs of vSrcTranCopyS1D4 @ 0x1C0283B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // r14d
  int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // r15
  int v15; // esi
  char v16; // r11
  int v17; // r9d
  unsigned __int8 *v18; // r8
  __int64 v19; // rcx
  int v20; // r10d
  unsigned __int64 v21; // rax
  int v22; // ebx
  int v23; // ecx
  _BYTE *v24; // r10
  __int64 v25; // rbx
  unsigned __int8 *v26; // rbp
  unsigned int v27; // edx
  char v28; // cl
  _BYTE *v29; // rdx
  int v30; // r9d
  _BYTE *v31; // r10
  __int64 v32; // r13
  _BYTE *v33; // r12
  unsigned __int8 v34; // r8
  _BYTE *v35; // rbx
  int v36; // edi
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // r8
  int v40; // edi
  _BYTE *v41; // r8
  _BYTE *v42; // r14
  int v43; // ecx
  char v44; // r10
  int v45; // ebx
  char *v46; // r8
  _BYTE *v47; // rdx
  char *v48; // rsi
  int v49; // ebp
  char v50; // di
  int v51; // ebx
  unsigned __int64 v52; // r10
  unsigned __int8 *v54; // [rsp+0h] [rbp-58h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+60h] [rbp+8h]
  int v58; // [rsp+68h] [rbp+10h]

  v11 = a5;
  v12 = a7;
  v13 = a2;
  v14 = a3;
  v15 = a2 & 7;
  v16 = a9 | (16 * a9);
  v58 = -1044736;
  a9 = a6 - a5 + a2;
  v17 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  LODWORD(v21) = a8 * a3;
  v18 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  a8 = 8 - v15;
  v19 = (int)v21;
  v57 = (int)v21;
  v54 = &v18[(int)v21];
  v20 = v15 != 0 ? 8 - v15 : 0;
  LOBYTE(v21) = v17 + v20;
  v22 = a6 - a5 - (v17 + v20);
  if ( v22 > 0 )
  {
    v23 = v14 - (v22 >> 3);
    v55 = a7 - (v22 >> 1);
    v24 = (_BYTE *)(a4 + ((__int64)(v20 + a5) >> 1));
    v25 = (__int64)v22 >> 3;
    v56 = v23;
    do
    {
      v26 = &v18[v25];
      do
      {
        v21 = *v18++;
        v27 = v21;
        *v24 = v16 & *((_BYTE *)&v58 + (v21 >> 6)) | *v24 & ~*((_BYTE *)&v58 + (v21 >> 6));
        LOBYTE(v21) = *((_BYTE *)&v58 + (((unsigned int)v21 >> 4) & 3));
        v24[1] = v16 & v21 | v24[1] & ~(_BYTE)v21;
        v28 = *((_BYTE *)&v58 + (v27 & 3));
        v24[2] = v16 & *((_BYTE *)&v58 + ((v27 >> 2) & 3)) | v24[2] & ~*((_BYTE *)&v58 + ((v27 >> 2) & 3));
        LOBYTE(v21) = v16 & v28 | v24[3] & ~v28;
        v24[3] = v21;
        v24 += 4;
      }
      while ( v18 != v26 );
      v24 += v55;
      v18 += v56;
    }
    while ( v18 != v54 );
    v12 = a7;
    v11 = a5;
    v19 = v57;
  }
  if ( v15 )
  {
    LOBYTE(v21) = v13 ^ a9;
    v29 = (_BYTE *)(a4 + ((__int64)v11 >> 1));
    if ( (((unsigned int)v13 ^ a9) & 0xFFFFFFF8) == 0 )
    {
      v30 = v17 - v15;
      if ( v30 > 0 )
      {
        v31 = (_BYTE *)(a1 + (v13 >> 3));
        v32 = v12;
        v33 = &v31[v19];
        do
        {
          v34 = *v31 << v15;
          v35 = v29;
          v36 = v30;
          if ( (v15 & 1) != 0 )
          {
            if ( (v34 & 0x80u) != 0 )
              *v29 ^= (v16 ^ *v29) & 0xF;
            v34 *= 2;
            v35 = v29 + 1;
            v36 = v30 - 1;
          }
          if ( v36 >= 2 )
          {
            v37 = (unsigned __int64)(unsigned int)v36 >> 1;
            v36 -= 2 * ((unsigned int)v36 >> 1);
            do
            {
              v38 = (unsigned __int64)v34 >> 6;
              v34 *= 4;
              *v35 = v16 & *((_BYTE *)&v58 + v38) | *v35 & ~*((_BYTE *)&v58 + v38);
              ++v35;
              --v37;
            }
            while ( v37 );
          }
          LOBYTE(v21) = (v36 & 1) != 0;
          if ( ((unsigned __int8)v21 & (v34 >> 7)) != 0 )
          {
            LOBYTE(v21) = v16 ^ (v16 ^ *v35) & 0xF;
            *v35 = v21;
          }
          v31 += v14;
          v29 += v32;
        }
        while ( v31 != v33 );
      }
      return v21;
    }
    v39 = v13;
    v40 = a8;
    v41 = (_BYTE *)(a1 + (v39 >> 3));
    v42 = &v41[v19];
    v43 = (9 - v15) >> 1;
    LOBYTE(v21) = v12 - v43;
    do
    {
      v44 = *v41 << v15;
      v45 = v40;
      if ( (v40 & 1) != 0 )
      {
        if ( v44 < 0 )
        {
          LOBYTE(v21) = (v16 ^ *v29) & 0xF;
          *v29 ^= v21;
        }
        v44 *= 2;
        ++v29;
        v45 = v40 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v21 = (unsigned __int64)(unsigned __int8)v44 >> 6;
        v44 *= 4;
        LOBYTE(v21) = v16 & *((_BYTE *)&v58 + v21) | *v29 & ~*((_BYTE *)&v58 + v21);
        *v29++ = v21;
      }
      v29 += v12 - v43;
      v41 += v14;
    }
    while ( v41 != v42 );
  }
  if ( v17 )
  {
    v46 = (char *)(a1 + ((__int64)a9 >> 3));
    v47 = (_BYTE *)(a4 + ((__int64)(a6 - v17) >> 1));
    LODWORD(v21) = (v17 + 1) >> 1;
    v48 = &v46[v57];
    v49 = v12 - v21;
    do
    {
      v50 = *v46;
      v51 = v17;
      if ( v17 >= 2 )
      {
        v52 = (unsigned __int64)(unsigned int)v17 >> 1;
        v51 = v17 - 2 * v52;
        do
        {
          v21 = (unsigned __int64)(unsigned __int8)v50 >> 6;
          v50 *= 4;
          LOBYTE(v21) = v16 & *((_BYTE *)&v58 + v21) | *v47 & ~*((_BYTE *)&v58 + v21);
          *v47++ = v21;
          --v52;
        }
        while ( v52 );
      }
      if ( v51 )
      {
        if ( v50 < 0 )
        {
          LOBYTE(v21) = v16 ^ (v16 ^ *v47) & 0xF;
          *v47 = v21;
        }
        ++v47;
      }
      v46 += v14;
      v47 += v49;
    }
    while ( v46 != v48 );
  }
  return v21;
}
