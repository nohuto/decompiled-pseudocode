/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C014EFE4
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C014EE60 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002DD7C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002E718 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002F3F8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0030DF8 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C014F794 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C029AB44 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029AB7C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02B9554 (-QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLY.c)
 */

__int64 __fastcall GreGetGlyphOutlineInternal(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct tagTTPOLYGONHEADER *a6,
        struct _MAT2 *a7,
        int a8)
{
  unsigned int v8; // r14d
  unsigned __int16 v9; // r15
  int v10; // ebx
  struct _FONTOBJ *v11; // r13
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // r12
  int v15; // eax
  struct _FONTOBJ *v16; // rsi
  struct _FONTOBJ **v17; // r12
  ULONG_PTR iFile; // rcx
  unsigned int v19; // r13d
  SIZE sizLogResPpi; // rcx
  __int64 v21; // rcx
  __int64 i; // rbx
  ULONG_PTR v23; // rdx
  unsigned int iTTUniq; // r14d
  _QWORD *pvConsumer; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  struct RFONTOBJ *v28; // r8
  SIZE v29; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  SIZE v31; // rbx
  unsigned int v32; // r12d
  __int64 v33; // r14
  __int64 v34; // rbx
  unsigned int v35; // r15d
  SIZE v36; // r9
  unsigned __int16 v37; // cx
  struct RFONTOBJ *v38; // r8
  struct _GLYPHDATA *v39; // rax
  __int64 v40; // rbx
  struct RFONTOBJ *v41; // r8
  unsigned int v42; // r14d
  struct _GLYPHDATA *v43; // rax
  ULONG_PTR v44; // rax
  struct DHPDEV__ *v45; // rdx
  unsigned int v46; // edi
  unsigned int v47; // edi
  unsigned int v48; // edi
  int v49; // ecx
  unsigned int v50; // eax
  LONG top; // ecx
  int v52; // eax
  int v53; // eax
  unsigned __int16 v55; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v56; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v58; // [rsp+54h] [rbp-ACh]
  SIZE v59; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  unsigned int v62; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  struct _FONTOBJ **v65; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+88h] [rbp-78h] BYREF
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+94h] [rbp-6Ch]
  unsigned int v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  RFONTOBJ *v71; // [rsp+A8h] [rbp-58h]
  struct _FONTOBJ *v72; // [rsp+B0h] [rbp-50h]
  struct _MAT2 *v73; // [rsp+B8h] [rbp-48h]
  struct tagTTPOLYGONHEADER *v74; // [rsp+C0h] [rbp-40h]
  _QWORD v75[7]; // [rsp+C8h] [rbp-38h] BYREF
  _GLYPHDATA v76; // [rsp+100h] [rbp+0h] BYREF

  v8 = 0;
  v60 = 0;
  v9 = a2;
  v74 = a6;
  v73 = a7;
  v10 = a3 & 0x80;
  v58 = a2;
  v70 = a4;
  v67 = a3 & 0x100;
  v11 = 0LL;
  v12 = -1;
  v72 = 0LL;
  v13 = a3 & 0xFFFFFE7F;
  v68 = -1;
  v14 = a4;
  v69 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v75, a1);
  if ( !v14 || !v73 )
  {
    EngSetLastError(0x57u);
    goto LABEL_61;
  }
  if ( !v75[0] )
  {
    EngSetLastError(6u);
    goto LABEL_92;
  }
  v15 = RFONTOBJ::bInit((struct _FD_XFORM **)&v56, (struct XDCOBJ *)v75, 0, 2u);
  v16 = v56;
  if ( v15 )
    GreAcquireSemaphore(v56[8].iTTUniq);
  v17 = &v56;
  v63 = 0LL;
  v66 = 0LL;
  v64 = 0LL;
  v65 = &v56;
  if ( !v16 )
    goto LABEL_58;
  if ( v10 )
  {
    v8 = v9;
  }
  else
  {
    v55 = v9;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v56, &v55, 1, &v62, 0, 0);
    v8 = v62;
  }
  v62 = v8;
  if ( v8 != v16[7].cxMax )
    goto LABEL_56;
  if ( v10 )
    goto LABEL_56;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v56, v9) )
    goto LABEL_56;
  iFile = v16[13].iFile;
  if ( !iFile )
    goto LABEL_56;
  GreAcquireSemaphore(iFile);
  v19 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v56, (struct XDCOBJ *)v75);
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v59 = v16[11].sizLogResPpi;
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
  }
  v21 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( v21 )
  {
    v59 = *(SIZE *)&v16[11].ulStyleSize;
    GreAcquireSemaphore(*(_QWORD *)(v21 + 528));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
  }
  for ( i = 0LL; (unsigned int)i < LODWORD(v16[13].iTTUniq); i = (unsigned int)(i + 1) )
  {
    v59 = (SIZE)*((_QWORD *)v16[11].pvConsumer + i);
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v59 + 528LL));
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
  }
  v23 = v16[13].iFile;
  LODWORD(v16[11].iTTUniq) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v23);
  GreReleaseSemaphoreInternal(v16[13].iFile);
  iTTUniq = v16[13].iTTUniq;
  v61 = iTTUniq;
  if ( iTTUniq )
  {
    pvConsumer = v16[11].pvConsumer;
    v26 = iTTUniq - 1;
    v55 = v9;
    v27 = pvConsumer[v26];
    v64 = v27;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v55, 1, &v57, 0, 0);
    if ( v57 != *(_DWORD *)(v27 + 456) )
    {
      v29 = (SIZE)*((_QWORD *)v16[11].pvConsumer + v26);
      v59 = v29;
      if ( *(_QWORD *)&v29
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v29 + 120LL) + 52LL) & 0xA) == 8
        && (v61 = iTTUniq - 1, --iTTUniq, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v59, v9, v28)) != 0LL)
        && EudcMetrics->fxD )
      {
        v19 = v57;
        v17 = (struct _FONTOBJ **)&v64;
        v65 = (struct _FONTOBJ **)&v64;
      }
      else
      {
        v17 = &v56;
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
      if ( v19 != -1 )
        goto LABEL_51;
    }
  }
  v31 = v16[11].sizLogResPpi;
  if ( v31 )
  {
    v63 = (ULONG_PTR)v16[11].sizLogResPpi;
    v55 = v9;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v55, 1, &v57, 0, 0);
    if ( v57 != *(_DWORD *)(*(_QWORD *)&v31 + 456LL) )
    {
      v17 = (struct _FONTOBJ **)&v63;
      v19 = v57;
      v65 = (struct _FONTOBJ **)&v63;
      if ( v57 != -1 )
        goto LABEL_51;
    }
  }
  v32 = 0;
  if ( !iTTUniq )
  {
LABEL_43:
    v17 = v65;
    goto LABEL_44;
  }
  v55 = v9;
  v33 = 0LL;
  while ( 1 )
  {
    v64 = *(_QWORD *)((char *)v16[11].pvConsumer + v33);
    v34 = v64;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v55, 1, &v57, 0, 0);
    v35 = v57;
    if ( v57 != *(_DWORD *)(v34 + 456) )
      break;
