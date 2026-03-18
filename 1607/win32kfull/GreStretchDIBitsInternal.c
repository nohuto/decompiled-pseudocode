/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C00BDAD8
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00BD8A0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C003A8AC (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C0151D78 (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02662C0 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02662DC (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B7744 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B77D0 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B9FE8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  unsigned int v19; // edi
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  BOOL v27; // edi
  __int64 v28; // rcx
  int v29; // r11d
  unsigned int v30; // r15d
  int v31; // r13d
  __int64 v32; // r8
  int v33; // r10d
  unsigned int v34; // r9d
  unsigned int v36; // r12d
  unsigned int v37; // r15d
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  int v40; // ebx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rsi
  LONG x; // ecx
  char v48; // dl
  LONG v49; // eax
  LONG y; // ecx
  SURFOBJ *v51; // rdx
  SURFOBJ *v52; // rcx
  struct SURFACE *v53; // rax
  unsigned int v54; // r8d
  struct SURFACE *v55; // r13
  __int64 v56; // rdi
  struct PALETTE *v57; // rbx
  int v58; // ecx
  int v59; // esi
  int v60; // edi
  __int64 v61; // r8
  __int64 XlateObject; // rax
  unsigned int v63; // esi
  struct EPOINTL *v64; // rax
  LONG v65; // r8d
  int v66; // r9d
  int v67; // eax
  int v68; // ecx
  char v69; // bl
  int v70; // edx
  int v71; // eax
  struct REGION *v72; // rax
  struct ECLIPOBJ *v73; // rdx
  __int64 v74; // rax
  BOOL (__stdcall *v75)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v76; // r11d
  LONG v77; // ecx
  LONG v78; // ecx
  char *v79; // r8
  __int64 v80; // rdx
  unsigned int v81; // ebx
  int v82; // r12d
  LONG v83; // r15d
  unsigned int v84; // edx
  HDC CompatibleDC; // rsi
  HDC v86; // rbx
  __int64 DIBitmapComp; // rax
  __int64 v88; // rdi
  int v89; // ebx
  int v90[2]; // [rsp+30h] [rbp-D0h]
  __int64 v91; // [rsp+38h] [rbp-C8h]
  int v92[2]; // [rsp+40h] [rbp-C0h]
  __int64 v93; // [rsp+48h] [rbp-B8h]
  unsigned int v94; // [rsp+80h] [rbp-80h]
  int v95; // [rsp+84h] [rbp-7Ch]
  unsigned int v96; // [rsp+88h] [rbp-78h]
  unsigned int v97; // [rsp+8Ch] [rbp-74h]
  char v98; // [rsp+90h] [rbp-70h]
  unsigned int v99; // [rsp+94h] [rbp-6Ch]
  unsigned int v100; // [rsp+98h] [rbp-68h]
  int v102; // [rsp+A0h] [rbp-60h]
  unsigned int v103; // [rsp+A4h] [rbp-5Ch]
  unsigned int v104; // [rsp+A4h] [rbp-5Ch]
  int v105; // [rsp+A8h] [rbp-58h]
  struct tagRGBQUAD v106; // [rsp+ACh] [rbp-54h]
  int v107; // [rsp+ACh] [rbp-54h]
  _OWORD v108[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v109; // [rsp+D0h] [rbp-30h]
  int v110; // [rsp+D4h] [rbp-2Ch]
  unsigned int v111; // [rsp+D8h] [rbp-28h]
  int v112; // [rsp+DCh] [rbp-24h]
  int v113; // [rsp+E0h] [rbp-20h]
  LONG v114; // [rsp+E4h] [rbp-1Ch]
  unsigned int v115; // [rsp+E8h] [rbp-18h]
  unsigned int v116; // [rsp+ECh] [rbp-14h]
  __int64 v117; // [rsp+F0h] [rbp-10h] BYREF
  char v118; // [rsp+F8h] [rbp-8h]
  int v119; // [rsp+FCh] [rbp-4h]
  __int64 v120; // [rsp+100h] [rbp+0h] BYREF
  char v121; // [rsp+108h] [rbp+8h]
  int v122; // [rsp+10Ch] [rbp+Ch]
  __int64 v123; // [rsp+110h] [rbp+10h] BYREF
  int v124; // [rsp+118h] [rbp+18h]
  __int64 v125[2]; // [rsp+120h] [rbp+20h] BYREF
  DC *v126[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v127[32]; // [rsp+140h] [rbp+40h] BYREF
  DC *v128[2]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v129[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v130; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v131[12]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v132; // [rsp+1ACh] [rbp+ACh]
  _BYTE v133[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v134[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _POINTL v135; // [rsp+220h] [rbp+120h] BYREF
  LONG v136; // [rsp+228h] [rbp+128h]
  LONG v137; // [rsp+22Ch] [rbp+12Ch]
  HDC v138; // [rsp+230h] [rbp+130h] BYREF
  int v139; // [rsp+238h] [rbp+138h]
  int v140; // [rsp+23Ch] [rbp+13Ch]
  RECTL prclDest; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v142[4]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v143[9]; // [rsp+254h] [rbp+154h] BYREF

  v16 = 0;
  v17 = a12;
  v19 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v110 = a15;
  v125[0] = a16;
  v138 = a1;
  v113 = a4;
  v20 = (gajRop3[BYTE2(a13)] & 0xD4) == 0;
  v114 = a3;
  v112 = a5;
  v105 = a12;
  v96 = 0;
  if ( v20 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v126[0] = 0LL;
  v126[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v127);
  XDCOBJ::vLock((XDCOBJ *)v126, a1);
  if ( !v126[0]
    || !a11
    || !*(_QWORD *)&prclDest.left
    || a12 > 2
    || a14 < 0xC
    || (v106 = *(struct tagRGBQUAD *)a11, a14 < *(_DWORD *)a11)
    || *(_DWORD *)a11 < 0x28u
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_52:
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v126);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v127);
    return v19;
  }
  v109 = *(unsigned __int8 *)(*((_QWORD *)v126[0] + 10) + 75LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v130, (struct XDCOBJ *)v126, 0x204u);
  v21 = *(_DWORD *)(a11 + 16);
  v22 = 1LL;
  v23 = v130;
  if ( (unsigned int)(v21 - 4) > 1 )
  {
    v25 = v125[0];
    goto LABEL_26;
  }
  if ( v21 == 4 )
  {
    v24 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v126);
  }
  else
  {
    if ( v21 != 5 )
    {
      v24 = 0;
      goto LABEL_19;
    }
    v24 = XDCOBJ::bSupportsPNG((XDCOBJ *)v126);
  }
  v22 = 1LL;
LABEL_19:
  if ( !v24 )
    goto LABEL_270;
  if ( BYTE2(a13) != 204 )
    goto LABEL_270;
  if ( (*(_DWORD *)(v23 + 32) & 1) == 0 )
    goto LABEL_270;
  if ( a12 )
    goto LABEL_270;
  v25 = v125[0];
  if ( v125[0] )
    goto LABEL_270;
LABEL_26:
  if ( v113 == a8 )
  {
    v22 = (unsigned int)a9;
    if ( v112 == a9
      && a9 > 0
      && a8 > 0
      && !(a7 | a6)
      && BYTE2(a13) == 204
      && v109 != 4
      && (*(_DWORD *)(v23 + 32) & 2) != 0 )
    {
      v26 = *(_DWORD *)(a11 + 8);
      if ( v26 < 0 )
        v26 = -v26;
      if ( a9 >= v26 )
        LODWORD(v22) = v26;
      v16 = GreSetDIBitsToDeviceInternal(
              a1,
              a2,
              v114,
              v113,
              v112,
              a6,
              a7,
              a7,
              v22,
              *(__int64 *)&prclDest.left,
              (struct tagRGBQUAD *)a11,
              a12,
              v110,
              a14,
              1,
              v25);
      goto LABEL_270;
    }
  }
  v27 = 0;
  if ( a12 == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v133, (struct XDCOBJ *)v126, 0);
    v28 = *((_QWORD *)v126[0] + 64);
    if ( v28 )
      v27 = *(_DWORD *)(v28 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v133);
    DCOBJ::~DCOBJ((DCOBJ *)v134);
    v23 = v130;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v23 + 32) & 1) == 0 || v27 )
  {
    v82 = *(_DWORD *)(a11 + 8);
    if ( v82 <= 0 )
      v83 = a7;
    else
      v83 = v82 - a7 - a9;
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v22);
    v86 = v138;
    if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp(v138, *(__int64 *)&prclDest.left, a11, a12, a14, v110);
    else
      DIBitmapComp = GreCreateDIBitmapReal(
                       v138,
                       v84,
                       *(void **)&prclDest.left,
                       (unsigned int *)a11,
                       a12,
                       a14,
                       v110,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    v88 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      v89 = GreStretchBltInternal(v86, a2, v114, v113, v112, CompatibleDC, a6, v83, a8, a9, a13, 0xFFFFFF, 1);
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL, 0LL);
      GreDeleteObject(v88);
      if ( v89 )
        goto LABEL_269;
    }
    else
    {
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL, 0LL);
      GreDeleteObject(v88);
    }
    v82 = 0;
LABEL_269:
    v16 = v82;
    goto LABEL_270;
  }
  v29 = *(_DWORD *)(a11 + 8);
  v30 = *(unsigned __int16 *)(a11 + 14);
  v31 = 1;
  v32 = *(unsigned int *)(a11 + 4);
  v33 = *(_DWORD *)(a11 + 16);
  v34 = *(_DWORD *)(a11 + 32);
  memset(v108, 0, sizeof(v108));
  v95 = 1;
  v103 = v30;
  v102 = v33;
  v97 = v32;
  v99 = v29;
  LODWORD(v117) = v34;
  v138 = (HDC)(a11 + *(unsigned int *)&v106);
  if ( v29 < 0 )
  {
    v29 = -v29;
    DWORD2(v108[1]) = 1;
    v99 = v29;
  }
  if ( v33 == 3 )
  {
    if ( a14 < 0x34 )
    {
LABEL_50:
      EngSetLastError(0x57u);
LABEL_51:
      v19 = 0;
      goto LABEL_52;
    }
    if ( a12 == 1 )
      v17 = 0;
    v105 = v17;
    if ( v30 == 16 )
    {
      LODWORD(v108[0]) = 4;
    }
    else if ( v30 == 32 )
    {
      LODWORD(v108[0]) = 6;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v32) = v97;
      v31 = 0;
      v95 = 0;
    }
    v111 = *(_DWORD *)(a11 + 40);
    v36 = 0;
    v37 = 512;
    v116 = *(_DWORD *)(a11 + 44);
    v115 = *(_DWORD *)(a11 + 48);
    v38 = v103 * (unsigned __int64)(unsigned int)v32;
    v138 = (HDC)(a11 + 40);
    v94 = 2;
    if ( v38 > 0xFFFFFFFF || (int)v38 + 31 < (unsigned int)v38 )
      goto LABEL_66;
    v29 = v99;
    v39 = v99 * (unsigned __int64)(((unsigned int)(v38 + 31) >> 3) & 0x1FFFFFFC);
    if ( v39 <= 0xFFFFFFFF )
    {
      v40 = 0;
LABEL_134:
      HIDWORD(v108[0]) = v39;
      goto LABEL_135;
    }
    goto LABEL_65;
  }
  if ( v33 )
  {
    if ( v33 == 10 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v128, a1);
      if ( !v128[0] || !(unsigned int)DC::bIsCMYKColor(v128[0]) )
        goto LABEL_108;
      if ( v30 == 1 )
      {
        LODWORD(v108[0]) = 1;
        v94 = 1;
        v36 = 2;
      }
      else
      {
        switch ( v30 )
        {
          case 4u:
            LODWORD(v108[0]) = 2;
            v36 = 16;
            break;
          case 8u:
            LODWORD(v108[0]) = 3;
            v36 = 256;
            break;
          case 0x20u:
            LODWORD(v108[0]) = 6;
            v36 = 0;
            v94 = 16;
            v37 = 512;
LABEL_102:
            v42 = v103 * (unsigned __int64)v97;
            if ( v42 <= 0xFFFFFFFF && (int)v42 + 31 >= (unsigned int)v42 )
            {
              v43 = v99 * (unsigned __int64)(((unsigned int)(v42 + 31) >> 3) & 0x1FFFFFFC);
              if ( v43 <= 0xFFFFFFFF )
              {
                HIDWORD(v108[0]) = v43;
LABEL_109:
                XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v128);
                UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v129);
                LODWORD(v39) = HIDWORD(v108[0]);
                v40 = 0;
                LODWORD(v32) = v97;
                v29 = v99;
LABEL_135:
                if ( !v31 )
                  goto LABEL_51;
                v34 = v117;
                v33 = v102;
LABEL_137:
                v100 = a14 - *(_DWORD *)&v106;
                v44 = v125[0];
                if ( !v125[0] )
                {
                  v44 = *(_QWORD *)(*((_QWORD *)v126[0] + 10) + 112LL);
                  v125[0] = v44;
                }
                v107 = *((_DWORD *)v126[0] + 28);
                if ( (v107 & 0x10000000) != 0 && (!v44 || (unsigned int)(v33 - 10) > 2) )
                  v107 = v107 & 0xFFFFFFF | 0x20000000;
                *(_QWORD *)((char *)v108 + 4) = __PAIR64__(v29, v32);
                if ( v34 )
                {
                  v45 = v36;
                  if ( v34 <= v36 )
                    v45 = v34;
                  v104 = v45;
                }
                else
                {
                  v104 = v36;
                }
                if ( v110 < (unsigned int)v39 )
                  goto LABEL_50;
                v46 = *((_QWORD *)v126[0] + 6);
                v135.x = a2;
                v136 = a2 + v113;
                v135.y = v114;
                v137 = v114 + v112;
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)v131, (struct XDCOBJ *)v126, 0x204u);
                if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v131, &v135) )
                  goto LABEL_51;
                if ( ERECTL::bEmpty((ERECTL *)&v135) )
                {
                  v19 = a9;
                  goto LABEL_52;
                }
                x = v135.x;
                v48 = 0;
                v49 = v136;
                v98 = 0;
                if ( v135.x > v136 )
                {
                  v135.x = v136;
                  v136 = x;
                  if ( !v132 )
                  {
                    v135.x = v49 + 1;
                    v136 = x + 1;
                  }
                  v48 = 1;
                  v98 = 1;
                }
                y = v135.y;
                if ( v135.y > v137 )
                {
                  v135.y = v137 + 1;
                  v98 = v48 ^ 2;
                  v137 = y + 1;
                }
                v124 = 0;
                v123 = 0LL;
                if ( !v105 )
                {
                  v31 &= -(PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v123, v94, v36, 0LL, v111, v116, v115, v37, 1) != 0);
                  v95 = v31;
                }
                if ( !v31 )
                {
LABEL_256:
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v123);
                  v19 = v96;
                  goto LABEL_52;
                }
                DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v133, (struct XDCOBJ *)v126, 0);
                DWORD2(v108[1]) |= 8 * (*(_DWORD *)(*((_QWORD *)v126[0] + 6) + 56LL) & 0x8000);
                *(_QWORD *)&v108[1] = 0LL;
                v120 = 0LL;
                v121 = 0;
                v122 = 0;
                if ( v40 )
                {
                  v117 = 0LL;
                  v118 = 0;
                  *(_OWORD *)v128 = v108[0];
                  v119 = 0;
                  v129[0] = v108[1];
                  if ( SURFMEM::bCreateDIB(
                         (SURFMEM *)&v117,
                         (struct _DEVBITMAPINFO *)v128,
                         *(void **)&prclDest.left,
                         0LL,
                         0,
                         0LL,
                         0LL,
                         0,
                         1,
                         0,
                         0)
                    && (LODWORD(v108[0]) = (LODWORD(v108[0]) != 7) + 2,
                        SURFMEM::bCreateDIB(
                          (SURFMEM *)&v120,
                          (struct _DEVBITMAPINFO *)v108,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0,
                          1,
                          0,
                          0)) )
                  {
                    v51 = 0LL;
                    *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v108 + 4);
                    *(_QWORD *)&prclDest.left = 0LL;
                    if ( v117 )
                      v51 = (SURFOBJ *)(v117 + 24);
                    v52 = 0LL;
                    if ( v120 )
                      v52 = (SURFOBJ *)(v120 + 24);
                    EngCopyBits(v52, v51, 0LL, 0LL, &prclDest, &gptl00);
                  }
                  else
                  {
                    v31 = 0;
                    v95 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v117);
                }
                else
                {
                  v31 &= -(SURFMEM::bCreateDIB(
                             (SURFMEM *)&v120,
                             (struct _DEVBITMAPINFO *)v108,
                             *(void **)&prclDest.left,
                             0LL,
                             0,
                             0LL,
                             0LL,
                             0,
                             1,
                             0,
                             0) != 0);
                  v95 = v31;
                }
                if ( !v31 )
                {
LABEL_255:
                  SURFMEM::~SURFMEM((SURFMEM *)&v120);
                  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v133);
                  DCOBJ::~DCOBJ((DCOBJ *)v134);
                  goto LABEL_256;
                }
                v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v126);
                v55 = v53;
                *(_QWORD *)&prclDest.left = 0LL;
                v56 = *((_QWORD *)v53 + 15);
                v57 = (struct PALETTE *)*((_QWORD *)v126[0] + 12);
                v117 = 0LL;
                if ( v57 != ppalDefault )
                  *((_QWORD *)v53 + 21) = *(_QWORD *)v57;
                if ( v105 )
                {
                  if ( v105 != 1 )
                  {
                    v58 = v95;
                    v59 = v102;
                    v60 = 0;
                    if ( v105 == 2 )
                    {
                      if ( *((_DWORD *)v53 + 24) != LODWORD(v108[0]) )
                        v58 = 0;
                      *(_QWORD *)&prclDest.left = xloIdent;
                    }
                    goto LABEL_204;
                  }
                  if ( v100 < 2 * (unsigned __int64)v104
                    || !(unsigned int)EXLATEOBJ::bMakeXlate(&v117, v138, v57, v53, v104, v36) )
                  {
                    goto LABEL_254;
                  }
                  *(_QWORD *)&prclDest.left = v117;
                  if ( gbMultiMonMismatchColor && (*(_DWORD *)(v46 + 56) & 1) != 0 )
                  {
                    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v123, v94, v36, 0LL, v111, v116, v115, v37, 1) )
                    {
                      v61 = *((_QWORD *)v55 + 15);
                      if ( !v61 )
                        v61 = *(_QWORD *)(v46 + 1832);
                      XEPALOBJ::vGetEntriesFrom(&v123, v57, v61, v138, v104);
                      v58 = v95;
                      v59 = v102;
                      v60 = 1;
LABEL_204:
                      if ( v58 )
                      {
                        if ( (*((_DWORD *)v126[0] + 9) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v126, (struct ERECTL *)&v135);
                        if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v126) )
                        {
                          v63 = v99;
                        }
                        else
                        {
                          if ( (v133[24] & 1) == 0 )
                            goto LABEL_254;
                          v64 = DC::eptlOrigin(v126[0]);
                          v65 = a6;
                          v135.x += *(_DWORD *)v64;
                          v136 += *(_DWORD *)v64;
                          v135.y += *((_DWORD *)v64 + 1);
                          v137 += *((_DWORD *)v64 + 1);
                          LODWORD(v138) = a6;
                          if ( v59 == 4 && (BYTE8(v108[1]) & 1) != 0 )
                          {
                            v66 = a7;
                            v63 = v99;
                            v67 = a9;
                          }
                          else
                          {
                            v63 = v99;
                            v67 = a9;
                            v66 = v99 - a7 - a9;
                          }
                          v68 = v66 + v67;
                          v69 = v98;
                          v70 = a6 + a8;
                          HIDWORD(v138) = v66;
                          v140 = v66 + v67;
                          v139 = a6 + a8;
                          if ( a6 > a6 + a8 )
                          {
                            v65 = v70 + 1;
                            v69 = v98 ^ 1;
                            v70 = a6 + 1;
                            LODWORD(v138) = v65;
                            v139 = a6 + 1;
                          }
                          if ( v66 > v68 )
                          {
                            v71 = v66;
                            v69 ^= 2u;
                            v66 = v68 + 1;
                            HIDWORD(v138) = v68 + 1;
                            v68 = v71 + 1;
                            v140 = v71 + 1;
                          }
                          if ( v70 <= 0
                            || v68 <= 0
                            || v65 >= *(_DWORD *)(v120 + 56)
                            || v66 >= *(_DWORD *)(v120 + 60)
                            || ERECTL::bEmpty((ERECTL *)&v138) )
                          {
                            goto LABEL_254;
                          }
                          v72 = XDCOBJ::prgnEffRao((XDCOBJ *)v126);
                          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v142, v72, (struct ERECTL *)&v135, 0);
                          if ( !ERECTL::bEmpty((ERECTL *)v143) )
                          {
                            if ( (*((_DWORD *)v126[0] + 9) & 0xE0) != 0 )
                            {
                              *(_OWORD *)v125 = v143[0];
                              XDCOBJ::vAccumulateTight((struct _RECTL **)v126, v73, (struct _RECTL *)v125);
                            }
                            if ( v60 )
                              *(_QWORD *)(v120 + 120) = v123;
                            v74 = *((_QWORD *)v55 + 6);
                            if ( (*((_DWORD *)v55 + 28) & 2) != 0 )
                              v75 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v74 + 2872);
                            else
                              v75 = EngStretchBlt;
                            v76 = v109;
                            if ( (*((_DWORD *)v55 + 28) & 2) != 0 && (*(_DWORD *)(v74 + 56) & 0x20000) == 0 )
                            {
                              if ( v109 == 4 && (*((_BYTE *)v126[0] + 72) & 0x10) == 0 )
                                v75 = EngStretchBlt;
                              if ( (int)v138 < 0
                                || SHIDWORD(v138) < 0
                                || v139 > *(_DWORD *)(v120 + 56)
                                || v140 > *(_DWORD *)(v120 + 60) )
                              {
                                v75 = EngStretchBlt;
                              }
                            }
                            if ( (v69 & 1) != 0 )
                            {
                              v77 = v135.x;
                              v135.x = v136;
                              v136 = v77;
                            }
                            if ( (v69 & 2) != 0 )
                            {
                              v78 = v135.y;
                              v135.y = v137;
                              v137 = v78;
                            }
                            ++*((_DWORD *)v55 + 23);
                            v79 = 0LL;
                            if ( *((__int16 *)v126[0] + 121) >= 0 )
                              v79 = (char *)v126[0] + 240;
                            v80 = 0LL;
                            if ( v120 )
                              v80 = v120 + 24;
                            v81 = 0;
                            if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, _QWORD, char *, char *, struct _POINTL *, HDC *, _QWORD, int))v75)(
                                   (char *)v55 + 24,
                                   v80,
                                   0LL,
                                   v142,
                                   *(_QWORD *)&prclDest.left,
                                   v79,
                                   (char *)v126[0] + 1576,
                                   &v135,
                                   &v138,
                                   0LL,
                                   v76) )
                            {
                              v81 = v63;
                            }
                            v96 = v81;
                            if ( v60 )
                              *(_QWORD *)(v120 + 120) = 0LL;
                            goto LABEL_254;
                          }
                        }
                        v96 = v63;
                      }
