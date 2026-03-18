/*
 * XREFs of vSrcTranCopyS1D4 @ 0x1C0283800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r12d
  int v11; // ebp
  __int64 v12; // rdi
  int v14; // esi
  char v15; // r11
  __int64 v16; // r14
  int v17; // r9d
  unsigned __int8 *v18; // r8
  int v19; // edx
  unsigned __int64 v20; // rax
  int v21; // ebx
  _BYTE *v22; // r10
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbx
  unsigned __int8 *v26; // rbp
  unsigned int v27; // edx
  char v28; // cl
  int v29; // r15d
  _BYTE *v30; // rdx
  int v31; // r9d
  _BYTE *v32; // r10
  __int64 v33; // r12
  _BYTE *v34; // r15
  unsigned __int8 v35; // r8
  _BYTE *v36; // rbx
  int v37; // edi
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  int v41; // edi
  _BYTE *v42; // r8
  _BYTE *v43; // r12
  char v44; // r10
  int v45; // ebx
  unsigned __int64 v46; // rax
  char *v47; // r8
  _BYTE *v48; // rdx
  int v49; // ebp
  char *v50; // rsi
  char v51; // di
  int v52; // ebx
  unsigned __int64 v53; // r10
  __int64 v55; // [rsp+0h] [rbp-58h]
  unsigned __int64 v56; // [rsp+8h] [rbp-50h]
  unsigned __int8 *v57; // [rsp+10h] [rbp-48h]
  __int64 v58; // [rsp+18h] [rbp-40h]
  __int64 v59; // [rsp+60h] [rbp+8h]
  int v60; // [rsp+68h] [rbp+10h]

  v59 = a1;
  v10 = a5;
  v11 = a7;
  v12 = a2;
  v14 = a2 & 7;
  v15 = a9 | (16 * a9);
  v60 = -1044736;
  a9 = a6 - a5 + a2;
  v16 = a3 * (__int64)a8;
  v17 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v55 = a3;
  a8 = 8 - v14;
  v18 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  v57 = &v18[v16];
  v19 = v14 != 0 ? 8 - v14 : 0;
  LOBYTE(v20) = v17 + v19;
  v21 = a6 - a5 - (v17 + v19);
  if ( v21 > 0 )
  {
    v22 = (_BYTE *)(a4 + ((__int64)(v19 + a5) >> 1));
    v23 = a3 - (v21 >> 3);
    v24 = a7 - (v21 >> 1);
    v25 = (__int64)v21 >> 3;
    v58 = v23;
    do
    {
      v26 = &v18[v25];
      do
      {
        v20 = *v18++;
        v27 = v20;
        *v22 = v15 & *((_BYTE *)&v60 + (v20 >> 6)) | *v22 & ~*((_BYTE *)&v60 + (v20 >> 6));
        LOBYTE(v20) = *((_BYTE *)&v60 + (((unsigned int)v20 >> 4) & 3));
        v22[1] = v15 & v20 | v22[1] & ~(_BYTE)v20;
        v28 = *((_BYTE *)&v60 + (v27 & 3));
        v22[2] = v15 & *((_BYTE *)&v60 + ((v27 >> 2) & 3)) | v22[2] & ~*((_BYTE *)&v60 + ((v27 >> 2) & 3));
        LOBYTE(v20) = v15 & v28 | v22[3] & ~v28;
        v22[3] = v20;
        v22 += 4;
      }
      while ( v18 != v26 );
      v18 += v58;
      v22 += v24;
    }
    while ( v18 != v57 );
    v11 = a7;
    v10 = a5;
    a1 = v59;
  }
  v29 = a9;
  if ( v14 )
  {
    LOBYTE(v20) = v12 ^ a9;
    v30 = (_BYTE *)(a4 + ((__int64)v10 >> 1));
    if ( (((unsigned int)v12 ^ a9) & 0xFFFFFFF8) == 0 )
    {
      v31 = v17 - v14;
      if ( v31 > 0 )
      {
        v32 = (_BYTE *)(a1 + (v12 >> 3));
        v33 = v11;
        v34 = &v32[v16];
        do
        {
          v35 = *v32 << v14;
          v36 = v30;
          v37 = v31;
          if ( (v14 & 1) != 0 )
          {
            if ( (v35 & 0x80u) != 0 )
              *v30 ^= (v15 ^ *v30) & 0xF;
            v35 *= 2;
            v36 = v30 + 1;
            v37 = v31 - 1;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v39 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              *v36 = v15 & *((_BYTE *)&v60 + v39) | *v36 & ~*((_BYTE *)&v60 + v39);
              ++v36;
              --v38;
            }
            while ( v38 );
          }
          LOBYTE(v20) = (v37 & 1) != 0;
          if ( ((unsigned __int8)v20 & (v35 >> 7)) != 0 )
          {
            LOBYTE(v20) = v15 ^ (v15 ^ *v36) & 0xF;
            *v36 = v20;
          }
          v32 += v55;
          v30 += v33;
        }
        while ( v32 != v34 );
      }
      return v20;
    }
    v40 = v12;
    v41 = a8;
    v42 = (_BYTE *)(a1 + (v40 >> 3));
    v20 = v11 - ((9 - v14) >> 1);
    v43 = &v42[v16];
    v56 = (int)v20;
    do
    {
      v44 = *v42 << v14;
      v45 = v41;
      if ( (v41 & 1) != 0 )
      {
        if ( v44 < 0 )
        {
          *v30 ^= (v15 ^ *v30) & 0xF;
          v20 = v56;
        }
        v44 *= 2;
        ++v30;
        v45 = v41 - 1;
      }
      if ( v45 )
      {
        do
        {
          v46 = (unsigned __int64)(unsigned __int8)v44 >> 6;
          v44 *= 4;
          *v30 = v15 & *((_BYTE *)&v60 + v46) | *v30 & ~*((_BYTE *)&v60 + v46);
          ++v30;
          v45 -= 2;
        }
        while ( v45 );
        v20 = v56;
      }
      v42 += v55;
      v30 += v20;
    }
    while ( v42 != v43 );
    v11 = a7;
  }
  if ( v17 )
  {
    v47 = (char *)(v59 + ((__int64)v29 >> 3));
    v48 = (_BYTE *)(a4 + ((__int64)(a6 - v17) >> 1));
    LODWORD(v20) = (v17 + 1) >> 1;
    v49 = v11 - v20;
    v50 = &v47[v16];
    do
    {
      v51 = *v47;
      v52 = v17;
      if ( v17 >= 2 )
      {
        v53 = (unsigned __int64)(unsigned int)v17 >> 1;
        v52 = v17 - 2 * v53;
        do
        {
          v20 = (unsigned __int64)(unsigned __int8)v51 >> 6;
          v51 *= 4;
          LOBYTE(v20) = v15 & *((_BYTE *)&v60 + v20) | *v48 & ~*((_BYTE *)&v60 + v20);
          *v48++ = v20;
          --v53;
        }
        while ( v53 );
      }
      if ( v52 )
      {
        if ( v51 < 0 )
        {
          LOBYTE(v20) = v15 ^ (v15 ^ *v48) & 0xF;
          *v48 = v20;
        }
        ++v48;
      }
      v47 += v55;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v20;
}
