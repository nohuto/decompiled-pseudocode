/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C0099AD8
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00998E0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0013C98 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C0106148 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C2C (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02693B0 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02693CC (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B5658 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B56EC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7A38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        int a6,
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
  __int64 v24; // r9
  int v25; // eax
  BOOL v27; // edi
  int v28; // r11d
  unsigned int v29; // r15d
  int v30; // r13d
  __int64 v31; // r8
  int v32; // r10d
  unsigned int v33; // r9d
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rsi
  LONG x; // ecx
  char v42; // dl
  LONG v43; // eax
  LONG y; // ecx
  struct SURFACE *v45; // rax
  unsigned int v46; // r8d
  struct SURFACE *v47; // r13
  __int64 v48; // rdi
  struct PALETTE *v49; // rbx
  __int64 XlateObject; // rax
  int v51; // ecx
  int v52; // esi
  int v53; // edi
  struct EPOINTL *v54; // rax
  int v55; // r8d
  unsigned int v56; // esi
  int v57; // eax
  int v58; // r9d
  int v59; // ecx
  char v60; // bl
  int v61; // edx
  struct REGION *v62; // rax
  struct ECLIPOBJ *v63; // rdx
  __int64 v64; // rax
  BOOL (__stdcall *v65)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v66; // r11d
  char *v67; // r8
  __int64 v68; // rdx
  unsigned int v69; // ebx
  unsigned int v70; // eax
  int v71; // r12d
  int v72; // r15d
  unsigned int v73; // edx
  HDC CompatibleDC; // rsi
  HDC v75; // rbx
  __int64 DIBitmapComp; // rax
  __int64 v77; // rdi
  int v78; // ebx
  int v79; // eax
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  SURFOBJ *v84; // rdx
  SURFOBJ *v85; // rcx
  __int64 v86; // r8
  int v87; // eax
  LONG v88; // ecx
  LONG v89; // ecx
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
  unsigned int v105; // [rsp+A8h] [rbp-58h]
  int v106; // [rsp+A8h] [rbp-58h]
  int v107; // [rsp+ACh] [rbp-54h]
  __m256i v108; // [rsp+B0h] [rbp-50h] BYREF
  int v109; // [rsp+D0h] [rbp-30h]
  int v110; // [rsp+D4h] [rbp-2Ch]
  int v111; // [rsp+D8h] [rbp-28h]
  unsigned int v112; // [rsp+DCh] [rbp-24h]
  unsigned int v113; // [rsp+E0h] [rbp-20h]
  unsigned int v114; // [rsp+E4h] [rbp-1Ch]
  int v115; // [rsp+E8h] [rbp-18h]
  int v116; // [rsp+ECh] [rbp-14h]
  __int64 v117; // [rsp+F0h] [rbp-10h] BYREF
  char v118; // [rsp+F8h] [rbp-8h]
  int v119; // [rsp+FCh] [rbp-4h]
  __int64 v120; // [rsp+100h] [rbp+0h] BYREF
  char v121; // [rsp+108h] [rbp+8h]
  int v122; // [rsp+10Ch] [rbp+Ch]
  __int64 v123; // [rsp+110h] [rbp+10h] BYREF
  int v124; // [rsp+118h] [rbp+18h]
  __int64 v125[2]; // [rsp+120h] [rbp+20h] BYREF
  DC *v126[6]; // [rsp+130h] [rbp+30h] BYREF
  __m256i v127; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v128[12]; // [rsp+190h] [rbp+90h] BYREF
  int v129; // [rsp+19Ch] [rbp+9Ch]
  __int64 v130; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v131[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v132[80]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _POINTL v133; // [rsp+220h] [rbp+120h] BYREF
  LONG v134; // [rsp+228h] [rbp+128h]
  LONG v135; // [rsp+22Ch] [rbp+12Ch]
  HDC v136; // [rsp+230h] [rbp+130h] BYREF
  int v137; // [rsp+238h] [rbp+138h]
  int v138; // [rsp+23Ch] [rbp+13Ch]
  RECTL prclDest; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v140[4]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v141[9]; // [rsp+254h] [rbp+154h] BYREF

  v16 = 0;
  v17 = a12;
  v19 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v110 = a15;
  v125[0] = a16;
  v136 = a1;
  v115 = a4;
  v20 = (gajRop3[BYTE2(a13)] & 0xD4) == 0;
  v116 = a3;
  v111 = a5;
  v107 = a12;
  v96 = 0;
  if ( v20 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  DCOBJ::DCOBJ((DCOBJ *)v126, a1);
  if ( v126[0] )
  {
    if ( a11 )
    {
      if ( *(_QWORD *)&prclDest.left )
      {
        if ( a12 <= 2 && a14 >= 0xC )
        {
          v105 = *(_DWORD *)a11;
          if ( a14 >= *(_DWORD *)a11 && *(_DWORD *)a11 >= 0x28u && *(int *)(a11 + 4) > 0 && *(_DWORD *)(a11 + 8) )
          {
            v109 = *(unsigned __int8 *)(*((_QWORD *)v126[0] + 10) + 75LL);
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v130, (struct XDCOBJ *)v126, 0x204u);
            v21 = *(_DWORD *)(a11 + 16);
            v22 = 1LL;
            v23 = v130;
            if ( (unsigned int)(v21 - 4) > 1 )
            {
              v24 = v125[0];
              goto LABEL_13;
            }
            if ( v21 == 4 )
            {
              v79 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v126);
            }
            else
            {
              if ( v21 != 5 )
              {
                v79 = 0;
                goto LABEL_154;
              }
              v79 = XDCOBJ::bSupportsPNG((XDCOBJ *)v126);
            }
            v22 = 1LL;
LABEL_154:
            if ( !v79 )
              goto LABEL_26;
            if ( BYTE2(a13) != 204 )
              goto LABEL_26;
            if ( (*(_DWORD *)(v23 + 32) & 1) == 0 )
              goto LABEL_26;
            if ( a12 )
              goto LABEL_26;
            v24 = v125[0];
            if ( v125[0] )
              goto LABEL_26;
LABEL_13:
            if ( v115 == a8 )
            {
              v22 = (unsigned int)a9;
              if ( v111 == a9
                && a9 > 0
                && a8 > 0
                && !(a7 | a6)
                && v109 != 4
                && BYTE2(a13) == 204
                && (*(_DWORD *)(v23 + 32) & 2) != 0 )
              {
                v25 = *(_DWORD *)(a11 + 8);
                if ( v25 < 0 )
                  v25 = -v25;
                if ( a9 >= v25 )
                  LODWORD(v22) = v25;
                v16 = GreSetDIBitsToDeviceInternal(
                        a1,
                        v111,
                        a6,
                        a7,
                        a7,
                        v22,
                        *(__int64 *)&prclDest.left,
                        a11,
                        a12,
                        v110,
                        a14,
                        1,
                        v24);
                goto LABEL_26;
              }
            }
            v27 = 0;
            if ( a12 == 1 )
            {
              DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v131, (struct XDCOBJ *)v126, 0);
              v80 = *((_QWORD *)v126[0] + 64);
              if ( v80 )
                v27 = *(_DWORD *)(v80 + 96) == 1;
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v131);
              DCOBJ::~DCOBJ((DCOBJ *)v132);
              v23 = v130;
            }
            if ( BYTE2(a13) == 204 && (*(_DWORD *)(v23 + 32) & 1) != 0 && !v27 )
            {
              v28 = *(_DWORD *)(a11 + 8);
              v29 = *(unsigned __int16 *)(a11 + 14);
              v30 = 1;
              v31 = *(unsigned int *)(a11 + 4);
              v32 = *(_DWORD *)(a11 + 16);
              v33 = *(_DWORD *)(a11 + 32);
              memset(&v108, 0, sizeof(v108));
              v95 = 1;
              v103 = v29;
              v102 = v32;
              v97 = v31;
              v99 = v28;
              LODWORD(v117) = v33;
              v136 = (HDC)(a11 + v105);
              if ( v28 < 0 )
              {
                v28 = -v28;
                v108.m256i_i32[6] = 1;
                v99 = v28;
              }
              switch ( v32 )
              {
                case 3:
                  if ( a14 < 0x34 )
                    goto LABEL_169;
                  if ( a12 == 1 )
                    v17 = 0;
                  v107 = v17;
                  if ( v29 == 16 )
                  {
                    v108.m256i_i32[0] = 4;
                  }
                  else if ( v29 == 32 )
                  {
                    v108.m256i_i32[0] = 6;
                  }
                  else
                  {
                    EngSetLastError(0x57u);
                    LODWORD(v31) = v97;
                    v30 = 0;
                    v95 = 0;
                  }
                  v113 = *(_DWORD *)(a11 + 40);
                  v34 = 0;
                  v35 = 512;
                  v112 = *(_DWORD *)(a11 + 44);
                  v114 = *(_DWORD *)(a11 + 48);
                  v81 = v103 * (unsigned __int64)(unsigned int)v31;
                  v136 = (HDC)(a11 + 40);
                  v94 = 2;
                  if ( v81 > 0xFFFFFFFF || (int)v81 + 31 < (unsigned int)v81 )
                    goto LABEL_178;
                  v28 = v99;
                  v37 = v99 * (unsigned __int64)(((unsigned int)(v81 + 31) >> 3) & 0x1FFFFFFC);
                  if ( v37 > 0xFFFFFFFF )
                    goto LABEL_177;
                  v38 = 0;
                  goto LABEL_225;
                case 0:
                  switch ( v29 )
                  {
                    case 1u:
                      v108.m256i_i32[0] = 1;
                      v34 = 2;
                      break;
                    case 4u:
                      v108.m256i_i32[0] = 2;
                      v34 = 16;
                      break;
                    case 8u:
                      v108.m256i_i32[0] = 3;
                      v34 = 256;
                      break;
                    default:
                      if ( a12 == 1 )
                        v17 = 0;
                      v107 = v17;
                      switch ( v29 )
                      {
                        case 0x18u:
                          v108.m256i_i32[0] = 5;
                          break;
                        case 0x10u:
                          v108.m256i_i32[0] = 4;
                          v113 = 31744;
                          v112 = 992;
                          v114 = 31;
                          v94 = 2;
                          goto LABEL_45;
                        case 0x20u:
                          v108.m256i_i32[0] = 6;
                          break;
                        default:
                          goto LABEL_169;
                      }
                      v94 = 8;
LABEL_45:
                      v34 = 0;
                      v35 = 512;
                      goto LABEL_46;
                  }
                  v94 = 1;
                  v35 = 1024;
LABEL_46:
                  v36 = v103 * v31;
                  if ( v36 > 0xFFFFFFFF || (int)v36 + 31 < (unsigned int)v36 )
                    goto LABEL_178;
                  v37 = (unsigned int)v28 * (((unsigned __int64)(unsigned int)(v36 + 31) >> 3) & 0x1FFFFFFC);
                  if ( v37 <= 0xFFFFFFFF )
                  {
                    v108.m256i_i32[3] = v37;
                    v38 = 0;
                    goto LABEL_50;
                  }
LABEL_177:
                  v108.m256i_i32[3] = -1;
LABEL_178:
                  EngSetLastError(0x216u);
                  goto LABEL_26;
                case 10:
                  DCOBJ::DCOBJ((DCOBJ *)&v127, a1);
                  if ( !v127.m256i_i64[0] || !(unsigned int)DC::bIsCMYKColor((DC *)v127.m256i_i64[0]) )
                    goto LABEL_199;
                  if ( v29 == 1 )
                  {
                    v108.m256i_i32[0] = 1;
                    v94 = 1;
                    v34 = 2;
                  }
                  else
                  {
                    switch ( v29 )
                    {
                      case 4u:
                        v108.m256i_i32[0] = 2;
                        v34 = 16;
                        break;
                      case 8u:
                        v108.m256i_i32[0] = 3;
                        v34 = 256;
                        break;
                      case 0x20u:
                        v108.m256i_i32[0] = 6;
                        v34 = 0;
                        v94 = 16;
                        v35 = 512;
LABEL_193:
                        v82 = v103 * (unsigned __int64)v97;
                        if ( v82 <= 0xFFFFFFFF && (int)v82 + 31 >= (unsigned int)v82 )
                        {
                          v83 = v99 * (unsigned __int64)(((unsigned int)(v82 + 31) >> 3) & 0x1FFFFFFC);
                          if ( v83 <= 0xFFFFFFFF )
                          {
                            v108.m256i_i32[3] = v83;
LABEL_200:
                            DCOBJ::~DCOBJ((DCOBJ *)&v127);
                            LODWORD(v37) = v108.m256i_i32[3];
                            v38 = 0;
                            LODWORD(v31) = v97;
                            v28 = v99;
LABEL_226:
                            if ( !v30 )
                              goto LABEL_170;
                            v33 = v117;
                            v32 = v102;
LABEL_50:
                            v100 = a14 - v105;
                            v39 = v125[0];
                            if ( !v125[0] )
                            {
                              v39 = *(_QWORD *)(*((_QWORD *)v126[0] + 10) + 112LL);
                              v125[0] = v39;
                            }
                            v106 = *((_DWORD *)v126[0] + 28);
                            if ( (v106 & 0x10000000) != 0 && (!v39 || (unsigned int)(v32 - 10) > 2) )
                              v106 = v106 & 0xFFFFFFF | 0x20000000;
                            *(__int64 *)((char *)v108.m256i_i64 + 4) = __PAIR64__(v28, v31);
                            if ( v33 )
                            {
                              v70 = v34;
                              if ( v33 <= v34 )
                                v70 = v33;
                              v104 = v70;
                            }
                            else
                            {
                              v104 = v34;
                            }
                            if ( v110 >= (unsigned int)v37 )
                            {
                              v40 = *((_QWORD *)v126[0] + 6);
                              v133.x = a2;
                              v134 = a2 + v115;
                              v133.y = v116;
                              v135 = v116 + v111;
                              EXFORMOBJ::vQuickInit((EXFORMOBJ *)v128, (struct XDCOBJ *)v126, 0x204u);
                              if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v128, &v133) )
                              {
                                if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v133) )
                                {
                                  v19 = a9;
                                  goto LABEL_114;
                                }
                                x = v133.x;
                                v42 = 0;
                                v43 = v134;
                                v98 = 0;
                                if ( v133.x > v134 )
                                {
                                  v133.x = v134;
                                  v134 = x;
                                  if ( !v129 )
                                  {
                                    v133.x = v43 + 1;
                                    v134 = x + 1;
                                  }
                                  v42 = 1;
                                  v98 = 1;
                                }
                                y = v133.y;
                                if ( v133.y > v135 )
                                {
                                  v133.y = v135 + 1;
                                  v98 = v42 ^ 2;
                                  v135 = y + 1;
                                }
                                v124 = 0;
                                v123 = 0LL;
                                if ( !v107 )
                                {
                                  v30 &= -(PALMEMOBJ::bCreatePalette(
                                             (PALMEMOBJ *)&v123,
                                             v94,
                                             v34,
                                             0LL,
                                             v113,
                                             v112,
                                             v114,
                                             v35,
                                             1) != 0);
                                  v95 = v30;
                                }
                                if ( !v30 )
                                  goto LABEL_113;
                                DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v131, (struct XDCOBJ *)v126, 0);
                                v108.m256i_i32[6] |= 8 * (*(_DWORD *)(*((_QWORD *)v126[0] + 6) + 56LL) & 0x8000);
                                v108.m256i_i64[2] = 0LL;
                                v120 = 0LL;
                                v121 = 0;
                                v122 = 0;
                                if ( v38 )
                                {
                                  v117 = 0LL;
                                  v118 = 0;
                                  v127 = v108;
                                  v119 = 0;
                                  if ( SURFMEM::bCreateDIB(
                                         (SURFMEM *)&v117,
                                         (struct _DEVBITMAPINFO *)&v127,
                                         *(void **)&prclDest.left,
                                         0LL,
                                         0,
                                         0LL,
                                         0LL,
                                         0,
                                         1,
                                         0,
                                         0)
                                    && (v108.m256i_i32[0] = (v108.m256i_i32[0] != 7) + 2,
                                        SURFMEM::bCreateDIB(
                                          (SURFMEM *)&v120,
                                          (struct _DEVBITMAPINFO *)&v108,
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
                                    v84 = 0LL;
                                    *(_QWORD *)&prclDest.right = *(__int64 *)((char *)v108.m256i_i64 + 4);
                                    *(_QWORD *)&prclDest.left = 0LL;
                                    if ( v117 )
                                      v84 = (SURFOBJ *)(v117 + 24);
                                    v85 = 0LL;
                                    if ( v120 )
                                      v85 = (SURFOBJ *)(v120 + 24);
                                    EngCopyBits(v85, v84, 0LL, 0LL, &prclDest, &gptl00);
                                  }
                                  else
                                  {
                                    v30 = 0;
                                    v95 = 0;
                                  }
                                  SURFMEM::~SURFMEM((SURFMEM *)&v117);
                                }
                                else
                                {
                                  v30 &= -(SURFMEM::bCreateDIB(
                                             (SURFMEM *)&v120,
                                             (struct _DEVBITMAPINFO *)&v108,
                                             *(void **)&prclDest.left,
                                             0LL,
                                             0,
                                             0LL,
                                             0LL,
                                             0,
                                             1,
                                             0,
                                             0) != 0);
                                  v95 = v30;
                                }
                                if ( !v30 )
                                {
LABEL_112:
                                  SURFMEM::~SURFMEM((SURFMEM *)&v120);
                                  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v131);
                                  DCOBJ::~DCOBJ((DCOBJ *)v132);
LABEL_113:
                                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v123);
                                  v19 = v96;
                                  goto LABEL_114;
                                }
                                v45 = XDCOBJ::pSurfaceEff((XDCOBJ *)v126);
                                v47 = v45;
                                *(_QWORD *)&prclDest.left = 0LL;
                                v48 = *((_QWORD *)v45 + 15);
                                v49 = (struct PALETTE *)*((_QWORD *)v126[0] + 12);
                                v117 = 0LL;
                                if ( v49 != ppalDefault )
                                  *((_QWORD *)v45 + 21) = *(_QWORD *)v49;
                                if ( !v107 )
                                {
                                  if ( v104 )
                                  {
                                    if ( v100 < 4 * v104 )
                                      goto LABEL_111;
                                    v52 = v102;
                                    if ( (unsigned int)(v102 - 10) <= 2 )
                                      XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v123, (unsigned int *)v136, v46, v104);
                                    else
                                      XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v123, (struct tagRGBQUAD *)v136, 0, v104);
                                    LODWORD(v93) = 0;
                                    v92[0] = 0xFFFFFF;
                                    LODWORD(v91) = 0;
                                    v90[0] = 0;
                                    *(_QWORD *)&prclDest.left = CreateXlateObject(
                                                                  (void *)v125[0],
                                                                  v106,
                                                                  v123,
                                                                  v48,
                                                                  v49,
                                                                  v49,
                                                                  *(_QWORD *)v90,
                                                                  v91,
                                                                  *(_QWORD *)v92,
                                                                  v93);
                                    v117 = *(_QWORD *)&prclDest.left;
                                    if ( *(_QWORD *)&prclDest.left )
                                      v51 = v95;
                                    else
                                      v51 = 0;
                                  }
                                  else
                                  {
                                    LODWORD(v93) = 0;
                                    v92[0] = 0xFFFFFF;
                                    LODWORD(v91) = 0;
                                    v90[0] = 0;
                                    XlateObject = CreateXlateObject(
                                                    (void *)v125[0],
                                                    v106,
                                                    v123,
                                                    v48,
                                                    v49,
                                                    v49,
                                                    *(_QWORD *)v90,
                                                    v91,
                                                    *(_QWORD *)v92,
                                                    v93);
                                    v51 = v95;
                                    v52 = v102;
                                    if ( !XlateObject )
                                      v51 = 0;
                                    *(_QWORD *)&prclDest.left = XlateObject;
                                    v117 = XlateObject;
                                  }
                                  v53 = 0;
LABEL_75:
                                  if ( v51 )
                                  {
                                    if ( (*((_DWORD *)v126[0] + 9) & 0xE0) != 0 )
                                      XDCOBJ::vAccumulate((XDCOBJ *)v126, (struct ERECTL *)&v133);
                                    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v126) )
                                    {
                                      v56 = v99;
                                    }
                                    else
                                    {
                                      if ( (v131[24] & 1) == 0 )
                                        goto LABEL_111;
                                      v54 = DC::eptlOrigin(v126[0]);
                                      v55 = a6;
                                      v133.x += *(_DWORD *)v54;
                                      v134 += *(_DWORD *)v54;
                                      v133.y += *((_DWORD *)v54 + 1);
                                      v135 += *((_DWORD *)v54 + 1);
                                      LODWORD(v136) = a6;
                                      if ( v52 == 4 && (v108.m256i_i8[24] & 1) != 0 )
                                      {
                                        v58 = a7;
                                        v56 = v99;
                                        v57 = a9;
                                      }
                                      else
                                      {
                                        v56 = v99;
                                        v57 = a9;
                                        v58 = v99 - a7 - a9;
                                      }
                                      v59 = v58 + v57;
                                      v60 = v98;
                                      v61 = a6 + a8;
                                      HIDWORD(v136) = v58;
                                      v138 = v58 + v57;
                                      v137 = a6 + a8;
                                      if ( a6 > a6 + a8 )
                                      {
                                        v55 = v61 + 1;
                                        v60 = v98 ^ 1;
                                        v61 = a6 + 1;
                                        LODWORD(v136) = v55;
                                        v137 = a6 + 1;
                                      }
                                      if ( v58 > v59 )
                                      {
                                        v87 = v58;
                                        v60 ^= 2u;
                                        v58 = v59 + 1;
                                        HIDWORD(v136) = v59 + 1;
                                        v59 = v87 + 1;
                                        v138 = v87 + 1;
                                      }
                                      if ( v61 <= 0
                                        || v59 <= 0
                                        || v55 >= *(_DWORD *)(v120 + 56)
                                        || v58 >= *(_DWORD *)(v120 + 60)
                                        || (unsigned int)ERECTL::bEmpty((ERECTL *)&v136) )
                                      {
                                        goto LABEL_111;
                                      }
                                      v62 = XDCOBJ::prgnEffRao((XDCOBJ *)v126);
                                      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v140, v62, (struct ERECTL *)&v133, 0);
                                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v141) )
                                      {
                                        if ( (*((_DWORD *)v126[0] + 9) & 0xE0) != 0 )
                                        {
                                          *(_OWORD *)v125 = v141[0];
                                          XDCOBJ::vAccumulateTight((XDCOBJ *)v126, v63, (struct _RECTL *)v125);
                                        }
                                        if ( v53 )
                                          *(_QWORD *)(v120 + 120) = v123;
                                        v64 = *((_QWORD *)v47 + 6);
                                        if ( (*((_DWORD *)v47 + 28) & 2) != 0 )
                                          v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v64 + 2880);
                                        else
                                          v65 = EngStretchBlt;
                                        v66 = v109;
                                        if ( (*((_DWORD *)v47 + 28) & 2) != 0 && (*(_DWORD *)(v64 + 56) & 0x20000) == 0 )
                                        {
                                          if ( v109 == 4 && (*((_BYTE *)v126[0] + 72) & 0x10) == 0 )
                                            v65 = EngStretchBlt;
                                          if ( (int)v136 < 0
                                            || SHIDWORD(v136) < 0
                                            || v137 > *(_DWORD *)(v120 + 56)
                                            || v138 > *(_DWORD *)(v120 + 60) )
                                          {
                                            v65 = EngStretchBlt;
                                          }
                                        }
                                        if ( (v60 & 1) != 0 )
                                        {
                                          v88 = v133.x;
                                          v133.x = v134;
                                          v134 = v88;
                                        }
                                        if ( (v60 & 2) != 0 )
                                        {
                                          v89 = v133.y;
                                          v133.y = v135;
                                          v135 = v89;
                                        }
                                        ++*((_DWORD *)v47 + 23);
                                        v67 = 0LL;
                                        if ( *((__int16 *)v126[0] + 121) >= 0 )
                                          v67 = (char *)v126[0] + 240;
                                        v68 = 0LL;
                                        if ( v120 )
                                          v68 = v120 + 24;
                                        v69 = 0;
                                        if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, _QWORD, char *, char *, struct _POINTL *, HDC *, _QWORD, int))v65)(
                                               (char *)v47 + 24,
                                               v68,
                                               0LL,
                                               v140,
                                               *(_QWORD *)&prclDest.left,
                                               v67,
                                               (char *)v126[0] + 1576,
                                               &v133,
                                               &v136,
                                               0LL,
                                               v66) )
                                        {
                                          v69 = v56;
                                        }
                                        v96 = v69;
                                        if ( v53 )
                                          *(_QWORD *)(v120 + 120) = 0LL;
                                        goto LABEL_111;
                                      }
                                    }
                                    v96 = v56;
                                  }