LABEL_41:
    ++v32;
    v33 += 8LL;
    if ( v32 >= v61 )
    {
      v9 = v58;
      goto LABEL_43;
    }
  }
  v36 = *(SIZE *)((char *)v16[11].pvConsumer + v33);
  v59 = v36;
  if ( !*(_QWORD *)&v36
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       (RFONTOBJ *)v58,
                       v58,
                       (struct PFF *)v16[1].pvProducer,
                       *(struct PFF **)(*(_QWORD *)&v36 + 120LL))
    || (v39 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v59, v37, v38)) == 0LL
    || !v39->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
    goto LABEL_41;
  }
  v19 = v35;
  v17 = (struct _FONTOBJ **)&v64;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
  if ( v35 != -1 )
    goto LABEL_51;
  v9 = v58;
LABEL_44:
  v40 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( !v40 )
    goto LABEL_54;
  v66 = *(_QWORD *)&v16[11].ulStyleSize;
  v55 = v9;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v66, &v55, 1, &v57, 0, 0);
  v42 = v57;
  if ( v57 == *(_DWORD *)(v40 + 456) )
    goto LABEL_54;
  v65 = *(struct _FONTOBJ ***)&v16[11].ulStyleSize;
  if ( v65 )
  {
    v43 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v65, v9, v41);
    if ( v43 )
    {
      if ( v43->fxD )
      {
        v19 = v42;
        v17 = (struct _FONTOBJ **)&v66;
      }
    }
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v65);
  if ( v19 == -1 )
  {
LABEL_54:
    RFONTOBJ::dtHelper((RFONTOBJ *)&v56, 1);
    LODWORD(v16[11].iTTUniq) = 0;
    v8 = v62;
  }
  else
  {
LABEL_51:
    v8 = v19;
  }
  v11 = v72;
LABEL_56:
  if ( *v17 )
  {
    v11 = *v17;
    goto LABEL_59;
  }
LABEL_58:
  EngSetLastError(0x3EBu);
LABEL_59:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v64);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v66);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v63);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
  v12 = v68;
  v14 = v70;
LABEL_61:
  if ( v11 )
  {
    v56 = v11;
    GreAcquireSemaphore(v11[8].iTTUniq);
    v44 = v56[1].iTTUniq;
    v63 = v44;
    if ( v44
      && *(_QWORD *)(v44 + 3112)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v70, (struct DCOBJ *)v75, (struct RFONTOBJ *)&v56, v73, a8, v69),
          (_DWORD)v70) )
    {
      if ( !v13 )
      {
        v50 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v63, 0LL, v56, 4u, v8, &v76, 0LL, 0);
        goto LABEL_85;
      }
      if ( v13 == 1 )
        goto LABEL_70;
      if ( v13 <= 3 )
      {
        v49 = 0;
        if ( v13 == 3 )
          v49 = 2;
        if ( v67 )
          v49 |= 4u;
        v50 = PDEVOBJ::QueryTrueTypeOutline((PDEVOBJ *)&v63, v45, v56, v8, v49, &v76, a5, v74);
LABEL_85:
        v12 = v50;
        if ( v50 != -1 )
        {
          top = v76.rclInk.top;
          v52 = v76.rclInk.right - v76.rclInk.left;
          *(_DWORD *)(v14 + 8) = v76.rclInk.left;
          *(_DWORD *)v14 = v52;
          *(_DWORD *)(v14 + 4) = v76.rclInk.bottom - top;
          v53 = (v76.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v53 >> 1;
          *(_WORD *)(v14 + 18) = ((v76.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_70:
        v46 = v13 - 1;
        if ( v46 )
        {
          v47 = v46 - 3;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              if ( v48 == 1 )
                v60 = 9;
            }
            else
            {
              v60 = 8;
            }
          }
          else
          {
            v60 = 6;
          }
        }
        else
        {
          v60 = 5;
        }
        v50 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v63, 0LL, v56, v60, v8, &v76, v74, a5);
        goto LABEL_85;
      }
      if ( !HIDWORD(v70) )
      {
        RFONTOBJ::vReleaseCache(v71);
        RFONTOBJ::vMakeInactive(v71);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v56 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v56);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v56);
  }
LABEL_92:
  DCOBJ::~DCOBJ((DCOBJ *)v75);
  return v12;
}