LABEL_254:
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v117);
                      goto LABEL_255;
                    }
                    v58 = 0;
                  }
                  else
                  {
                    v58 = v95;
                  }
                }
                else
                {
                  if ( v104 )
                  {
                    if ( v100 < 4 * v104 )
                      goto LABEL_254;
                    v59 = v102;
                    if ( (unsigned int)(v102 - 10) <= 2 )
                      XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v123, (unsigned int *)v138, v54, v104);
                    else
                      XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v123, (struct tagRGBQUAD *)v138, 0, v104);
                    LODWORD(v93) = 0;
                    v92[0] = 0xFFFFFF;
                    LODWORD(v91) = 0;
                    v90[0] = 0;
                    *(_QWORD *)&prclDest.left = CreateXlateObject(
                                                  (void *)v125[0],
                                                  v107,
                                                  v123,
                                                  v56,
                                                  v57,
                                                  v57,
                                                  *(_QWORD *)v90,
                                                  v91,
                                                  *(_QWORD *)v92,
                                                  v93);
                    v117 = *(_QWORD *)&prclDest.left;
                    if ( *(_QWORD *)&prclDest.left )
                      v58 = v95;
                    else
                      v58 = 0;
                    goto LABEL_203;
                  }
                  LODWORD(v93) = 0;
                  v92[0] = 0xFFFFFF;
                  LODWORD(v91) = 0;
                  v90[0] = 0;
                  XlateObject = CreateXlateObject(
                                  (void *)v125[0],
                                  v107,
                                  v123,
                                  v56,
                                  v57,
                                  v57,
                                  *(_QWORD *)v90,
                                  v91,
                                  *(_QWORD *)v92,
                                  v93);
                  v58 = v95;
                  *(_QWORD *)&prclDest.left = XlateObject;
                  if ( !XlateObject )
                    v58 = 0;
                  v117 = XlateObject;
                }
                v59 = v102;
