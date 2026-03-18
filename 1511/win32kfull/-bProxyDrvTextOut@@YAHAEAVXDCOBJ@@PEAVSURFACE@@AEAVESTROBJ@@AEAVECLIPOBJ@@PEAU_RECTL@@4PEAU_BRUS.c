/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0102FFC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C000C3F0 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0016688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002344C (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023478 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1C0038D5C (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0038D78 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     STROBJ_bEnum @ 0x1C0107280 (STROBJ_bEnum.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C010F4B8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0130BC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029A764 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B56F0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  int v30; // eax
  int *v31; // rcx
  __int64 v32; // r10
  int v33; // edx
  RFONTOBJ *v34; // r13
  _DWORD *v35; // r9
  _WORD *v36; // rsi
  _WORD *v37; // r10
  _WORD *v38; // rdx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int128 v42; // xmm0
  __int64 v43; // rcx
  float v44; // xmm0_4
  int v45; // r14d
  SURFACE *v46; // rcx
  __int64 (__fastcall *v47)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  int v48; // edx
  struct XDCOBJ *v49; // rbx
  PGLYPHPOS v50; // rbx
  unsigned int v51; // r14d
  int v52; // r15d
  struct _RECTL *v53; // rcx
  char *v54; // r10
  int v55; // eax
  __int128 v56; // xmm0
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
  BOOL v72; // eax
  int v73; // r10d
  GLYPHBITS *pgb; // rdx
  int v75; // ecx
  int v76; // r8d
  int v77; // eax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v79; // [rsp+38h] [rbp-C8h]
  POINTL *v80; // [rsp+40h] [rbp-C0h]
  unsigned int v81; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  int v83; // [rsp+68h] [rbp-98h]
  int v84; // [rsp+6Ch] [rbp-94h]
  unsigned int v85; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v86; // [rsp+74h] [rbp-8Ch]
  struct SURFACE *v87; // [rsp+78h] [rbp-88h]
  PGLYPHPOS ppgpos; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v89; // [rsp+88h] [rbp-78h]
  struct XDCOBJ *v90; // [rsp+90h] [rbp-70h]
  int v91; // [rsp+98h] [rbp-68h]
  POINTL *v92; // [rsp+A0h] [rbp-60h]
  struct RFONTOBJ *v93; // [rsp+A8h] [rbp-58h]
  unsigned int v94; // [rsp+B0h] [rbp-50h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  BRUSHOBJ *v96; // [rsp+C0h] [rbp-40h]
  unsigned int v97; // [rsp+C8h] [rbp-38h] BYREF
  ULONG pc; // [rsp+CCh] [rbp-34h] BYREF
  struct _BRUSHOBJ *v99; // [rsp+D0h] [rbp-30h]
  struct _RECTL *v100; // [rsp+D8h] [rbp-28h]
  _WORD *v101; // [rsp+E0h] [rbp-20h]
  struct PDEVOBJ *v102; // [rsp+E8h] [rbp-18h]
  RECTL v103; // [rsp+F0h] [rbp-10h]
  struct _POINTL v104; // [rsp+100h] [rbp+0h] BYREF
  _WORD *v105; // [rsp+108h] [rbp+8h]
  __int64 v106; // [rsp+110h] [rbp+10h]
  struct SURFACE *v107; // [rsp+118h] [rbp+18h]
  struct _RECTL *v108; // [rsp+120h] [rbp+20h]
  LINEATTRS v109; // [rsp+128h] [rbp+28h] BYREF
  PATHOBJ ppo; // [rsp+150h] [rbp+50h] BYREF
  __int64 v111; // [rsp+158h] [rbp+58h]
  int v112[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v113[10]; // [rsp+1F8h] [rbp+F8h] BYREF

  v13 = a4;
  v14 = a10;
  v16 = a6;
  v17 = a2;
  v18 = a9;
  v19 = a13;
  v108 = a5;
  v96 = a7;
  v99 = a8;
  v102 = a11;
  v86 = *(_DWORD *)a3;
  v106 = *((_QWORD *)a3 + 7);
  v105 = (_WORD *)*((_QWORD *)a3 + 26);
  v20 = (_WORD *)*((_QWORD *)a3 + 5);
  pco = a4;
  *((_QWORD *)a3 + 4) = 0LL;
  v21 = *(_DWORD **)a10;
  v101 = v20;
  v87 = a2;
  v90 = a1;
  LODWORD(a2) = 0;
  LODWORD(v20) = v21[122];
  v22 = 1;
  v89 = a6;
  v92 = a9;
  v93 = a10;
  v100 = a13;
  v91 = 0;
  v84 = 1;
  if ( ((unsigned __int8)v20 & 4) != 0 && v21[50] == 1 )
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a1 + 2148LL) != v21[97];
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v23 = 0;
  v83 = 0;
  v24 = *(_QWORD *)a10;
  v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)a10 + 848LL);
  if ( (int)v25 + 4 > 0 )
  {
    v26 = v86;
    a2 = (struct SURFACE *)(int)a2;
    v107 = (struct SURFACE *)(int)a2;
    while ( 1 )
    {
      v27 = 0;
      v82 = 0LL;
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
              v82 = v57;
              goto LABEL_40;
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
                v82 = *(_QWORD *)(*(_QWORD *)(v24 + 752) + 8LL * (unsigned int)(v23 - 4));
LABEL_40:
                v34 = (RFONTOBJ *)&v82;
                goto LABEL_41;
              }
            }
            break;
        }
        v82 = 0LL;
      }
      else
      {
        v30 = *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64) + *((_DWORD *)a3 + 65);
        if ( (_DWORD)v25 )
        {
          v24 = *((_QWORD *)a3 + 34);
          v31 = (int *)v24;
          v32 = (unsigned int)v25;
          do
          {
            if ( v24 )
              v33 = *v31;
            else
              v33 = 0;
            v30 += v33;
            ++v31;
            --v32;
          }
          while ( v32 );
          v17 = v87;
          v18 = v92;
        }
        if ( v30 != v26 )
        {
          v34 = v14;
LABEL_41:
          v35 = (_DWORD *)*((_QWORD *)a3 + 27);
          v36 = v105;
          v37 = v101;
          v38 = v105;
          v39 = 0LL;
          v40 = (4 * (unsigned __int64)v86 + 3) >> 2;
          if ( v35 > &v35[v86] )
            v40 = 0LL;
          if ( v40 )
          {
            do
            {
              if ( *v35 == v23 )
                *v38++ = *v37;
              ++v37;
              ++v35;
              ++v39;
            }
            while ( v39 < v40 );
          }
          *((_QWORD *)a3 + 5) = v36;
          v41 = v38 - v36;
          v91 += v41;
          *(_DWORD *)a3 = v41;
          *((_DWORD *)a3 + 60) = v23;
          *((_DWORD *)a3 + 12) = 0;
          if ( v23 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v82, &v104) )
            ESTROBJ::ptlBaseLineAdjustSet(a3, &v104);
          v42 = *(_OWORD *)((char *)a3 + 12);
          *((_QWORD *)a3 + 7) = v34;
          *(_OWORD *)((char *)a3 + 188) = v42;
          v43 = *(_QWORD *)v34;
          if ( (*(_DWORD *)(*(_QWORD *)v34 + 72LL) & 2) == 0 )
          {
            v44 = *(float *)(v43 + 132);
            v45 = 0;
            ppgpos = 0LL;
            if ( v44 != 0.0 || *(float *)(v43 + 136) != 0.0 )
            {
              do
              {
                v72 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
                if ( pc )
                {
                  v73 = 0;
                  while ( 1 )
                  {
                    pgb = ppgpos[v73].pgdf->pgb;
                    if ( pgb )
                    {
                      v75 = pgb->ptlOrigin.x + ppgpos[v73].ptl.x;
                      v76 = ppgpos[v73].ptl.y + pgb->ptlOrigin.y;
                      if ( v75 < *((_DWORD *)a3 + 3)
                        || pgb->sizlBitmap.cx + v75 > *((_DWORD *)a3 + 5)
                        || v76 < *((_DWORD *)a3 + 4)
                        || v76 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
                      {
                        break;
                      }
                    }
                    if ( ++v73 >= pc )
                      goto LABEL_116;
                  }
                  v45 = 1;
                }
LABEL_116:
                ;
              }
              while ( v72 );
              *((_QWORD *)a3 + 6) = 0LL;
              if ( v45 )
                goto LABEL_68;
            }
            v47 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))SURFACE::pfnTextOut(v17);
            if ( v47 == SpTextOut || v47 == MulTextOut || v47 == BmpDevTextOut )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v34 + 12LL) & 0x10010000) != 0 )
              {
                v49 = v90;
                SURFACE::pdcoAA(v46, v90);
                goto LABEL_59;
              }
            }
            else
            {
              v48 = *(_DWORD *)(*(_QWORD *)v34 + 12LL);
              if ( (v48 & 0x10000) != 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)v90 + 72LL) & 0x1000000) != 0 && (v48 & 0x10000000) == 0 )
                {
                  v49 = v90;
LABEL_59:
                  RFONTOBJ::PreTextOut(v34, v49);
                  v50 = (PGLYPHPOS)v112;
                  ppgpos = (PGLYPHPOS)v112;
                  v85 = 0;
                  v51 = 0;
                  v52 = 0;
                  if ( v34 != v93 && (*(_DWORD *)(*((_QWORD *)v17 + 6) + 56LL) & 0x8080) == 0x8080 )
                  {
                    v77 = UMPDReleaseRFONTSem(v93, 0LL, &v97, &v85, (int **)&ppgpos);
                    v51 = v85;
                    v52 = v77;
                    v50 = ppgpos;
                  }
                  v53 = 0LL;
                  v54 = 0LL;
                  if ( v91 == v86 )
                    v53 = v108;
                  if ( v17 )
                    v54 = (char *)v17 + 24;
                  v80 = v92;
                  v79 = (POINTL *)v99;
                  pbo = (BRUSHOBJ *)v89;
                  v55 = ((__int64 (__fastcall *)(char *, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v47)(
                          v54,
                          a3,
                          *(_QWORD *)v34,
                          pco,
                          v53);
                  v84 = v55 != 0 ? v84 : 0;
                  if ( v52 )
                  {
                    UMPDAcquireRFONTSem(v93, 0LL, v97, v51, (int *)v50);
                    if ( v50 )
                    {
                      if ( v50 != (PGLYPHPOS)v112 )
                        Win32FreePool(v50);
                    }
                  }
                  RFONTOBJ::PostTextOut(v34, v90);
                  SURFACE::pdcoAA(v17, 0LL);
                  v23 = v83;
LABEL_68:
                  v16 = 0LL;
                  v89 = 0LL;
LABEL_69:
                  v56 = *(_OWORD *)((char *)a3 + 188);
                  v82 = 0LL;
                  *(_OWORD *)((char *)a3 + 12) = v56;
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v82);
                  v14 = v93;
                  v13 = pco;
                  v26 = v86;
                  goto LABEL_14;
                }
                if ( (char *)v47 != (char *)EngTextOut )
                  SURFACE::pdcoAA(v17, v90);
                v47 = SpTextOut;
              }
            }
            v49 = v90;
            goto LABEL_59;
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
          if ( !v111 )
          {
            EngSetLastError(8u);
            v84 = 0;
LABEL_105:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            goto LABEL_69;
          }
          v63 = *((_QWORD *)v17 + 6);
          v94 = 0;
          v64 = 0;
          v85 = 0;
          v65 = 0;
          v66 = 0;
          v67 = (PGLYPHPOS)v113;
          ppgpos = (PGLYPHPOS)v113;
          v84 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
          if ( v84 )
          {
            v68 = (*(_DWORD *)(v63 + 56) & 0x8000) == 0;
            v69 = v93;
            if ( !v68 )
            {
              v70 = UMPDReleaseRFONTSem(v93, 0LL, &v94, &v85, (int **)&ppgpos);
              v65 = v94;
              v64 = v70;
              v66 = v85;
              v67 = ppgpos;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v34 + 488LL) & 0x8000) == 0 )
            {
              v109 = glaSimpleStroke;
              v71 = EPATHOBJ::bSimpleStroke(&ppo, a12, v102, v87, pco, 0LL, v96, v92, &v109, 0xD0Du);
              goto LABEL_99;
            }
            if ( ppo.cCurves > 1 )
            {
              v71 = EPATHOBJ::bSimpleFill(&ppo, a12, v102, v87, pco, v96, v92, 0xD0Du, 2u);
LABEL_99:
              v84 = v71;
            }
            if ( v64 )
            {
              UMPDAcquireRFONTSem(v69, 0LL, v65, v66, (int *)v67);
              if ( v67 )
              {
                if ( v67 != (PGLYPHPOS)v113 )
                  Win32FreePool(v67);
              }
            }
          }
          v17 = v87;
          v23 = v83;
          v16 = v89;
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
          v62 = v99;
          ++*((_DWORD *)v17 + 23);
          TextOutBitBlt(
            v17,
            v14,
            v25,
            (struct _SURFOBJ *)v24,
            v13,
            (struct _XLATEOBJ *)pbo,
            v16,
            v79,
            v80,
            v62,
            v18,
            v81);
          v19 = v100;
        }
        v16 = 0LL;
        v103 = *v19;
        v89 = 0LL;
        v82 = 0LL;
        v13->rclBounds = v103;
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v82);
LABEL_14:
      v24 = *(_QWORD *)v14;
      ++v23;
      a2 = v107;
      v19 = v100;
      v18 = v92;
      v25 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)v14 + 848LL);
      v83 = v23;
      if ( v23 >= (int)v25 + 4 )
      {
        v22 = v84;
        break;
      }
    }
  }
  *((_QWORD *)a3 + 5) = v101;
  *((_QWORD *)a3 + 7) = v106;
  return v22;
}
