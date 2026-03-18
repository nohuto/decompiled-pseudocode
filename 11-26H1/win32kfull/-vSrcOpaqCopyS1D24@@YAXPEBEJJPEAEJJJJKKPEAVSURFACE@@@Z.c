/*
 * XREFs of ?vSrcOpaqCopyS1D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401B7150
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D24(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // esi
  unsigned __int8 *v11; // rdi
  __int64 v12; // r9
  int v13; // edx
  const unsigned __int8 *v14; // r9
  __int64 v15; // r15
  unsigned __int8 *v16; // r14
  int v17; // eax
  __int64 v18; // r11
  int v19; // r12d
  int v20; // ebx
  unsigned __int8 *v21; // r10
  unsigned __int8 *v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int8 v26; // dl
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  unsigned __int8 *v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  _DWORD v33[4]; // [rsp+0h] [rbp-10h]

  v10 = a2 & 7;
  v11 = &a4[3 * a5];
  v12 = a2;
  v13 = 3 * (a6 - a5);
  v14 = &a1[v12 >> 3];
  v15 = v13;
  v16 = &v11[a8 * a7];
  v17 = a6 - a5;
  if ( a6 - a5 >= 8 - v10 )
    v17 = 8 - v10;
  v18 = a7 - v13;
  v19 = 3 * v17;
  v33[0] = a10;
  v33[1] = a9;
  v20 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  do
  {
    v21 = &v11[v15];
    if ( v10 )
    {
      v29 = *v14++ << v10;
      v30 = &v11[v19];
      do
      {
        v31 = v29;
        v29 *= 2;
        v32 = (v31 >> 5) & 4;
        *v11 = *((_BYTE *)v33 + v32);
        v11[1] = *((_BYTE *)v33 + v32 + 1);
        v11[2] = *((_BYTE *)v33 + v32 + 2);
        v11 += 3;
      }
      while ( v11 != v30 );
    }
    v22 = &v11[24 * ((v21 - v11) / 0x18uLL)];
    while ( v11 != v22 )
    {
      v23 = *v14++;
      *v11 = *((_BYTE *)v33 + ((v23 >> 5) & 4));
      v11[1] = *((_BYTE *)v33 + ((v23 >> 5) & 4) + 1);
      v11[2] = *((_BYTE *)v33 + ((v23 >> 5) & 4) + 2);
      v11[3] = *((_BYTE *)v33 + ((v23 >> 4) & 4));
      v11[4] = *((_BYTE *)v33 + ((v23 >> 4) & 4) + 1);
      v11[5] = *((_BYTE *)v33 + ((v23 >> 4) & 4) + 2);
      v11[6] = *((_BYTE *)v33 + ((v23 >> 3) & 4));
      v11[7] = *((_BYTE *)v33 + ((v23 >> 3) & 4) + 1);
      v11[8] = *((_BYTE *)v33 + ((v23 >> 3) & 4) + 2);
      v11[9] = *((_BYTE *)v33 + ((v23 >> 2) & 4));
      v11[10] = *((_BYTE *)v33 + ((v23 >> 2) & 4) + 1);
      v11[11] = *((_BYTE *)v33 + ((v23 >> 2) & 4) + 2);
      v11[12] = *((_BYTE *)v33 + ((v23 >> 1) & 4));
      v11[13] = *((_BYTE *)v33 + ((v23 >> 1) & 4) + 1);
      v11[14] = *((_BYTE *)v33 + ((v23 >> 1) & 4) + 2);
      v11[15] = *((_BYTE *)v33 + (v23 & 4));
      v11[16] = *((_BYTE *)v33 + (v23 & 4) + 1);
      v11[17] = *((_BYTE *)v33 + (v23 & 4) + 2);
      v24 = 2 * (v23 & 2);
      v25 = v23 & 1;
      v11[18] = *((_BYTE *)v33 + v24);
      v11[19] = *((_BYTE *)v33 + (unsigned int)v24 + 1);
      v11[20] = *((_BYTE *)v33 + (unsigned int)v24 + 2);
      v11[21] = v33[v25];
      v11[22] = BYTE1(v33[v25]);
      v11[23] = BYTE2(v33[v25]);
      v11 += 24;
    }
    if ( v11 != v21 )
    {
      v26 = *v14++;
      do
      {
        v27 = v26;
        v26 *= 2;
        v28 = (v27 >> 5) & 4;
        *v11 = *((_BYTE *)v33 + v28);
        v11[1] = *((_BYTE *)v33 + v28 + 1);
        v11[2] = *((_BYTE *)v33 + v28 + 2);
        v11 += 3;
      }
      while ( v11 != v21 );
    }
    v11 += v18;
    v14 += v20;
  }
  while ( v11 != v16 );
}
