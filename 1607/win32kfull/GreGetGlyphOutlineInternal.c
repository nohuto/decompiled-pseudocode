/*
 * XREFs of GreGetGlyphOutlineInternal @ 0x1C0124534
 * Callers:
 *     NtGdiGetGlyphOutline @ 0x1C01243B0 (NtGdiGetGlyphOutline.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002C3F8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002CCA8 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002D6FC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124C98 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C01BF5E8 (-vGetCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C029A120 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A158 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C029B258 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C02BBD08 (-QueryTrueTypeOutline@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLY.c)
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
  unsigned int v8; // r15d
  int v10; // ebx
  struct PFT *v11; // r13
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // r12
  int v15; // eax
  struct _FONTOBJ *v16; // rsi
  struct _FONTOBJ **v17; // r12
  ULONG_PTR iFile; // rcx
  ULONG_PTR v19; // rdx
  unsigned int iTTUniq; // r13d
  _QWORD *pvConsumer; // rbx
  __int64 v22; // rbx
  struct RFONTOBJ *v23; // r8
  struct _GLYPHDATA *EudcMetrics; // rax
  SIZE sizLogResPpi; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  unsigned int v28; // r13d
  RFONTOBJ *v29; // rcx
  struct RFONTOBJ *v30; // r8
  struct _GLYPHDATA *v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // r12d
  struct RFONTOBJ *v34; // r8
  struct _GLYPHDATA *v35; // rax
  ULONG_PTR v36; // rax
  __int64 left; // rdx
  __int64 v38; // r8
  unsigned int v39; // edi
  unsigned int v40; // edi
  unsigned int v41; // edi
  int v42; // ecx
  unsigned int v43; // eax
  LONG top; // ecx
  int v45; // eax
  int v46; // eax
  unsigned __int16 v48; // [rsp+40h] [rbp-C0h] BYREF
  struct _FONTOBJ *v49; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+60h] [rbp-A0h]
  unsigned int v53; // [rsp+64h] [rbp-9Ch]
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  struct _FONTOBJ **v55; // [rsp+70h] [rbp-90h]
  ULONG_PTR v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  SIZE v59; // [rsp+90h] [rbp-70h] BYREF
  int v60; // [rsp+98h] [rbp-68h]
  unsigned int v61; // [rsp+9Ch] [rbp-64h]
  int v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  RFONTOBJ *v64; // [rsp+B0h] [rbp-50h]
  struct PFT *v65; // [rsp+B8h] [rbp-48h]
  struct _MAT2 *v66; // [rsp+C0h] [rbp-40h]
  struct tagTTPOLYGONHEADER *v67; // [rsp+C8h] [rbp-38h]
  _QWORD v68[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v69[32]; // [rsp+E0h] [rbp-20h] BYREF
  _GLYPHDATA v70; // [rsp+100h] [rbp+0h] BYREF

  v8 = 0;
  v53 = 0;
  v67 = a6;
  v66 = a7;
  v63 = a4;
  v10 = a3 & 0x80;
  v62 = a3 & 0x100;
  v11 = 0LL;
  v65 = 0LL;
  v12 = -1;
  v13 = a3 & 0xFFFFFE7F;
  v60 = -1;
  v14 = a4;
  v61 = v10 != 0 ? 4 : 2;
  DCOBJ::DCOBJ((DCOBJ *)v68, a1);
  if ( !v14 || !v66 )
  {
    EngSetLastError(0x57u);
    goto LABEL_57;
  }
  if ( !v68[0] )
  {
    EngSetLastError(6u);
    goto LABEL_88;
  }
  v15 = RFONTOBJ::bInit((struct _FD_XFORM **)&v49, (struct XDCOBJ *)v68, 0, 2u);
  v16 = v49;
  if ( v15 )
    GreAcquireSemaphore(v49[8].iTTUniq);
  v17 = &v49;
  v59 = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  v55 = &v49;
  if ( !v16 )
    goto LABEL_54;
  if ( v10 )
  {
    v8 = a2;
  }
  else
  {
    v48 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v49, &v48, 1, &v54, 0, 0);
    v8 = v54;
  }
  v54 = v8;
  if ( v8 != v16[7].cxMax )
    goto LABEL_51;
  if ( v10 )
    goto LABEL_51;
  if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph((RFONTOBJ *)&v49, a2) )
    goto LABEL_51;
  iFile = v16[13].iFile;
  if ( !iFile )
    goto LABEL_51;
  GreAcquireSemaphore(iFile);
  v8 = -1;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  RFONTOBJ::vInitEUDC((RFONTOBJ *)&v49, (struct XDCOBJ *)v68);
  RFONTOBJ::vLockEUDCFontsGlyphCache((RFONTOBJ *)&v49, 0);
  v19 = v16[13].iFile;
  LODWORD(v16[11].iTTUniq) |= 1u;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", v19);
  GreReleaseSemaphoreInternal(v16[13].iFile);
  iTTUniq = v16[13].iTTUniq;
  v52 = iTTUniq;
  if ( !iTTUniq )
    goto LABEL_27;
  pvConsumer = v16[11].pvConsumer;
  --iTTUniq;
  v48 = a2;
  v22 = pvConsumer[iTTUniq];
  v58 = v22;
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v58, &v48, 1, &v50, 0, 0);
  if ( v50 != *(_DWORD *)(v22 + 456) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v51, *((struct PFT **)v16[11].pvConsumer + iTTUniq));
    if ( v51 && (*(_DWORD *)(*(_QWORD *)(v51 + 120) + 52LL) & 0xA) == 8 )
    {
      v52 = iTTUniq;
      EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, a2, v23);
      if ( EudcMetrics && EudcMetrics->fxD )
      {
        v8 = v50;
        v17 = (struct _FONTOBJ **)&v58;
        v55 = (struct _FONTOBJ **)&v58;
        goto LABEL_24;
      }
    }
    else
    {
      iTTUniq = v52;
    }
    v17 = &v49;
LABEL_24:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v51);
    if ( v8 != -1 )
      goto LABEL_50;
    goto LABEL_27;
  }
  iTTUniq = v52;
LABEL_27:
  sizLogResPpi = v16[11].sizLogResPpi;
  if ( sizLogResPpi )
  {
    v59 = v16[11].sizLogResPpi;
    v48 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v59, &v48, 1, &v50, 0, 0);
    if ( v50 != *(_DWORD *)(*(_QWORD *)&sizLogResPpi + 456LL) )
    {
      v8 = v50;
      v55 = (struct _FONTOBJ **)&v59;
      if ( v50 != -1 )
      {
        v17 = (struct _FONTOBJ **)&v59;
        goto LABEL_50;
      }
    }
  }
  v50 = 0;
  if ( !iTTUniq )
  {
LABEL_41:
    v32 = *(_QWORD *)&v16[11].ulStyleSize;
    if ( !v32 )
      goto LABEL_49;
    v56 = *(_QWORD *)&v16[11].ulStyleSize;
    v48 = a2;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v56, &v48, 1, &v57, 0, 0);
    v33 = v57;
    if ( v57 == *(_DWORD *)(v32 + 456) )
      goto LABEL_49;
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v51, *(struct PFT **)&v16[11].ulStyleSize);
    if ( v51 && (v35 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, a2, v34)) != 0LL && v35->fxD )
    {
      v8 = v33;
      v17 = (struct _FONTOBJ **)&v56;
      v55 = (struct _FONTOBJ **)&v56;
    }
    else
    {
      v17 = v55;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v51);
    if ( v8 == -1 )
    {
LABEL_49:
      RFONTOBJ::dtHelper((RFONTOBJ *)&v49);
      LODWORD(v16[11].iTTUniq) = 0;
      v8 = v54;
      v17 = v55;
    }
    goto LABEL_50;
  }
  v48 = a2;
  v26 = 0LL;
  while ( 1 )
  {
    v58 = *(_QWORD *)((char *)v16[11].pvConsumer + v26);
    v27 = v58;
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v58, &v48, 1, &v57, 0, 0);
    v28 = v57;
    if ( v57 != *(_DWORD *)(v27 + 456) )
      break;
LABEL_38:
    v26 += 8LL;
    if ( ++v50 >= v52 )
      goto LABEL_41;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v51, *(struct PFT **)((char *)v16[11].pvConsumer + v26));
  if ( !v51
    || (unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                       v29,
                       a2,
                       (struct PFF *)v16[1].pvProducer,
                       *(struct PFF **)(v51 + 120))
    || (v31 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v51, a2, v30)) == 0LL
    || !v31->fxD )
  {
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v51);
    goto LABEL_38;
  }
  v17 = (struct _FONTOBJ **)&v58;
  v8 = v28;
  v55 = (struct _FONTOBJ **)&v58;
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v51);
  if ( v28 == -1 )
    goto LABEL_41;
LABEL_50:
  v11 = v65;
LABEL_51:
  if ( *v17 )
  {
    v11 = (struct PFT *)*v17;
    goto LABEL_55;
  }
LABEL_54:
  EngSetLastError(0x3EBu);
LABEL_55:
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v58);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v56);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v49);
  v12 = v60;
  v14 = v63;
LABEL_57:
  if ( v11 )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v49, v11);
    RFONTOBJ::vGetCache((RFONTOBJ *)&v49);
    v36 = v49[1].iTTUniq;
    v56 = v36;
    if ( v36
      && *(_QWORD *)(v36 + 3104)
      && (RESETFCOBJ::RESETFCOBJ((RESETFCOBJ *)&v63, (struct DCOBJ *)v68, (struct RFONTOBJ *)&v49, v66, a8, v61),
          (_DWORD)v63) )
    {
      if ( !v13 )
      {
        v43 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v56, 0LL, v49, 4u, v8, &v70, 0LL, 0);
        goto LABEL_81;
      }
      if ( v13 == 1 )
        goto LABEL_66;
      if ( v13 <= 3 )
      {
        v42 = 0;
        if ( v13 == 3 )
          v42 = 2;
        if ( v62 )
          v42 |= 4u;
        v43 = PDEVOBJ::QueryTrueTypeOutline((PDEVOBJ *)&v56, (struct DHPDEV__ *)left, v49, v8, v42, &v70, a5, v67);
LABEL_81:
        v12 = v43;
        if ( v43 != -1 )
        {
          left = (unsigned int)v70.rclInk.left;
          top = v70.rclInk.top;
          v45 = v70.rclInk.right - v70.rclInk.left;
          *(_DWORD *)(v14 + 8) = v70.rclInk.left;
          *(_DWORD *)v14 = v45;
          *(_DWORD *)(v14 + 4) = v70.rclInk.bottom - top;
          v46 = (v70.ptqD.x.HighPart >> 3) + 1;
          *(_DWORD *)(v14 + 12) = -top;
          *(_WORD *)(v14 + 16) = v46 >> 1;
          *(_WORD *)(v14 + 18) = ((v70.ptqD.y.HighPart >> 3) + 1) >> 1;
        }
      }
      else if ( v13 <= 6 )
      {
LABEL_66:
        v39 = v13 - 1;
        if ( v39 )
        {
          v40 = v39 - 3;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              if ( v41 == 1 )
                v53 = 9;
            }
            else
            {
              v53 = 8;
            }
          }
          else
          {
            v53 = 6;
          }
        }
        else
        {
          v53 = 5;
        }
        v43 = PDEVOBJ::QueryFontData((PDEVOBJ *)&v56, 0LL, v49, v53, v8, &v70, v67, a5);
        goto LABEL_81;
      }
      if ( !HIDWORD(v63) )
      {
        RFONTOBJ::vReleaseCache(v64, left, v38);
        RFONTOBJ::vMakeInactive(v64);
      }
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
    if ( v49 )
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v49, left, v38);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v49);
  }
LABEL_88:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v68);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v69);
  return v12;
}
