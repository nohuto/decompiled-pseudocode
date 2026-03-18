/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C0035580
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00344D0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C014BAE4 (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0035564 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0038D34 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0041D3C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01306A0 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C026800C (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C0268028 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B468C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B6E48 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02B7FD0 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        void *a10,
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  int v16; // esi
  int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // r13
  __int64 v23; // rdx
  int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // eax
  unsigned int v30; // r14d
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  unsigned __int64 v33; // rcx
  ULONG v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // esi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v42; // rdi
  unsigned int v43; // ecx
  LONG v44; // r13d
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rcx
  int v48; // r15d
  __int64 v49; // r15
  __int64 v50; // rax
  unsigned int v51; // r13d
  __int64 v52; // rdi
  struct PALETTE *v53; // rbx
  int v54; // r12d
  int v55; // eax
  bool v56; // zf
  XLATEOBJ *v57; // r13
  int v58; // ebx
  int v59; // r8d
  __int64 v60; // rdi
  struct _POINTL *v61; // rdx
  struct REGION *v62; // rax
  struct ECLIPOBJ *v63; // rdx
  struct _SURFOBJ *v64; // rdi
  struct _SURFOBJ *v65; // rax
  __int64 v66; // r8
  unsigned int v67; // r8d
  __int64 XlateObject; // rax
  struct _SURFOBJ *v69; // rax
  void (__fastcall *v70)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  unsigned int v71; // esi
  int v72; // r13d
  int v73; // r12d
  struct REGION *v74; // rdx
  struct ECLIPOBJ *v75; // rdx
  struct _SURFOBJ *v76; // rdi
  struct _SURFOBJ *v77; // rax
  struct _SURFOBJ *v78; // rax
  unsigned int (__fastcall *v79)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  int v81; // [rsp+60h] [rbp-A0h]
  unsigned int v82; // [rsp+64h] [rbp-9Ch]
  unsigned int v83; // [rsp+68h] [rbp-98h]
  unsigned int v84; // [rsp+6Ch] [rbp-94h]
  unsigned int v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+74h] [rbp-8Ch]
  int v87; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v89; // [rsp+80h] [rbp-80h]
  unsigned int v90; // [rsp+88h] [rbp-78h]
  unsigned int v91; // [rsp+88h] [rbp-78h]
  _QWORD v92[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v93; // [rsp+A0h] [rbp-60h]
  int v94; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v95; // [rsp+ACh] [rbp-54h]
  _DWORD v96[5]; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v97; // [rsp+C8h] [rbp-38h]
  int v98; // [rsp+CCh] [rbp-34h]
  int v99; // [rsp+D0h] [rbp-30h]
  unsigned int v100; // [rsp+D4h] [rbp-2Ch]
  unsigned int v101; // [rsp+D8h] [rbp-28h]
  struct _POINTL v102; // [rsp+E0h] [rbp-20h] BYREF
  XLATEOBJ *v103; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRGBQUAD *v104; // [rsp+F0h] [rbp-10h]
  struct _SURFOBJ *v105; // [rsp+F8h] [rbp-8h] BYREF
  char v106; // [rsp+100h] [rbp+0h]
  int v107; // [rsp+104h] [rbp+4h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  LONG v109; // [rsp+110h] [rbp+10h]
  __int64 v110; // [rsp+118h] [rbp+18h] BYREF
  int v111; // [rsp+120h] [rbp+20h]
  LONG v112; // [rsp+128h] [rbp+28h] BYREF
  LONG v113; // [rsp+12Ch] [rbp+2Ch]
  _QWORD v114[2]; // [rsp+130h] [rbp+30h] BYREF
  struct _POINTL v115; // [rsp+140h] [rbp+40h] BYREF
  __int64 v116; // [rsp+148h] [rbp+48h] BYREF
  int v117; // [rsp+150h] [rbp+50h]
  int v118; // [rsp+154h] [rbp+54h]
  DC *v119[2]; // [rsp+158h] [rbp+58h] BYREF
  void *v120; // [rsp+168h] [rbp+68h]
  DC *v121[2]; // [rsp+170h] [rbp+70h] BYREF
  HDC v122; // [rsp+180h] [rbp+80h]
  DC *v123[2]; // [rsp+188h] [rbp+88h] BYREF
  struct _RECTL v124; // [rsp+198h] [rbp+98h] BYREF
  struct _RECTL v125; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v126[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v127; // [rsp+1E0h] [rbp+E0h]
  __int64 v128; // [rsp+1E8h] [rbp+E8h]
  struct _RECTL v129; // [rsp+210h] [rbp+110h] BYREF
  struct _RECTL v130; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v131[4]; // [rsp+230h] [rbp+130h] BYREF
  struct _RECTL v132; // [rsp+234h] [rbp+134h] BYREF
  __int64 v133; // [rsp+280h] [rbp+180h]
  int v134; // [rsp+288h] [rbp+188h]
  int v135; // [rsp+2B0h] [rbp+1B0h]
  __int64 v136; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v137[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _RECTL v138; // [rsp+2D4h] [rbp+1D4h] BYREF
  unsigned int v139; // [rsp+428h] [rbp+328h]

  v16 = a2;
  v99 = a5;
  LOBYTE(v19) = -1;
  v108 = a16;
  v109 = a2;
  LOBYTE(a2) = 1;
  v114[1] = 0LL;
  v122 = a1;
  v120 = a10;
  v114[0] = HmgLockEx(a1, a2, 0LL);
  if ( v114[0] )
  {
    v56 = (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v114) == 0;
    v20 = v114[0];
    if ( !v56 )
    {
      if ( !v114[0] )
        goto LABEL_6;
      v19 = *(_DWORD *)(*(_QWORD *)(v114[0] + 80LL) + 312LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)v114);
      v20 = v114[0];
    }
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
  }
LABEL_6:
  if ( (v19 & 1) != 0 )
    v109 = a4 + v16 - 1;
  if ( !a11 )
    goto LABEL_214;
  if ( !a10 )
    goto LABEL_214;
  v21 = a12;
  if ( a12 > 2 )
    goto LABEL_214;
  if ( a14 < 0x28 )
    goto LABEL_214;
  v22 = (__int64)*a11;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_214;
  v23 = (unsigned int)a11[1];
  v85 = v23;
  if ( (int)v23 <= 0 )
    goto LABEL_214;
  v24 = (int)a11[2];
  v87 = v24;
  if ( !v24 )
    goto LABEL_214;
  v25 = (unsigned int)a11[4];
  v26 = *(unsigned __int16 *)&a11[3].rgbRed;
  memset(v96, 0, sizeof(v96));
  v95 = 0LL;
  v90 = (unsigned int)a11[8];
  v104 = (struct tagRGBQUAD *)((char *)a11 + v22);
  v94 = 0;
  v93 = v25;
  if ( v24 < 0 )
  {
    v96[3] = 1;
    if ( v25 > 0xC )
      goto LABEL_214;
    v27 = 7225;
    if ( !_bittest(&v27, v25) )
      goto LABEL_214;
    v24 = -v24;
    v87 = v24;
  }
  v98 = 0;
  if ( v25 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      if ( a12 == 1 )
        v21 = 0;
      a12 = v21;
      if ( (_DWORD)v26 == 16 )
      {
        v94 = 4;
LABEL_27:
        v97 = (unsigned int)a11[10];
        v28 = 0;
        v29 = (unsigned int)a11[11];
        v30 = 2;
        v104 = a11 + 10;
        v100 = v29;
        v31 = v26 * v23;
        v101 = (unsigned int)a11[12];
        v84 = 0;
        v83 = 512;
        if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v31 + 31 < v31 )
          goto LABEL_32;
        v32 = a9;
        v82 = a9;
        v33 = a9 * (unsigned __int64)(((v31 + 31) >> 3) & 0x1FFFFFFC);
        if ( v33 <= 0xFFFFFFFF )
        {
          v86 = a8;
LABEL_93:
          v36 = v85;
          goto LABEL_94;
        }
LABEL_31:
        v96[0] = -1;
LABEL_32:
        v34 = 534;
LABEL_215:
        EngSetLastError(v34);
        return 0LL;
      }
      if ( (_DWORD)v26 == 32 )
      {
        v94 = 6;
        goto LABEL_27;
      }
    }
LABEL_214:
    v34 = 87;
    goto LABEL_215;
  }
  if ( !v25 )
  {
    switch ( (_DWORD)v26 )
    {
      case 1:
        v94 = 1;
        v28 = 2;
        break;
      case 4:
        v94 = 2;
        v28 = 16;
        break;
      case 8:
        v94 = 3;
        v28 = 256;
        break;
      default:
        v84 = 0;
        v28 = 0;
        if ( a12 == 1 )
          v21 = 0;
        v83 = 512;
        a12 = v21;
        switch ( (_DWORD)v26 )
        {
          case 0x10:
            v94 = 4;
            v30 = 2;
            v97 = 31744;
            v100 = 992;
            v101 = 31;
            break;
          case 0x18:
            v94 = 5;
            v30 = 8;
            break;
          case 0x20:
            v94 = 6;
            v30 = 8;
            break;
          default:
            goto LABEL_214;
        }
LABEL_49:
        v35 = v26 * v23;
        if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v35 + 31 < v35 )
          goto LABEL_32;
        v32 = a9;
        v82 = a9;
        v33 = a9 * (unsigned __int64)(((v35 + 31) >> 3) & 0x1FFFFFFC);
        if ( v33 <= 0xFFFFFFFF )
        {
          v86 = a8;
          goto LABEL_93;
        }
        goto LABEL_31;
    }
    v84 = v28;
    v30 = 1;
    v83 = 1024;
    goto LABEL_49;
  }
  if ( v25 != 10 )
  {
    if ( v25 != 2 )
    {
      if ( v25 != 12 )
      {
        if ( v25 != 1 )
        {
          if ( v25 != 11 )
          {
            if ( v25 == 4 )
            {
              v94 = 9;
            }
            else
            {
              if ( v25 != 5 )
                goto LABEL_214;
              v94 = 10;
            }
            v32 = a9;
            LODWORD(v33) = a11[5];
            v28 = 0;
            v83 = 512;
            v30 = 8;
            v36 = v23;
            v84 = 0;
            v86 = 0;
            v82 = a9;
LABEL_94:
            v96[0] = v33;
LABEL_95:
            v139 = a14 - v22;
            if ( v90 )
            {
              v39 = v28;
              if ( v90 <= v28 )
                v39 = v90;
              v91 = v39;
            }
            else
            {
              v91 = v28;
            }
            if ( a13 >= (unsigned int)v33 )
            {
              v40 = (unsigned int)v24;
              LODWORD(v95) = v36;
              v92[0] = 0LL;
              if ( v93 - 4 > 1 )
                v40 = v32;
              v92[1] = 0LL;
              HIDWORD(v95) = v40;
              LOBYTE(v40) = 1;
              v92[0] = HmgLockEx(v122, v40, 0LL);
              if ( v92[0] )
              {
                if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v92) )
                {
                  v42 = v92[0];
                  if ( v92[0] && (*(_DWORD *)(v92[0] + 36LL) & 0x10000) == 0 )
                  {
                    v43 = (unsigned int)a11[4];
                    v44 = v109;
                    v45 = *(_QWORD *)(v92[0] + 48LL);
                    v113 = a3;
                    v112 = v109;
                    if ( v43 - 4 > 1 )
                      goto LABEL_121;
                    if ( v43 == 4 )
                    {
                      v46 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v92);
                    }
                    else
                    {
                      if ( v43 != 5 )
                        goto LABEL_120;
                      v46 = XDCOBJ::bSupportsPNG((XDCOBJ *)v92);
                    }
                    if ( v46 && !v21 && !v108 )
                    {
LABEL_121:
                      if ( a15 )
                      {
                        v117 = *(_DWORD *)(*(_QWORD *)(v42 + 80) + 68LL);
                        v118 = *(_DWORD *)(*(_QWORD *)(v42 + 80) + 312LL) & 1;
                        if ( (*(_DWORD *)(*(_QWORD *)(v42 + 80) + 352LL) & 0xE000) != 0 )
                        {
                          EXFORMOBJ::vInit((EXFORMOBJ *)&v116, (struct XDCOBJ *)v92, 0x204u, 0);
                          v47 = v116;
                          v42 = v92[0];
                        }
                        else
                        {
                          v47 = v42 + 336;
                          v116 = v42 + 336;
                        }
                        v48 = *(_DWORD *)(v47 + 32);
                        if ( (*(_BYTE *)(v47 + 32) & 0x43) != 0x43 )
                        {
                          bCvtPts1(v47, &v112);
                          v44 = v112;
                          a3 = v113;
                        }
                        if ( v32 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 )
                        {
                          if ( (v48 & 1) == 0 )
                            v32 = 0;
                          v82 = v32;
                        }
                      }
                      v129.left = v44;
                      v129.top = a3;
                      v129.right = v44 + a4;
                      v129.bottom = a3 + v99;
                      if ( v44 > v44 + a4 )
                      {
                        v129.left = v44 + a4;
                        v129.right = v44;
                      }
                      if ( a3 > a3 + v99 )
                      {
                        v129.top = a3 + v99;
                        v129.bottom = a3;
                      }
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v129) && v32 )
                      {
                        if ( (*(_DWORD *)(v42 + 36) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v92, (struct ERECTL *)&v129);
                        v127 = 0LL;
                        v128 = 0LL;
                        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v126, (struct XDCOBJ *)v92, 0);
                        v49 = *(_QWORD *)(v92[0] + 512LL);
                        if ( !v49 )
                          goto LABEL_213;
                        v50 = v108;
                        if ( !v108 )
                        {
                          v50 = *(_QWORD *)(*(_QWORD *)(v92[0] + 80LL) + 112LL);
                          v108 = v50;
                        }
                        v51 = *(_DWORD *)(v92[0] + 112LL);
                        if ( (v51 & 0x10000000) != 0 && (!v50 || v93 - 10 > 2) )
                          v51 = v51 & 0xFFFFFFF | 0x20000000;
                        v52 = *(_QWORD *)(v49 + 120);
                        v111 = 0;
                        v110 = 0LL;
                        v53 = *(struct PALETTE **)(v92[0] + 96LL);
                        if ( v53 != ppalDefault )
                          *(_QWORD *)(v49 + 168) = *(_QWORD *)v53;
                        v81 = 0;
                        v89 = 0LL;
                        v103 = 0LL;
                        v54 = 1;
                        if ( a12 )
                        {
                          if ( a12 != 1 )
                          {
                            if ( a12 == 2 )
                            {
                              v55 = *(_DWORD *)(v49 + 96);
                              if ( v55 != v94 )
                              {
                                if ( v55 == 2 )
                                {
                                  v56 = v94 == 7;
                                }
                                else
                                {
                                  if ( v55 != 3 )
                                  {
LABEL_158:
                                    EngSetLastError(0x57u);
LABEL_159:
                                    v54 = 0;
                                    v57 = 0LL;
                                    v58 = 0;
                                    goto LABEL_162;
                                  }
                                  v56 = v94 == 8;
                                }
                                if ( !v56 )
                                  goto LABEL_158;
                              }
                              v57 = xloIdent;
                              v89 = xloIdent;
                              goto LABEL_161;
                            }
                            v57 = 0LL;
                            v58 = 0;
                            goto LABEL_162;
                          }
                          if ( v139 >= 2 * (unsigned __int64)v91 )
                          {
                            if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v103, v104, v53, v49, v91, v84) )
                            {
                              v57 = v103;
                              v89 = v103;
                              if ( gbMultiMonMismatchColor
                                && (*(_DWORD *)(v45 + 56) & 1) != 0
                                && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v110, v30, v84, 0LL, v97, v100, v101, v83) )
                              {
                                v66 = *(_QWORD *)(v49 + 120);
                                if ( !v66 )
                                  v66 = *(_QWORD *)(v45 + 1832);
                                XEPALOBJ::vGetEntriesFrom(&v110, v53, v66, v104, v91);
                                v58 = 1;
                                v81 = 1;
                                goto LABEL_162;
                              }
LABEL_161:
                              v58 = 0;
                              goto LABEL_162;
                            }
                            v54 = 0;
                            v57 = 0LL;
                            v58 = 0;
LABEL_162:
                            v105 = 0LL;
                            v106 = 0;
                            v107 = 0;
                            SURFMEM::bCreateDIB(
                              (SURFMEM *)&v105,
                              (struct _DEVBITMAPINFO *)&v94,
                              v120,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0);
                            if ( v54 && v105 )
                            {
                              HIDWORD(v105[1].hsurf) = 0;
                              if ( (v126[24] & 1) == 0 )
                                goto LABEL_211;
                              v60 = v92[0];
                              v61 = (struct _POINTL *)(v92[0] + 1416LL);
                              if ( (*(_DWORD *)(v92[0] + 40LL) & 1) == 0 )
                                v61 = (struct _POINTL *)(v92[0] + 1408LL);
                              if ( (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v129, v61, v59) )
                              {
                                if ( v58 )
                                {
                                  *(_QWORD *)&v105[1].cjBits = v110;
                                  v60 = v92[0];
                                }
                                if ( v98 )
                                {
                                  v115.x = a6;
                                  v115.y = v87 - v99 - a7;
                                  v62 = XDCOBJ::prgnEffRao((XDCOBJ *)v92);
                                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v137, v62, (struct ERECTL *)&v129, 0);
                                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v138) )
                                  {
                                    if ( (*(_DWORD *)(v92[0] + 36LL) & 0xE0) != 0 )
                                    {
                                      v124 = v138;
                                      XDCOBJ::vAccumulateTight((XDCOBJ *)v92, v63, &v124);
                                    }
                                    ++*(_DWORD *)(v49 + 92);
                                    v64 = SURFACE::pSurfobj((SURFACE *)v49);
                                    v65 = SURFREF::pSurfobj(&v105);
                                    if ( bClipRectsToSurfaces(v64, v65, &v129, &v115) )
                                    {
                                      v69 = SURFREF::pSurfobj(&v105);
                                      v70(v64, v69, v137, v57, &v129, &v115);
                                    }
                                  }
                                }
                                else
                                {
                                  v71 = v82;
                                  v72 = v129.top - (v87 - v99 - a7);
                                  v73 = v129.left - a6;
                                  v102.x = a6;
                                  v102.y = v87 - v99 - a7;
                                  v130.left = v129.left - a6;
                                  v130.top = -v86 - v82 + v129.top - (-v99 - a7);
                                  v130.right = v129.left - a6 + v85;
                                  v130.bottom = v129.top - (-v99 - a7) - v86;
                                  ERECTL::operator*=(&v130, &v129);
                                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v130) )
                                  {
                                    v74 = *(struct REGION **)(v60 + 1528);
                                    if ( !v74 )
                                      v74 = *(struct REGION **)(v60 + 1520);
                                    v135 = 1;
                                    v133 = 0LL;
                                    v134 = 0;
                                    v136 = 0LL;
                                    XCLIPOBJ::vSetup((XCLIPOBJ *)v131, v74, (struct ERECTL *)&v130, 0);
                                    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v132) )
                                    {
                                      v130 = v132;
                                      if ( (*(_DWORD *)(v92[0] + 36LL) & 0xE0) != 0 )
                                      {
                                        v125 = v132;
                                        XDCOBJ::vAccumulateTight((XDCOBJ *)v92, v75, &v125);
                                      }
                                      v102.x = v130.left - v73;
                                      if ( v93 - 4 <= 1 )
                                        v102.y = v87 - v86 - v82;
                                      else
                                        v102.y = v82 + v86 - v87 + v130.top - v72;
                                      ++*(_DWORD *)(v49 + 92);
                                      v76 = SURFACE::pSurfobj((SURFACE *)v49);
                                      v77 = SURFREF::pSurfobj(&v105);
                                      if ( bClipRectsToSurfaces(v76, v77, &v130, &v102) )
                                      {
                                        v78 = SURFREF::pSurfobj(&v105);
                                        if ( !v79(v76, v78, v131, v89, &v130, &v102) )
                                          v71 = 0;
                                        v82 = v71;
                                      }
                                    }
                                  }
                                }
                                v32 = v82;
                                if ( v81 )
                                  *(_QWORD *)&v105[1].cjBits = 0LL;
                              }
                              else
                              {
LABEL_211:
                                v32 = v82;
                              }
                            }
                            else
                            {
                              v32 = 0;
                            }
                            SURFMEM::~SURFMEM((SURFMEM *)&v105);
                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v103);
                            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v110);