LABEL_203:
                v60 = 0;
                goto LABEL_204;
              }
              HIDWORD(v108[0]) = -1;
            }
            EngSetLastError(0x216u);
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v128);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v129);
            goto LABEL_270;
          default:
LABEL_108:
            EngSetLastError(0x57u);
            v94 = a2;
            v37 = a2;
            v31 = 0;
            v36 = a2;
            v95 = 0;
            goto LABEL_109;
        }
        v94 = 1;
      }
      v37 = 1024;
      goto LABEL_102;
    }
    if ( v33 != 2 )
    {
      if ( v33 != 12 )
      {
        if ( v33 != 1 )
        {
          if ( v33 != 11 )
          {
            if ( v33 == 4 )
            {
              LODWORD(v108[0]) = 9;
            }
            else
            {
              if ( v33 != 5 )
                goto LABEL_50;
              LODWORD(v108[0]) = 10;
            }
            LODWORD(v39) = *(_DWORD *)(a11 + 20);
            v36 = 0;
            v94 = 8;
            v37 = 512;
            goto LABEL_88;
          }
          DCOBJ::DCOBJ((DCOBJ *)v128, a1);
          if ( !v128[0] || !(unsigned int)DC::bIsCMYKColor(v128[0]) )
          {
            EngSetLastError(0x57u);
            v31 = 0;
            v95 = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v128);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v129);
          if ( !v31 )
            goto LABEL_51;
        }
        if ( v30 != 8 )
        {
          EngSetLastError(0x57u);
          v95 = 0;
          v31 = 0;
        }
        LODWORD(v108[0]) = 8;
        v36 = 256;
LABEL_133:
        LODWORD(v39) = *(_DWORD *)(a11 + 20);
        v37 = 1024;
        v29 = v99;
        v40 = 1;
        LODWORD(v32) = v97;
        v94 = 1;
        goto LABEL_134;
      }
      DCOBJ::DCOBJ((DCOBJ *)v128, a1);
      if ( !v128[0] || !(unsigned int)DC::bIsCMYKColor(v128[0]) )
      {
        EngSetLastError(0x57u);
        v31 = 0;
        v95 = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v128);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v129);
      if ( !v31 )
        goto LABEL_51;
    }
    if ( v30 != 4 )
    {
      EngSetLastError(0x57u);
      v95 = 0;
      v31 = 0;
    }
    LODWORD(v108[0]) = 7;
    v36 = 16;
    goto LABEL_133;
  }
  switch ( v30 )
  {
    case 1u:
      LODWORD(v108[0]) = 1;
      v36 = 2;
      goto LABEL_84;
    case 4u:
      LODWORD(v108[0]) = 2;
      v36 = 16;
      goto LABEL_84;
    case 8u:
      LODWORD(v108[0]) = 3;
      v36 = 256;
LABEL_84:
      v94 = 1;
      v37 = 1024;
      goto LABEL_85;
  }
  if ( a12 == 1 )
    v17 = 0;
  v105 = v17;
  if ( v30 == 16 )
  {
    LODWORD(v108[0]) = 4;
    v111 = 31744;
    v116 = 992;
    v115 = 31;
    v94 = 2;
  }
  else
  {
    if ( v30 == 24 )
    {
      LODWORD(v108[0]) = 5;
    }
    else
    {
      if ( v30 != 32 )
        goto LABEL_50;
      LODWORD(v108[0]) = 6;
    }
    v94 = 8;
  }
  v36 = 0;
  v37 = 512;
LABEL_85:
  v41 = v103 * v32;
  if ( v41 > 0xFFFFFFFF || (int)v41 + 31 < (unsigned int)v41 )
    goto LABEL_66;
  v39 = (unsigned int)v29 * (((unsigned __int64)(unsigned int)(v41 + 31) >> 3) & 0x1FFFFFFC);
  if ( v39 <= 0xFFFFFFFF )
  {
LABEL_88:
    HIDWORD(v108[0]) = v39;
    v40 = 0;
    goto LABEL_137;
  }
LABEL_65:
  HIDWORD(v108[0]) = -1;
LABEL_66:
  EngSetLastError(0x216u);
LABEL_270:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v126);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v127);
  return v16;
}
