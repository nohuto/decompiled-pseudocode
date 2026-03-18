/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C002D1A8
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002B104 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C002D554 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C00318AC (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01BF590 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C029A120 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A158 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  unsigned int v9; // r13d
  struct ESTROBJ *v11; // rbx
  __int64 v13; // r12
  struct RFONTOBJ *v14; // rdx
  struct RFONTOBJ *v16; // rdx
  struct RFONTOBJ *v17; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  struct RFONTOBJ *v23; // r8
  __int64 v24; // rax
  struct _GLYPHDATA *v25; // rax
  struct _GLYPHDATA *v26; // r15
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  __int64 v28; // r15
  RFONTOBJ *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct RFONTOBJ *v32; // r8
  struct _GLYPHDATA *v33; // rax
  struct _GLYPHDATA *v34; // rax
  int *v35; // rax
  __int64 v36; // [rsp+68h] [rbp+48h] BYREF
  __int64 v37; // [rsp+70h] [rbp+50h]

  v9 = 0;
  v11 = a3;
  if ( a3 )
    v13 = *((_QWORD *)a3 + 27);
  else
    v13 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 320LL) )
  {
    if ( a8 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C032895A )
        {
          v14 = (struct RFONTOBJ *)((a4 - gqlTTSystem) / 32);
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C0328960 + 4LL * (_QWORD)v14)) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
              return RFONTOBJ::pgdDefault(this, v14);
            if ( v11 && (*((_DWORD *)v11 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v11, a6, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
            v36 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( v36
              && (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, v17))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, v17)),
                  (v19 = EudcMetrics) != 0LL) )
            {
              if ( v11 )
              {
                v20 = a5;
                ++*((_DWORD *)v11 + 63);
                *(_DWORD *)(v13 + 4 * v20) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v19 = RFONTOBJ::pgdDefault(this, v16);
            }
            goto LABEL_23;
          }
        }
      }
    }
  }
  LODWORD(v21) = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( (_DWORD)v21 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
    v23 = (struct RFONTOBJ *)(unsigned int)(v21 - 1);
    v24 = *(_QWORD *)(*(_QWORD *)(v22 + 752) + 8LL * (_QWORD)v23);
    v36 = v24;
    if ( v24 && (*(_DWORD *)(*(_QWORD *)(v24 + 120) + 52LL) & 0xA) == 8 )
    {
      v21 = (unsigned int)v23;
      v25 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, v23)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, v23);
      v26 = v25;
      if ( v25 )
      {
        if ( v25->fxD )
        {
          if ( !v11 )
            goto LABEL_35;
          *(_DWORD *)(v13 + 4LL * a5) = v21 + 4;
          ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4 * v21);
          goto LABEL_34;
        }
      }
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v36 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, a3);
    v26 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v11 )
        goto LABEL_35;
      *(_DWORD *)(v13 + 4LL * a5) = 2;
      ++*((_DWORD *)v11 + 64);
LABEL_34:
      *a7 = 0;
      goto LABEL_35;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  }
  if ( !(_DWORD)v21 )
  {
LABEL_57:
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v36 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      if ( a9 )
        v34 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, a3);
      else
        v34 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, a3);
      v19 = v34;
      if ( v34 && v34->fxD )
      {
        if ( v11 )
        {
          *(_DWORD *)(v13 + 4LL * a5) = 3;
          v35 = a7;
          ++*((_DWORD *)v11 + 65);
          *v35 = 0;
        }
LABEL_23:
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
        return v19;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
    }
    return 0LL;
  }
  v28 = 0LL;
  v37 = 0LL;
  while ( 1 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
    v30 = *(_QWORD *)this;
    v31 = *(_QWORD *)(v28 + *(_QWORD *)(*(_QWORD *)this + 752LL));
    v36 = v31;
    if ( !v31
      || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                         v29,
                         a4,
                         *(struct PFF **)(v30 + 120),
                         *(struct PFF **)(v31 + 120)) )
    {
      goto LABEL_56;
    }
    v33 = a9
        ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, v32)
        : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, v32);
    v26 = v33;
    if ( v33 )
    {
      if ( v33->fxD )
        break;
    }
    v28 = v37;
LABEL_56:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
    v28 += 8LL;
    ++v9;
    v37 = v28;
    if ( v9 >= (unsigned int)v21 )
      goto LABEL_57;
  }
  if ( v11 )
  {
    *(_DWORD *)(v13 + 4LL * a5) = v9 + 4;
    ++*(_DWORD *)(*((_QWORD *)v11 + 34) + 4LL * v9);
    *a7 = 0;
  }
LABEL_35:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  return v26;
}
