/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C009A950
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00996E0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0121D20 (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C98 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009CDAC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009DA88 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C009DB38 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C0106148 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02693B0 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02693CC (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B5658 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B56EC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7A38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02B8BBC (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
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
  __int64 v22; // r13
  int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // r14d
  unsigned int v30; // ecx
  unsigned int v31; // r13d
  unsigned __int64 v32; // rcx
  ULONG v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rcx
  LONG x; // eax
  unsigned int v38; // ecx
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // rsi
  int v42; // eax
  unsigned __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // r15
  struct _POINTL v46; // rax
  __int64 v47; // rdi
  struct PALETTE *v48; // rbx
  int v49; // r12d
  int v50; // eax
  bool v51; // zf
  HDC v52; // rsi
  int v53; // ebx
  __int64 v54; // r8
  unsigned int v55; // r8d
  HDC XlateObject; // rax
  int v57; // r8d
  __int64 v58; // rdi
  struct _POINTL *v59; // rdx
  struct REGION *v60; // rax
  struct ECLIPOBJ *v61; // rdx
  struct _SURFOBJ *v62; // rdi
  struct _SURFOBJ *v63; // rax
  struct _SURFOBJ *v64; // rax
  void (__fastcall *v65)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, HDC, struct _RECTL *, struct _POINTL *); // r10
  int v66; // r12d
  int v67; // r14d
  struct REGION *v68; // rdx
  struct ECLIPOBJ *v69; // rdx
  struct _SURFOBJ *v70; // rdi
  struct _SURFOBJ *v71; // rax
  struct _SURFOBJ *v72; // rax
  unsigned int (__fastcall *v73)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, HDC, struct _RECTL *, struct _POINTL *); // r10
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+38h] [rbp-C8h]
  __int64 v77; // [rsp+40h] [rbp-C0h]
  LONG v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+60h] [rbp-A0h]
  unsigned int v80; // [rsp+64h] [rbp-9Ch]
  unsigned int v81; // [rsp+68h] [rbp-98h]
  HDC v83; // [rsp+70h] [rbp-90h]
  int v84; // [rsp+78h] [rbp-88h]
  int v86; // [rsp+7Ch] [rbp-84h]
  int v87; // [rsp+80h] [rbp-80h]
  unsigned int v88; // [rsp+84h] [rbp-7Ch]
  unsigned int v89; // [rsp+84h] [rbp-7Ch]
  HDC v90; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v91; // [rsp+90h] [rbp-70h]
  int v92; // [rsp+98h] [rbp-68h] BYREF
  __int64 v93; // [rsp+9Ch] [rbp-64h]
  _DWORD v94[5]; // [rsp+A4h] [rbp-5Ch] BYREF
  struct _POINTL v95; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v96; // [rsp+C0h] [rbp-40h]
  int v97; // [rsp+C4h] [rbp-3Ch]
  unsigned int v98; // [rsp+C8h] [rbp-38h]
  int v99; // [rsp+CCh] [rbp-34h]
  unsigned int v100; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-28h] BYREF
  int v102; // [rsp+E0h] [rbp-20h]
  int v103; // [rsp+E4h] [rbp-1Ch]
  int v104; // [rsp+E8h] [rbp-18h]
  struct tagRGBQUAD *v105; // [rsp+F0h] [rbp-10h]
  struct _POINTL v106[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v107; // [rsp+108h] [rbp+8h] BYREF
  char v108; // [rsp+110h] [rbp+10h]
  int v109; // [rsp+114h] [rbp+14h]
  _QWORD v110[6]; // [rsp+118h] [rbp+18h] BYREF
  DC *v111[7]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v112[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v113[80]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v114; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v115; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v116[4]; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v117[3]; // [rsp+214h] [rbp+114h] BYREF
  __int64 v118; // [rsp+248h] [rbp+148h]
  __int64 v119; // [rsp+260h] [rbp+160h]
  int v120; // [rsp+268h] [rbp+168h]
  int v121; // [rsp+290h] [rbp+190h]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v123; // [rsp+368h] [rbp+268h]

  v99 = a5;
  LOBYTE(v19) = -1;
  v78 = a2;
  v90 = a1;
  v106[0] = (struct _POINTL)a16;
  *(_QWORD *)&v115.left = a10;
  DCOBJ::DCOBJ((DCOBJ *)v111, a1);
  if ( v111[0] )
    v19 = *(_DWORD *)(*((_QWORD *)v111[0] + 10) + 312LL);
  DCOBJ::~DCOBJ((DCOBJ *)v111);
  if ( (v19 & 1) != 0 )
    v78 = a4 + a2 - 1;
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
  v88 = v21;
  if ( (unsigned int)v21 < 0x28 )
    goto LABEL_206;
  v22 = (unsigned int)a11[1];
  v104 = v22;
  if ( (int)v22 <= 0 )
    goto LABEL_206;
  v23 = (int)a11[2];
  v87 = v23;
  if ( !v23 )
    goto LABEL_206;
  v24 = (unsigned int)a11[4];
  v25 = *(unsigned __int16 *)&a11[3].rgbRed;
  memset(v94, 0, sizeof(v94));
  v93 = 0LL;
  v95.x = (LONG)a11[8];
  v92 = 0;
  v91 = v24;
  v105 = (struct tagRGBQUAD *)((char *)a11 + v21);
  if ( v23 < 0 )
  {
    v94[3] = 1;
    if ( v24 > 0xC )
      goto LABEL_206;
    v26 = 7225;
    if ( !_bittest(&v26, v24) )
      goto LABEL_206;
    v23 = -v23;
    v87 = v23;
  }
  v97 = 0;
  if ( v24 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      if ( a12 == 1 )
        v20 = 0;
      a12 = v20;
      if ( (_DWORD)v25 == 16 )
      {
        v92 = 4;
LABEL_24:
        v100 = (unsigned int)a11[10];
        v27 = (unsigned int)a11[11];
        v28 = 0;
        v105 = a11 + 10;
        v29 = 2;
        v98 = v27;
        v30 = v25 * v22;
        v96 = (unsigned int)a11[12];
        v81 = 0;
        v80 = 512;
        if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v30 + 31 < v30 )
          goto LABEL_29;
        v31 = a9;
        v32 = a9 * (unsigned __int64)(((v30 + 31) >> 3) & 0x1FFFFFFC);
        if ( v32 <= 0xFFFFFFFF )
        {
          v84 = a8;
LABEL_90:
          v94[0] = v32;
LABEL_91:
          v123 = a14 - v88;
          if ( v95.x )
          {
            x = v28;
            if ( v95.x <= v28 )
              x = v95.x;
            v89 = x;
          }
          else
          {
            v89 = v28;
          }
          if ( a13 >= (unsigned int)v32 )
          {
            v38 = v23;
            LODWORD(v93) = v104;
            if ( v91 - 4 > 1 )
              v38 = v31;
            HIDWORD(v93) = v38;
            DCOBJ::DCOBJ((DCOBJ *)v110, v90);
            v39 = v110[0];
            if ( !v110[0] || (*(_DWORD *)(v110[0] + 36LL) & 0x10000) != 0 )
            {
              EngSetLastError(0x57u);
              v31 = 0;
LABEL_205:
              DCOBJ::~DCOBJ((DCOBJ *)v110);
              return v31;
            }
            v40 = (unsigned int)a11[4];
            v41 = *(_QWORD *)(v110[0] + 48LL);
            v90 = (HDC)__PAIR64__(a3, v78);
            if ( v40 - 4 <= 1 )
            {
              if ( v40 == 4 )
              {
                v42 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v110);
              }
              else
              {
                if ( v40 != 5 )
                {
LABEL_109:
                  v31 = 0;
                  goto LABEL_110;
                }
                v42 = XDCOBJ::bSupportsPNG((XDCOBJ *)v110);
              }
              if ( !v42 || v20 || *(_QWORD *)v106 )
                goto LABEL_109;
            }
LABEL_110:
            if ( a15 )
            {
              v102 = *(_DWORD *)(*(_QWORD *)(v39 + 80) + 68LL);
              v103 = *(_DWORD *)(*(_QWORD *)(v39 + 80) + 312LL) & 1;
              if ( (*(_DWORD *)(*(_QWORD *)(v39 + 80) + 352LL) & 0xE000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v101, (struct XDCOBJ *)v110, 0x204u, 0);
                v43 = v101;
                v39 = v110[0];
              }
              else
              {
                v43 = v39 + 336;
                v101 = v39 + 336;
              }
              v44 = *(_DWORD *)(v43 + 32);
              if ( (*(_BYTE *)(v43 + 32) & 0x43) != 0x43 )
              {
                bCvtPts1(v43, &v90, 1LL);
                a3 = HIDWORD(v90);
                v78 = (int)v90;
              }
              if ( v31 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 && (v44 & 1) == 0 )
                v31 = 0;
            }
            v114.left = v78;
            v114.top = a3;
            v114.right = v78 + a4;
            v114.bottom = a3 + v99;
            if ( v78 > v78 + a4 )
            {
              v114.left = v78 + a4;
              v114.right = v78;
            }
            if ( a3 > a3 + v99 )
            {
              v114.top = a3 + v99;
              v114.bottom = a3;
            }
            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v114) && v31 )
            {
              if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v110, (struct ERECTL *)&v114);
              DCOBJ::DCOBJ((DCOBJ *)v113);
              DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v112, (struct XDCOBJ *)v110, 0);
              v45 = *(_QWORD *)(v110[0] + 512LL);
              if ( !v45 )
                goto LABEL_203;
              v46 = v106[0];
              if ( !*(_QWORD *)v106 )
              {
                v46 = *(struct _POINTL *)(*(_QWORD *)(v110[0] + 80LL) + 112LL);
                v106[0] = v46;
              }
              v86 = *(_DWORD *)(v110[0] + 112LL);
              if ( (v86 & 0x10000000) != 0 && (!*(_QWORD *)&v46 || v91 - 10 > 2) )
                v86 = v86 & 0xFFFFFFF | 0x20000000;
              v47 = *(_QWORD *)(v45 + 120);
              v102 = 0;
              v101 = 0LL;
              v48 = *(struct PALETTE **)(v110[0] + 96LL);
              if ( v48 != ppalDefault )
                *(_QWORD *)(v45 + 168) = *(_QWORD *)v48;
              v79 = 0;
              v90 = 0LL;
              v49 = 1;
              v83 = 0LL;
              if ( a12 )
              {
                if ( a12 != 1 )
                {
                  if ( a12 == 2 )
                  {
                    v50 = *(_DWORD *)(v45 + 96);
                    if ( v50 != v92 )
                    {
                      if ( v50 == 2 )
                      {
                        v51 = v92 == 7;
                      }
                      else
                      {
                        if ( v50 != 3 )
                        {
LABEL_146:
                          EngSetLastError(0x57u);
LABEL_147:
                          v52 = 0LL;
                          v49 = 0;
                          v53 = 0;
                          goto LABEL_172;
                        }
                        v51 = v92 == 8;
                      }
                      if ( !v51 )
                        goto LABEL_146;
                    }
                    v52 = (HDC)xloIdent;
                    v53 = 0;
                    v83 = (HDC)xloIdent;
                  }
                  else
                  {
                    v52 = 0LL;
                    v53 = 0;
                  }
LABEL_172:
                  v107 = 0LL;
                  v108 = 0;
                  v109 = 0;
                  SURFMEM::bCreateDIB(
                    (SURFMEM *)&v107,
                    (struct _DEVBITMAPINFO *)&v92,
                    *(void **)&v115.left,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0,
                    1,
                    0,
                    0);
                  if ( v49 && v107 )
                  {
                    *(_DWORD *)(v107 + 92) = 0;
                    if ( (v112[24] & 1) != 0 )
                    {
                      v58 = v110[0];
                      v59 = (struct _POINTL *)(v110[0] + 1416LL);
                      if ( (*(_DWORD *)(v110[0] + 40LL) & 1) == 0 )
                        v59 = (struct _POINTL *)(v110[0] + 1408LL);
                      if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, v59, v57) )
                      {
                        if ( v53 )
                        {
                          *(_QWORD *)(v107 + 120) = v101;
                          v58 = v110[0];
                        }
                        if ( v97 )
                        {
                          v106[0].x = a6;
                          v106[0].y = v87 - v99 - a7;
                          v60 = XDCOBJ::prgnEffRao((XDCOBJ *)v110);
                          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v116, v60, (struct ERECTL *)&v114, 0);
                          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v117) )
                          {
                            if ( (*(_DWORD *)(v110[0] + 36LL) & 0xE0) != 0 )
                            {
                              v115 = (struct _RECTL)v117[0];
                              XDCOBJ::vAccumulateTight((XDCOBJ *)v110, v61, &v115);
                            }
                            ++*(_DWORD *)(v45 + 92);
                            v62 = SURFACE::pSurfobj((SURFACE *)v45);
                            v63 = SURFMEM::pSurfobj((SURFMEM *)&v107);
                            if ( bClipRectsToSurfaces(v62, v63, &v114, v106) )
                            {
                              v64 = SURFMEM::pSurfobj((SURFMEM *)&v107);
                              v65(v62, v64, v116, v52, &v114, v106);
                            }
                          }
                        }
                        else
                        {
                          v66 = v114.top - (v87 - v99 - a7);
                          v67 = v114.left - a6;
                          v95.x = a6;
                          v95.y = v87 - v99 - a7;
                          v115.left = v114.left - a6;
                          v115.right = v114.left - a6 + v104;
                          v115.bottom = v114.top - (-v99 - a7) - v84;
                          v115.top = v114.top - (-v99 - a7) + -v84 - v31;
                          ERECTL::operator*=(&v115);
                          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v115) )
                          {
                            v68 = *(struct REGION **)(v58 + 1552);
                            if ( !v68 )
                              v68 = *(struct REGION **)(v58 + 1544);
                            v121 = 1;
                            v118 = 0LL;
                            v119 = 0LL;
                            v120 = 0;
                            v122 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v116, v68, (struct ERECTL *)&v115, 0);
                            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v117) )
                            {
                              v115 = (struct _RECTL)v117[0];
                              if ( (*(_DWORD *)(v110[0] + 36LL) & 0xE0) != 0 )
                              {
                                *(_OWORD *)&v106[0].x = v117[0];
                                XDCOBJ::vAccumulateTight((XDCOBJ *)v110, v69, (struct _RECTL *)v106);
                              }
                              v95.x = v115.left - v67;
                              if ( v91 - 4 <= 1 )
                                v95.y = v87 - v84 - v31;
                              else
                                v95.y = v31 + v84 - v87 + v115.top - v66;
                              ++*(_DWORD *)(v45 + 92);
                              v70 = SURFACE::pSurfobj((SURFACE *)v45);
                              v71 = SURFMEM::pSurfobj((SURFMEM *)&v107);
                              if ( bClipRectsToSurfaces(v70, v71, &v115, &v95) )
                              {
                                v72 = SURFMEM::pSurfobj((SURFMEM *)&v107);
                                if ( !v73(v70, v72, v116, v83, &v115, &v95) )
                                  v31 = 0;
                              }
                            }
                          }
                        }
                        if ( v79 )
                          *(_QWORD *)(v107 + 120) = 0LL;
                      }
                    }
                  }
                  else
                  {
                    v31 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v107);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v101);
