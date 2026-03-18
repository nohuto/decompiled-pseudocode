/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C001AD98 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiGetWidthTable @ 0x1C00DDFE0 (NtGdiGetWidthTable.c)
 *     GreGetTextCharsetInfo @ 0x1C00E124C (GreGetTextCharsetInfo.c)
 *     GreGetCharABCWidthsW @ 0x1C00E18E0 (GreGetCharABCWidthsW.c)
 *     GreGetTextMetricsW @ 0x1C00E7DA8 (GreGetTextMetricsW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetGlyphIndicesW @ 0x1C00EEB70 (GreGetGlyphIndicesW.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00F8710 (NtGdiQueryFontAssocInfo.c)
 *     GreFontIsLinked @ 0x1C00FC998 (GreFontIsLinked.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FF734 (GreGetFontUnicodeRanges.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     GreGetCharWidthInfo @ 0x1C0102AE4 (GreGetCharWidthInfo.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0105EA4 (GreGetGlyphOutlineInternal.c)
 *     GreGetCharWidthW @ 0x1C0141F60 (GreGetCharWidthW.c)
 *     GreGetRealizationInfo @ 0x1C0152330 (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C01523C4 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C026749C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     GreGetUFI @ 0x1C0269238 (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0269B80 (NtGdiGetLinkedUFIs.c)
 *     GreGetKerningPairs @ 0x1C027F634 (GreGetKerningPairs.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD38 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     NtGdiGetETM @ 0x1C02B2DC0 (NtGdiGetETM.c)
 * Callees:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C001A7F4 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C001C51C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D09C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C001E818 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00216C4 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C002206C (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027200 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027294 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EXFORMOBJ@@QEAA@AEAVXDCOBJ@@K@Z @ 0x1C01510B0 (--0EXFORMOBJ@@QEAA@AEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029B7CC (vRemoveAllInactiveRFONTs.c)
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
  __int64 v13; // rcx
  struct PDEV *v14; // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  BOOL v29; // r9d
  struct _FD_XFORM *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  bool v36; // zf
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rax
  BOOL v40; // r14d
  struct PFE *v41; // rax
  __int64 v42; // r8
  struct PFE *v43; // r12
  int v44; // r14d
  struct tagLOGFONTW *v45; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v49; // r8d
  unsigned int v50; // r14d
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _FD_XFORM *v53; // rdx
  __int64 v54; // r13
  struct _FD_XFORM *v55; // rdx
  FLOATL v56; // ecx
  int v57; // eax
  struct _FD_XFORM *v58; // rax
  struct _FD_XFORM *v59; // rcx
  struct _FD_XFORM *v60; // rax
  struct _FD_XFORM *v61; // rdx
  FLOATL v62; // ecx
  int v63; // eax
  struct _FD_XFORM *v64; // rcx
  const void *v65; // r14
  __int64 v66; // rax
  __int64 v67; // r8
  struct _FD_XFORM *v68; // rdx
  __int64 v69; // r10
  __int64 v70; // r11
  __int64 v71; // r9
  _QWORD *v72; // rcx
  int v73; // r8d
  int v74; // r8d
  __int64 v75; // rax
  struct _FD_XFORM *v76; // rdx
  _QWORD *p_eXX; // rcx
  struct _FD_XFORM **v78; // r8
  unsigned int v79; // eax
  size_t v80; // rdi
  struct tagLOGFONTW *v81; // rax
  struct tagLOGFONTW *v82; // rbx
  bool v83; // cf
  unsigned int v85; // [rsp+28h] [rbp-D8h]
  __int64 v86; // [rsp+60h] [rbp-A0h] BYREF
  int v87; // [rsp+68h] [rbp-98h]
  unsigned int v88; // [rsp+6Ch] [rbp-94h] BYREF
  struct PDEV *v89; // [rsp+70h] [rbp-90h] BYREF
  int v90; // [rsp+78h] [rbp-88h]
  int v91; // [rsp+7Ch] [rbp-84h]
  unsigned int v92; // [rsp+80h] [rbp-80h]
  struct RFONT *v93[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v94; // [rsp+98h] [rbp-68h] BYREF
  struct LFONT *v95; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-58h] BYREF
  int v97; // [rsp+B0h] [rbp-50h]
  int v98; // [rsp+B4h] [rbp-4Ch]
  _QWORD v99[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v100; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v101[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v102; // [rsp+E0h] [rbp-20h]
  struct _FD_XFORM v103; // [rsp+E8h] [rbp-18h] BYREF

  v4 = *(_QWORD *)a2;
  v92 = a4;
  v6 = a2;
  v87 = a3;
  v8 = 1;
  v9 = *(_QWORD *)(v4 + 2152);
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
        v14 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v15 = *((_DWORD *)v14 + 14);
            if ( (v15 & 0x2000) == 0 )
            {
              if ( (v15 & 0x8000) == 0 )
                break;
              v16 = *(_QWORD *)(*((_QWORD *)v14 + 227) + 48LL);
              if ( v16 == PsGetCurrentProcessWin32Process(v13) )
                break;
            }
            v14 = (struct PDEV *)*((_QWORD *)v14 + 3);
            if ( !v14 )
              goto LABEL_13;
          }
          ++*((_DWORD *)v14 + 8);
        }
LABEL_13:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v14 )
        {
          v89 = v14;
          vRemoveAllInactiveRFONTs(v14);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v14 = (struct PDEV *)*((_QWORD *)v14 + 3);
          if ( v14 )
          {
            while ( 1 )
            {
              v18 = *((_DWORD *)v14 + 14);
              if ( (v18 & 0x2000) == 0 )
              {
                if ( (v18 & 0x8000) == 0 )
                  break;
                v19 = *(_QWORD *)(*((_QWORD *)v14 + 227) + 48LL);
                if ( v19 == PsGetCurrentProcessWin32Process(v17) )
                  break;
              }
              v14 = (struct PDEV *)*((_QWORD *)v14 + 3);
              if ( !v14 )
                goto LABEL_21;
            }
            ++*((_DWORD *)v14 + 8);
          }
LABEL_21:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v89, 0LL);
        }
      }
    }
  }
  v20 = *(_QWORD *)v6;
  LOBYTE(a2) = 10;
  v86 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 80) + 176LL);
  v22 = HmgShareLock(v21, a2);
  v95 = (struct LFONT *)v22;
  v23 = v22;
  if ( !v22 )
    goto LABEL_199;
  if ( (*(_DWORD *)(v22 + 28) & 1) != 0 )
  {
    UserGetHDEV();
    v24 = *(_DWORD *)(v23 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
    v95 = 0LL;
    if ( !v86 )
    {
LABEL_199:
      RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
      *this = 0LL;
      v8 = 0;
      *(_QWORD *)(*(_QWORD *)v6 + 2152LL) = 0LL;
      goto LABEL_200;
    }
    v26 = v24 - 4;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 == 1 )
          v21 = *(_QWORD *)(v86 + 1480);
      }
      else
      {
        v21 = *(_QWORD *)(v86 + 1472);
      }
    }
    else
    {
      v21 = *(_QWORD *)(v86 + 1464);
    }
    LOBYTE(v25) = 10;
    v23 = HmgShareLock(v21, v25);
    v95 = (struct LFONT *)v23;
  }
  if ( !v23 )
    goto LABEL_199;
  v28 = lNormAngle((unsigned int)-*(_DWORD *)(v23 + 284));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v99, v6, 0x204u);
  v29 = !v28 && (*(_DWORD *)(v99[0] + 32LL) & 1) != 0 && *(float *)(v99[0] + 12LL) >= 0.0 && *(float *)v99[0] >= 0.0;
  v30 = *this;
  v91 = v29;
  if ( !v30
    || (v31 = *(_QWORD *)v6,
        v32 = *(_QWORD *)(*(_QWORD *)v6 + 80LL),
        *(_QWORD *)(v32 + 176) != *(_QWORD *)(*(_QWORD *)v6 + 2136LL))
    || !v29 && LODWORD(v30[40].eYY) )
  {
    *(_QWORD *)(*(_QWORD *)v6 + 2136LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 176LL);
    goto LABEL_64;
  }
  if ( LODWORD(v30[12].eYX) != *(_DWORD *)(v32 + 68) || v87 != LODWORD(v30[42].eYX) || a4 != (LODWORD(v30[4].eXY) & 6) )
    goto LABEL_64;
  if ( (*(_DWORD *)(v31 + 36) & 1) != 0 || *(_DWORD *)(v31 + 32) == 1 )
  {
    v33 = *(unsigned int *)(*(_QWORD *)(v31 + 2152) + 12LL);
    if ( (v33 & 0x200004) != 0 )
    {
      v34 = 0LL;
      v35 = gulFontInformation;
      if ( (gulFontInformation & 2) != 0 )
      {
        LOBYTE(v35) = gulFontInformation & 0x10;
        v34 = 0x10000LL;
        if ( (gulFontInformation & 0x10) != 0 )
          v34 = 268500992LL;
      }
      v36 = (v33 & 4) != 0
          ? (_DWORD)v34 == (v33 & 0x10010000)
          : (((unsigned int)v34 ^ (unsigned int)v33) & 0x10000) == 0;
      if ( !v36 || (v33 & 0x10010000) != 0 && (unsigned int)UserIsRemoteConnection(v33, v34, v35, 268500992LL) )
        goto LABEL_64;
    }
  }
  v37 = *(_QWORD *)v6;
  if ( *(float *)(*(_QWORD *)v6 + 468LL) != 0.0 && !EFLOAT::bIsZero((EFLOAT *)(v37 + 472)) )
  {
LABEL_64:
    if ( (*(_DWORD *)(v86 + 56) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v86);
    RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
    v38 = 0;
    if ( *(_BYTE *)(v23 + 297) )
      v38 = 32;
    if ( *(_BYTE *)(v23 + 298) )
      v38 |= 0x80u;
    v39 = *(_QWORD *)v6;
    v101[0] = 0LL;
    *(_DWORD *)(v39 + 2144) = v38;
    *(_DWORD *)(*(_QWORD *)v6 + 2148LL) = v28;
    v40 = (*(_DWORD *)(v86 + 56) & 1) == 0 && (*(_DWORD *)(v23 + 28) & 2) != 0;
    v90 = v40;
    v89 = (struct PDEV *)ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v41 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v95, v6, &v88, &v94, &v100, a4 & 4);
    v42 = *(_QWORD *)v6;
    v43 = v41;
    v93[0] = *((struct RFONT **)v41 + 4);
    v44 = v40 ? 2 : 0;
    v97 = *(_DWORD *)(*(_QWORD *)(v42 + 80) + 68LL);
    v98 = *(_DWORD *)(*(_QWORD *)(v42 + 80) + 312LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v42 + 80) + 352LL) & 0xE000) != 0 )
      EXFORMOBJ::vInit((EXFORMOBJ *)&v96, v6, 0x204u, 0);
    else
      v96 = v42 + 336;
    v45 = (struct tagLOGFONTW *)(v23 + 276);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 68LL) == 1 )
      NtoD_Win31 = bGetNtoD_Win31(&v103, v45, (struct IFIOBJ *)v93, v6, v44, &v94, 0);
    else
      NtoD_Win31 = bGetNtoD(&v103, v45, (struct IFIOBJ *)v93, v6, &v94);
    if ( !NtoD_Win31 )
    {
      *this = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 2152LL) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v89);
      v8 = 0;
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v101);
      goto LABEL_200;
    }
    eYX = v103.eYX;
    if ( LODWORD(v103.eYX) )
    {
      LODWORD(eYX) = LODWORD(v103.eYX) ^ 0x80000000;
      LODWORD(v103.eYX) ^= 0x80000000;
    }
    eYY = v103.eYY;
    if ( LODWORD(v103.eYY) )
    {
      LODWORD(eYY) = LODWORD(v103.eYY) ^ 0x80000000;
      LODWORD(v103.eYY) ^= 0x80000000;
    }
    v49 = *((_DWORD *)v93[0] + 12);
    if ( (v49 & 0x1000000) != 0 )
    {
      v103.eXX = eYY;
      v103.eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(v103.eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    if ( (v49 & 1) != 0 && *(int *)(v23 + 276) <= 0 )
      v88 |= 0x8000u;
    v101[0] = *(_QWORD *)v43;
    v102 = 0;
    ++*(_DWORD *)(v101[0] + 68LL);
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    v50 = v88;
    v51 = *(_QWORD *)(*(_QWORD *)v6 + 80LL);
    v89 = (struct PDEV *)ghsemRFONTList;
    LODWORD(v93[0]) = *(_DWORD *)(v51 + 68);
    GreAcquireSemaphore(ghsemRFONTList);
    v52 = v86;
    if ( (*(_DWORD *)(v86 + 56) & 0x800000) != 0 )
      v53 = *(struct _FD_XFORM **)(*(_QWORD *)(v86 + 3544) + 1552LL);
    else
      v53 = *(struct _FD_XFORM **)(v86 + 1552);
    v54 = v91;
    *this = v53;
    if ( v53 )
    {
      while ( 1 )
      {
        v55 = *this;
        if ( *(struct PFE **)&(*this)[7].eXX == v43 && v92 == (LODWORD(v55[4].eXY) & 6) )
        {
          v56 = v55->eYY;
          if ( ((v50 ^ LODWORD(v56)) & 0xE000) == 0 )
          {
            v57 = (v50 ^ LODWORD(v56)) & 0x50010000;
            if ( !v57 )
              goto LABEL_203;
            if ( (v50 & 0x10000) != 0 && (LODWORD(v56) & 0x20000) != 0 )
              v57 = (v50 ^ LODWORD(v56)) & 0x50000000;
            if ( (v50 & 0x10000000) != 0 && (LODWORD(v56) & 0x10000000) == 0 && (LODWORD(v56) & 0x2000000) != 0 || !v57 )
            {
LABEL_203:
              if ( !LODWORD(v55[2].eYX)
                && *(_QWORD *)&v103.eXX == *(_QWORD *)&v55[8].eXX
                && *(_QWORD *)&v103.eYX == *(_QWORD *)&v55[8].eYX
                && v87 == LODWORD(v55[42].eYX) )
              {
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v99, (struct MATRIX *)&v55[10].eXY) )
                {
                  v58 = *this;
                  if ( LODWORD((*this)[12].eYX) == LODWORD(v93[0]) && (v54 || !LODWORD(v58[40].eYY)) )
                    break;
                }
              }
            }
          }
        }
        v59 = *(struct _FD_XFORM **)&(*this)[31].eYX;
        *this = v59;
        if ( !v59 )
        {
          v52 = v86;
          goto LABEL_118;
        }
      }
      ++LODWORD(v58[30].eYY);
      v8 = 1;
      v93[0] = PDEVOBJ::prfntActive((PDEVOBJ *)&v86);
      if ( (struct _FD_XFORM *)v93[0] != *this )
      {
        RFONTOBJ::vRemove(this, v93, 1LL);
        RFONTOBJ::vInsert(this, v93, 1LL);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v86, v93[0]);
      }
      goto LABEL_186;
    }
