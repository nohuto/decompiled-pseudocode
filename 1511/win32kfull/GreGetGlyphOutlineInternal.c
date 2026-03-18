/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C0105EA4
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C0105D20 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001CE68 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00264C8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0026AEC (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00271B4 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C01061A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A604 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02B8960 (-QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLY.c)
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
  ULONG_PTR v18; // rax
  struct DHPDEV__ *v19; // rdx
  unsigned int v20; // eax
  LONG top; // ecx
  int v22; // eax
  int v23; // eax
  ULONG_PTR iFile; // rcx
  unsigned int v26; // r13d
  SIZE sizLogResPpi; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  ULONG_PTR v30; // rdx
  unsigned int iTTUniq; // r14d
  _QWORD *pvConsumer; // rbx
  __int64 v33; // r12
  __int64 v34; // rbx
  struct RFONTOBJ *v35; // r8
  __int64 v36; // rax
  struct _GLYPHDATA *EudcMetrics; // rax
  SIZE v38; // rbx
  unsigned int v39; // r12d
  __int64 v40; // r14
  __int64 v41; // rbx
  struct RFONTOBJ *v42; // r8
  unsigned int v43; // r15d
  struct _GLYPHDATA *v44; // rax
  __int64 v45; // rbx
  struct RFONTOBJ *v46; // r8
  unsigned int v47; // r14d
  struct _GLYPHDATA *v48; // rax
  unsigned int v49; // edi
  unsigned int v50; // edi
  unsigned int v51; // edi
  int v52; // ecx
  unsigned __int16 v53; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v57; // [rsp+60h] [rbp-A0h]
  struct _FONTOBJ **v58; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+70h] [rbp-90h]
  unsigned int v60; // [rsp+74h] [rbp-8Ch]
  unsigned int v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  SIZE v64; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  RFONTOBJ *v69; // [rsp+B0h] [rbp-50h]
  struct _FONTOBJ *v70; // [rsp+B8h] [rbp-48h]
  struct _MAT2 *v71; // [rsp+C0h] [rbp-40h]
  _QWORD v72[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct tagTTPOLYGONHEADER *v73; // [rsp+D8h] [rbp-28h]
  _GLYPHDATA v74; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0;
  v59 = 0;
  v9 = a2;
  v73 = a6;
  v71 = a7;
  v10 = a3 & 0x80;
  v57 = a2;
  v68 = a4;
  v65 = a3 & 0x100;
  v11 = 0LL;
  v12 = -1;
  v70 = 0LL;
  v13 = a3 & 0xFFFFFE7F;
  v66 = -1;
  v14 = a4;
  v67 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  if ( !v14 || !v71 )
  {
    EngSetLastError(0x57u);
    goto LABEL_13;
  }
  if ( !v72[0] )
  {
    EngSetLastError(6u);
    goto LABEL_26;
  }
  v15 = RFONTOBJ::bInit((struct _FD_XFORM **)&v54, (struct XDCOBJ *)v72, 0, 2u);
  v16 = v54;
  if ( v15 )
    GreAcquireSemaphore(v54[8].iTTUniq);
  v17 = &v54;
  v64 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  v58 = &v54;
  if ( !v16 )
    goto LABEL_74;
  if ( v10 )
  {
    v8 = v9;
  }
  else
  {
    v53 = v9;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v54, &v53, 1, &v61, 0, 0);
    v8 = v61;
  }
  v61 = v8;
  if ( v8 != v16[7].cxMax )
    goto LABEL_10;
  if ( v10 )
    goto LABEL_10;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v54, v9) )
    goto LABEL_10;
  iFile = v16[13].iFile;
  if ( !iFile )
    goto LABEL_10;
  GreAcquireSemaphore(iFile);
  v26 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v54, (struct XDCOBJ *)v72);
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( sizLogResPpi )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&sizLogResPpi + 528LL));
    v56 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
  }
  v28 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( v28 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v28 + 528));
    v56 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
  }
  v29 = 0LL;
  if ( LODWORD(v16[13].iTTUniq) )
  {
    v56 = 0LL;
    do
    {
      GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)v16[11].pvConsumer + v29) + 528LL));
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
      v29 = (unsigned int)(v29 + 1);
    }
    while ( (unsigned int)v29 < LODWORD(v16[13].iTTUniq) );
  }
  v30 = v16[13].iFile;
  LODWORD(v16[11].iTTUniq) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v30);
  GreReleaseSemaphoreInternal(v16[13].iFile);
  iTTUniq = v16[13].iTTUniq;
  v60 = iTTUniq;
  if ( iTTUniq )
  {
    pvConsumer = v16[11].pvConsumer;
    v33 = iTTUniq - 1;
    v53 = v9;
    v34 = pvConsumer[v33];
    v62 = v34;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v53, 1, &v55, 0, 0);
    if ( v55 != *(_DWORD *)(v34 + 456) )
    {
      v36 = *((_QWORD *)v16[11].pvConsumer + v33);
      v56 = v36;
      if ( v36
        && (*(_DWORD *)(*(_QWORD *)(v36 + 120) + 52LL) & 0xA) == 8
        && (v60 = iTTUniq - 1, --iTTUniq, (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v56, v9, v35)) != 0LL)
        && EudcMetrics->fxD )
      {
        v26 = v55;
        v17 = (struct _FONTOBJ **)&v62;
        v58 = (struct _FONTOBJ **)&v62;
      }
      else
      {
        v17 = &v54;
      }
      v56 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
      if ( v26 != -1 )
        goto LABEL_71;
    }
  }
  v38 = v16[11].sizLogResPpi;
  if ( v38 )
  {
    v64 = v16[11].sizLogResPpi;
    v53 = v9;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v64, &v53, 1, &v55, 0, 0);
    if ( v55 != *(_DWORD *)(*(_QWORD *)&v38 + 456LL) )
    {
      v17 = (struct _FONTOBJ **)&v64;
      v26 = v55;
      v58 = (struct _FONTOBJ **)&v64;
      if ( v55 != -1 )
        goto LABEL_71;
    }
  }
  v39 = 0;
  if ( !iTTUniq )
  {
LABEL_63:
    v17 = v58;
    goto LABEL_64;
  }
  v53 = v9;
  v40 = 0LL;
  while ( 1 )
  {
    v62 = *(_QWORD *)((char *)v16[11].pvConsumer + v40);
    v41 = v62;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v62, &v53, 1, &v55, 0, 0);
    v43 = v55;
    if ( v55 != *(_DWORD *)(v41 + 456) )
      break;
