/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0P@@@YAXXZ @ 0x1400701DC (--$GrepAcquireLockValidate@$0P@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1400C3EF0 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1400F9B8C (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x14018301C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401E2500 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        char *a4,
        char *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned int v8; // r12d
  char *v13; // rbx
  const unsigned __int16 *v14; // rbp
  __int64 SessionState; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  HSEMAPHORE v18; // rbx
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  int v21; // r12d
  signed __int64 v22; // rbx
  struct _GLYPHDATA *result; // rax
  struct RFONTOBJ *v24; // r8
  HSEMAPHORE v25; // rbx
  struct RFONTOBJ *v26; // r8
  struct _GRETHREAD *v27; // rax
  struct RFONTOBJ *v28; // rdx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v30; // rbx
  signed __int64 v31; // r14
  __int64 v32; // rax
  struct RFONTOBJ *v33; // rdx
  HSEMAPHORE v34; // rbx
  struct _GRETHREAD *v35; // rax
  __int64 v36; // [rsp+88h] [rbp+10h] BYREF

  v8 = a6;
  v13 = a4;
  v14 = (const unsigned __int16 *)&a5[2 * a6];
  SessionState = W32GetSessionState(a5, a2, a3);
  v16 = *(_QWORD *)a2;
  v17 = *(_QWORD *)(SessionState + 96) + 4864LL;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 308LL)
    || !*(_DWORD *)(*(_QWORD *)(SessionState + 96) + 13504LL)
    && !*(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13520LL)
    && !*(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13528LL)
    && !*(_DWORD *)(v16 + 304) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  if ( a4 >= (char *)v14 )
  {
LABEL_7:
    if ( v13 == (char *)v14 )
      return RFONTOBJ::pgdDefault(this);
  }
  else
  {
    while ( *(_WORD *)v13 >= 0x80u )
    {
      if ( *(_WORD *)v13 <= 0x9Fu )
      {
        v13 += 2;
        if ( v13 < (char *)v14 )
          continue;
      }
      goto LABEL_7;
    }
  }
  if ( !*(_DWORD *)(v16 + 304) && *(_DWORD *)(*(_QWORD *)this + 716LL) && !*(_QWORD *)(*(_QWORD *)this + 728LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
    return RFONTOBJ::pgdDefault(this);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 304LL) )
    goto LABEL_14;
  if ( (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, *(_WORD *)a4) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
    {
      v25 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
      GreAcquireSemaphoreInternal(v25);
      GrepAcquireLockValidate<15>();
      RFONTOBJ::vLockSystemTTGlyphCache(this);
      if ( v25 )
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v25);
        v27 = GreGetCurrentThreadCrossSessionCheck();
        if ( v27 )
        {
          v20 = (*((_BYTE *)v27 + 23))-- == 1;
          if ( v20 )
            *(_QWORD *)v27 &= ~0x8000uLL;
          if ( !*(_QWORD *)v27 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v25);
      }
      if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
        ESTROBJ::bPartitionInit(a3, v8, 0, 0);
      v36 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      if ( v36
        && ((v28 = (struct RFONTOBJ *)*(unsigned __int16 *)a4, !a8)
          ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, (unsigned __int16)v28, v26))
          : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v28, v26)),
            (v30 = EudcMetrics) != 0LL) )
      {
        if ( a3 )
        {
          v31 = a4 - a5;
          v32 = *((_QWORD *)a3 + 26);
          ++*((_DWORD *)a3 + 62);
          *(_DWORD *)(v32 + 4 * (v31 >> 1)) = 1;
          *a7 = 0;
        }
      }
      else
      {
        v30 = RFONTOBJ::pgdDefault(this);
      }
      v36 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
      return v30;
    }
    return RFONTOBJ::pgdDefault(this);
  }
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *(_WORD *)a4) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
    {
      v34 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
      GreAcquireSemaphoreInternal(v34);
      GrepAcquireLockValidate<15>();
      RFONTOBJ::vLockSystemTTGlyphCache(this);
      if ( v34 )
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v34);
        v35 = GreGetCurrentThreadCrossSessionCheck();
        if ( v35 )
        {
          v20 = (*((_BYTE *)v35 + 23))-- == 1;
          if ( v20 )
            *(_QWORD *)v35 &= ~0x8000uLL;
          if ( !*(_QWORD *)v35 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v34);
      }
    }
    return RFONTOBJ::pgdDefault(this);
  }
LABEL_14:
  v18 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
  GreAcquireSemaphoreInternal(v18);
  GrepAcquireLockValidate<15>();
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
  {
    GreAcquirePushLockShared2<16,0>(v17);
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8636), 1u);
    GreReleasePushLockShared2<16,0>(v17);
    RFONTOBJ::vInitEUDC(this, a2);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 1u;
  }
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v18);
    v19 = GreGetCurrentThreadCrossSessionCheck();
    if ( v19 )
    {
      v20 = (*((_BYTE *)v19 + 23))-- == 1;
      if ( v20 )
        *(_QWORD *)v19 &= ~0x8000uLL;
      if ( !*(_QWORD *)v19 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v18);
  }
  if ( a3
    && (*((_DWORD *)a3 + 58) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, v8, *(_DWORD *)(*(_QWORD *)this + 848LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  v21 = a8;
  v22 = (a4 - a5) >> 1;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *(_WORD *)a4, v22, a6, a7, 0, a8);
  if ( !result )
  {
    v33 = (struct RFONTOBJ *)*(unsigned __int16 *)(v17 + 8600);
    result = v21
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, v33, v24)
           : RFONTOBJ::pgdGetEudcMetrics(this, (unsigned __int16)v33, v24);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *(_WORD *)(v17 + 8600), v22, a6, a7, 1, v21);
      if ( !result )
        return RFONTOBJ::pgdDefault(this);
    }
  }
  return result;
}