LABEL_118:
    if ( (*(_DWORD *)(v52 + 56) & 0x800000) != 0 )
      v60 = *(struct _FD_XFORM **)(*(_QWORD *)(v52 + 3544) + 1560LL);
    else
      v60 = *(struct _FD_XFORM **)(v52 + 1560);
    *this = v60;
    if ( !v60 )
    {
LABEL_144:
      *this = 0LL;
      if ( ghsemRFONTList )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
        GreReleaseSemaphoreInternal(ghsemRFONTList);
      }
      v65 = (const void *)(v23 + 276);
      if ( !(unsigned int)RFONTOBJ::bRealizeFont(
                            (RFONTOBJ *)this,
                            v6,
                            (struct PDEVOBJ *)&v86,
                            (struct tagENUMLOGFONTEXDVW *)(v23 + 276),
                            v43,
                            &v103,
                            &v94,
                            v88,
                            0,
                            v87,
                            v91,
                            v92) )
      {
        *this = 0LL;
        v8 = 0;
        *(_QWORD *)(*(_QWORD *)v6 + 2152LL) = 0LL;
        PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v101);
        goto LABEL_200;
      }
      if ( *(_DWORD *)(v23 + 280) )
      {
        v89 = (struct PDEV *)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v96 = *((_QWORD *)v43 + 4);
        v79 = *(_DWORD *)(v23 + 272);
        v80 = 420LL;
        if ( v79 < 0x1A4 )
          v80 = v79;
        v81 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v80);
        v82 = v81;
        if ( v81 )
        {
          memmove(v81, v65, v80);
          v83 = v90 != 0;
          v90 = -v90;
          v82->lfWidth = 0;
          if ( !(unsigned int)PFEOBJ::bSetFontXform(
                                v83 ? (PFEOBJ *)2 : 0,
                                v6,
                                v82,
                                *this + 9,
                                v83 ? 2 : 0,
                                v85,
                                &v94,
                                (struct IFIOBJ *)&v96,
                                0) )
            (*this)[9] = v103;
          FreeTmpBuffer(v82);
        }
        else
        {
          (*this)[9] = v103;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v89);
      }
      v8 = 1;
      v102 = 1;
