/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002B104 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002C3F8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C002D1A8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C002D554 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C00318AC (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01BF590 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A060 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A158 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C029B258 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C029B40C (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned int v8; // r13d
  unsigned __int16 *v9; // r12
  struct XDCOBJ *v13; // r14
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // r8
  __int64 v16; // r10
  unsigned __int16 v17; // r9
  struct RFONTOBJ *v18; // rdx
  struct RFONTOBJ *v19; // r8
  unsigned __int16 v20; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v22; // r14
  __int64 v23; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v25; // r15
  int v26; // r12d
  __int64 v27; // r15
  struct RFONTOBJ *v28; // r8

  v8 = a6;
  v9 = a5;
  v13 = a2;
  v14 = a4;
  v15 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this, a2);
  a2 = *(struct XDCOBJ **)a2;
  if ( *((_DWORD *)a2 + 81) || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*((_DWORD *)a2 + 80) )
    return RFONTOBJ::pgdDefault(this, a2);
  if ( a4 < v15 )
  {
    do
    {
      if ( (unsigned __int16)(*v14 - 128) > 0x1Fu )
        break;
      ++v14;
    }
    while ( v14 < v15 );
  }
  if ( v14 == v15 )
    return RFONTOBJ::pgdDefault(this, a2);
  if ( !*((_DWORD *)a2 + 80) && *(_DWORD *)(*(_QWORD *)this + 716LL) && !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    RFONTOBJ::bInitSystemTT(this, v13);
  v16 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
    return RFONTOBJ::pgdDefault(this, a2);
  if ( !*(_DWORD *)(*(_QWORD *)v13 + 320LL) )
  {
    v17 = *a4;
    if ( *(_DWORD *)(v16 + 716) )
    {
      if ( v17 >= gqlTTSystem && v17 <= (unsigned __int16)word_1C032895A )
      {
        a2 = (struct XDCOBJ *)((v17 - gqlTTSystem) / 32);
        if ( ((0x80000000 >> ((v17 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0328960 + 4LL * (_QWORD)a2)) != 0 )
        {
          if ( *(_QWORD *)(v16 + 728) )
          {
            GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
            RFONTOBJ::vLockSystemTTGlyphCache(this);
            EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
            GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
            if ( a3 && (*((_DWORD *)a3 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(a3, v8, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&a5);
            a5 = *(unsigned __int16 **)(*(_QWORD *)this + 728LL);
            if ( a5
              && ((v20 = *a4, !a8)
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a5, v20, v19))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a5, v20, v19)),
                  (v22 = EudcMetrics) != 0LL) )
            {
              if ( a3 )
              {
                v23 = *((_QWORD *)a3 + 27);
                ++*((_DWORD *)a3 + 63);
                *(_DWORD *)(v23 + 4 * (a4 - v9)) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v22 = RFONTOBJ::pgdDefault(this, v18);
            }
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
            return v22;
          }
          return RFONTOBJ::pgdDefault(this, a2);
        }
      }
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v17) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
      }
      return RFONTOBJ::pgdDefault(this, a2);
    }
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, v13);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 1u;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( a3
    && (*((_DWORD *)a3 + 16) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, v8, *(_DWORD *)(*(_QWORD *)this + 848LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this, a2);
  }
  v25 = (char *)a4 - (char *)v9;
  v26 = a8;
  v27 = v25 >> 1;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v13, a3, *a4, v27, v8, a7, 0, a8);
  if ( !result )
  {
    result = v26
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v28)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v28);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v13, a3, EudcDefaultChar, v27, v8, a7, 1, v26);
      if ( !result )
        return RFONTOBJ::pgdDefault(this, a2);
    }
  }
  return result;
}
