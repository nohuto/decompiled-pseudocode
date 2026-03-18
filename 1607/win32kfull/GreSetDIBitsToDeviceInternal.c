/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C00341DC
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0100FA0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0151E6C (GreSetDIBitsInternal.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0033D5C (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0035120 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C003A8AC (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064 (-bIsCMYKColor@DC@@QEAAHXZ.c)
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
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02BB204 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  int v19; // ebx
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // r10
  int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // esi
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  unsigned int v31; // edi
  unsigned __int64 v32; // rcx
  unsigned int v33; // r14d
  ULONG v34; // ecx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  ULONG v38; // ecx
  LONG x; // eax
  unsigned int v40; // ecx
  __int64 v41; // r14
  __int64 v42; // r9
  unsigned int v43; // ecx
  __int64 v44; // rsi
  int v45; // eax
  __int64 v46; // rcx
  int v47; // ebx
  LONG v48; // r8d
  int v49; // edx
  LONG v50; // ecx
  int v51; // eax
  __int64 v52; // r14
  struct _POINTL v53; // rax
  unsigned int v54; // r12d
  __int64 v55; // rdi
  struct PALETTE *v56; // rbx
  int v57; // r15d
  int v58; // ecx
  XLATEOBJ *v59; // r12
  int v60; // ebx
  int v61; // r8d
  __int64 v62; // rdi
  struct _POINTL *v63; // rdx
  struct REGION *v64; // rax
  struct ECLIPOBJ *v65; // rdx
  struct _SURFOBJ *v66; // rdi
  struct _SURFOBJ *v67; // rax
  __int64 v68; // r8
  unsigned int v69; // r8d
  __int64 XlateObject; // rax
  struct _SURFOBJ *v71; // rax
  void (__fastcall *v72)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  int v73; // r15d
  int v74; // esi
  struct REGION *v75; // rdx
  struct ECLIPOBJ *v76; // rdx
  struct _SURFOBJ *v77; // rdi
  struct _SURFOBJ *v78; // rax
  struct _SURFOBJ *v79; // rax
  unsigned int (__fastcall *v80)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  LONG v82; // [rsp+60h] [rbp-A0h]
  int v83; // [rsp+60h] [rbp-A0h]
  unsigned int v84; // [rsp+64h] [rbp-9Ch]
  unsigned int v85; // [rsp+68h] [rbp-98h]
  unsigned int v86; // [rsp+6Ch] [rbp-94h]
  unsigned int v87; // [rsp+70h] [rbp-90h]
  int v88; // [rsp+74h] [rbp-8Ch]
  int v89; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v91; // [rsp+80h] [rbp-80h]
  unsigned int v92; // [rsp+88h] [rbp-78h]
  unsigned int v93; // [rsp+88h] [rbp-78h]
  struct _POINTL v94; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v95; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v96; // [rsp+A0h] [rbp-60h] BYREF
  int v97; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v98; // [rsp+ACh] [rbp-54h]
  _DWORD v99[5]; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v100; // [rsp+C8h] [rbp-38h]
  unsigned int v101; // [rsp+CCh] [rbp-34h]
  unsigned int v102; // [rsp+D0h] [rbp-30h]
  int v103; // [rsp+D4h] [rbp-2Ch]
  int v104; // [rsp+D8h] [rbp-28h]
  __int64 v105; // [rsp+E0h] [rbp-20h] BYREF
  int v106; // [rsp+E8h] [rbp-18h]
  int v107; // [rsp+ECh] [rbp-14h]
  struct tagRGBQUAD *v108; // [rsp+F0h] [rbp-10h]
  struct _POINTL v109[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v110; // [rsp+108h] [rbp+8h] BYREF
  char v111; // [rsp+110h] [rbp+10h]
  int v112; // [rsp+114h] [rbp+14h]
  _QWORD v113[2]; // [rsp+118h] [rbp+18h] BYREF
  char v114[32]; // [rsp+128h] [rbp+28h] BYREF
  DC *v115[2]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v116[40]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v117[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v118[80]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v119; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v120; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v121[4]; // [rsp+210h] [rbp+110h] BYREF
  struct _RECTL v122; // [rsp+214h] [rbp+114h] BYREF
  __int64 v123; // [rsp+248h] [rbp+148h]
  __int64 v124; // [rsp+260h] [rbp+160h]
  int v125; // [rsp+268h] [rbp+168h]
  int v126; // [rsp+290h] [rbp+190h]
  __int64 v127; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v128; // [rsp+368h] [rbp+268h]

  v104 = a5;
  LOBYTE(v19) = -1;
  *(_QWORD *)&v120.left = a1;
  v109[0] = (struct _POINTL)a16;
  LODWORD(v96) = a3;
  v82 = a2;
  *(_QWORD *)&v119.left = a10;
  v115[0] = 0LL;
  v115[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v116);
  XDCOBJ::vLock((XDCOBJ *)v115, a1);
  if ( v115[0] )
    v19 = *(_DWORD *)(*((_QWORD *)v115[0] + 10) + 312LL);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v115);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v116);
  if ( (v19 & 1) != 0 )
    v82 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_206;
  if ( !a10 )
    goto LABEL_206;
  v20 = a12;
  if ( a12 > 2 )
    goto LABEL_206;
  if ( a14 < 0x28 )
    goto LABEL_206;
  v21 = (__int64)*a11;
  v92 = v21;
  if ( (unsigned int)v21 < 0x28 )
    goto LABEL_206;
  v22 = (unsigned int)a11[1];
  v87 = v22;
  if ( (int)v22 <= 0 )
    goto LABEL_206;
  v23 = (int)a11[2];
  v89 = v23;
  if ( !v23 )
    goto LABEL_206;
  v24 = (unsigned int)a11[4];
  v25 = *(unsigned __int16 *)&a11[3].rgbRed;
  memset(v99, 0, sizeof(v99));
  v98 = 0LL;
  v94.x = (LONG)a11[8];
  v97 = 0;
  v95 = v24;
  v108 = (struct tagRGBQUAD *)((char *)a11 + v21);
  if ( v23 < 0 )
  {
    v99[3] = 1;
    if ( v24 > 0xC )
      goto LABEL_206;
    v26 = 7225;
    if ( !_bittest(&v26, v24) )
      goto LABEL_206;
    v23 = -v23;
    v89 = v23;
  }
  v103 = 0;
  if ( v24 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      if ( a12 == 1 )
        v20 = 0;
      a12 = v20;
      if ( (_DWORD)v25 == 16 )
      {
        v97 = 4;
LABEL_24:
        v84 = 512;
        v102 = (unsigned int)a11[10];
        v27 = (unsigned int)a11[11];
        v28 = 0;
        v108 = a11 + 10;
        v29 = 2;
        v101 = v27;
        v30 = v25 * v22;
        v100 = (unsigned int)a11[12];
        v85 = 0;
        if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v30 + 31 < v30 )
          goto LABEL_29;
        v31 = a9;
        v86 = a9;
        v32 = a9 * (unsigned __int64)(((v30 + 31) >> 3) & 0x1FFFFFFC);
        if ( v32 <= 0xFFFFFFFF )
        {
          v33 = v22;
          v88 = a8;
LABEL_93:
          v99[0] = v32;
LABEL_94:
          v128 = a14 - v92;
          if ( v94.x )
          {
            x = v28;
            if ( v94.x <= v28 )
              x = v94.x;
            v93 = x;
          }
          else
          {
            v93 = v28;
          }
          if ( a13 >= (unsigned int)v32 )
          {
            v40 = v23;
            LODWORD(v98) = v33;
            v113[0] = 0LL;
            if ( v95 - 4 > 1 )
              v40 = v31;
            v113[1] = 0LL;
            HIDWORD(v98) = v40;
            UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v114);
            XDCOBJ::vLock((XDCOBJ *)v113, *(HDC *)&v120.left);
            v41 = v113[0];
            v42 = 0LL;
            if ( !v113[0] || (*(_DWORD *)(v113[0] + 36LL) & 0x10000) != 0 )
            {
              EngSetLastError(0x57u);
              v31 = 0;
              goto LABEL_205;
            }
            v43 = (unsigned int)a11[4];
            v44 = *(_QWORD *)(v113[0] + 48LL);
            v94.x = v82;
            v94.y = (int)v96;
            if ( v43 - 4 <= 1 )
            {
              if ( v43 == 4 )
                v45 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v113);
              else
                v45 = v43 == 5 ? XDCOBJ::bSupportsPNG((XDCOBJ *)v113) : 0;
              if ( !v45 || v20 || *(_QWORD *)v109 != v42 )
              {
                v31 = v42;
                v86 = v42;
              }
            }
            if ( a15 != (_DWORD)v42 )
            {
              v106 = *(_DWORD *)(*(_QWORD *)(v41 + 80) + 68LL);
              v107 = *(_DWORD *)(*(_QWORD *)(v41 + 80) + 312LL) & 1;
              if ( (*(_DWORD *)(*(_QWORD *)(v41 + 80) + 352LL) & 0xE000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v105, (struct XDCOBJ *)v113, 0x204u, v42);
                v46 = v105;
                v41 = v113[0];
              }
              else
              {
                v46 = v41 + 336;
                v105 = v41 + 336;
              }
              v47 = *(_DWORD *)(v46 + 32);
              if ( (*(_BYTE *)(v46 + 32) & 0x43) != 0x43 )
              {
                bCvtPts1(v46, &v94, 1LL);
                LODWORD(v96) = v94.y;
                v82 = v94.x;
              }
              if ( v31 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 )
              {
                v31 &= -((v47 & 1) != 0);
                v86 = v31;
              }
            }
            v48 = v82;
            v49 = (int)v96;
            v50 = v82 + a4;
            v51 = (_DWORD)v96 + v104;
            v120.left = v82;
            v120.top = (int)v96;
            v120.right = v82 + a4;
            v120.bottom = (_DWORD)v96 + v104;
            if ( v82 > v82 + a4 )
            {
              v48 = v82 + a4;
              v120.left = v82 + a4;
              v50 = v82;
              v120.right = v82;
            }
            if ( (int)v96 > v51 )
            {
              v49 = (_DWORD)v96 + v104;
              v120.top = (_DWORD)v96 + v104;
              v51 = (int)v96;
              v120.bottom = (int)v96;
            }
            if ( v48 == v50 || v49 == v51 || !v31 )
              goto LABEL_205;
            if ( (*(_DWORD *)(v41 + 36) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v113, (struct ERECTL *)&v120);
            DCOBJ::DCOBJ((DCOBJ *)v118);
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v117, (struct XDCOBJ *)v113, 0);
            v52 = *(_QWORD *)(v113[0] + 512LL);
            if ( !v52 )
            {
LABEL_203:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v117);
              DCOBJ::~DCOBJ((DCOBJ *)v118);
LABEL_205:
              DCOBJ::~DCOBJ((DCOBJ *)v113);
              return v31;
            }
            v53 = v109[0];
            if ( !*(_QWORD *)v109 )
            {
              v53 = *(struct _POINTL *)(*(_QWORD *)(v113[0] + 80LL) + 112LL);
              v109[0] = v53;
            }
            v54 = *(_DWORD *)(v113[0] + 112LL);
            if ( (v54 & 0x10000000) != 0 && (!*(_QWORD *)&v53 || v95 - 10 > 2) )
              v54 = v54 & 0xFFFFFFF | 0x20000000;
            v55 = *(_QWORD *)(v52 + 120);
            v106 = 0;
            v105 = 0LL;
            v56 = *(struct PALETTE **)(v113[0] + 96LL);
            if ( v56 != ppalDefault )
              *(_QWORD *)(v52 + 168) = *(_QWORD *)v56;
            v57 = 1;
            v83 = 0;
            v91 = 0LL;
            v96 = 0LL;
            if ( a12 )
            {
              if ( a12 == 1 )
              {
                if ( v128 >= 2 * (unsigned __int64)v93 )
                {
                  if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v96, v108, v56, v52, v93, v85) )
                  {
                    v59 = v96;
                    v91 = v96;
                    if ( gbMultiMonMismatchColor
                      && (*(_DWORD *)(v44 + 56) & 1) != 0
                      && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v105, v29, v85, 0LL, v102, v101, v100, v84, 1) )
                    {
                      v68 = *(_QWORD *)(v52 + 120);
                      if ( !v68 )
                        v68 = *(_QWORD *)(v44 + 1832);
                      XEPALOBJ::vGetEntriesFrom(&v105, v56, v68, v108, v93);
                      v60 = 1;
                      v83 = 1;
                      goto LABEL_153;
                    }
                    goto LABEL_152;
                  }
                  goto LABEL_150;
                }
              }
              else
              {
                if ( a12 != 2 )
                {
LABEL_151:
                  v59 = 0LL;
LABEL_152:
                  v60 = 0;
LABEL_153:
                  v110 = 0LL;
                  v111 = 0;
                  v112 = 0;
                  SURFMEM::bCreateDIB(
                    (SURFMEM *)&v110,
                    (struct _DEVBITMAPINFO *)&v97,
                    *(void **)&v119.left,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0,
                    1,
                    0,
                    0);
                  if ( v57 && v110 )
                  {
                    *(_DWORD *)(v110 + 92) = 0;
                    if ( (v117[24] & 1) == 0 )
                      goto LABEL_201;
                    v62 = v113[0];
                    v63 = (struct _POINTL *)(v113[0] + 1416LL);
                    if ( (*(_DWORD *)(v113[0] + 40LL) & 1) == 0 )
                      v63 = (struct _POINTL *)(v113[0] + 1408LL);
                    if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v120, v63, v61) )
                    {
                      if ( v60 )
                      {
                        *(_QWORD *)(v110 + 120) = v105;
                        v62 = v113[0];
                      }
                      if ( v103 )
                      {
                        v109[0].x = a6;
                        v109[0].y = v89 - v104 - a7;
                        v64 = XDCOBJ::prgnEffRao((XDCOBJ *)v113);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v121, v64, (struct ERECTL *)&v120, 0);
                        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v122) )
                        {
                          if ( (*(_DWORD *)(v113[0] + 36LL) & 0xE0) != 0 )
                          {
                            v119 = v122;
                            XDCOBJ::vAccumulateTight((XDCOBJ *)v113, v65, (struct ERECTL *)&v119);
                          }
                          ++*(_DWORD *)(v52 + 92);
                          v66 = SURFACE::pSurfobj((SURFACE *)v52);
                          v67 = SURFMEM::pSurfobj((SURFMEM *)&v110);
                          if ( bClipRectsToSurfaces(v66, v67, &v120, v109) )
                          {
                            v71 = SURFMEM::pSurfobj((SURFMEM *)&v110);
                            v72(v66, v71, v121, v59, &v120, v109);
                          }
                        }
                      }
                      else
                      {
                        v73 = v120.top - (v89 - v104 - a7);
                        v74 = v120.left - a6;
                        v94.x = a6;
                        v94.y = v89 - v104 - a7;
                        v119.left = v120.left - a6;
                        v119.top = v120.top - (-v104 - a7) + -v88 - v86;
                        v119.right = v120.left - a6 + v87;
                        v119.bottom = v120.top - (-v104 - a7) - v88;
                        ERECTL::operator*=(&v119, &v120);
                        if ( v119.left != v119.right && v119.top != v119.bottom )
                        {
                          v75 = *(struct REGION **)(v62 + 1552);
                          if ( !v75 )
                            v75 = *(struct REGION **)(v62 + 1544);
                          v123 = 0LL;
                          v124 = 0LL;
                          v125 = 0;
                          v126 = 1;
                          v127 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v121, v75, (struct ERECTL *)&v119, 0);
                          if ( v122.left != v122.right && v122.top != v122.bottom )
                          {
                            v119 = v122;
                            if ( (*(_DWORD *)(v113[0] + 36LL) & 0xE0) != 0 )
                            {
                              *(struct _RECTL *)&v109[0].x = v122;
                              XDCOBJ::vAccumulateTight((XDCOBJ *)v113, v76, (struct ERECTL *)v109);
                            }
                            v94.x = v119.left - v74;
                            if ( v95 - 4 <= 1 )
                              v94.y = v89 - v88 - v86;
                            else
                              v94.y = v86 + v88 - v89 + v119.top - v73;
                            ++*(_DWORD *)(v52 + 92);
                            v77 = SURFACE::pSurfobj((SURFACE *)v52);
                            v78 = SURFMEM::pSurfobj((SURFMEM *)&v110);
                            if ( bClipRectsToSurfaces(v77, v78, &v119, &v94) )
                            {
                              v79 = SURFMEM::pSurfobj((SURFMEM *)&v110);
                              v86 &= -(v80(v77, v79, v121, v91, &v119, &v94) != 0);
                            }
                          }
                        }
                      }
                      v31 = v86;
                      if ( v83 )
                        *(_QWORD *)(v110 + 120) = 0LL;
                    }
                    else
                    {
LABEL_201:
                      v31 = v86;
                    }
                  }
                  else
                  {
                    v31 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v110);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v96);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v105);
                  goto LABEL_203;
                }
                v58 = *(_DWORD *)(v52 + 96);
                if ( v58 == v97 || v58 == 2 && v97 == 7 || v58 == 3 && v97 == 8 )
                {
                  v59 = xloIdent;
                  v91 = xloIdent;
                  goto LABEL_152;
                }
              }
              goto LABEL_149;
            }
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v105, v29, v85, 0LL, v102, v101, v100, v84, 1) )
              goto LABEL_150;
            if ( v93 )
            {
              if ( v128 < 4 * v93 )
              {
LABEL_149:
                EngSetLastError(0x57u);
LABEL_150:
                v57 = 0;
                goto LABEL_151;
              }
              if ( v95 - 10 <= 2 )
                XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v105, (unsigned int *)&v108->rgbBlue, v69, v93);
              else
                XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v105, v108, 0, v93);
            }
            XlateObject = CreateXlateObject(*(_QWORD *)v109, v54, v105, v55, v56, v56, 0, 0, 0xFFFFFF, 0);
            v96 = (XLATEOBJ *)XlateObject;
            v60 = 0;
            if ( XlateObject )
            {
              v59 = (XLATEOBJ *)XlateObject;
              v91 = (XLATEOBJ *)XlateObject;
            }
            else
            {
              v57 = 0;
              v59 = 0LL;
            }
            goto LABEL_153;
          }
          goto LABEL_206;
        }