LABEL_187:
      *(_QWORD *)(*(_QWORD *)v6 + 2152LL) = *this;
      *(_DWORD *)(*(_QWORD *)v6 + 264LL) &= ~1u;
      PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v101);
      goto LABEL_200;
    }
    while ( 1 )
    {
      v61 = *this;
      if ( *(struct PFE **)&(*this)[7].eXX == v43 && v92 == (LODWORD(v61[4].eXY) & 6) )
      {
        v62 = v61->eYY;
        if ( ((v50 ^ LODWORD(v62)) & 0xE000) == 0 )
        {
          v63 = (v50 ^ LODWORD(v62)) & 0x50010000;
          if ( !v63 )
            goto LABEL_204;
          if ( (v50 & 0x10000) != 0 && (LODWORD(v62) & 0x20000) != 0 )
            v63 = (v50 ^ LODWORD(v62)) & 0x50000000;
          if ( (v50 & 0x10000000) != 0 && (LODWORD(v62) & 0x10000000) == 0 && (LODWORD(v62) & 0x2000000) != 0 || !v63 )
          {
LABEL_204:
            if ( !LODWORD(v61[2].eYX)
              && *(_QWORD *)&v103.eXX == *(_QWORD *)&v61[8].eXX
              && *(_QWORD *)&v103.eYX == *(_QWORD *)&v61[8].eYX
              && v87 == LODWORD(v61[42].eYX)
              && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v99, (struct MATRIX *)&v61[10].eXY)
              && LODWORD((*this)[12].eYX) == LODWORD(v93[0])
              && (v54 || !LODWORD((*this)[40].eYY)) )
            {
              break;
            }
          }
        }
      }
      v64 = *(struct _FD_XFORM **)&(*this)[31].eYX;
      *this = v64;
      if ( !v64 )
        goto LABEL_144;
    }
    v66 = v86;
    if ( (*(_DWORD *)(v86 + 56) & 0x800000) != 0 )
      v67 = *(_QWORD *)(*(_QWORD *)(v86 + 3544) + 1560LL);
    else
      v67 = *(_QWORD *)(v86 + 1560);
    v68 = *this;
    v69 = *(_QWORD *)&(*this)[31].eXX;
    if ( v69 )
      v70 = v69 + 496;
    else
      v70 = 0LL;
    v71 = *(_QWORD *)&v68[31].eYX;
    if ( v71 )
      v72 = (_QWORD *)(v71 + 496);
    else
      v72 = 0LL;
    if ( v69 )
    {
      *(_QWORD *)(v70 + 8) = v71;
      if ( v72 )
        *v72 = *(_QWORD *)&v68[31].eXX;
    }
    else
    {
      v67 = *(_QWORD *)&v68[31].eYX;
      if ( !v72 )
      {
LABEL_163:
        if ( (*(_DWORD *)(v66 + 56) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v66 + 3544) + 1560LL) = v67;
        else
          *(_QWORD *)(v66 + 1560) = v67;
        if ( (*(_DWORD *)(v86 + 56) & 0x800000) != 0 )
          v73 = *(_DWORD *)(*(_QWORD *)(v86 + 3544) + 1568LL);
        else
          v73 = *(_DWORD *)(v86 + 1568);
        v74 = v73 - 1;
        if ( (*(_DWORD *)(v86 + 56) & 0x800000) != 0 )
          *(_DWORD *)(*(_QWORD *)(v86 + 3544) + 1568LL) = v74;
        else
          *(_DWORD *)(v86 + 1568) = v74;
        v75 = v86;
        if ( (*(_DWORD *)(v86 + 56) & 0x800000) != 0 )
          v76 = *(struct _FD_XFORM **)(*(_QWORD *)(v86 + 3544) + 1552LL);
        else
          v76 = *(struct _FD_XFORM **)(v86 + 1552);
        p_eXX = (_QWORD *)&(*this)[31].eXX;
        if ( v76 )
          v78 = (struct _FD_XFORM **)&v76[31];
        else
          v78 = 0LL;
        if ( *this != (struct _FD_XFORM *)-496LL )
        {
          *p_eXX = 0LL;
          p_eXX[1] = v76;
          if ( v78 )
            *v78 = *this;
          v76 = *this;
          v75 = v86;
        }
        if ( (*(_DWORD *)(v75 + 56) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v75 + 3544) + 1552LL) = v76;
        else
          *(_QWORD *)(v75 + 1552) = v76;
        v8 = 1;
        LODWORD((*this)[30].eYY) = 1;
LABEL_186:
        SEMOBJ::vUnlock((SEMOBJ *)&v89);
        goto LABEL_187;
      }
      *v72 = 0LL;
    }
    v66 = v86;
    goto LABEL_163;
  }
  if ( (*(_DWORD *)(v37 + 264) & 1) != 0 )
  {
    if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)v99, (struct MATRIX *)&(*this)[10].eXY) )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 264LL) &= ~1u;
      goto LABEL_200;
    }
    goto LABEL_64;
  }
LABEL_200:
  LFONTOBJ::~LFONTOBJ(&v95);
  return v8;
}