LABEL_61:
    ++v39;
    v40 += 8LL;
    if ( v39 >= v60 )
    {
      v9 = v57;
      goto LABEL_63;
    }
  }
  v56 = *(_QWORD *)((char *)v16[11].pvConsumer + v40);
  if ( !v56 || (v44 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v56, v57, v42)) == 0LL || !v44->fxD )
  {
    v56 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
    goto LABEL_61;
  }
  v56 = 0LL;
  v26 = v43;
  v17 = (struct _FONTOBJ **)&v62;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v56);
  if ( v43 != -1 )
    goto LABEL_71;
  v9 = v57;
LABEL_64:
  v45 = *(_QWORD *)&v16[11].ulStyleSize;
  if ( !v45 )
    goto LABEL_72;
  v63 = *(_QWORD *)&v16[11].ulStyleSize;
  v53 = v9;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v63, &v53, 1, &v55, 0, 0);
  v47 = v55;
  if ( v55 == *(_DWORD *)(v45 + 456) )
    goto LABEL_72;
  v58 = *(struct _FONTOBJ ***)&v16[11].ulStyleSize;
  if ( v58 )
  {
    v48 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v58, v9, v46);
    if ( v48 )
    {
      if ( v48->fxD )
      {
        v26 = v47;
        v17 = (struct _FONTOBJ **)&v63;
      }
    }
  }
  v58 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v58);
  if ( v26 == -1 )
  {
LABEL_72:
    RFONTOBJ::dtHelper((RFONTOBJ *)&v54, 1);
    LODWORD(v16[11].iTTUniq) = 0;
    v8 = v61;
  }
  else
  {
LABEL_71:
    v8 = v26;
  }
  v11 = v70;
LABEL_10:
  if ( *v17 )
  {
    v11 = *v17;
    goto LABEL_12;
  }
LABEL_74:
  EngSetLastError(0x3EBu);
LABEL_12:
  v62 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v62);
  v63 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v63);
  v64 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v64);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
  v12 = v66;
  v14 = v68;
LABEL_13:
  if ( !v11 )
    goto LABEL_26;
  v54 = v11;
  GreAcquireSemaphore(v11[8].iTTUniq);
  v18 = v54[1].iTTUniq;
  v58 = (struct _FONTOBJ **)v18;
  if ( !v18
    || !*(_QWORD *)(v18 + 3112)
    || (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v68, (struct DCOBJ *)v72, (struct RFONTOBJ *)&v54, v71, a8, v67),
        !(_DWORD)v68) )
  {
    EngSetLastError(0x3EBu);
    goto LABEL_23;
  }
  if ( !v13 )
  {
    v20 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v58, 0LL, v54, 4u, v8, &v74, 0LL, 0);
    goto LABEL_19;
  }
  if ( v13 == 1 )
  {
LABEL_79:
    v49 = v13 - 1;
    if ( v49 )
    {
      v50 = v49 - 3;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 == 1 )
            v59 = 9;
        }
        else
        {
          v59 = 8;
        }
      }
      else
      {
        v59 = 6;
      }
    }
    else
    {
      v59 = 5;
    }
    v20 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v58, 0LL, v54, v59, v8, &v74, v73, a5);
LABEL_19:
    v12 = v20;
    if ( v20 != -1 )
    {
      top = v74.rclInk.top;
      v22 = v74.rclInk.right - v74.rclInk.left;
      *(_DWORD *)(v14 + 8) = v74.rclInk.left;
      *(_DWORD *)v14 = v22;
      *(_DWORD *)(v14 + 4) = v74.rclInk.bottom - top;
      v23 = (v74.ptqD.x.HighPart >> 3) + 1;
      *(_DWORD *)(v14 + 12) = -top;
      *(_WORD *)(v14 + 16) = v23 >> 1;
      *(_WORD *)(v14 + 18) = ((v74.ptqD.y.HighPart >> 3) + 1) >> 1;
    }
    goto LABEL_21;
  }
  if ( v13 <= 3 )
  {
    v52 = 0;
    if ( v13 == 3 )
      v52 = 2;
    if ( v65 )
      v52 |= 4u;
    v20 = PDEVOBJ::QueryTrueTypeOutline((PDEVOBJ *)&v58, v19, v54, v8, v52, &v74, a5, v73);
    goto LABEL_19;
  }
  if ( v13 <= 6 )
    goto LABEL_79;
LABEL_21:
  if ( !HIDWORD(v68) )
  {
    RFONTOBJ::vReleaseCache(v69);
    RFONTOBJ::vMakeInactive((struct RFONT **)v69);
  }
LABEL_23:
  if ( v54 )
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v54);
  v54 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
LABEL_26:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v72);
  return v12;
}
