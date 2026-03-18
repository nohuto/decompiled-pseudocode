/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002ACE0 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002AD0C (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C009CDBC (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C009CDD8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD3F8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1794 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     STROBJ_bEnum @ 0x1C01002D0 (STROBJ_bEnum.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C028B130 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029ACDC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B62DC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  int v29; // eax
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
  struct XDCOBJ *v44; // rbx
  PGLYPHPOS v45; // rbx
  unsigned int v46; // r14d
  int v47; // r15d
  struct _RECTL *v48; // rcx
  char *v49; // r10
  int v50; // eax
  __int128 v51; // xmm0
  __int64 v52; // rdx
  __int64 v53; // rax
  int *v54; // rcx
  __int64 v55; // r10
  int v56; // edx
  LONG left; // ecx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // ecx
  struct _BRUSHOBJ *v61; // rax
  __int64 v62; // rbx
  int v63; // r12d
  unsigned int v64; // r14d
  unsigned int v65; // r15d
  PGLYPHPOS v66; // rsi
  bool v67; // zf
  struct RFONTOBJ *v68; // rbx
  int v69; // eax
  int v70; // eax
  BOOL v71; // eax
  int v72; // r10d
  GLYPHBITS *pgb; // rdx
  int v74; // ecx
  int v75; // r8d
  int v76; // edx
  int v77; // eax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v79; // [rsp+38h] [rbp-C8h]
  POINTL *v80; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h]
  int v83; // [rsp+6Ch] [rbp-94h]
  unsigned int v84; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v85; // [rsp+74h] [rbp-8Ch]
  struct SURFACE *v86; // [rsp+78h] [rbp-88h]
  PGLYPHPOS ppgpos; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v88; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+98h] [rbp-68h]
  POINTL *v91; // [rsp+A0h] [rbp-60h]
  struct RFONTOBJ *v92; // [rsp+A8h] [rbp-58h]
  unsigned int v93; // [rsp+B0h] [rbp-50h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  BRUSHOBJ *v95; // [rsp+C0h] [rbp-40h]
  unsigned int v96; // [rsp+C8h] [rbp-38h] BYREF
  ULONG pc; // [rsp+CCh] [rbp-34h] BYREF
  struct _BRUSHOBJ *v98; // [rsp+D0h] [rbp-30h]
  struct _RECTL *v99; // [rsp+D8h] [rbp-28h]
  _WORD *v100; // [rsp+E0h] [rbp-20h]
  struct PDEVOBJ *v101; // [rsp+E8h] [rbp-18h]
  RECTL v102; // [rsp+F0h] [rbp-10h]
  struct _POINTL v103; // [rsp+100h] [rbp+0h] BYREF
  _WORD *v104; // [rsp+108h] [rbp+8h]
  __int64 v105; // [rsp+110h] [rbp+10h]
  struct SURFACE *v106; // [rsp+118h] [rbp+18h]
  struct _RECTL *v107; // [rsp+120h] [rbp+20h]
  LINEATTRS v108; // [rsp+128h] [rbp+28h] BYREF
  PATHOBJ ppo; // [rsp+150h] [rbp+50h] BYREF
  __int64 v110; // [rsp+158h] [rbp+58h]
  int v111[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v112[10]; // [rsp+1F8h] [rbp+F8h] BYREF

  v13 = a4;
  v14 = a10;
  v16 = a6;
  v17 = a2;
  v18 = a9;
  v19 = a13;
  v107 = a5;
  v95 = a7;
  v98 = a8;
  v101 = a11;
  v85 = *(_DWORD *)a3;
  v105 = *((_QWORD *)a3 + 7);
  v104 = (_WORD *)*((_QWORD *)a3 + 26);
  v20 = (_WORD *)*((_QWORD *)a3 + 5);
  pco = a4;
  *((_QWORD *)a3 + 4) = 0LL;
  v21 = *(_DWORD **)a10;
  v100 = v20;
  v86 = a2;
  v89 = a1;
  LODWORD(a2) = 0;
  LODWORD(v20) = v21[122];
  v22 = 1;
  v88 = a6;
  v91 = a9;
  v92 = a10;
  v99 = a13;
  v90 = 0;
  v83 = 1;
  if ( ((unsigned __int8)v20 & 4) != 0 && v21[50] == 1 )
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a1 + 2172LL) != v21[97];
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v23 = 0;
  v82 = 0;
  v24 = *(_QWORD *)a10;
  v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)a10 + 848LL);
  if ( (int)v25 + 4 > 0 )
  {
    v26 = v85;
    a2 = (struct SURFACE *)(int)a2;
    v106 = (struct SURFACE *)(int)a2;
    while ( 1 )
    {
      v27 = 0;
      v81 = 0LL;
      if ( v23 )
      {
        switch ( v23 )
        {
          case 1:
            if ( !a2 && *((_DWORD *)a3 + 63) )
            {
              v53 = *(_QWORD *)(v24 + 728);
              goto LABEL_55;
            }
            break;
          case 2:
            if ( !a2 && *((_DWORD *)a3 + 64) )
            {
              v53 = *(_QWORD *)(v24 + 736);
LABEL_55:
              v81 = v53;
              goto LABEL_56;
            }
            break;
          case 3:
            if ( !a2 && *((_DWORD *)a3 + 65) )
            {
              v53 = *(_QWORD *)(v24 + 744);
              goto LABEL_55;
            }
            break;
          default:
            if ( !a2 )
            {
              v52 = *((_QWORD *)a3 + 34);
              if ( v52 )
                v27 = *(_DWORD *)(v52 + 4LL * (unsigned int)(v23 - 4));
              if ( v27 )
              {
                v81 = *(_QWORD *)(*(_QWORD *)(v24 + 752) + 8LL * (unsigned int)(v23 - 4));
LABEL_56:
                v30 = (RFONTOBJ *)&v81;
LABEL_24:
                v31 = (_DWORD *)*((_QWORD *)a3 + 27);
                v32 = v104;
                v33 = v100;
                v34 = v104;
                v35 = 0LL;
                v36 = (4 * (unsigned __int64)v85 + 3) >> 2;
                if ( v31 > &v31[v85] )
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
                v90 += v37;
                *(_DWORD *)a3 = v37;
                *((_DWORD *)a3 + 60) = v23;
                *((_DWORD *)a3 + 12) = 0;
                if ( v23 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v81, &v103) )
                  ESTROBJ::ptlBaseLineAdjustSet(a3, &v103);
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
                    goto LABEL_34;
                  do
                  {
                    v71 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
                    if ( pc )
                    {
                      v72 = 0;
                      while ( 1 )
                      {
                        pgb = ppgpos[v72].pgdf->pgb;
                        if ( pgb )
                        {
                          v74 = pgb->ptlOrigin.x + ppgpos[v72].ptl.x;
                          v75 = ppgpos[v72].ptl.y + pgb->ptlOrigin.y;
                          if ( v74 < *((_DWORD *)a3 + 3)
                            || pgb->sizlBitmap.cx + v74 > *((_DWORD *)a3 + 5)
                            || v75 < *((_DWORD *)a3 + 4)
                            || v75 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
                          {
                            break;
                          }
                        }
                        if ( ++v72 >= pc )
                          goto LABEL_106;
                      }
                      v41 = 1;
                    }
LABEL_106:
                    ;
                  }
                  while ( v71 );
                  *((_QWORD *)a3 + 6) = 0LL;
                  if ( !v41 )
                  {
LABEL_34:
                    v43 = SURFACE::pfnTextOut(v17);
                    if ( (char *)v43 == (char *)SpTextOut
                      || (char *)v43 == (char *)MulTextOut
                      || (char *)v43 == (char *)BmpDevTextOut )
                    {
                      if ( (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & 0x10010000) == 0 )
                        goto LABEL_116;
                      v44 = v89;
                      SURFACE::pdcoAA(v42, v89);
                    }
                    else
                    {
                      v76 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                      if ( (v76 & 0x10000) == 0 )
                        goto LABEL_116;
                      if ( (*(_DWORD *)(*(_QWORD *)v89 + 72LL) & 0x1000000) != 0 && (v76 & 0x10000000) == 0 )
                      {
                        v44 = v89;
                      }
                      else
                      {
                        if ( v43 != EngTextOut )
                          SURFACE::pdcoAA(v17, v89);
                        v43 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_116:
                        v44 = v89;
                      }
                    }
                    RFONTOBJ::PreTextOut(v30, v44);
                    v45 = (PGLYPHPOS)v111;
                    ppgpos = (PGLYPHPOS)v111;
                    v84 = 0;
                    v46 = 0;
                    v47 = 0;
                    if ( v30 != v92 && (*(_DWORD *)(*((_QWORD *)v17 + 6) + 56LL) & 0x8080) == 0x8080 )
                    {
                      v77 = UMPDReleaseRFONTSem(v92, 0LL, &v96, &v84, (int **)&ppgpos);
                      v46 = v84;
                      v47 = v77;
                      v45 = ppgpos;
                    }
                    v48 = 0LL;
                    v49 = 0LL;
                    if ( v90 == v85 )
                      v48 = v107;
                    if ( v17 )
                      v49 = (char *)v17 + 24;
                    v80 = v91;
                    v79 = (POINTL *)v98;
                    pbo = (BRUSHOBJ *)v88;
                    v50 = ((__int64 (__fastcall *)(char *, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v43)(
                            v49,
                            a3,
                            *(_QWORD *)v30,
                            pco,
                            v48);
                    v83 = v50 != 0 ? v83 : 0;
                    if ( v47 )
                    {
                      UMPDAcquireRFONTSem(v92, 0LL, v96, v46, (int *)v45);
                      if ( v45 )
                      {
                        if ( v45 != (PGLYPHPOS)v111 )
                          Win32FreePool(v45);
                      }
                    }
                    RFONTOBJ::PostTextOut(v30, v89);
                    SURFACE::pdcoAA(v17, 0LL);
                    v23 = v82;
                  }
                  v16 = 0LL;
                  v88 = 0LL;
LABEL_45:
                  v51 = *(_OWORD *)((char *)a3 + 188);
                  v81 = 0LL;
                  *(_OWORD *)((char *)a3 + 12) = v51;
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v81);
                  v14 = v92;
                  v13 = pco;
                  v26 = v85;
                  goto LABEL_14;
                }
                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                if ( !v110 )
                {
                  EngSetLastError(8u);
                  v83 = 0;
LABEL_95:
                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  goto LABEL_45;
                }
                v62 = *((_QWORD *)v17 + 6);
                v93 = 0;
                v63 = 0;
                v84 = 0;
                v64 = 0;
                v65 = 0;
                v66 = (PGLYPHPOS)v112;
                ppgpos = (PGLYPHPOS)v112;
                v83 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
                if ( v83 )
                {
                  v67 = (*(_DWORD *)(v62 + 56) & 0x8000) == 0;
                  v68 = v92;
                  if ( !v67 )
                  {
                    v69 = UMPDReleaseRFONTSem(v92, 0LL, &v93, &v84, (int **)&ppgpos);
                    v64 = v93;
                    v63 = v69;
                    v65 = v84;
                    v66 = ppgpos;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)v30 + 488LL) & 0x8000) == 0 )
                  {
                    v108 = glaSimpleStroke;
                    v70 = EPATHOBJ::bSimpleStroke(&ppo, a12, v101, v86, pco, 0LL, v95, v91, &v108, 0xD0Du);
                    goto LABEL_89;
                  }
                  if ( ppo.cCurves > 1 )
                  {
                    v70 = EPATHOBJ::bSimpleFill(&ppo, a12, v101, v86, pco, v95, v91, 0xD0Du, 2u);
LABEL_89:
                    v83 = v70;
                  }
                  if ( v63 )
                  {
                    UMPDAcquireRFONTSem(v68, 0LL, v64, v65, (int *)v66);
                    if ( v66 )
                    {
                      if ( v66 != (PGLYPHPOS)v112 )
                        Win32FreePool(v66);
                    }
                  }
                }
                v17 = v86;
                v23 = v82;
                v16 = v88;
                goto LABEL_95;
              }
            }
            break;
        }
        v81 = 0LL;
      }
      else
      {
        v29 = *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64) + *((_DWORD *)a3 + 65);
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
            v29 += v56;
            ++v54;
            --v55;
          }
          while ( v55 );
          v17 = v86;
          v18 = v91;
        }
        if ( v29 != v26 )
        {
          v30 = v14;
          goto LABEL_24;
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
          v61 = v98;
          ++*((_DWORD *)v17 + 23);
          TextOutBitBlt(v17, v14, v25, (struct _SURFOBJ *)v24, v13, (struct _XLATEOBJ *)pbo, v16, v79, v80, v61, v18);
          v19 = v99;
        }
        v16 = 0LL;
        v102 = *v19;
        v88 = 0LL;
        v81 = 0LL;
        v13->rclBounds = v102;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v81);
LABEL_14:
      v24 = *(_QWORD *)v14;
      ++v23;
      a2 = v106;
      v19 = v99;
      v18 = v91;
      v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)v14 + 848LL);
      v82 = v23;
      if ( v23 >= (int)v25 + 4 )
      {
        v22 = v83;
        break;
      }
    }
  }
  *((_QWORD *)a3 + 5) = v100;
  *((_QWORD *)a3 + 7) = v105;
  return v22;
}