LABEL_111:
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v117);
                                  goto LABEL_112;
                                }
                                if ( v107 != 1 )
                                {
                                  v51 = v95;
                                  v52 = v102;
                                  v53 = 0;
                                  if ( v107 == 2 )
                                  {
                                    if ( *((_DWORD *)v45 + 24) != v108.m256i_i32[0] )
                                      v51 = 0;
                                    *(_QWORD *)&prclDest.left = xloIdent;
                                  }
                                  goto LABEL_75;
                                }
                                if ( v100 < 2 * (unsigned __int64)v104
                                  || !(unsigned int)EXLATEOBJ::bMakeXlate(&v117, v136, v49, v45, v104, v34) )
                                {
                                  goto LABEL_111;
                                }
                                *(_QWORD *)&prclDest.left = v117;
                                if ( gbMultiMonMismatchColor && (*(_DWORD *)(v40 + 56) & 1) != 0 )
                                {
                                  if ( PALMEMOBJ::bCreatePalette(
                                         (PALMEMOBJ *)&v123,
                                         v94,
                                         v34,
                                         0LL,
                                         v113,
                                         v112,
                                         v114,
                                         v35,
                                         1) )
                                  {
                                    v86 = *((_QWORD *)v47 + 15);
                                    if ( !v86 )
                                      v86 = *(_QWORD *)(v40 + 1832);
                                    XEPALOBJ::vGetEntriesFrom(&v123, v49, v86, v136, v104);
                                    v51 = v95;
                                    v52 = v102;
                                    v53 = 1;
                                    goto LABEL_75;
                                  }
                                  v51 = 0;
                                  v53 = 0;
                                }
                                else
                                {
                                  v51 = v95;
                                  v53 = 0;
                                }
                                v52 = v102;
                                goto LABEL_75;
                              }
