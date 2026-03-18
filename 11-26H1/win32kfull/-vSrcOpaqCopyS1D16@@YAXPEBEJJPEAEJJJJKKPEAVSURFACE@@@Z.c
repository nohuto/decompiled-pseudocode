/*
 * XREFs of ?vSrcOpaqCopyS1D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14031EA90
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcOpaqCopyS1D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9,
        __int16 a10)
{
  int v10; // r11d
  unsigned __int8 *v11; // r10
  __int64 v12; // r9
  int v13; // edx
  int v14; // edi
  const unsigned __int8 *v15; // r9
  __int64 v16; // r15
  unsigned __int8 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r14
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // dl
  unsigned __int8 *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // rdx
  unsigned int v25; // ecx
  unsigned __int8 v26; // cl
  unsigned __int64 v27; // rax

  v10 = a2 & 7;
  v11 = &a4[2 * a5];
  v12 = a2;
  v13 = a6 - a5;
  v14 = a6 - a5;
  v15 = &a1[v12 >> 3];
  v16 = a6 - a5;
  v17 = &v11[a8 * a7];
  if ( a6 - a5 >= 8 - v10 )
    v14 = 8 - v10;
  LOWORD(a5) = a10;
  HIWORD(a5) = a9;
  v18 = a7 - 2 * v13;
  v19 = a3 - ((v10 + v13 + 7) >> 3);
  do
  {
    v20 = &v11[2 * v16];
    if ( v10 )
    {
      v21 = *v15++ << v10;
      v22 = &v11[2 * v14];
      do
      {
        v23 = v21;
        v21 *= 2;
        *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v23 >> 6) & 2));
        v11 += 2;
      }
      while ( v11 != v22 );
    }
    v24 = &v11[(v20 - v11) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v11 != v24 )
    {
      v25 = *v15++;
      *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v25 >> 6) & 2));
      *((_WORD *)v11 + 1) = *(_WORD *)((char *)&a5 + ((v25 >> 5) & 2));
      *((_WORD *)v11 + 2) = *(_WORD *)((char *)&a5 + ((v25 >> 4) & 2));
      *((_WORD *)v11 + 3) = *(_WORD *)((char *)&a5 + ((v25 >> 3) & 2));
      *((_WORD *)v11 + 4) = *(_WORD *)((char *)&a5 + ((v25 >> 2) & 2));
      *((_WORD *)v11 + 5) = *(_WORD *)((char *)&a5 + ((v25 >> 1) & 2));
      *((_WORD *)v11 + 6) = *(_WORD *)((char *)&a5 + (v25 & 2));
      *((_WORD *)v11 + 7) = *((_WORD *)&a5 + (v25 & 1));
      v11 += 16;
    }
    if ( v11 != v20 )
    {
      v26 = *v15++;
      do
      {
        v27 = v26;
        v26 *= 2;
        *(_WORD *)v11 = *(_WORD *)((char *)&a5 + ((v27 >> 6) & 2));
        v11 += 2;
      }
      while ( v11 != v20 );
    }
    v11 += v18;
    v15 += v19;
  }
  while ( v11 != v17 );
}