LABEL_203:
                  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v112);
                  DCOBJ::~DCOBJ((DCOBJ *)v113);
                  DCOBJ::~DCOBJ((DCOBJ *)v110);
                  return v31;
                }
                if ( v123 >= 2 * (unsigned __int64)v89 )
                {
                  if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v90, v105, v48, v45, v89, v81) )
                  {
                    v83 = v90;
                    if ( gbMultiMonMismatchColor && (*(_DWORD *)(v41 + 56) & 1) != 0 )
                    {
                      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v101, v29, v81, 0LL, v100, v98, v96, v80, 1) )
                      {
                        v54 = *(_QWORD *)(v45 + 120);
                        if ( !v54 )
                          v54 = *(_QWORD *)(v41 + 1832);
                        XEPALOBJ::vGetEntriesFrom(&v101, v48, v54, v105, v89);
                        v53 = 1;
                        v79 = 1;
                      }
                      else
                      {
                        v53 = 0;
                      }
                      v52 = v83;
                    }
                    else
                    {
                      v53 = 0;
                      v52 = v90;
                    }
                  }
                  else
                  {
                    v52 = 0LL;
                    v49 = 0;
                    v53 = 0;
                  }
                  goto LABEL_172;
                }
LABEL_150:
                EngSetLastError(0x57u);
                v52 = 0LL;
                v49 = 0;
                v53 = 0;
                goto LABEL_172;
              }
              if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v101, v29, v81, 0LL, v100, v98, v96, v80, 1) )
                goto LABEL_147;
              if ( v89 )
              {
                if ( v123 < 4 * v89 )
                  goto LABEL_150;
                if ( v91 - 10 <= 2 )
                  XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v101, (unsigned int *)&v105->rgbBlue, v55, v89);
                else
                  XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v101, v105, 0, v89);
              }
              v52 = 0LL;
              LODWORD(v77) = 0xFFFFFF;
              LODWORD(v76) = 0;
              LODWORD(v75) = 0;
              XlateObject = (HDC)CreateXlateObject(*(void **)v106, v86, v101, v47, v48, v48, v75, v76, v77, 0);
              v90 = XlateObject;
              if ( XlateObject )
              {
                v53 = 0;
                v52 = XlateObject;
                v83 = XlateObject;
              }
              else
              {
                v49 = 0;
                v53 = 0;
              }
              goto LABEL_172;
            }
            goto LABEL_205;
          }
          goto LABEL_206;
        }