LABEL_170:
                              v19 = 0;
                              goto LABEL_114;
                            }
LABEL_169:
                            EngSetLastError(0x57u);
                            goto LABEL_170;
                          }
                          v108.m256i_i32[3] = -1;
                        }
                        EngSetLastError(0x216u);
                        DCOBJ::~DCOBJ((DCOBJ *)&v127);
                        goto LABEL_26;
                      default:
LABEL_199:
                        EngSetLastError(0x57u);
                        v94 = a2;
                        v35 = a2;
                        v30 = 0;
                        v34 = a2;
                        v95 = 0;
                        goto LABEL_200;
                    }
                    v94 = 1;
                  }
                  v35 = 1024;
                  goto LABEL_193;
              }
              if ( v32 != 2 )
              {
                if ( v32 != 12 )
                {
                  if ( v32 != 1 )
                  {
                    if ( v32 != 11 )
                    {
                      if ( v32 == 4 )
                      {
                        v108.m256i_i32[0] = 9;
                      }
                      else
                      {
                        if ( v32 != 5 )
                          goto LABEL_169;
                        v108.m256i_i32[0] = 10;
                      }
                      LODWORD(v37) = *(_DWORD *)(a11 + 20);
                      v34 = 0;
                      v108.m256i_i32[3] = v37;
                      v38 = 0;
                      v94 = 8;
                      v35 = 512;
                      goto LABEL_50;
                    }
                    DCOBJ::DCOBJ((DCOBJ *)&v127, a1);
                    if ( !v127.m256i_i64[0] || !(unsigned int)DC::bIsCMYKColor((DC *)v127.m256i_i64[0]) )
                    {
                      EngSetLastError(0x57u);
                      v30 = 0;
                      v95 = 0;
                    }
                    DCOBJ::~DCOBJ((DCOBJ *)&v127);
                    if ( !v30 )
                      goto LABEL_170;
                  }
                  if ( v29 != 8 )
                  {
                    EngSetLastError(0x57u);
                    v95 = 0;
                    v30 = 0;
                  }
                  v108.m256i_i32[0] = 8;
                  v34 = 256;
                  goto LABEL_224;
                }
                DCOBJ::DCOBJ((DCOBJ *)&v127, a1);
                if ( !v127.m256i_i64[0] || !(unsigned int)DC::bIsCMYKColor((DC *)v127.m256i_i64[0]) )
                {
                  EngSetLastError(0x57u);
                  v30 = 0;
                  v95 = 0;
                }
                DCOBJ::~DCOBJ((DCOBJ *)&v127);
                if ( !v30 )
                  goto LABEL_170;
              }
              if ( v29 != 4 )
              {
                EngSetLastError(0x57u);
                v95 = 0;
                v30 = 0;
              }
              v108.m256i_i32[0] = 7;
              v34 = 16;
