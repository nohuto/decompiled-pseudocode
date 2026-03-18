/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C
 * Callers:
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C002DA64 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002DB58 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002DE58 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00FFB50 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C014CB8C (GreGetCharWidthW.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C002ADA0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002B104 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C002B1B4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00C1D50 (xInsertMetricsRFONTOBJ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  __int64 v8; // r14
  _DWORD *v10; // r15
  struct GPRUN *v11; // r15
  int v12; // r13d
  __int64 v13; // rbp
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct GPRUN *Run; // rax
  unsigned __int16 *v17; // [rsp+40h] [rbp-38h]
  unsigned __int16 *i; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v17 = a4;
  v10 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( *v10 )
  {
    v11 = (struct GPRUN *)(v10 + 4);
    for ( i = &a4[v8]; a4 < i; ++a3 )
    {
      v12 = *a4;
      v13 = (unsigned int)(v12 - *(_DWORD *)v11);
      if ( (unsigned int)v13 >= *((_DWORD *)v11 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(this, v12);
        v11 = Run;
        v13 = (unsigned int)(v12 - *(_DWORD *)Run);
        if ( (unsigned int)v13 >= *((_DWORD *)Run + 1) )
        {
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a5, a6, a4, v17, v8, &v19, 0);
          if ( !LinkMetricsPlus )
            return 0LL;
        }
        else
        {
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v13);
        }
      }
      else
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v11 + 1) + 8 * v13);
      }
      if ( !LinkMetricsPlus )
      {
        if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2)
          || !(unsigned int)xInsertMetricsRFONTOBJ(this) )
        {
          return 0LL;
        }
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v11 + 1) + 8 * v13);
      }
      ++a4;
      a3->hg = LinkMetricsPlus->hg;
      a3->pgdf = &LinkMetricsPlus->gdf;
    }
  }
  else
  {
    for ( ; (_DWORD)v8; LODWORD(v8) = v8 - 1 )
    {
      a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
      a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this, a2);
      ++a3;
    }
  }
  return 1LL;
}
