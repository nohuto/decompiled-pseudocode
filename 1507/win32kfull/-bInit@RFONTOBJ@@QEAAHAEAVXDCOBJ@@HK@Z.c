/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiGetWidthTable @ 0x1C002F570 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C002F7F8 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetGlyphIndicesW @ 0x1C00374E4 (GreGetGlyphIndicesW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0038848 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextMetricsW @ 0x1C0038C58 (GreGetTextMetricsW.c)
 *     GreGetTextCharsetInfo @ 0x1C00DD2CC (GreGetTextCharsetInfo.c)
 *     GreGetCharABCWidthsW @ 0x1C00DE180 (GreGetCharABCWidthsW.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00F4410 (NtGdiQueryFontAssocInfo.c)
 *     GreFontIsLinked @ 0x1C00F6F78 (GreFontIsLinked.c)
 *     GreGetCharWidthInfo @ 0x1C00FA0D4 (GreGetCharWidthInfo.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreGetRealizationInfo @ 0x1C01017D8 (GreGetRealizationInfo.c)
 *     GreGetCharWidthW @ 0x1C0116BDC (GreGetCharWidthW.c)
 *     GreGetFontUnicodeRanges @ 0x1C011E214 (GreGetFontUnicodeRanges.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 *     GreGetTextExtentExW @ 0x1C015CBE0 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02687F8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     GreGetUFI @ 0x1C026A69C (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C026B000 (NtGdiGetLinkedUFIs.c)
 *     GreGetKerningPairs @ 0x1C027FC74 (GreGetKerningPairs.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD0C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiGetETM @ 0x1C02B3C70 (NtGdiGetETM.c)
 * Callees:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0029584 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0029920 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F4D4 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0030C94 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0030FB4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0032D28 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0110104 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0126284 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0EXFORMOBJ@@QEAA@AEAVXDCOBJ@@K@Z @ 0x1C015B968 (--0EXFORMOBJ@@QEAA@AEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C1324 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C025D5E4 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029BE5C (vRemoveAllInactiveRFONTs.c)
 */

__int64 __fastcall RFONTOBJ::bInit(struct _FD_XFORM **this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  struct XDCOBJ *v6; // r15
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // edi
  FLOATL eXY; // eax
  struct PDEV *v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rdx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  BOOL v27; // r9d
  struct _FD_XFORM *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rax
  BOOL v38; // r14d
  struct PFE *v39; // rax
  __int64 v40; // r8
  struct PFE *v41; // r13
  int v42; // r14d
  struct tagLOGFONTW *v43; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v47; // r8d
  unsigned int v48; // ebx
  int v49; // r12d
  __int64 v50; // rax
  struct _FD_XFORM *v51; // rdx
  __int64 v52; // r14
  struct _FD_XFORM *v53; // rdx
  FLOATL v54; // ecx
  int v55; // eax
  struct _FD_XFORM *v56; // rax
  struct _FD_XFORM *v57; // rcx
  struct _FD_XFORM *v58; // rax
  struct _FD_XFORM *v59; // rdx
  FLOATL v60; // ecx
  int v61; // eax
  struct _FD_XFORM *v62; // rcx
  const void *v63; // r14
  __int64 v64; // rax
  __int64 v65; // r8
  struct _FD_XFORM *v66; // rdx
  __int64 v67; // r10
  __int64 v68; // r11
  __int64 v69; // r9
  _QWORD *v70; // rcx
  int v71; // r8d
  int v72; // r8d
  __int64 v73; // rax
  struct _FD_XFORM *v74; // rdx
  _QWORD *p_eXX; // rcx
  struct _FD_XFORM **v76; // r8
  unsigned int v77; // eax
  size_t v78; // rdi
  struct tagLOGFONTW *v79; // rax
  struct tagLOGFONTW *v80; // rbx
  bool v81; // cf
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned int v86; // [rsp+28h] [rbp-D8h]
  __int64 v87; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-98h] BYREF
  int v89; // [rsp+6Ch] [rbp-94h]
  int v90; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+74h] [rbp-8Ch]
  struct RFONT *v92; // [rsp+78h] [rbp-88h] BYREF
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v94; // [rsp+88h] [rbp-78h] BYREF
  struct PDEV *v95; // [rsp+90h] [rbp-70h] BYREF
  int v96; // [rsp+98h] [rbp-68h]
  int v97; // [rsp+9Ch] [rbp-64h]
  struct LFONT *v98; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v99[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v100[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v101; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v102[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v103; // [rsp+E0h] [rbp-20h]
  _FD_XFORM v104; // [rsp+E8h] [rbp-18h] BYREF

  v4 = *(_QWORD *)a2;
  v91 = a4;
  v6 = a2;
  v89 = a3;
  v8 = 1;
  v9 = *(_QWORD *)(v4 + 2176);
  *this = (struct _FD_XFORM *)v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 528);
    v11 = 0;
    if ( v10 )
    {
      GreAcquireSemaphore(v10);
      eXY = (*this)[4].eXY;
      if ( (LOBYTE(eXY) & 8) != 0 )
      {
        v11 = 1;
        LODWORD((*this)[4].eXY) = LODWORD(eXY) & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
      GreReleaseSemaphoreInternal(v10);
      if ( v11 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v13 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v14 = *((_DWORD *)v13 + 14);
            if ( (v14 & 0x2000) == 0 )
            {
              if ( (v14 & 0x8000) == 0 )
                break;
              v15 = *(_QWORD *)(*((_QWORD *)v13 + 227) + 48LL);
              if ( v15 == PsGetCurrentProcessWin32Process() )
                break;
            }
            v13 = (struct PDEV *)*((_QWORD *)v13 + 3);
            if ( !v13 )
              goto LABEL_13;
          }
          ++*((_DWORD *)v13 + 8);
        }
LABEL_13:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v13 )
        {
          v95 = v13;
          vRemoveAllInactiveRFONTs(v13);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v13 = (struct PDEV *)*((_QWORD *)v13 + 3);
          if ( v13 )
          {
            while ( 1 )
            {
              v16 = *((_DWORD *)v13 + 14);
              if ( (v16 & 0x2000) == 0 )
              {
                if ( (v16 & 0x8000) == 0 )
                  break;
                v17 = *(_QWORD *)(*((_QWORD *)v13 + 227) + 48LL);
                if ( v17 == PsGetCurrentProcessWin32Process() )
                  break;
              }
              v13 = (struct PDEV *)*((_QWORD *)v13 + 3);
              if ( !v13 )
                goto LABEL_21;
            }
            ++*((_DWORD *)v13 + 8);
          }
LABEL_21:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v95, 0LL);
        }
      }
    }
  }
  v18 = *(_QWORD *)v6;
  LOBYTE(a2) = 10;
  v87 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 80) + 176LL);
  v20 = HmgShareLock(v19, a2);
  v98 = (struct LFONT *)v20;
  v21 = v20;
  if ( !v20 )
    goto LABEL_197;
  if ( (*(_DWORD *)(v20 + 28) & 1) != 0 )
  {
    UserGetHDEV();
    v22 = *(_DWORD *)(v21 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v21);
    v98 = 0LL;
    if ( !v87 )
    {
LABEL_197:
      RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
      *this = 0LL;
      v8 = 0;
      *(_QWORD *)(*(_QWORD *)v6 + 2176LL) = 0LL;
      goto LABEL_198;
    }
    v24 = v22 - 4;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
          v19 = *(_QWORD *)(v87 + 1480);
      }
      else
      {
        v19 = *(_QWORD *)(v87 + 1472);
      }
    }
    else
    {
      v19 = *(_QWORD *)(v87 + 1464);
    }
    LOBYTE(v23) = 10;
    v21 = HmgShareLock(v19, v23);
    v98 = (struct LFONT *)v21;
  }
  if ( !v21 )
    goto LABEL_197;
  v26 = lNormAngle((unsigned int)-*(_DWORD *)(v21 + 284));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v100, v6, 0x204u);
  v27 = !v26 && (*(_DWORD *)(v100[0] + 32LL) & 1) != 0 && *(float *)(v100[0] + 12LL) >= 0.0 && *(float *)v100[0] >= 0.0;
  v28 = *this;
  v90 = v27;
  if ( !v28
    || (v29 = *(_QWORD *)v6,
        v30 = *(_QWORD *)(*(_QWORD *)v6 + 80LL),
        *(_QWORD *)(v30 + 176) != *(_QWORD *)(*(_QWORD *)v6 + 2160LL))
    || !v27 && LODWORD(v28[40].eYY) )
  {
    *(_QWORD *)(*(_QWORD *)v6 + 2160LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 176LL);
    goto LABEL_64;
  }
  if ( LODWORD(v28[12].eYX) != *(_DWORD *)(v30 + 68) || v89 != LODWORD(v28[42].eYX) || a4 != (LODWORD(v28[4].eXY) & 6) )
    goto LABEL_64;
  if ( (*(_DWORD *)(v29 + 36) & 1) != 0 || *(_DWORD *)(v29 + 32) == 1 )
  {
    v31 = *(unsigned int *)(*(_QWORD *)(v29 + 2176) + 12LL);
    if ( (v31 & 0x200004) != 0 )
    {
      v32 = 0LL;
      v33 = gulFontInformation;
      if ( (gulFontInformation & 2) != 0 )
      {
        LOBYTE(v33) = gulFontInformation & 0x10;
        v32 = 0x10000LL;
        if ( (gulFontInformation & 0x10) != 0 )
          v32 = 268500992LL;
      }
      v34 = (v31 & 4) != 0
          ? (_DWORD)v32 == (v31 & 0x10010000)
          : (((unsigned int)v32 ^ (unsigned int)v31) & 0x10000) == 0;
      if ( !v34 || (v31 & 0x10010000) != 0 && (unsigned int)UserIsRemoteConnection(v31, v32, v33, 268500992LL) )
        goto LABEL_64;
    }
  }
  v35 = *(_QWORD *)v6;
  if ( *(float *)(*(_QWORD *)v6 + 468LL) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(v35 + 472)) )
  {
LABEL_64:
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v87) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v87);
    RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
    v36 = 0;
    if ( *(_BYTE *)(v21 + 297) )
      v36 = 32;
    if ( *(_BYTE *)(v21 + 298) )
      v36 |= 0x80u;
    v37 = *(_QWORD *)v6;
    v102[0] = 0LL;
    *(_DWORD *)(v37 + 2168) = v36;
    *(_DWORD *)(*(_QWORD *)v6 + 2172LL) = v26;
    v38 = (*(_DWORD *)(v87 + 56) & 1) == 0 && (*(_DWORD *)(v21 + 28) & 2) != 0;
    LODWORD(v92) = v38;
    v93 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v39 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v98, v6, &v88, &v94, &v101, a4 & 4);
    v40 = *(_QWORD *)v6;
    v41 = v39;
    v99[0] = *((_QWORD *)v39 + 4);
    v42 = v38 ? 2 : 0;
    v96 = *(_DWORD *)(*(_QWORD *)(v40 + 80) + 68LL);
    v97 = *(_DWORD *)(*(_QWORD *)(v40 + 80) + 312LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v40 + 80) + 352LL) & 0xE000) != 0 )
      EXFORMOBJ::vInit((EXFORMOBJ *)&v95, v6, 0x204u, 0);
    else
      v95 = (struct PDEV *)(v40 + 336);
    v43 = (struct tagLOGFONTW *)(v21 + 276);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 68LL) == 1 )
      NtoD_Win31 = bGetNtoD_Win31(&v104, v43, (struct IFIOBJ *)v99, v6, v42, &v94, 0);
    else
      NtoD_Win31 = bGetNtoD(&v104, v43, (struct IFIOBJ *)v99, v6, &v94);
    if ( !NtoD_Win31 )
    {
      *this = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 2176LL) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v93);
      v8 = 0;
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v102);
      goto LABEL_198;
    }
    eYX = v104.eYX;
    if ( LODWORD(v104.eYX) )
    {
      LODWORD(eYX) = LODWORD(v104.eYX) ^ 0x80000000;
      LODWORD(v104.eYX) ^= 0x80000000;
    }
    eYY = v104.eYY;
    if ( LODWORD(v104.eYY) )
    {
      LODWORD(eYY) = LODWORD(v104.eYY) ^ 0x80000000;
      LODWORD(v104.eYY) ^= 0x80000000;
    }
    v47 = *(_DWORD *)(v99[0] + 48LL);
    if ( (v47 & 0x1000000) != 0 )
    {
      v104.eXX = eYY;
      v104.eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(v104.eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    if ( (v47 & 1) != 0 && *(int *)(v21 + 276) <= 0 )
      v88 |= 0x8000u;
    v102[0] = *(_QWORD *)v41;
    v103 = 0;
    ++*(_DWORD *)(v102[0] + 68LL);
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    v48 = v88;
    v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 68LL);
    v95 = (struct PDEV *)ghsemRFONTList;
    GreAcquireSemaphore(ghsemRFONTList);
    v50 = v87;
    if ( (*(_DWORD *)(v87 + 56) & 0x800000) != 0 )
      v51 = *(struct _FD_XFORM **)(*(_QWORD *)(v87 + 3544) + 1552LL);
    else
      v51 = *(struct _FD_XFORM **)(v87 + 1552);
    v52 = v90;
    *this = v51;
    if ( v51 )
    {
      while ( 1 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v93, (struct PFT *)*this);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v93);
        v53 = *this;
        if ( *(struct PFE **)&(*this)[7].eXX == v41 && v91 == (LODWORD(v53[4].eXY) & 6) )
        {
          v54 = v53->eYY;
          if ( ((v48 ^ LODWORD(v54)) & 0xE000) == 0 )
          {
            v55 = (v48 ^ LODWORD(v54)) & 0x50010000;
            if ( !v55 )
              goto LABEL_201;
            if ( (v48 & 0x10000) != 0 && (LODWORD(v54) & 0x20000) != 0 )
              v55 = (v48 ^ LODWORD(v54)) & 0x50000000;
            if ( (v48 & 0x10000000) != 0 && (LODWORD(v54) & 0x10000000) == 0 && (LODWORD(v54) & 0x2000000) != 0 || !v55 )
            {
LABEL_201:
              if ( !LODWORD(v53[2].eYX)
                && *(_QWORD *)&v104.eXX == *(_QWORD *)&v53[8].eXX
                && *(_QWORD *)&v104.eYX == *(_QWORD *)&v53[8].eYX
                && v89 == LODWORD(v53[42].eYX) )
              {
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v100, (struct MATRIX *)&v53[10].eXY) )
                {
                  v56 = *this;
                  if ( LODWORD((*this)[12].eYX) == v49 && (v52 || !LODWORD(v56[40].eYY)) )
                    break;
                }
              }
            }
          }
        }
        v57 = *(struct _FD_XFORM **)&(*this)[31].eYX;
        *this = v57;
        if ( !v57 )
        {
          v50 = v87;
          goto LABEL_118;
        }
      }
      ++LODWORD(v56[30].eYY);
      v8 = 1;
      v92 = PDEVOBJ::prfntActive((PDEVOBJ *)&v87);
      if ( v92 != (struct RFONT *)*this )
      {
        RFONTOBJ::vRemove(this, &v92, 1LL);
        RFONTOBJ::vInsert(this, &v92, 1LL);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v87, v92);
      }
      goto LABEL_184;
    }