LABEL_224:
              LODWORD(v37) = *(_DWORD *)(a11 + 20);
              v35 = 1024;
              v28 = v99;
              v38 = 1;
              LODWORD(v31) = v97;
              v94 = 1;
LABEL_225:
              v108.m256i_i32[3] = v37;
              goto LABEL_226;
            }
            v71 = *(_DWORD *)(a11 + 8);
            if ( v71 > 0 )
              v72 = v71 - a7 - a9;
            else
              v72 = a7;
            CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v22);
            v75 = v136;
            if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
              DIBitmapComp = GreCreateDIBitmapComp(v136, *(__int64 *)&prclDest.left, a11, a12, a14, v110);
            else
              DIBitmapComp = GreCreateDIBitmapReal(
                               v136,
                               v73,
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
            v77 = DIBitmapComp;
            if ( CompatibleDC && DIBitmapComp )
            {
              GreSelectBitmap(CompatibleDC, DIBitmapComp);
              v78 = GreStretchBltInternal(v75, a2, v116, v111, CompatibleDC, a6, v72, a8, a9, a13, 0xFFFFFF, 1);
              bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
              GreDeleteObject(v77);
              if ( v78 )
              {
LABEL_141:
                v16 = v71;
LABEL_26:
                DCOBJ::~DCOBJ((DCOBJ *)v126);
                return v16;
              }
            }
            else
            {
              bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
              GreDeleteObject(v77);
            }
            v71 = 0;
            goto LABEL_141;
          }
        }
      }
    }
  }
LABEL_114:
  DCOBJ::~DCOBJ((DCOBJ *)v126);
  return v19;
}