LABEL_213:
                            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v126);
                            DCOBJ::~DCOBJ((DCOBJ *)v92);
                            return v32;
                          }
LABEL_177:
                          EngSetLastError(0x57u);
                          v54 = 0;
                          v57 = 0LL;
                          v58 = 0;
                          goto LABEL_162;
                        }
                        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v110, v30, v84, 0LL, v97, v100, v101, v83) )
                          goto LABEL_159;
                        if ( v91 )
                        {
                          if ( v139 < 4 * v91 )
                            goto LABEL_177;
                          if ( v93 - 10 <= 2 )
                            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v110, (unsigned int *)&v104->rgbBlue, v67, v91);
                          else
                            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v110, v104, 0, v91);
                        }
                        XlateObject = CreateXlateObject(v108, v51, v110, v52, v53, v53, 0, 0, 0xFFFFFF, 0);
                        v103 = (XLATEOBJ *)XlateObject;
                        if ( !XlateObject )
                          goto LABEL_159;
                        v58 = 0;
                        v57 = (XLATEOBJ *)XlateObject;
                        v89 = (XLATEOBJ *)XlateObject;
                        goto LABEL_162;
                      }
LABEL_108:
                      DCOBJ::~DCOBJ((DCOBJ *)v92);
                      return v32;
                    }