LABEL_28:
        v99[0] = -1;
LABEL_29:
        v34 = 534;
LABEL_207:
        EngSetLastError(v34);
        return 0LL;
      }
      if ( (_DWORD)v25 == 32 )
      {
        v97 = 6;
        goto LABEL_24;
      }
    }
LABEL_206:
    v34 = 87;
    goto LABEL_207;
  }
  if ( !v24 )
  {
    if ( (_DWORD)v25 == 1 )
    {
      v97 = 1;
      v28 = 2;
      v85 = 2;
    }
    else
    {
      if ( (_DWORD)v25 == 4 )
      {
        v97 = 2;
        v28 = 16;
      }
      else
      {
        if ( (_DWORD)v25 != 8 )
        {
          v85 = 0;
          v28 = 0;
          if ( a12 == 1 )
            v20 = 0;
          v84 = 512;
          a12 = v20;
          if ( (_DWORD)v25 == 16 )
          {
            v97 = 4;
            v29 = 2;
            v102 = 31744;
            v101 = 992;
            v100 = 31;
          }
          else
          {
            if ( (_DWORD)v25 == 24 )
            {
              v97 = 5;
            }
            else
            {
              if ( (_DWORD)v25 != 32 )
                goto LABEL_206;
              v97 = 6;
            }
            v29 = 8;
          }
LABEL_48:
          v35 = v25 * v22;
          if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v35 + 31 < v35 )
            goto LABEL_29;
          v31 = a9;
          v86 = a9;
          v32 = a9 * (unsigned __int64)(((v35 + 31) >> 3) & 0x1FFFFFFC);
          if ( v32 <= 0xFFFFFFFF )
          {
            v33 = v22;
            v88 = a8;
            goto LABEL_93;
          }
          goto LABEL_28;
        }
        v97 = 3;
        v28 = 256;
      }
      v85 = v28;
    }
    v29 = 1;
    v84 = 1024;
    goto LABEL_48;
  }
  if ( v24 != 10 )
  {
    if ( v24 != 2 )
    {
      if ( v24 != 12 )
      {
        if ( v24 != 1 )
        {
          if ( v24 != 11 )
          {
            if ( v24 == 4 )
            {
              v97 = 9;
            }
            else
            {
              if ( v24 != 5 )
                goto LABEL_206;
              v97 = 10;
            }
            v31 = a9;
            v84 = 512;
            v28 = 0;
            v85 = 0;
            v33 = v22;
            v29 = 8;
            v86 = a9;
LABEL_92:
            LODWORD(v32) = a11[5];
            v88 = 0;
            goto LABEL_93;
          }
          DCOBJ::DCOBJ((DCOBJ *)v115, a1);
          if ( !v115[0] || !(unsigned int)DC::bIsCMYKColor(v115[0]) )
            goto LABEL_70;
          DCOBJ::~DCOBJ((DCOBJ *)v115);
          v23 = v89;
        }
        if ( (_DWORD)v25 != 8 )
          goto LABEL_206;
        v28 = 256;
        v97 = 8;
        v85 = 256;
LABEL_91:
        v33 = v87;
        v29 = 1;
        v103 = 1;
        v31 = v23;
        v86 = v23;
        v84 = 1024;
        goto LABEL_92;
      }
      DCOBJ::DCOBJ((DCOBJ *)v115, a1);
      if ( !v115[0] || !(unsigned int)DC::bIsCMYKColor(v115[0]) )
        goto LABEL_70;
      DCOBJ::~DCOBJ((DCOBJ *)v115);
      v23 = v89;
    }
    if ( (_DWORD)v25 != 4 )
      goto LABEL_206;
    v97 = 7;
    v28 = 16;
    v85 = 16;
    goto LABEL_91;
  }
  DCOBJ::DCOBJ((DCOBJ *)v115, a1);
  if ( !v115[0] || !(unsigned int)DC::bIsCMYKColor(v115[0]) )
    goto LABEL_70;
  switch ( (_DWORD)v25 )
  {
    case 1:
      v97 = 1;
      v28 = 2;
      break;
    case 4:
      v97 = 2;
      v28 = 16;
      break;
    case 8:
      v97 = 3;
      v28 = 256;
      break;
    case 0x20:
      v97 = 6;
      v28 = 0;
      v84 = 512;
      v29 = 16;
      goto LABEL_64;
    default:
LABEL_70:
      v38 = 87;
      goto LABEL_71;
  }
  v29 = 1;
  v84 = 1024;
LABEL_64:
  v33 = v87;
  v85 = v28;
  v36 = v25 * v87;
  if ( v36 <= 0xFFFFFFFF && (int)v36 + 31 >= (unsigned int)v36 )
  {
    v31 = a9;
    v86 = a9;
    v37 = a9 * (unsigned __int64)(((unsigned int)(v36 + 31) >> 3) & 0x1FFFFFFC);
    if ( v37 <= 0xFFFFFFFF )
    {
      v99[0] = v37;
      DCOBJ::~DCOBJ((DCOBJ *)v115);
      LODWORD(v32) = v99[0];
      v23 = v89;
      v88 = a8;
      goto LABEL_94;
    }
    v99[0] = -1;
  }
  v38 = 534;
LABEL_71:
  EngSetLastError(v38);
  DCOBJ::~DCOBJ((DCOBJ *)v115);
  return 0LL;
}
