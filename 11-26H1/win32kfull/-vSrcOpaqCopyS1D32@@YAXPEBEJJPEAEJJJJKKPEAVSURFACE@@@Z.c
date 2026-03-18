/*
 * XREFs of ?vSrcOpaqCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14019AFA0
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D32(
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
  int v10; // ebx
  unsigned __int8 *v11; // r10
  __int64 v12; // r9
  int v13; // edx
  int v14; // esi
  const unsigned __int8 *v15; // r9
  __int64 v16; // r12
  unsigned __int8 *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int8 *v20; // r11
  unsigned __int8 v21; // dl
  unsigned __int8 *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // r8
  unsigned int v25; // ecx
  unsigned __int8 v26; // cl
  unsigned __int64 v27; // rax
  unsigned int v28; // [rsp+28h] [rbp+28h]
  unsigned int v29; // [rsp+2Ch] [rbp+2Ch]

  v10 = a2 & 7;
  v11 = &a4[4 * a5];
  v12 = a2;
  v13 = a6 - a5;
  v14 = a6 - a5;
  v15 = &a1[v12 >> 3];
  v16 = a6 - a5;
  v17 = &v11[a8 * a7];
  if ( a6 - a5 >= 8 - v10 )
    v14 = 8 - v10;
  v28 = a10;
  v29 = a9;
  v18 = a7 - 4 * v13;
  v19 = a3 - ((v10 + v13 + 7) >> 3);
  do
  {
    v20 = &v11[4 * v16];
    if ( v10 )
    {
      v21 = *v15++ << v10;
      v22 = &v11[4 * v14];
      do
      {
        v23 = v21;
        v21 *= 2;
        *(_DWORD *)v11 = *(unsigned int *)((char *)&v28 + ((v23 >> 5) & 4));
        v11 += 4;
      }
      while ( v11 != v22 );
    }
    v24 = &v11[(v20 - v11) & 0xFFFFFFFFFFFFFFE0uLL];
    while ( v11 != v24 )
    {
      v25 = *v15++;
      *(_DWORD *)v11 = *(unsigned int *)((char *)&v28 + ((v25 >> 5) & 4));
      *((_DWORD *)v11 + 1) = *(unsigned int *)((char *)&v28 + ((v25 >> 4) & 4));
      *((_DWORD *)v11 + 2) = *(unsigned int *)((char *)&v28 + ((v25 >> 3) & 4));
      *((_DWORD *)v11 + 3) = *(unsigned int *)((char *)&v28 + ((v25 >> 2) & 4));
      *((_DWORD *)v11 + 4) = *(unsigned int *)((char *)&v28 + ((v25 >> 1) & 4));
      *((_DWORD *)v11 + 5) = *(unsigned int *)((char *)&v28 + (v25 & 4));
      *((_DWORD *)v11 + 6) = *(unsigned int *)((char *)&v28 + 2 * (v25 & 2));
      *((_DWORD *)v11 + 7) = *(&v28 + (v25 & 1));
      v11 += 32;
    }
    if ( v11 != v20 )
    {
      v26 = *v15++;
      do
      {
        v27 = v26;
        v26 *= 2;
        *(_DWORD *)v11 = *(unsigned int *)((char *)&v28 + ((v27 >> 5) & 4));
        v11 += 4;
      }
      while ( v11 != v20 );
    }
    v11 += v18;
    v15 += v19;
  }
  while ( v11 != v17 );
}
