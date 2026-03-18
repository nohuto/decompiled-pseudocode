/*
 * XREFs of ?vSrcOpaqCopyS1D4@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14031EC60
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D4(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        unsigned int a10)
{
  char v10; // r10
  int v11; // r13d
  char v13; // r11
  __int64 v14; // r14
  int v15; // edx
  int v16; // edi
  __int64 v17; // r12
  unsigned int v18; // r10d
  const unsigned __int8 *v19; // r8
  int v20; // r11d
  int v21; // ebx
  unsigned __int8 *v22; // rdx
  __int64 v23; // r9
  int v24; // r15d
  __int64 v25; // rbx
  const unsigned __int8 *v26; // r11
  unsigned int v27; // ecx
  unsigned __int8 *v28; // r8
  int v29; // r10d
  __int64 v30; // r11
  char v31; // r14
  const unsigned __int8 *v32; // r11
  int v33; // edi
  const unsigned __int8 *v34; // r15
  unsigned __int8 v35; // r9
  unsigned __int8 *v36; // rbx
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  const unsigned __int8 *v40; // r9
  char v41; // r14
  const unsigned __int8 *v42; // rdx
  __int64 v43; // rdi
  unsigned __int8 v44; // r11
  int v45; // ebx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  const unsigned __int8 *v48; // r8
  unsigned __int8 *v49; // rdx
  const unsigned __int8 *v50; // rbx
  unsigned __int8 v51; // cl
  unsigned __int64 v52; // r9
  int v53; // r11d
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-20h]
  const unsigned __int8 *v56; // [rsp+10h] [rbp-10h]
  const unsigned __int8 *v57; // [rsp+10h] [rbp-10h]
  const unsigned __int8 *v58; // [rsp+60h] [rbp+40h]
  unsigned __int8 *v59; // [rsp+78h] [rbp+58h]
  int v60; // [rsp+98h] [rbp+78h]
  signed int v61; // [rsp+A0h] [rbp+80h]

  v59 = a4;
  v58 = a1;
  v10 = a10;
  v11 = a6;
  v13 = a9 | (16 * a10);
  LOBYTE(a10) = a10 | (16 * a10);
  BYTE1(a10) = v13;
  v13 *= 16;
  v14 = a2;
  v15 = a5;
  HIBYTE(a10) = a9 | v13;
  v16 = v14 & 7;
  BYTE2(a10) = v10 | v13;
  v55 = a3;
  v17 = a3 * (__int64)a8;
  v60 = 8 - v16;
  v61 = a6 - a5 + v14;
  v18 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)v14) & 7;
  v19 = &a1[(__int64)((int)v14 + 7) >> 3];
  v56 = &v19[v17];
  v20 = v16 != 0 ? 8 - v16 : 0;
  v21 = a6 - a5 - v20 - v18;
  if ( v21 > 0 )
  {
    v22 = &a4[(__int64)(v20 + a5) >> 1];
    v23 = (__int64)v21 >> 3;
    v24 = a3 - (v21 >> 3);
    v25 = a7 - (v21 >> 1);
    do
    {
      v26 = &v19[v23];
      do
      {
        v27 = *v19++;
        *v22 = *((_BYTE *)&a10 + ((unsigned __int64)v27 >> 6));
        v22[1] = *((_BYTE *)&a10 + ((v27 >> 4) & 3));
        v22[2] = *((_BYTE *)&a10 + ((v27 >> 2) & 3));
        v22[3] = *((_BYTE *)&a10 + (v27 & 3));
        v22 += 4;
      }
      while ( v19 != v26 );
      v22 += v25;
      v19 += v24;
    }
    while ( v19 != v56 );
    a1 = v58;
    v15 = a5;
    a4 = v59;
  }
  if ( (v14 & 7) != 0 )
  {
    v28 = &a4[(__int64)v15 >> 1];
    if ( (((unsigned int)v14 ^ v61) & 0xFFFFFFF8) == 0 )
    {
      v29 = v18 - v16;
      if ( v29 > 0 )
      {
        v30 = v14;
        v31 = v16 & 0xFE;
        v32 = &a1[v30 >> 3];
        v33 = v16 & 1;
        v34 = &v32[v17];
        do
        {
          v35 = *v32 << v31;
          v36 = v28;
          v37 = v29;
          if ( v33 )
          {
            v36 = v28 + 1;
            *v28 ^= (*((_BYTE *)&a10 + ((unsigned __int64)v35 >> 6)) ^ *v28) & 0xF;
            v37 = v29 - 1;
            v35 *= 4;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v39 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              *v36++ = *((_BYTE *)&a10 + v39);
              --v38;
            }
            while ( v38 );
          }
          if ( v37 )
            *v36 = *((_BYTE *)&a10 + ((unsigned __int64)v35 >> 6)) ^ (*v36 ^ *((_BYTE *)&a10
                                                                             + ((unsigned __int64)v35 >> 6))) & 0xF;
          v32 += v55;
          v28 += a7;
        }
        while ( v32 != v34 );
      }
      return;
    }
    v40 = &a1[v14 >> 3];
    v41 = v14 & 6;
    v42 = &v40[v17];
    v43 = a7 - ((9 - v16) >> 1);
    v57 = &v40[v17];
    do
    {
      v44 = *v40 << v41;
      v45 = v60;
      if ( (v60 & 1) != 0 )
      {
        v46 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        v42 = v57;
        *v28 ^= (*((_BYTE *)&a10 + v46) ^ *v28) & 0xF;
        ++v28;
        v45 = v60 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v47 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        *v28++ = *((_BYTE *)&a10 + v47);
      }
      v40 += v55;
      v28 += v43;
    }
    while ( v40 != v42 );
    v11 = a6;
  }
  if ( v18 )
  {
    v48 = &v58[(__int64)v61 >> 3];
    v49 = &v59[(__int64)(int)(v11 - v18) >> 1];
    v50 = &v48[v17];
    do
    {
      v51 = *v48;
      if ( v18 < 2 )
        goto LABEL_33;
      v52 = (unsigned __int64)v18 >> 1;
      v53 = v18 - 2 * v52;
      do
      {
        v54 = (unsigned __int64)v51 >> 6;
        v51 *= 4;
        *v49++ = *((_BYTE *)&a10 + v54);
        --v52;
      }
      while ( v52 );
      if ( v53 )
      {
LABEL_33:
        *v49 = *((_BYTE *)&a10 + ((unsigned __int64)v51 >> 6)) ^ (*v49 ^ *((_BYTE *)&a10 + ((unsigned __int64)v51 >> 6))) & 0xF;
        ++v49;
      }
      v48 += v55;
      v49 += (int)(a7 - ((v18 + 1) >> 1));
    }
    while ( v48 != v50 );
  }
}