LABEL_28:
        v94[0] = -1;
LABEL_29:
        v33 = 534;
LABEL_207:
        EngSetLastError(v33);
        return 0LL;
      }
      if ( (_DWORD)v25 == 32 )
      {
        v92 = 6;
        goto LABEL_24;
      }
    }
LABEL_206:
    v33 = 87;
    goto LABEL_207;
  }
  if ( !v24 )
  {
    switch ( (_DWORD)v25 )
    {
      case 1:
        v92 = 1;
        v28 = 2;
        break;
      case 4:
        v92 = 2;
        v28 = 16;
        break;
      case 8:
        v92 = 3;
        v28 = 256;
        break;
      default:
        v81 = 0;
        v28 = 0;
        if ( a12 == 1 )
          v20 = 0;
        v80 = 512;
        a12 = v20;
        switch ( (_DWORD)v25 )
        {
          case 0x10:
            v92 = 4;
            v29 = 2;
            v100 = 31744;
            v98 = 992;
            v96 = 31;
            break;
          case 0x18:
            v92 = 5;
            v29 = 8;
            break;
          case 0x20:
            v92 = 6;
            v29 = 8;
            break;
          default:
            goto LABEL_206;
        }
LABEL_46:
        v34 = v25 * v22;
        if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v34 + 31 < v34 )
          goto LABEL_29;
        v31 = a9;
        v32 = a9 * (unsigned __int64)(((v34 + 31) >> 3) & 0x1FFFFFFC);
        if ( v32 <= 0xFFFFFFFF )
        {
          v84 = a8;
          goto LABEL_90;
        }
        goto LABEL_28;
    }
    v81 = v28;
    v29 = 1;
    v80 = 1024;
    goto LABEL_46;
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
              v92 = 9;
            }
            else
            {
              if ( v24 != 5 )
                goto LABEL_206;
              v92 = 10;
            }
            v31 = a9;
            v80 = 512;
            v28 = 0;
            v81 = 0;
            v29 = 8;