LABEL_120:
                    v32 = 0;
                    v82 = 0;
                    goto LABEL_121;
                  }
                }
                else
                {
                  _InterlockedDecrement((volatile signed __int32 *)(v92[0] + 12LL));
                  v92[0] = 0LL;
                }
              }
              EngSetLastError(0x57u);
              v32 = 0;
              goto LABEL_108;
            }
            goto LABEL_214;
          }
          DCOBJ::DCOBJ((DCOBJ *)v119, a1);
          if ( !v119[0] || !(unsigned int)DC::bIsCMYKColor(v119[0]) )
          {
            EngSetLastError(0x57u);
            DCOBJ::~DCOBJ((DCOBJ *)v119);
            return 0LL;
          }
          DCOBJ::~DCOBJ((DCOBJ *)v119);
          v24 = v87;
        }
        if ( (_DWORD)v26 != 8 )
          goto LABEL_214;
        v28 = 256;
        v94 = 8;
        v84 = 256;
LABEL_92:
        LODWORD(v33) = a11[5];
        v30 = 1;
        v32 = v24;
        v98 = 1;
        v82 = v24;
        v86 = 0;
        v83 = 1024;
        goto LABEL_93;
      }
      DCOBJ::DCOBJ((DCOBJ *)v123, a1);
      if ( !v123[0] || !(unsigned int)DC::bIsCMYKColor(v123[0]) )
      {
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v123);
        return 0LL;
      }
      DCOBJ::~DCOBJ((DCOBJ *)v123);
      v24 = v87;
    }
    if ( (_DWORD)v26 != 4 )
      goto LABEL_214;
    v94 = 7;
    v28 = 16;
    v84 = 16;
    goto LABEL_92;
  }
  DCOBJ::DCOBJ((DCOBJ *)v121, a1);
  if ( !v121[0] || !(unsigned int)DC::bIsCMYKColor(v121[0]) )
    goto LABEL_71;
  switch ( (_DWORD)v26 )
  {
    case 1:
      v94 = 1;
      v28 = 2;
      break;
    case 4:
      v94 = 2;
      v28 = 16;
      break;
    case 8:
      v94 = 3;
      v28 = 256;
      break;
    case 0x20:
      v94 = 6;
      v83 = 512;
      v30 = 16;
      v28 = 0;
      goto LABEL_65;
    default:
LABEL_71:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v121);
      return 0LL;
  }
  v30 = 1;
  v83 = 1024;
LABEL_65:
  v36 = v85;
  v84 = v28;
  v37 = v26 * v85;
  if ( v37 <= 0xFFFFFFFF && (int)v37 + 31 >= (unsigned int)v37 )
  {
    v32 = a9;
    v82 = a9;
    v38 = a9 * (unsigned __int64)(((unsigned int)(v37 + 31) >> 3) & 0x1FFFFFFC);
    if ( v38 <= 0xFFFFFFFF )
    {
      v96[0] = v38;
      DCOBJ::~DCOBJ((DCOBJ *)v121);
      LODWORD(v33) = v96[0];
      v24 = v87;
      v86 = a8;
      goto LABEL_95;
    }
    v96[0] = -1;
  }
  EngSetLastError(0x216u);
  DCOBJ::~DCOBJ((DCOBJ *)v121);
  return 0LL;
}
