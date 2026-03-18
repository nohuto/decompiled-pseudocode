/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0026C30
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00238E4 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00293F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0029860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00264C8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0026F38 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00270D0 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0029C84 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01492DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A544 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A604 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  unsigned int v8; // r14d
  unsigned __int16 *v9; // r12
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v15; // r9
  __int64 v16; // r8
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // r12d
  int *v21; // r13
  __int64 v22; // r14
  struct _GLYPHDATA *result; // rax
  struct RFONTOBJ *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r14d
  unsigned int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct RFONTOBJ *v33; // r8
  unsigned __int16 v34; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v36; // r14
  __int64 v37; // rcx

  v8 = a6;
  v9 = a5;
  v12 = a4;
  v15 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this);
  v16 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 324LL)
    || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*(_DWORD *)(v16 + 320) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
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
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(v16 + 320)
    && *(_DWORD *)(*(_QWORD *)this + 716LL)
    && (*(_QWORD *)(*(_QWORD *)this + 728LL) || RFONTOBJ::bInitSystemTT(this, a2)) )
  {
    v31 = *(_QWORD *)(*(_QWORD *)this + 856LL);
    if ( v31 )
    {
      GreAcquireSemaphore(v31);
      if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x80u) == 0 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        ++gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 728LL) + 528LL));
        v32 = *(_QWORD *)this;
        a5 = 0LL;
        *(_DWORD *)(v32 + 720) |= 0x80u;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
      }
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
    }
  }
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 320LL) )
  {
    v17 = *a4;
    if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
    {
      if ( v17 >= gqlTTSystem && v17 <= (unsigned __int16)word_1C0323322 )
      {
        v33 = (struct RFONTOBJ *)((v17 - gqlTTSystem) / 32);
        if ( ((0x80000000 >> ((v17 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0323328 + 4LL * (_QWORD)v33)) != 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
          {
            if ( a3 && (*((_DWORD *)a3 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(a3, v8, 0, 0);
            a5 = *(unsigned __int16 **)(*(_QWORD *)this + 728LL);
            if ( a5
              && ((v34 = *a4, !a8)
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a5, v34, v33))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a5, v34, v33)),
                  (v36 = EudcMetrics) != 0LL) )
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
              v36 = RFONTOBJ::pgdDefault(this);
            }
            a5 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
            return v36;
          }
          return RFONTOBJ::pgdDefault(this);
        }
      }
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *a4) )
      return RFONTOBJ::pgdDefault(this);
  }
  v18 = *(_QWORD *)(*(_QWORD *)this + 856LL);
  if ( !v18 )
    return RFONTOBJ::pgdDefault(this);
  GreAcquireSemaphore(v18);
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, a2);
    v25 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( v25 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v25 + 528));
      a5 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
    }
    v26 = *(_QWORD *)(*(_QWORD *)this + 744LL);
    if ( v26 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v26 + 528));
      a5 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
    }
    v27 = *(_QWORD *)this;
    v28 = 0;
    v29 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v29 > 0x20 )
    {
      do
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v27 + 752) + 8LL * v28);
        if ( v37 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v37 + 528));
          a5 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
        }
        v27 = *(_QWORD *)this;
        ++v28;
      }
      while ( v28 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
    }
    else if ( v29 )
    {
      do
      {
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                        + 8LL * *(unsigned __int8 *)(v28 + *(_QWORD *)this + 864LL));
        if ( v30 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v30 + 528));
          a5 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
        }
        ++v28;
      }
      while ( v28 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
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
      return RFONTOBJ::pgdDefault(this);
    }
  }
  v19 = (char *)a4 - (char *)v9;
  v20 = a8;
  v21 = a7;
  v22 = v19 >> 1;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *a4, v22, a6, a7, 0, a8);
  if ( !result )
  {
    result = v20
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v24)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v24);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, EudcDefaultChar, v22, a6, v21, 1, v20);
      if ( !result )
        return RFONTOBJ::pgdDefault(this);
    }
  }
  return result;
}