LABEL_89:
            LODWORD(v32) = a11[5];
            v84 = 0;
            goto LABEL_90;
          }
          DCOBJ::DCOBJ((DCOBJ *)v111, a1);
          if ( !v111[0] || !(unsigned int)DC::bIsCMYKColor(v111[0]) )
            goto LABEL_68;
          DCOBJ::~DCOBJ((DCOBJ *)v111);
          v23 = v87;
        }
        if ( (_DWORD)v25 != 8 )
          goto LABEL_206;
        v28 = 256;
        v92 = 8;
        v81 = 256;
LABEL_88:
        v29 = 1;
        v80 = 1024;
        v97 = 1;
        v31 = v23;
        goto LABEL_89;
      }
      DCOBJ::DCOBJ((DCOBJ *)v111, a1);
      if ( !v111[0] || !(unsigned int)DC::bIsCMYKColor(v111[0]) )
        goto LABEL_68;
      DCOBJ::~DCOBJ((DCOBJ *)v111);
      v23 = v87;
    }
    if ( (_DWORD)v25 != 4 )
      goto LABEL_206;
    v92 = 7;
    v28 = 16;
    v81 = 16;
    goto LABEL_88;
  }
  DCOBJ::DCOBJ((DCOBJ *)v111, a1);
  if ( !v111[0] || !(unsigned int)DC::bIsCMYKColor(v111[0]) )
    goto LABEL_68;
  switch ( (_DWORD)v25 )
  {
    case 1:
      v92 = 1;
      v28 = 2;
      break;
    case 4:
      v92 = 2;
      v28 = 16;
      break;
    case 8:
      v92 = 3;
      v28 = 256;
      break;
    case 0x20:
      v92 = 6;
      v80 = 512;
      v29 = 16;
      v28 = 0;
      goto LABEL_62;
    default:
LABEL_68:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v111);
      return 0LL;
  }
  v29 = 1;
  v80 = 1024;
LABEL_62:
  v81 = v28;
  v35 = v25 * v22;
  if ( (unsigned __int64)(v25 * v22) <= 0xFFFFFFFF && v35 + 31 >= v35 )
  {
    v31 = a9;
    v36 = a9 * (unsigned __int64)(((v35 + 31) >> 3) & 0x1FFFFFFC);
    if ( v36 <= 0xFFFFFFFF )
    {
      v94[0] = v36;
      DCOBJ::~DCOBJ((DCOBJ *)v111);
      LODWORD(v32) = v94[0];
      v23 = v87;
      v84 = a8;
      goto LABEL_91;
    }
    v94[0] = -1;
  }
  EngSetLastError(0x216u);
  DCOBJ::~DCOBJ((DCOBJ *)v111);
  return 0LL;
}
