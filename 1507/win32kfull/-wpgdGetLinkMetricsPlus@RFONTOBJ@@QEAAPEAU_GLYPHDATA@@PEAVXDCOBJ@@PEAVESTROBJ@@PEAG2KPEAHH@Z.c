/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00231E0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0023650 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002B178 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0023A6C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002CFD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002DD7C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C002EEAC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C002F258 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C015BA7C (-vGetCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01C14A0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029AA84 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029AB7C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        __int64 a2,
        struct ESTROBJ *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned int v8; // r14d
  unsigned __int16 *v9; // r15
  unsigned __int16 *v12; // rcx
  struct XDCOBJ *v14; // r12
  unsigned __int16 *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // eax
  char v20; // dl
  int v21; // edx
  int v22; // ecx
  struct RFONTOBJ *v23; // rdx
  struct RFONTOBJ *v24; // r8
  unsigned __int16 v25; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v27; // r14
  struct _GLYPHDATA *result; // rax
  __int64 v29; // rcx
  struct PFT *v30; // rdx
  struct PFT *v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r14d
  unsigned int v34; // ecx
  struct PFT *v35; // rdx
  struct PFT *v36; // rdx
  __int64 v37; // r14
  int v38; // r15d
  int *v39; // r13
  __int64 v40; // r14
  struct RFONTOBJ *v41; // r8

  v8 = a6;
  v9 = a5;
  v12 = a4;
  v14 = (struct XDCOBJ *)a2;
  v15 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
  v16 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 324LL)
    || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*(_DWORD *)(v16 + 320) )
  {
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
  }
  a2 = 128LL;
  if ( a4 < v15 )
  {
    do
    {
      if ( (unsigned __int16)(*v12 - 128) > 0x1Fu )
        break;
      ++v12;
    }
    while ( v12 < v15 );
  }
  if ( v12 == v15 )
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
  if ( !*(_DWORD *)(v16 + 320)
    && *(_DWORD *)(*(_QWORD *)this + 716LL)
    && (*(_QWORD *)(*(_QWORD *)this + 728LL) || RFONTOBJ::bInitSystemTT(this, v14)) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)this + 856LL);
    if ( v17 )
    {
      GreAcquireSemaphore(v17);
      if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x80u) == 0 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        ++gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, *(struct PFT **)(*(_QWORD *)this + 728LL));
        RFONTOBJ::vGetCache((RFONTOBJ *)&a5);
        *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x80u;
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
      }
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
    }
  }
  if ( !*(_DWORD *)(*(_QWORD *)v14 + 320LL) )
  {
    v18 = *a4;
    if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
    {
      if ( v18 >= gqlTTSystem && v18 <= (unsigned __int16)word_1C03233D2 )
      {
        v20 = (v18 - gqlTTSystem) >> 31;
        v19 = v18 - gqlTTSystem;
        v21 = v20 & 0x1F;
        v22 = v21 + v19;
        LOBYTE(v19) = ((v21 + v19) & 0x1F) - v21;
        a2 = v22 >> 5;
        if ( ((0x80000000 >> v19) & *(_DWORD *)(qword_1C03233D8 + 4 * a2)) != 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
          {
            if ( a3 && (*((_DWORD *)a3 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(a3, v8, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&a5);
            a5 = *(unsigned __int16 **)(*(_QWORD *)this + 728LL);
            if ( a5
              && ((v25 = *a4, !a8)
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a5, v25, v24))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a5, v25, v24)),
                  (v27 = EudcMetrics) != 0LL) )
            {
              if ( a3 )
              {
                ++*((_DWORD *)a3 + 63);
                *(_DWORD *)(*((_QWORD *)a3 + 27) + 4 * (a4 - v9)) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v27 = RFONTOBJ::pgdDefault(this, v23);
            }
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
            return v27;
          }
          return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
        }
      }
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *a4) )
      return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
  }
  v29 = *(_QWORD *)(*(_QWORD *)this + 856LL);
  if ( !v29 )
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
  GreAcquireSemaphore(v29);
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, v14);
    v30 = *(struct PFT **)(*(_QWORD *)this + 736LL);
    if ( v30 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v30);
      RFONTOBJ::vGetCache((RFONTOBJ *)&a5);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
    }
    v31 = *(struct PFT **)(*(_QWORD *)this + 744LL);
    if ( v31 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v31);
      RFONTOBJ::vGetCache((RFONTOBJ *)&a5);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
    }
    v32 = *(_QWORD *)this;
    v33 = 0;
    v34 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v34 > 0x20 )
    {
      do
      {
        v36 = *(struct PFT **)(*(_QWORD *)(v32 + 752) + 8LL * v33);
        if ( v36 )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v36);
          RFONTOBJ::vGetCache((RFONTOBJ *)&a5);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
        }
        v32 = *(_QWORD *)this;
        ++v33;
      }
      while ( v33 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
    }
    else if ( v34 )
    {
      do
      {
        v35 = *(struct PFT **)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                             + 8LL * *(unsigned __int8 *)(v33 + *(_QWORD *)this + 864LL));
        if ( v35 )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a5, v35);
          RFONTOBJ::vGetCache((RFONTOBJ *)&a5);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a5);
        }
        ++v33;
      }
      while ( v33 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
    }
    v8 = a6;
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 1u;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( a3 )
  {
    if ( (*((_DWORD *)a3 + 16) & 0x400) == 0
      && !(unsigned int)ESTROBJ::bPartitionInit(a3, v8, *(_DWORD *)(*(_QWORD *)this + 848LL), 1) )
    {
      return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
    }
  }
  v37 = (char *)a4 - (char *)v9;
  v38 = a8;
  v39 = a7;
  v40 = v37 >> 1;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v14, a3, *a4, v40, a6, a7, 0, a8);
  if ( !result )
  {
    result = v38
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v41)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v41);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v14, a3, EudcDefaultChar, v40, a6, v39, 1, v38);
      if ( !result )
        return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)a2);
    }
  }
  return result;
}
