/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C00348C8
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00346D0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0041624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01306A0 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C014B9F0 (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C026800C (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C0268028 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C02B45F8 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B468C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B6E48 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        int a2,
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
        unsigned int a15,
        __int64 a16)
{
  int v16; // r14d
  unsigned int v18; // edi
  bool v19; // zf
  unsigned int v20; // ecx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r11
  int v25; // eax
  unsigned int v26; // ebx
  BOOL v28; // edi
  int v29; // r11d
  __int64 v30; // r15
  int v31; // r13d
  int v32; // r9d
  unsigned int v33; // r8d
  __int64 v34; // rsi
  unsigned int v35; // r12d
  unsigned int v36; // r14d
  unsigned int v37; // edx
  unsigned __int64 v38; // rdx
  unsigned int v39; // r15d
  int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rsi
  LONG x; // ecx
  char v44; // dl
  LONG v45; // eax
  LONG y; // ecx
  int v47; // eax
  struct SURFACE *v48; // rax
  unsigned int v49; // r8d
  struct SURFACE *v50; // r15
  __int64 v51; // rdi
  struct PALETTE *v52; // rbx
  __int64 XlateObject; // rax
  int v54; // esi
  int v55; // edi
  struct EPOINTL *v56; // rax
  int v57; // r8d
  unsigned int v58; // esi
  int v59; // eax
  int v60; // r9d
  int v61; // ecx
  char v62; // bl
  int v63; // edx
  struct REGION *v64; // rax
  struct ECLIPOBJ *v65; // rdx
  __int64 v66; // rax
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v68; // r11d
  char *v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // ebx
  unsigned int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  unsigned int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // edx
  unsigned __int64 v78; // rdx
  SURFOBJ *v79; // rdx
  SURFOBJ *v80; // rcx
  unsigned int v81; // edi
  __int64 v82; // r8
  int v83; // eax
  LONG v84; // ecx
  LONG v85; // ecx
  int v86; // r15d
  int v87; // r14d
  __int64 CompatibleDC; // rsi
  __int64 DIBitmapComp; // rax
  __int64 v90; // rdi
  int v91; // ebx
  unsigned int v92; // [rsp+80h] [rbp-80h]
  unsigned int v93; // [rsp+84h] [rbp-7Ch]
  char v94; // [rsp+8Ch] [rbp-74h]
  unsigned int v95; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+98h] [rbp-68h]
  unsigned int v98; // [rsp+9Ch] [rbp-64h]
  DC *v99[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v100; // [rsp+B0h] [rbp-50h]
  int v101; // [rsp+B4h] [rbp-4Ch]
  __m256i v102; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v103; // [rsp+D8h] [rbp-28h]
  int v104; // [rsp+DCh] [rbp-24h]
  __int64 v105; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v106; // [rsp+E8h] [rbp-18h]
  int v107; // [rsp+ECh] [rbp-14h]
  unsigned int v108; // [rsp+F0h] [rbp-10h]
  unsigned int v109; // [rsp+F4h] [rbp-Ch]
  int v110; // [rsp+F8h] [rbp-8h]
  int v111; // [rsp+FCh] [rbp-4h]
  __int64 v112; // [rsp+100h] [rbp+0h] BYREF
  char v113; // [rsp+108h] [rbp+8h]
  int v114; // [rsp+10Ch] [rbp+Ch]
  __int64 v115; // [rsp+110h] [rbp+10h] BYREF
  int v116; // [rsp+118h] [rbp+18h]
  __int64 v117[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v118; // [rsp+130h] [rbp+30h] BYREF
  char v119; // [rsp+138h] [rbp+38h]
  int v120; // [rsp+13Ch] [rbp+3Ch]
  DC *v121[2]; // [rsp+140h] [rbp+40h] BYREF
  DC *v122[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v123[12]; // [rsp+160h] [rbp+60h] BYREF
  int v124; // [rsp+16Ch] [rbp+6Ch]
  __int64 v125; // [rsp+170h] [rbp+70h] BYREF
  DC *v126[2]; // [rsp+180h] [rbp+80h] BYREF
  __m256i v127; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v128[80]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v129[80]; // [rsp+200h] [rbp+100h] BYREF
  struct _POINTL v130; // [rsp+250h] [rbp+150h] BYREF
  LONG v131; // [rsp+258h] [rbp+158h]
  LONG v132; // [rsp+25Ch] [rbp+15Ch]
  struct tagRGBQUAD *v133; // [rsp+260h] [rbp+160h] BYREF
  int v134; // [rsp+268h] [rbp+168h]
  int v135; // [rsp+26Ch] [rbp+16Ch]
  RECTL prclDest; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v137[4]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v138[9]; // [rsp+284h] [rbp+184h] BYREF

  v16 = a12;
  v18 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v117[0] = a16;
  v110 = a4;
  v111 = a3;
  v19 = (gajRop3[BYTE2(a13)] & 0xD4) == 0;
  v107 = a5;
  v101 = a12;
  v93 = 0;
  if ( v19 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v99[0] = 0LL;
  v99[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v99, a1);
  if ( !v99[0] )
    goto LABEL_119;
  if ( !a11 )
    goto LABEL_119;
  if ( !*(_QWORD *)&prclDest.left )
    goto LABEL_119;
  if ( a12 > 2 )
    goto LABEL_119;
  if ( a14 < 0xC )
    goto LABEL_119;
  v20 = *(_DWORD *)a11;
  v100 = v20;
  if ( a14 < v20 || v20 < 0x28 || *(int *)(a11 + 4) <= 0 || !*(_DWORD *)(a11 + 8) )
    goto LABEL_119;
  v104 = *(unsigned __int8 *)(*((_QWORD *)v99[0] + 10) + 75LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v125, (struct XDCOBJ *)v99, 0x204u);
  v21 = *(_DWORD *)(a11 + 16);
  v22 = 1LL;
  v23 = v125;
  if ( (unsigned int)(v21 - 4) > 1 )
  {
    v24 = v117[0];
    goto LABEL_13;
  }
  if ( v21 == 4 )
  {
    v73 = XDCOBJ::bSupportsJPEG((XDCOBJ *)v99);
  }
  else
  {
    if ( v21 != 5 )
    {
      v73 = 0;
      goto LABEL_151;
    }
    v73 = XDCOBJ::bSupportsPNG((XDCOBJ *)v99);
  }
  v22 = 1LL;
LABEL_151:
  if ( v73 )
  {
    if ( BYTE2(a13) == 204 && (*(_DWORD *)(v23 + 32) & 1) != 0 && !a12 )
    {
      v24 = v117[0];
      if ( !v117[0] )
      {
LABEL_13:
        if ( v110 == a8 )
        {
          v22 = (unsigned int)a9;
          if ( v107 == a9
            && a9 > 0
            && a8 > 0
            && !(a7 | a6)
            && v104 != 4
            && BYTE2(a13) == 204
            && (*(_DWORD *)(v23 + 32) & 2) != 0 )
          {
            v25 = *(_DWORD *)(a11 + 8);
            if ( v25 < 0 )
              v25 = -v25;
            if ( a9 >= v25 )
              LODWORD(v22) = v25;
            v93 = GreSetDIBitsToDeviceInternal(
                    a1,
                    v107,
                    a6,
                    a7,
                    a7,
                    v22,
                    *(__int64 *)&prclDest.left,
                    a11,
                    a12,
                    a15,
                    a14,
                    1,
                    v24);
            goto LABEL_26;
          }
        }
        v28 = 0;
        if ( a12 == 1 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v129, (struct XDCOBJ *)v99, 0);
          v74 = *((_QWORD *)v99[0] + 64);
          if ( v74 )
            v28 = *(_DWORD *)(v74 + 96) == 1;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v129);
          v23 = v125;
        }
        if ( BYTE2(a13) != 204 || (*(_DWORD *)(v23 + 32) & 1) == 0 || v28 )
        {
          v86 = *(_DWORD *)(a11 + 8);
          if ( v86 <= 0 )
            v87 = a7;
          else
            v87 = v86 - a7 - a9;
          CompatibleDC = GreCreateCompatibleDC(a1, v22);
          if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
            DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, v101, a14, a15);
          else
            DIBitmapComp = GreCreateDIBitmapReal(a1, v101, a14, a15, 0LL, 0, 0LL, 0, 0LL, 0LL);
          v90 = DIBitmapComp;
          if ( CompatibleDC && DIBitmapComp )
          {
            GreSelectBitmap(CompatibleDC, DIBitmapComp);
            v91 = GreStretchBltInternal(a1, a2, v111, v107, CompatibleDC, a6, v87, a8, a9, a13, 0xFFFFFF, 1);
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v90);
            if ( v91 )
              v93 = v86;
          }
          else
          {
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v90);
          }
          goto LABEL_26;
        }
        v29 = *(_DWORD *)(a11 + 8);
        v30 = *(unsigned int *)(a11 + 4);
        v31 = 1;
        v32 = *(_DWORD *)(a11 + 16);
        v33 = *(_DWORD *)(a11 + 32);
        v34 = *(unsigned __int16 *)(a11 + 14);
        memset(&v102, 0, sizeof(v102));
        v97 = v32;
        LODWORD(v105) = v30;
        v95 = v29;
        v103 = v33;
        v133 = (struct tagRGBQUAD *)(a11 + v100);
        if ( v29 < 0 )
        {
          v29 = -v29;
          v102.m256i_i32[6] = 1;
          v95 = v29;
        }
        switch ( v32 )
        {
          case 3:
            if ( a14 < 0x34 )
              goto LABEL_205;
            if ( a12 == 1 )
              v16 = 0;
            v101 = v16;
            if ( (_DWORD)v34 == 16 )
            {
              v102.m256i_i32[0] = 4;
            }
            else if ( (_DWORD)v34 == 32 )
            {
              v102.m256i_i32[0] = 6;
            }
            else
            {
              EngSetLastError(0x57u);
              v29 = v95;
              v31 = 0;
            }
            v92 = 2;
            v109 = *(_DWORD *)(a11 + 40);
            v36 = 512;
            v75 = v34 * v30;
            v108 = *(_DWORD *)(a11 + 44);
            v76 = *(_DWORD *)(a11 + 48);
            v133 = (struct tagRGBQUAD *)(a11 + 40);
            v106 = v76;
            v35 = 0;
            if ( (unsigned __int64)(v34 * v30) > 0xFFFFFFFF || v75 + 31 < v75 )
            {
LABEL_174:
              EngSetLastError(0x216u);
              v26 = 0;
              goto LABEL_27;
            }
            v38 = (unsigned int)v29 * (((unsigned __int64)(v75 + 31) >> 3) & 0x1FFFFFFC);
            if ( v38 > 0xFFFFFFFF )
            {
LABEL_173:
              v102.m256i_i32[3] = -1;
              goto LABEL_174;
            }
            v39 = 2;
            v40 = 0;
            goto LABEL_221;
          case 0:
            switch ( (_DWORD)v34 )
            {
              case 1:
                v102.m256i_i32[0] = 1;
                v35 = 2;
                break;
              case 4:
                v102.m256i_i32[0] = 2;
                v35 = 16;
                break;
              case 8:
                v102.m256i_i32[0] = 3;
                v35 = 256;
                break;
              default:
                if ( a12 == 1 )
                  v16 = 0;
                v101 = v16;
                switch ( (_DWORD)v34 )
                {
                  case 0x18:
                    v102.m256i_i32[0] = 5;
                    break;
                  case 0x10:
                    v102.m256i_i32[0] = 4;
                    v109 = 31744;
                    v108 = 992;
                    v106 = 31;
                    v92 = 2;
                    goto LABEL_48;
                  case 0x20:
                    v102.m256i_i32[0] = 6;
                    break;
                  default:
                    goto LABEL_205;
                }
                v92 = 8;
LABEL_48:
                v35 = 0;
                v36 = 512;
                goto LABEL_49;
            }
            v92 = 1;
            v36 = 1024;
LABEL_49:
            v37 = v34 * v30;
            if ( (unsigned __int64)(v34 * v30) > 0xFFFFFFFF || v37 + 31 < v37 )
              goto LABEL_174;
            v38 = (unsigned int)v29 * (((unsigned __int64)(v37 + 31) >> 3) & 0x1FFFFFFC);
            if ( v38 <= 0xFFFFFFFF )
            {
              v39 = v92;
LABEL_53:
              v102.m256i_i32[3] = v38;
              v40 = 0;
              goto LABEL_54;
            }
            goto LABEL_173;
          case 10:
            DCOBJ::DCOBJ((DCOBJ *)v121, a1);
            v26 = 0;
            if ( !v121[0] || !(unsigned int)DC::bIsCMYKColor(v121[0]) )
              goto LABEL_194;
            if ( (_DWORD)v34 == 1 )
            {
              v102.m256i_i32[0] = 1;
              v92 = 1;
              v35 = 2;
            }
            else
            {
              switch ( (_DWORD)v34 )
              {
                case 4:
                  v102.m256i_i32[0] = 2;
                  v35 = 16;
                  break;
                case 8:
                  v102.m256i_i32[0] = 3;
                  v35 = 256;
                  break;
                case 0x20:
                  v102.m256i_i32[0] = 6;
                  v35 = 0;
                  v92 = 16;
                  v36 = 512;
LABEL_188:
                  v77 = v34 * v30;
                  if ( (unsigned __int64)(v34 * v30) <= 0xFFFFFFFF && v77 + 31 >= v77 )
                  {
                    v78 = v95 * (unsigned __int64)(((v77 + 31) >> 3) & 0x1FFFFFFC);
                    if ( v78 <= 0xFFFFFFFF )
                    {
                      v102.m256i_i32[3] = v78;
LABEL_195:
                      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v121);
                      LODWORD(v38) = v102.m256i_i32[3];
                      v29 = v95;
                      v39 = v92;
                      v40 = 0;
LABEL_222:
                      if ( !v31 )
                        goto LABEL_118;
                      v33 = v103;
                      v32 = v97;
LABEL_54:
                      v98 = a14 - v100;
                      v41 = v117[0];
                      if ( !v117[0] )
                      {
                        v41 = *(_QWORD *)(*((_QWORD *)v99[0] + 10) + 112LL);
                        v117[0] = v41;
                      }
                      v100 = *((_DWORD *)v99[0] + 28);
                      if ( (v100 & 0x10000000) != 0 && (!v41 || (unsigned int)(v32 - 10) > 2) )
                        v100 = v100 & 0xFFFFFFF | 0x20000000;
                      *(__int64 *)((char *)v102.m256i_i64 + 4) = __PAIR64__(v29, v105);
                      if ( v33 )
                      {
                        v72 = v35;
                        if ( v33 <= v35 )
                          v72 = v33;
                        v103 = v72;
                      }
                      else
                      {
                        v103 = v35;
                      }
                      if ( a15 >= (unsigned int)v38 )
                      {
                        v42 = *((_QWORD *)v99[0] + 6);
                        v130.x = a2;
                        v131 = a2 + v110;
                        v130.y = v111;
                        v132 = v111 + v107;
                        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v123, (struct XDCOBJ *)v99, 0x204u);
                        v18 = 0;
                        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v123, &v130) )
                        {
                          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v130) )
                          {
                            v18 = a9;
                            goto LABEL_119;
                          }
                          x = v130.x;
                          v44 = 0;
                          v45 = v131;
                          v94 = 0;
                          if ( v130.x > v131 )
                          {
                            v130.x = v131;
                            v131 = x;
                            if ( !v124 )
                            {
                              v130.x = v45 + 1;
                              v131 = x + 1;
                            }
                            v44 = 1;
                            v94 = 1;
                          }
                          y = v130.y;
                          if ( v130.y > v132 )
                          {
                            v130.y = v132 + 1;
                            v94 = v44 ^ 2;
                            v132 = y + 1;
                          }
                          v116 = 0;
                          v115 = 0LL;
                          if ( !v101 )
                            v31 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v115, v39, v35, 0LL, v109, v108, v106, v36) != 0
                                ? v31
                                : 0;
                          if ( !v31 )
                            goto LABEL_117;
                          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v128, (struct XDCOBJ *)v99, 0);
                          v47 = *(_DWORD *)(*((_QWORD *)v99[0] + 6) + 56LL) & 0x8000;
                          v102.m256i_i64[2] = 0LL;
                          v102.m256i_i32[6] |= 8 * v47;
                          v112 = 0LL;
                          v113 = 0;
                          v114 = 0;
                          if ( v40 )
                          {
                            v118 = 0LL;
                            v119 = 0;
                            v120 = 0;
                            v127 = v102;
                            if ( SURFMEM::bCreateDIB(
                                   (SURFMEM *)&v118,
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
                              && (v102.m256i_i32[0] = (v102.m256i_i32[0] != 7) + 2,
                                  SURFMEM::bCreateDIB(
                                    (SURFMEM *)&v112,
                                    (struct _DEVBITMAPINFO *)&v102,
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
                              v79 = 0LL;
                              *(_QWORD *)&prclDest.right = *(__int64 *)((char *)v102.m256i_i64 + 4);
                              *(_QWORD *)&prclDest.left = 0LL;
                              if ( v118 )
                                v79 = (SURFOBJ *)(v118 + 24);
                              v80 = 0LL;
                              if ( v112 )
                                v80 = (SURFOBJ *)(v112 + 24);
                              EngCopyBits(v80, v79, 0LL, 0LL, &prclDest, &gptl00);
                            }
                            else
                            {
                              v31 = 0;
                            }
                            SURFMEM::~SURFMEM((SURFMEM *)&v118);
                          }
                          else
                          {
                            v31 = SURFMEM::bCreateDIB(
                                    (SURFMEM *)&v112,
                                    (struct _DEVBITMAPINFO *)&v102,
                                    *(void **)&prclDest.left,
                                    0LL,
                                    0,
                                    0LL,
                                    0LL,
                                    0,
                                    1,
                                    0,
                                    0) != 0
                                ? v31
                                : 0;
                          }
                          if ( !v31 )
                          {
LABEL_116:
                            SURFMEM::~SURFMEM((SURFMEM *)&v112);
                            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v128);
LABEL_117:
                            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v115);
LABEL_118:
                            v18 = v93;
                            goto LABEL_119;
                          }
                          v48 = XDCOBJ::pSurfaceEff((XDCOBJ *)v99);
                          v50 = v48;
                          *(_QWORD *)&prclDest.left = 0LL;
                          v51 = *((_QWORD *)v48 + 15);
                          v52 = (struct PALETTE *)*((_QWORD *)v99[0] + 12);
                          v105 = 0LL;
                          if ( v52 != ppalDefault )
                            *((_QWORD *)v48 + 21) = *(_QWORD *)v52;
                          if ( v101 )
                          {
                            if ( v101 == 1 )
                            {
                              v81 = v103;
                              if ( v98 < 2 * (unsigned __int64)v103
                                || !(unsigned int)EXLATEOBJ::bMakeXlate(&v105, v133, v52, v48, v103, v35) )
                              {
                                goto LABEL_115;
                              }
                              *(_QWORD *)&prclDest.left = v105;
                              if ( gbMultiMonMismatchColor && (*(_DWORD *)(v42 + 56) & 1) != 0 )
                              {
                                if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v115, v92, v35, 0LL, v109, v108, v106, v36) )
                                {
                                  v82 = *((_QWORD *)v50 + 15);
                                  if ( !v82 )
                                    v82 = *(_QWORD *)(v42 + 1832);
                                  XEPALOBJ::vGetEntriesFrom(&v115, v52, v82, v133, v81);
                                  v54 = v97;
                                  v55 = 1;
                                }
                                else
                                {
                                  v54 = v97;
                                  v31 = 0;
                                  v55 = 0;
                                }
                              }
                              else
                              {
                                v54 = v97;
                                v55 = 0;
                              }
                            }
                            else
                            {
                              v54 = v97;
                              v55 = 0;
                              if ( v101 == 2 )
                              {
                                if ( *((_DWORD *)v48 + 24) != v102.m256i_i32[0] )
                                  v31 = 0;
                                *(_QWORD *)&prclDest.left = xloIdent;
                              }
                            }
                          }
                          else
                          {
                            if ( v103 )
                            {
                              if ( v98 < 4 * v103 )
                                goto LABEL_115;
                              v54 = v97;
                              if ( (unsigned int)(v97 - 10) <= 2 )
                                XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v115, (unsigned int *)&v133->rgbBlue, v49, v103);
                              else
                                XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v115, v133, 0, v103);
                              *(_QWORD *)&prclDest.left = CreateXlateObject(
                                                            v117[0],
                                                            v100,
                                                            v115,
                                                            v51,
                                                            v52,
                                                            v52,
                                                            0,
                                                            0,
                                                            0xFFFFFF,
                                                            0);
                              v105 = *(_QWORD *)&prclDest.left;
                              if ( !*(_QWORD *)&prclDest.left )
                                v31 = 0;
                            }
                            else
                            {
                              XlateObject = CreateXlateObject(v117[0], v100, v115, v51, v52, v52, 0, 0, 0xFFFFFF, 0);
                              v54 = v97;
                              *(_QWORD *)&prclDest.left = XlateObject;
                              if ( !XlateObject )
                                v31 = 0;
                              v105 = XlateObject;
                            }
                            v55 = 0;
                          }
                          if ( v31 )
                          {
                            if ( (*((_DWORD *)v99[0] + 9) & 0xE0) != 0 )
                              XDCOBJ::vAccumulate((XDCOBJ *)v99, (struct ERECTL *)&v130);
                            if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v99) )
                            {
                              v58 = v95;
                            }
                            else
                            {
                              if ( (v128[24] & 1) == 0 )
                                goto LABEL_115;
                              v56 = DC::eptlOrigin(v99[0]);
                              v57 = a6;
                              v130.x += *(_DWORD *)v56;
                              v131 += *(_DWORD *)v56;
                              v130.y += *((_DWORD *)v56 + 1);
                              v132 += *((_DWORD *)v56 + 1);
                              LODWORD(v133) = a6;
                              if ( v54 == 4 && (v102.m256i_i8[24] & 1) != 0 )
                              {
                                v60 = a7;
                                v58 = v95;
                                v59 = a9;
                              }
                              else
                              {
                                v58 = v95;
                                v59 = a9;
                                v60 = v95 - a7 - a9;
                              }
                              v61 = v60 + v59;
                              v62 = v94;
                              v63 = a6 + a8;
                              HIDWORD(v133) = v60;
                              v135 = v60 + v59;
                              v134 = a6 + a8;
                              if ( a6 > a6 + a8 )
                              {
                                v57 = v63 + 1;
                                v62 = v94 ^ 1;
                                v63 = a6 + 1;
                                LODWORD(v133) = v57;
                                v134 = a6 + 1;
                              }
                              if ( v60 > v61 )
                              {
                                v83 = v60;
                                v62 ^= 2u;
                                v60 = v61 + 1;
                                HIDWORD(v133) = v61 + 1;
                                v61 = v83 + 1;
                                v135 = v83 + 1;
                              }
                              if ( v63 <= 0
                                || v61 <= 0
                                || v57 >= *(_DWORD *)(v112 + 56)
                                || v60 >= *(_DWORD *)(v112 + 60)
                                || (unsigned int)ERECTL::bEmpty((ERECTL *)&v133) )
                              {
                                goto LABEL_115;
                              }
                              v64 = XDCOBJ::prgnEffRao((XDCOBJ *)v99);
                              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v137, v64, (struct ERECTL *)&v130, 0);
                              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v138) )
                              {
                                if ( (*((_DWORD *)v99[0] + 9) & 0xE0) != 0 )
                                {
                                  *(_OWORD *)v117 = v138[0];
                                  XDCOBJ::vAccumulateTight((XDCOBJ *)v99, v65, (struct _RECTL *)v117);
                                }
                                if ( v55 )
                                  *(_QWORD *)(v112 + 120) = v115;
                                v66 = *((_QWORD *)v50 + 6);
                                if ( (*((_DWORD *)v50 + 28) & 2) != 0 )
                                  v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v66 + 2880);
                                else
                                  v67 = EngStretchBlt;
                                v68 = v104;
                                if ( (*((_DWORD *)v50 + 28) & 2) != 0 && (*(_DWORD *)(v66 + 56) & 0x20000) == 0 )
                                {
                                  if ( v104 == 4 && (*((_BYTE *)v99[0] + 72) & 0x10) == 0 )
                                    v67 = EngStretchBlt;
                                  if ( (int)v133 < 0
                                    || SHIDWORD(v133) < 0
                                    || v134 > *(_DWORD *)(v112 + 56)
                                    || v135 > *(_DWORD *)(v112 + 60) )
                                  {
                                    v67 = EngStretchBlt;
                                  }
                                }
                                if ( (v62 & 1) != 0 )
                                {
                                  v84 = v130.x;
                                  v130.x = v131;
                                  v131 = v84;
                                }
                                if ( (v62 & 2) != 0 )
                                {
                                  v85 = v130.y;
                                  v130.y = v132;
                                  v132 = v85;
                                }
                                ++*((_DWORD *)v50 + 23);
                                v69 = 0LL;
                                if ( *((__int16 *)v99[0] + 121) >= 0 )
                                  v69 = (char *)v99[0] + 240;
                                v70 = 0LL;
                                if ( v112 )
                                  v70 = v112 + 24;
                                v71 = 0;
                                if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, _QWORD, char *, char *, struct _POINTL *, struct tagRGBQUAD **, _QWORD, int))v67)(
                                       (char *)v50 + 24,
                                       v70,
                                       0LL,
                                       v137,
                                       *(_QWORD *)&prclDest.left,
                                       v69,
                                       (char *)v99[0] + 1552,
                                       &v130,
                                       &v133,
                                       0LL,
                                       v68) )
                                {
                                  v71 = v58;
                                }
                                v93 = v71;
                                if ( v55 )
                                  *(_QWORD *)(v112 + 120) = 0LL;
                                goto LABEL_115;
                              }
                            }
                            v93 = v58;
                          }
