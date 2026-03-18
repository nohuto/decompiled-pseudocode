/*
 * XREFs of ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1C00326C8
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H2(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  struct _GLYPHPOS *v6; // rbp
  unsigned int v8; // r13d
  unsigned __int16 *v11; // r9
  struct RFONTOBJ *v13; // rdx
  int v14; // esi
  unsigned int v15; // ecx
  int v16; // esi
  __int64 result; // rax
  unsigned int v18; // eax
  GLYPHDEF *pgdf; // rcx
  __int64 v20; // rax
  int v21; // ecx

  v6 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v8 = a5;
  v11 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v6->ptl.x = (a4 + 8) >> 4;
  v6->ptl.y = (int)(v8 + 8) >> 4;
  a1[1] |= *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x71 | 2;
  v13 = (struct RFONTOBJ *)*a1;
  v14 = *a1;
  v15 = *(_DWORD *)(*(_QWORD *)a3 + 304LL);
  a1[2] = v15;
  v16 = 16 * v15 * v14;
  a1[30] = v16;
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, v13, v6, v11, (int *)&a5, a2, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    v18 = a1[16];
    if ( (v18 & 0x1400) != 0 )
    {
      return ESTROBJ::vCharPos_H3(
               (struct ESTROBJ *)a1,
               a2,
               a3,
               a4,
               v8,
               0,
               0,
               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 172LL),
               a6,
               (int *)&a5);
    }
    else
    {
      if ( a5 )
      {
        a1[16] = v18 | 2;
        *((_QWORD *)a1 + 4) = *((_QWORD *)a1 + 9);
      }
      pgdf = v6->pgdf;
      if ( (a1[1] & 0x10) != 0 )
      {
        a1[26] = 0;
        a1[28] = v16;
      }
      else
      {
        a1[26] = (unsigned int)pgdf[2].pgb;
        a1[28] = v16 + HIDWORD(pgdf[2].ppo) - 16 * a1[2];
      }
      v20 = *(_QWORD *)a3;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x40) != 0 )
      {
        a1[27] = -*(_DWORD *)(v20 + 312);
        result = *(_QWORD *)a3;
        v21 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
      }
      else
      {
        a1[27] = *(_DWORD *)(v20 + 308);
        result = *(_QWORD *)a3;
        v21 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      }
      a1[16] |= 4u;
      a1[29] = v21;
      a1[22] = v16;
      a1[23] = 0;
    }
  }
  return result;
}
