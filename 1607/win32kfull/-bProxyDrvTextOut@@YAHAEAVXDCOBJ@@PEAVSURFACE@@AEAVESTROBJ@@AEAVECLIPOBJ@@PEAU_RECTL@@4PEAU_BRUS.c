/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0101A68
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C000D5A0 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002E4C8 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002E4F4 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C0033D6C (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0033D88 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     STROBJ_bEnum @ 0x1C01288F0 (STROBJ_bEnum.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01529A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029A2B8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B86BC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *a2,
        struct ESTROBJ *a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        unsigned int a12,
        struct _RECTL *a13)
{
  CLIPOBJ *v13; // rsi
  struct RFONTOBJ *v14; // rbx
  struct _RECTL *v16; // r14
  struct SURFACE *v17; // r12
  POINTL *v18; // r10
  struct _RECTL *v19; // r11
  _WORD *v20; // rax
  _DWORD *v21; // r8
  unsigned int v22; // r13d
  int v23; // r15d
  __int64 v24; // r9
  struct _SURFOBJ *v25; // r8
  unsigned int v26; // r13d
  int v27; // eax
  __int64 v28; // rdx
  RFONTOBJ *v30; // r13
  _DWORD *v31; // r9
  _WORD *v32; // rsi
  _WORD *v33; // r10
  _WORD *v34; // rdx
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  __int128 v38; // xmm0
  __int64 v39; // rcx
  float v40; // xmm0_4
  int v41; // r14d
  SURFACE *v42; // rcx
  BOOL (__stdcall *v43)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  int v44; // edx
  struct XDCOBJ *v45; // rbx
  PGLYPHPOS v46; // rbx
  unsigned int v47; // r14d
  int v48; // r15d
  struct _RECTL *v49; // rcx
  char *v50; // r10
  int v51; // eax
  __int128 v52; // xmm0
  int v53; // eax
  int *v54; // rcx
  __int64 v55; // r10
  int v56; // edx
  __int64 v57; // rax
  LONG left; // ecx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // ecx
  struct _BRUSHOBJ *v62; // rax
  __int64 v63; // rbx
  int v64; // r12d
  unsigned int v65; // r14d
  unsigned int v66; // r15d
  PGLYPHPOS v67; // rsi
  bool v68; // zf
  struct RFONTOBJ *v69; // rbx
  int v70; // eax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  BOOL v74; // eax
  int v75; // r10d
  GLYPHBITS *pgb; // rdx
  int v77; // ecx
  int v78; // r8d
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v83; // [rsp+38h] [rbp-C8h]
  POINTL *v84; // [rsp+40h] [rbp-C0h]
  unsigned int v85; // [rsp+58h] [rbp-A8h]
  __int64 v86; // [rsp+60h] [rbp-A0h] BYREF
  int v87; // [rsp+68h] [rbp-98h]
  int v88; // [rsp+6Ch] [rbp-94h]
  unsigned int v89; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v90; // [rsp+74h] [rbp-8Ch]
  struct SURFACE *v91; // [rsp+78h] [rbp-88h]
  struct _RECTL *v92; // [rsp+80h] [rbp-80h]
  PGLYPHPOS ppgpos; // [rsp+88h] [rbp-78h] BYREF
  int v94; // [rsp+90h] [rbp-70h]
  struct XDCOBJ *v95; // [rsp+98h] [rbp-68h]
  unsigned int v96; // [rsp+A0h] [rbp-60h] BYREF
  struct RFONTOBJ *v97; // [rsp+A8h] [rbp-58h]
  POINTL *v98; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  ULONG pc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v101; // [rsp+C4h] [rbp-3Ch] BYREF
  BRUSHOBJ *v102; // [rsp+C8h] [rbp-38h]
  struct PDEVOBJ *v103; // [rsp+D0h] [rbp-30h]
  struct _BRUSHOBJ *v104; // [rsp+D8h] [rbp-28h]
  struct _RECTL *v105; // [rsp+E0h] [rbp-20h]
  _WORD *v106; // [rsp+E8h] [rbp-18h]
  RECTL v107; // [rsp+F0h] [rbp-10h]
  _WORD *v108; // [rsp+100h] [rbp+0h]
  struct _POINTL v109; // [rsp+108h] [rbp+8h] BYREF
  struct _RECTL *v110; // [rsp+110h] [rbp+10h]
  struct SURFACE *v111; // [rsp+118h] [rbp+18h]
  __int64 v112; // [rsp+120h] [rbp+20h]
  LINEATTRS v113; // [rsp+128h] [rbp+28h] BYREF
  PATHOBJ ppo; // [rsp+150h] [rbp+50h] BYREF
  __int64 v115; // [rsp+158h] [rbp+58h]
  int v116[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v117[10]; // [rsp+1F8h] [rbp+F8h] BYREF

  v13 = a4;
  v14 = a10;
  v16 = a6;
  v17 = a2;
  v18 = a9;
  v19 = a13;
  v110 = a5;
  v102 = a7;
  v104 = a8;
  v103 = a11;
  v90 = *(_DWORD *)a3;
  v112 = *((_QWORD *)a3 + 7);
  v108 = (_WORD *)*((_QWORD *)a3 + 26);
  v20 = (_WORD *)*((_QWORD *)a3 + 5);
  pco = a4;
  *((_QWORD *)a3 + 4) = 0LL;
  v21 = *(_DWORD **)a10;
  v106 = v20;
  v91 = a2;
  v95 = a1;
  LODWORD(a2) = 0;
  LODWORD(v20) = v21[122];
  v22 = 1;
  v92 = a6;
  v98 = a9;
  v97 = a10;
  v105 = a13;
  v94 = 0;
  v88 = 1;
  if ( ((unsigned __int8)v20 & 4) != 0 && v21[50] == 1 )
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a1 + 2172LL) != v21[97];
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v23 = 0;
  v87 = 0;
  v24 = *(_QWORD *)a10;
  v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)a10 + 848LL);
  if ( (int)v25 + 4 > 0 )
  {
    v26 = v90;
    a2 = (struct SURFACE *)(int)a2;
    v111 = (struct SURFACE *)(int)a2;
    while ( 1 )
    {
      v27 = 0;
      v86 = 0LL;
      if ( v23 )
      {
        switch ( v23 )
        {
          case 1:
            if ( !a2 && *((_DWORD *)a3 + 63) )
            {
              v57 = *(_QWORD *)(v24 + 728);
              goto LABEL_79;
            }
            break;
          case 2:
            if ( !a2 && *((_DWORD *)a3 + 64) )
            {
              v57 = *(_QWORD *)(v24 + 736);
              goto LABEL_79;
            }
            break;
          case 3:
            if ( !a2 && *((_DWORD *)a3 + 65) )
            {
              v57 = *(_QWORD *)(v24 + 744);
LABEL_79:
              v86 = v57;
              goto LABEL_18;
            }
            break;
          default:
            if ( !a2 )
            {
              v28 = *((_QWORD *)a3 + 34);
              if ( v28 )
                v27 = *(_DWORD *)(v28 + 4LL * (unsigned int)(v23 - 4));
              if ( v27 )
              {
                v86 = *(_QWORD *)(*(_QWORD *)(v24 + 752) + 8LL * (unsigned int)(v23 - 4));
LABEL_18:
                v30 = (RFONTOBJ *)&v86;
                goto LABEL_19;
              }
            }
            break;
        }
        v86 = 0LL;
      }
      else
      {
        v53 = *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64) + *((_DWORD *)a3 + 65);
        if ( (_DWORD)v25 )
        {
          v24 = *((_QWORD *)a3 + 34);
          v54 = (int *)v24;
          v55 = (unsigned int)v25;
          do
          {
            if ( v24 )
              v56 = *v54;
            else
              v56 = 0;
            v53 += v56;
            ++v54;
            --v55;
          }
          while ( v55 );
          v17 = v91;
          v18 = v98;
        }
        if ( v53 != v26 )
        {
          v30 = v14;
LABEL_19:
          v31 = (_DWORD *)*((_QWORD *)a3 + 27);
          v32 = v108;
          v33 = v106;
          v34 = v108;
          v35 = 0LL;
          v36 = (4 * (unsigned __int64)v90 + 3) >> 2;
          if ( v31 > &v31[v90] )
            v36 = 0LL;
          if ( v36 )
          {
            do
            {
              if ( *v31 == v23 )
                *v34++ = *v33;
              ++v33;
              ++v31;
              ++v35;
            }
            while ( v35 < v36 );
          }
          *((_QWORD *)a3 + 5) = v32;
          v37 = v34 - v32;
          v94 += v37;
          *(_DWORD *)a3 = v37;
          *((_DWORD *)a3 + 60) = v23;
          *((_DWORD *)a3 + 12) = 0;
          if ( v23 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v86, &v109) )
            ESTROBJ::ptlBaseLineAdjustSet(a3, &v109);
          v38 = *(_OWORD *)((char *)a3 + 12);
          *((_QWORD *)a3 + 7) = v30;
          *(_OWORD *)((char *)a3 + 188) = v38;
          v39 = *(_QWORD *)v30;
          if ( (*(_DWORD *)(*(_QWORD *)v30 + 72LL) & 2) == 0 )
          {
            v40 = *(float *)(v39 + 132);
            v41 = 0;
            ppgpos = 0LL;
            if ( v40 == 0.0 && *(float *)(v39 + 136) == 0.0 )
              goto LABEL_31;
            do
            {
              v74 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
              if ( pc )
              {
                v75 = 0;
                while ( 1 )
                {
                  pgb = ppgpos[v75].pgdf->pgb;
                  if ( pgb )
                  {
                    v77 = pgb->ptlOrigin.x + ppgpos[v75].ptl.x;
                    v78 = ppgpos[v75].ptl.y + pgb->ptlOrigin.y;
                    if ( v77 < *((_DWORD *)a3 + 3)
                      || pgb->sizlBitmap.cx + v77 > *((_DWORD *)a3 + 5)
                      || v78 < *((_DWORD *)a3 + 4)
                      || v78 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
                    {
                      break;
                    }
                  }
                  if ( ++v75 >= pc )
                    goto LABEL_116;
                }
                v41 = 1;
              }
LABEL_116:
              ;
            }
            while ( v74 );
            *((_QWORD *)a3 + 6) = 0LL;
            if ( !v41 )
            {
LABEL_31:
              v43 = SURFACE::pfnTextOut(v17);
              if ( (char *)v43 == (char *)SpTextOut
                || (char *)v43 == (char *)MulTextOut
                || (char *)v43 == (char *)BmpDevTextOut )
              {
                if ( (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & 0x10010000) == 0 )
                  goto LABEL_39;
                v45 = v95;
                SURFACE::pdcoAA(v42, v95);
              }
              else
              {
                v44 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                if ( (v44 & 0x10000) == 0 )
                  goto LABEL_39;
                if ( (*(_DWORD *)(*(_QWORD *)v95 + 72LL) & 0x1000000) != 0 && (v44 & 0x10000000) == 0 )
                {
                  v45 = v95;
                }
                else
                {
                  if ( v43 != EngTextOut )
                    SURFACE::pdcoAA(v17, v95);
                  v43 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_39:
                  v45 = v95;
                }
              }
              RFONTOBJ::PreTextOut(v30, v45);
              v46 = (PGLYPHPOS)v117;
              ppgpos = (PGLYPHPOS)v117;
              v89 = 0;
              v47 = 0;
              v48 = 0;
              if ( v30 != v97 && (*(_DWORD *)(*((_QWORD *)v17 + 6) + 56LL) & 0x8080) == 0x8080 )
              {
                v79 = UMPDReleaseRFONTSem(v97, 0LL, &v101, &v89, (int **)&ppgpos);
                v47 = v89;
                v48 = v79;
                v46 = ppgpos;
              }
              v49 = 0LL;
              v50 = 0LL;
              if ( v94 == v90 )
                v49 = v110;
              if ( v17 )
                v50 = (char *)v17 + 24;
              v84 = v98;
              v83 = (POINTL *)v104;
              pbo = (BRUSHOBJ *)v92;
              v51 = ((__int64 (__fastcall *)(char *, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v43)(
                      v50,
                      a3,
                      *(_QWORD *)v30,
                      pco,
                      v49);
              v88 = v51 != 0 ? v88 : 0;
              if ( v48 )
              {
                UMPDAcquireRFONTSem(v97, 0LL, v101, v47, (int *)v46);
                if ( v46 )
                {
                  if ( v46 != (PGLYPHPOS)v117 )
                    Win32FreePool(v46, v80, v81);
                }
              }
              RFONTOBJ::PostTextOut(v30, v95);
              SURFACE::pdcoAA(v17, 0LL);
              v23 = v87;
            }
            v16 = 0LL;
            v92 = 0LL;
LABEL_51:
            v52 = *(_OWORD *)((char *)a3 + 188);
            v86 = 0LL;
            *(_OWORD *)((char *)a3 + 12) = v52;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v86);
            v14 = v97;
            v13 = pco;
            v26 = v90;
            goto LABEL_14;
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
          if ( !v115 )
          {
            EngSetLastError(8u);
            v88 = 0;
LABEL_105:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            goto LABEL_51;
          }
          v63 = *((_QWORD *)v17 + 6);
          v96 = 0;
          v64 = 0;
          v89 = 0;
          v65 = 0;
          v66 = 0;
          v67 = (PGLYPHPOS)v116;
          ppgpos = (PGLYPHPOS)v116;
          v88 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
          if ( v88 )
          {
            v68 = (*(_DWORD *)(v63 + 56) & 0x8000) == 0;
            v69 = v97;
            if ( !v68 )
            {
              v70 = UMPDReleaseRFONTSem(v97, 0LL, &v96, &v89, (int **)&ppgpos);
              v65 = v96;
              v64 = v70;
              v66 = v89;
              v67 = ppgpos;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v30 + 488LL) & 0x8000) == 0 )
            {
              v113 = glaSimpleStroke;
              v71 = EPATHOBJ::bSimpleStroke(&ppo, a12, v103, v91, pco, 0LL, v102, v98, &v113, 0xD0Du);
              goto LABEL_99;
            }
            if ( ppo.cCurves > 1 )
            {
              v71 = EPATHOBJ::bSimpleFill(&ppo, a12, v103, v91, pco, v102, v98, 0xD0Du, 2u);
LABEL_99:
              v88 = v71;
            }
            if ( v64 )
            {
              UMPDAcquireRFONTSem(v69, 0LL, v65, v66, (int *)v67);
              if ( v67 )
              {
                if ( v67 != (PGLYPHPOS)v116 )
                  Win32FreePool(v67, v72, v73);
              }
            }
          }
          v17 = v91;
          v23 = v87;
          v16 = v92;
          goto LABEL_105;
        }
        if ( v16 )
        {
          left = v16->left;
          if ( v19->left > v16->left )
            left = v19->left;
          v13->rclBounds.left = left;
          right = v16->right;
          if ( v19->right < right )
            right = v19->right;
          v13->rclBounds.right = right;
          top = v16->top;
          if ( v19->top > top )
            top = v19->top;
          v13->rclBounds.top = top;
          bottom = v16->bottom;
          if ( v19->bottom < bottom )
            bottom = v19->bottom;
          v13->rclBounds.bottom = bottom;
        }
        if ( v13->rclBounds.left < v13->rclBounds.right && v13->rclBounds.top < v13->rclBounds.bottom && v16 )
        {
          v62 = v104;
          ++*((_DWORD *)v17 + 23);
          TextOutBitBlt(
            v17,
            v14,
            v25,
            (struct _SURFOBJ *)v24,
            v13,
            (struct _XLATEOBJ *)pbo,
            v16,
            v83,
            v84,
            v62,
            v18,
            v85);
          v19 = v105;
        }
        v16 = 0LL;
        v107 = *v19;
        v92 = 0LL;
        v86 = 0LL;
        v13->rclBounds = v107;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v86);
LABEL_14:
      v24 = *(_QWORD *)v14;
      ++v23;
      a2 = v111;
      v19 = v105;
      v18 = v98;
      v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)v14 + 848LL);
      v87 = v23;
      if ( v23 >= (int)v25 + 4 )
      {
        v22 = v88;
        break;
      }
    }
  }
  *((_QWORD *)a3 + 5) = v106;
  *((_QWORD *)a3 + 7) = v112;
  return v22;
}