LABEL_118:
    if ( (*(_DWORD *)(v50 + 56) & 0x800000) != 0 )
      v58 = *(struct _FD_XFORM **)(*(_QWORD *)(v50 + 3544) + 1560LL);
    else
      v58 = *(struct _FD_XFORM **)(v50 + 1560);
    *this = v58;
    if ( !v58 )
    {
LABEL_144:
      v8 = 0;
      *this = 0LL;
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v95);
      v63 = (const void *)(v21 + 276);
      if ( !(unsigned int)RFONTOBJ::bRealizeFont(
                            (RFONTOBJ *)this,
                            v6,
                            (struct PDEVOBJ *)&v87,
                            (struct tagENUMLOGFONTEXDVW *)(v21 + 276),
                            v41,
                            &v104,
                            &v94,
                            v88,
                            0,
                            v89,
                            v90,
                            v91) )
      {
        *this = 0LL;
        *(_QWORD *)(*(_QWORD *)v6 + 2176LL) = 0LL;
        PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v102);
        goto LABEL_198;
      }
      if ( *(_DWORD *)(v21 + 280) )
      {
        v93 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v99[0] = *((_QWORD *)v41 + 4);
        v77 = *(_DWORD *)(v21 + 272);
        v78 = 420LL;
        if ( v77 < 0x1A4 )
          v78 = v77;
        v79 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v78);
        v80 = v79;
        if ( v79 )
        {
          memmove(v79, v63, v78);
          v81 = (_DWORD)v92 != 0;
          LODWORD(v92) = -(int)v92;
          v80->lfWidth = 0;
          if ( !PFEOBJ::bSetFontXform(
                  v81 ? (PFEOBJ *)2 : 0,
                  v6,
                  v80,
                  *this + 9,
                  v81 ? 2 : 0,
                  v86,
                  &v94,
                  (struct IFIOBJ *)v99,
                  0) )
            (*this)[9] = v104;
          FreeTmpBuffer(v80, v82, v83, v84);
        }
        else
        {
          (*this)[9] = v104;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v93);
      }
      v8 = 1;
      v103 = 1;
