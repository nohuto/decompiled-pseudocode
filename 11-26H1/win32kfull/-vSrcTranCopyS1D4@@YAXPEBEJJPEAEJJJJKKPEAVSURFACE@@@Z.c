/*
 * XREFs of ?vSrcTranCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14031F010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D4(
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
  const unsigned __int8 *v9; // r13
  int v10; // edi
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // r14d
  char v16; // r11
  char v17; // bl
  unsigned int v18; // r8d
  const unsigned __int8 *v19; // r9
  int v20; // ecx
  int v21; // r10d
  unsigned __int8 *v22; // rbx
  __int64 v23; // r13
  int v24; // r15d
  __int64 v25; // r10
  const unsigned __int8 *v26; // rdi
  unsigned int v27; // edx
  char v28; // al
  char v29; // cl
  unsigned __int8 *v30; // rdx
  int v31; // r8d
  const unsigned __int8 *v32; // r10
  __int64 v33; // r13
  const unsigned __int8 *v34; // r12
  char v35; // r9
  unsigned __int8 *v36; // rbx
  int v37; // edi
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rax
  const unsigned __int8 *v40; // r9
  int v41; // esi
  int v42; // eax
  unsigned int v43; // edi
  __int64 v44; // rax
  char v45; // r10
  unsigned int v46; // ebx
  unsigned __int64 v47; // rax
  char *v48; // r9
  unsigned __int8 *v49; // rdx
  __int64 v50; // r14
  char *v51; // rsi
  char v52; // r10
  unsigned __int64 v53; // rbx
  int v54; // edi
  unsigned __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-28h]
  const unsigned __int8 *v57; // [rsp+10h] [rbp-18h]
  const unsigned __int8 *v58; // [rsp+18h] [rbp-10h]
  __int64 v60; // [rsp+70h] [rbp+48h]
  int v61; // [rsp+78h] [rbp+50h]
  int v62; // [rsp+80h] [rbp+58h]
  unsigned __int8 *v63; // [rsp+88h] [rbp+60h]

  v63 = a4;
  v9 = a1;
  v10 = a7;
  v11 = a2;
  v12 = a5;
  v13 = a3;
  v14 = a3 * (__int64)a8;
  v15 = v11 & 7;
  v16 = a9 | (16 * a9);
  v62 = a6 - a5 + v11;
  v17 = 8 - v15;
  v61 = -1044736;
  v18 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)v11) & 7;
  v56 = v13;
  v19 = &a1[(__int64)((int)v11 + 7) >> 3];
  a9 = 8 - v15;
  v57 = &v19[v14];
  v20 = v15 != 0 ? 8 - v15 : 0;
  v21 = a6 - a5 - v18 - v20;
  if ( v21 > 0 )
  {
    v22 = &v63[(__int64)(v20 + a5) >> 1];
    v23 = (__int64)v21 >> 3;
    v24 = v13 - (v21 >> 3);
    v25 = a7 - (v21 >> 1);
    do
    {
      v26 = &v19[v23];
      do
      {
        v27 = *v19++;
        *v22 = v16 & *((_BYTE *)&v61 + ((unsigned __int64)v27 >> 6)) | *v22 & ~*((_BYTE *)&v61
                                                                               + ((unsigned __int64)v27 >> 6));
        v28 = *((_BYTE *)&v61 + ((v27 >> 4) & 3));
        v22[1] = v16 & v28 | v22[1] & ~v28;
        v29 = *((_BYTE *)&v61 + (v27 & 3));
        v22[2] = v16 & *((_BYTE *)&v61 + ((v27 >> 2) & 3)) | v22[2] & ~*((_BYTE *)&v61 + ((v27 >> 2) & 3));
        v22[3] = v16 & v29 | v22[3] & ~v29;
        v22 += 4;
      }
      while ( v19 != v26 );
      v22 += v25;
      v19 += v24;
    }
    while ( v19 != v57 );
    v10 = a7;
    v9 = a1;
    v12 = a5;
    v17 = a9;
  }
  if ( (v11 & 7) != 0 )
  {
    v30 = &v63[(__int64)v12 >> 1];
    if ( (((unsigned int)v11 ^ v62) & 0xFFFFFFF8) == 0 )
    {
      v31 = v18 - v15;
      if ( v31 > 0 )
      {
        v32 = &v9[v11 >> 3];
        v33 = v10;
        v34 = &v32[v14];
        do
        {
          v35 = *v32 << v15;
          v36 = v30;
          v37 = v31;
          if ( (v15 & 1) != 0 )
          {
            if ( v35 < 0 )
              *v30 ^= (v16 ^ *v30) & 0xF;
            v35 *= 2;
            v36 = v30 + 1;
            v37 = v31 - 1;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            do
            {
              v39 = (unsigned __int64)(unsigned __int8)v35 >> 6;
              v35 *= 4;
              *v36 = v16 & *((_BYTE *)&v61 + v39) | *v36 & ~*((_BYTE *)&v61 + v39);
              ++v36;
              --v38;
            }
            while ( v38 );
          }
          if ( (v37 & 1) != 0 && v35 < 0 )
            *v36 = v16 ^ (*v36 ^ v16) & 0xF;
          v32 += v56;
          v30 += v33;
        }
        while ( v32 != v34 );
      }
      return;
    }
    v40 = &v9[v11 >> 3];
    v41 = v17 & 1;
    v58 = &v40[v14];
    v42 = v10;
    v43 = a9;
    v44 = v42 - ((9 - v15) >> 1);
    v60 = (int)v44;
    do
    {
      v45 = *v40 << v15;
      v46 = v43;
      if ( v41 )
      {
        if ( v45 < 0 )
        {
          v44 = v60;
          *v30 ^= (v16 ^ *v30) & 0xF;
        }
        v45 *= 2;
        ++v30;
        v46 = v43 - 1;
      }
      if ( v46 )
      {
        do
        {
          v47 = (unsigned __int64)(unsigned __int8)v45 >> 6;
          v45 *= 4;
          *v30 = v16 & *((_BYTE *)&v61 + v47) | *v30 & ~*((_BYTE *)&v61 + v47);
          ++v30;
          v46 -= 2;
        }
        while ( v46 );
        v44 = v60;
      }
      v40 += v56;
      v30 += v44;
    }
    while ( v40 != v58 );
    v10 = a7;
  }
  if ( v18 )
  {
    v48 = (char *)&v9[(__int64)v62 >> 3];
    v49 = &v63[(__int64)(int)(a6 - v18) >> 1];
    v50 = (int)(v10 - ((v18 + 1) >> 1));
    v51 = &v48[v14];
    do
    {
      v52 = *v48;
      if ( v18 < 2 )
        goto LABEL_39;
      v53 = (unsigned __int64)v18 >> 1;
      v54 = v18 - 2 * v53;
      do
      {
        v55 = (unsigned __int64)(unsigned __int8)v52 >> 6;
        v52 *= 4;
        *v49 = v16 & *((_BYTE *)&v61 + v55) | *v49 & ~*((_BYTE *)&v61 + v55);
        ++v49;
        --v53;
      }
      while ( v53 );
      if ( v54 )
      {
LABEL_39:
        if ( v52 < 0 )
          *v49 = v16 ^ (*v49 ^ v16) & 0xF;
        ++v49;
      }
      v48 += v56;
      v49 += v50;
    }
    while ( v48 != v51 );
  }
}