LABEL_115:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v105);
                          goto LABEL_116;
                        }
LABEL_119:
                        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v99);
                        return v18;
                      }
LABEL_205:
                      EngSetLastError(0x57u);
                      goto LABEL_118;
                    }
                    v102.m256i_i32[3] = -1;
                  }
                  EngSetLastError(0x216u);
                  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v121);
                  goto LABEL_27;
                default:
LABEL_194:
                  EngSetLastError(0x57u);
                  v31 = 0;
                  v35 = a2;
                  v92 = a2;
                  v36 = a2;
                  goto LABEL_195;
              }
              v92 = 1;
            }
            v36 = 1024;
            goto LABEL_188;
        }
        if ( v32 != 2 )
        {
          if ( v32 != 12 )
          {
            if ( v32 == 1 )
              goto LABEL_210;
            if ( v32 != 11 )
            {
              if ( v32 == 4 )
              {
                v102.m256i_i32[0] = 9;
              }
              else
              {
                if ( v32 != 5 )
                  goto LABEL_205;
                v102.m256i_i32[0] = 10;
              }
              LODWORD(v38) = *(_DWORD *)(a11 + 20);
              v39 = 8;
              v92 = 8;
              v35 = 0;
              v36 = 512;
              goto LABEL_53;
            }
            DCOBJ::DCOBJ((DCOBJ *)v122, a1);
            if ( !v122[0] || !(unsigned int)DC::bIsCMYKColor(v122[0]) )
            {
              EngSetLastError(0x57u);
              v31 = 0;
            }
            XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v122);
            if ( v31 )
            {
LABEL_210:
              if ( (_DWORD)v34 != 8 )
              {
                EngSetLastError(0x57u);
                v31 = 0;
              }
              v102.m256i_i32[0] = 8;
              v35 = 256;
LABEL_220:
              LODWORD(v38) = *(_DWORD *)(a11 + 20);
              v36 = 1024;
              v29 = v95;
              v40 = 1;
              v92 = 1;
              v39 = 1;
LABEL_221:
              v102.m256i_i32[3] = v38;
              goto LABEL_222;
            }
LABEL_273:
            v18 = 0;
            goto LABEL_119;
          }
          DCOBJ::DCOBJ((DCOBJ *)v126, a1);
          if ( !v126[0] || !(unsigned int)DC::bIsCMYKColor(v126[0]) )
          {
            EngSetLastError(0x57u);
            v31 = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v126);
          if ( !v31 )
            goto LABEL_273;
        }
        if ( (_DWORD)v34 != 4 )
        {
          EngSetLastError(0x57u);
          v31 = 0;
        }
        v102.m256i_i32[0] = 7;
        v35 = 16;
        goto LABEL_220;
      }
    }
  }
  v93 = 0;
LABEL_26:
  v26 = v93;
LABEL_27:
  if ( v99[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v99);
    _InterlockedDecrement((volatile signed __int32 *)v99[0] + 3);
  }
  return v26;
}