LABEL_185:
      *(_QWORD *)(*(_QWORD *)v6 + 2176LL) = *this;
      *(_DWORD *)(*(_QWORD *)v6 + 264LL) &= ~1u;
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v102);
      goto LABEL_198;
    }
    while ( 1 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v93, (struct PFT *)*this);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v93);
      v59 = *this;
      if ( *(struct PFE **)&(*this)[7].eXX == v41 && v91 == (LODWORD(v59[4].eXY) & 6) )
      {
        v60 = v59->eYY;
        if ( ((v48 ^ LODWORD(v60)) & 0xE000) == 0 )
        {
          v61 = (v48 ^ LODWORD(v60)) & 0x50010000;
          if ( !v61 )
            goto LABEL_202;
          if ( (v48 & 0x10000) != 0 && (LODWORD(v60) & 0x20000) != 0 )
            v61 = (v48 ^ LODWORD(v60)) & 0x50000000;
          if ( (v48 & 0x10000000) != 0 && (LODWORD(v60) & 0x10000000) == 0 && (LODWORD(v60) & 0x2000000) != 0 || !v61 )
          {
LABEL_202:
            if ( !LODWORD(v59[2].eYX)
              && *(_QWORD *)&v104.eXX == *(_QWORD *)&v59[8].eXX
              && *(_QWORD *)&v104.eYX == *(_QWORD *)&v59[8].eYX
              && v89 == LODWORD(v59[42].eYX)
              && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v100, (struct MATRIX *)&v59[10].eXY)
              && LODWORD((*this)[12].eYX) == v49
              && (v52 || !LODWORD((*this)[40].eYY)) )
            {
              break;
            }
          }
        }
      }
      v62 = *(struct _FD_XFORM **)&(*this)[31].eYX;
      *this = v62;
      if ( !v62 )
        goto LABEL_144;
    }
    v64 = v87;
    if ( (*(_DWORD *)(v87 + 56) & 0x800000) != 0 )
      v65 = *(_QWORD *)(*(_QWORD *)(v87 + 3544) + 1560LL);
    else
      v65 = *(_QWORD *)(v87 + 1560);
    v66 = *this;
    v67 = *(_QWORD *)&(*this)[31].eXX;
    if ( v67 )
      v68 = v67 + 496;
    else
      v68 = 0LL;
    v69 = *(_QWORD *)&v66[31].eYX;
    if ( v69 )
      v70 = (_QWORD *)(v69 + 496);
    else
      v70 = 0LL;
    if ( v67 )
    {
      *(_QWORD *)(v68 + 8) = v69;
      if ( v70 )
        *v70 = *(_QWORD *)&v66[31].eXX;
    }
    else
    {
      v65 = *(_QWORD *)&v66[31].eYX;
      if ( !v70 )
      {
LABEL_161:
        if ( (*(_DWORD *)(v64 + 56) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v64 + 3544) + 1560LL) = v65;
        else
          *(_QWORD *)(v64 + 1560) = v65;
        if ( (*(_DWORD *)(v87 + 56) & 0x800000) != 0 )
          v71 = *(_DWORD *)(*(_QWORD *)(v87 + 3544) + 1568LL);
        else
          v71 = *(_DWORD *)(v87 + 1568);
        v72 = v71 - 1;
        if ( (*(_DWORD *)(v87 + 56) & 0x800000) != 0 )
          *(_DWORD *)(*(_QWORD *)(v87 + 3544) + 1568LL) = v72;
        else
          *(_DWORD *)(v87 + 1568) = v72;
        v73 = v87;
        if ( (*(_DWORD *)(v87 + 56) & 0x800000) != 0 )
          v74 = *(struct _FD_XFORM **)(*(_QWORD *)(v87 + 3544) + 1552LL);
        else
          v74 = *(struct _FD_XFORM **)(v87 + 1552);
        p_eXX = (_QWORD *)&(*this)[31].eXX;
        if ( v74 )
          v76 = (struct _FD_XFORM **)&v74[31];
        else
          v76 = 0LL;
        if ( *this != (struct _FD_XFORM *)-496LL )
        {
          *p_eXX = 0LL;
          p_eXX[1] = v74;
          if ( v76 )
            *v76 = *this;
          v74 = *this;
          v73 = v87;
        }
        if ( (*(_DWORD *)(v73 + 56) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v73 + 3544) + 1552LL) = v74;
        else
          *(_QWORD *)(v73 + 1552) = v74;
        v8 = 1;
        LODWORD((*this)[30].eYY) = 1;
LABEL_184:
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v95);
        goto LABEL_185;
      }
      *v70 = 0LL;
    }
    v64 = v87;
    goto LABEL_161;
  }
  if ( (*(_DWORD *)(v35 + 264) & 1) != 0 )
  {
    if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v100, (struct MATRIX *)&(*this)[10].eXY) )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 264LL) &= ~1u;
      goto LABEL_198;
    }
    goto LABEL_64;
  }
LABEL_198:
  LFONTOBJ::~LFONTOBJ(&v98);
  return v8;
}
