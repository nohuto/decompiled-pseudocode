/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0026F38
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0026C30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00270D0 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0029C84 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01492DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A604 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  struct ESTROBJ *v10; // rbx
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rcx
  struct _GLYPHDATA *v18; // rax
  struct _GLYPHDATA *v19; // r12
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v22; // rdi
  __int64 v23; // rax
  struct _GLYPHDATA *v24; // rax
  struct _GLYPHDATA *v25; // r15
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  struct _GLYPHDATA *v27; // rax
  __int64 v28; // [rsp+68h] [rbp+48h] BYREF
  __int64 v29; // [rsp+70h] [rbp+50h]

  v10 = a3;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 27);
  else
    v12 = 0LL;
  if ( a8 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a2 + 320LL) )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C0323322 )
        {
          a3 = (struct ESTROBJ *)((a4 - gqlTTSystem) / 32);
          if ( ((0x80000000 >> ((a4 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0323328 + 4LL * (_QWORD)a3)) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) )
              return RFONTOBJ::pgdDefault(this);
            if ( v10 && (*((_DWORD *)v10 + 16) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v10, a6, 0, 0);
            v28 = *(_QWORD *)(*(_QWORD *)this + 728LL);
            if ( !v28
              || (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v28, a4, a3))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v28, a4, a3)),
                  (v22 = EudcMetrics) == 0LL) )
            {
              v22 = RFONTOBJ::pgdDefault(this);
              goto LABEL_43;
            }
            if ( !v10 )
            {
LABEL_43:
              v28 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
              return v22;
            }
            v23 = a5;
            ++*((_DWORD *)v10 + 63);
            *(_DWORD *)(v12 + 4 * v23) = 1;
LABEL_41:
            *a7 = 0;
            goto LABEL_43;
          }
        }
      }
    }
  }
  LODWORD(v13) = *(_DWORD *)(*(_QWORD *)this + 848LL);
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * v14);
    v28 = v15;
    if ( v15 && (*(_DWORD *)(*(_QWORD *)(v15 + 120) + 52LL) & 0xA) == 8 )
    {
      v13 = (unsigned int)v14;
      v24 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v28, a4, a3)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v28, a4, a3);
      v25 = v24;
      if ( v24 )
      {
        if ( v24->fxD )
        {
          if ( !v10 )
          {
LABEL_52:
            v28 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
            return v25;
          }
          *(_DWORD *)(v12 + 4LL * a5) = v13 + 4;
          ++*(_DWORD *)(*((_QWORD *)v10 + 34) + 4 * v13);
LABEL_51:
          *a7 = 0;
          goto LABEL_52;
        }
      }
    }
    v28 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v28 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v28, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v28, a4, a3);
    v25 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v10 )
        goto LABEL_52;
      *(_DWORD *)(v12 + 4LL * a5) = 2;
      ++*((_DWORD *)v10 + 64);
      goto LABEL_51;
    }
    v28 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  }
  v16 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_20:
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v28 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      if ( a9 )
        v27 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v28, a4, a3);
      else
        v27 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v28, a4, a3);
      v22 = v27;
      if ( v27 && v27->fxD )
      {
        if ( !v10 )
          goto LABEL_43;
        *(_DWORD *)(v12 + 4LL * a5) = 3;
        ++*((_DWORD *)v10 + 65);
        goto LABEL_41;
      }
      v28 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    }
    return 0LL;
  }
  v17 = 0LL;
  v29 = 0LL;
  while ( 1 )
  {
    v28 = *(_QWORD *)(v17 + *(_QWORD *)(*(_QWORD *)this + 752LL));
    if ( v28 )
    {
      v18 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v28, a4, a3)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v28, a4, a3);
      v19 = v18;
      if ( v18 )
      {
        if ( v18->fxD )
          break;
      }
    }
    v28 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    ++v16;
    v17 = v29 + 8;
    v29 += 8LL;
    if ( v16 >= (unsigned int)v13 )
      goto LABEL_20;
  }
  if ( v10 )
  {
    *(_DWORD *)(v12 + 4LL * a5) = v16 + 4;
    ++*(_DWORD *)(*((_QWORD *)v10 + 34) + 4LL * v16);
    *a7 = 0;
  }
  v28 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  return v19;
}
