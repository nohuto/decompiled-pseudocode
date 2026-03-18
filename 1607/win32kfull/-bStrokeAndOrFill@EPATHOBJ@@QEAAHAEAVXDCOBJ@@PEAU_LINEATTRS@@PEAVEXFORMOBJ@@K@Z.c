/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C000F9E4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolygonInternal @ 0x1C00116E0 (GrePolyPolygonInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02916EC (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02918E4 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C0291FE0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C02921B8 (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0292770 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C0292950 (GrePolylineTo.c)
 *     NtGdiEllipse @ 0x1C0292B20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0292D40 (NtGdiRoundRect.c)
 *     NtGdiFillPath @ 0x1C02A6000 (NtGdiFillPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6660 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A67A0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0015AD0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02CC0B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **a2,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  LINEATTRS *v5; // r15
  POINTL *v8; // rdx
  unsigned int v9; // r12d
  unsigned int v10; // esi
  int *v11; // rax
  int v12; // ebx
  int v13; // edi
  int v14; // ecx
  POINTL *v15; // rax
  int v16; // ebx
  int v17; // edi
  LONG y; // ecx
  DC *v19; // rcx
  struct EPOINTL *v20; // rax
  struct EPOINTL *v21; // rax
  struct REGION *v22; // rax
  POINTL *v23; // rdx
  BRUSHOBJ *v24; // r10
  struct SURFACE *v25; // r9
  POINTL v26; // rax
  POINTL v27; // rdi
  __int64 v28; // rbx
  POINTL v29; // rax
  MIX v30; // ebx
  BRUSHOBJ *v31; // rdi
  unsigned int v32; // r12d
  unsigned int v33; // r12d
  struct SURFACE *v34; // rdi
  XFORMOBJ *v35; // r12
  int v37; // r11d
  POINTL v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  struct ECLIPOBJ *v42; // rdx
  int v43; // r8d
  __int64 v44; // r9
  bool v45; // zf
  POINTL v46; // rcx
  BRUSHOBJ *v47; // r11
  int v48; // eax
  POINTL v49; // rax
  BRUSHOBJ *v50; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+80h] [rbp-80h]
  struct SURFACE *v54; // [rsp+80h] [rbp-80h]
  MIX v55; // [rsp+88h] [rbp-78h]
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  FLOAT_LONG v58; // [rsp+9Ch] [rbp-64h]
  POINTL v60; // [rsp+A8h] [rbp-58h] BYREF
  BRUSHOBJ *v61[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+C0h] [rbp-40h]
  unsigned int v63; // [rsp+C4h] [rbp-3Ch]
  BRUSHOBJ *v64[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v65[32]; // [rsp+E0h] [rbp-20h] BYREF
  char v66[80]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v67; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pco; // [rsp+160h] [rbp+60h] BYREF

  v5 = a3;
  v63 = 0;
  v57 = 0;
  v58.l = 0;
  v55 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v8 = *a2;
  v9 = a5;
  v62 = a5;
  if ( (struct PEN *)v8[19] == gpPenNull )
    v9 = a5 & 0xFFFFFFFE;
  if ( (struct BRUSH *)v8[18] == gpbrNull )
    v9 &= ~2u;
  v10 = 1;
  if ( (v9 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v11 = (int *)ppo[1];
    v12 = v11[14] + 15;
    v13 = v11[15] + 15;
    v52 = v11[12] >> 4;
    LODWORD(v61[0]) = v52;
    v14 = v11[13];
    v15 = *a2;
    v16 = (v12 >> 4) + 1;
    v17 = (v13 >> 4) + 1;
    v53 = v14 >> 4;
    HIDWORD(v61[0]) = v14 >> 4;
    y = v15[4].y;
    v61[1] = (BRUSHOBJ *)__PAIR64__(v17, v16);
    if ( (y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)a2, (struct ERECTL *)v61);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)a2) )
      return v10;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v65, (struct XDCOBJ *)a2, 0);
    if ( (v65[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*a2)[64]) )
      {
        v19 = (DC *)*a2;
        v67 = *(_OWORD *)v61;
        v20 = DC::eptlOrigin(v19);
        LODWORD(v67) = *(_DWORD *)v20 + v52;
        DWORD2(v67) = v16 + *(_DWORD *)v20;
        DWORD1(v67) = *((_DWORD *)v20 + 1) + v53;
        HIDWORD(v67) = v17 + *((_DWORD *)v20 + 1);
        v21 = DC::eptlOrigin((DC *)*a2);
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, v21);
        v22 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v22, (struct ERECTL *)&v67, 0);
        v23 = *a2;
        if ( (*a2)[4].x == 2 || (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v9 & 1) != 0 && (v5->pstyle && (v5->fl & 1) == 0 || (v5->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v23[64], v5);
          goto LABEL_28;
        }
        v24 = (BRUSHOBJ *)&v23[216];
        v25 = (struct SURFACE *)v23[64];
        v26 = v23[6];
        v60 = v26;
        v27 = v23[12];
        v28 = *((_QWORD *)v25 + 15);
        v54 = v25;
        v61[0] = (BRUSHOBJ *)&v23[216];
        pbo = (BRUSHOBJ *)&v23[198];
        v64[0] = (BRUSHOBJ *)&v23[216];
        if ( (v9 & 1) == 0 )
        {
LABEL_15:
          if ( (v9 & 2) != 0 )
          {
            v29 = (*a2)[10];
            if ( ((LOBYTE((*a2)[41].y) | *(_BYTE *)(*(_QWORD *)&v29 + 8LL)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v29 + 8LL) &= ~1u;
              (*a2)[41].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                pbo,
                *a2,
                *(_QWORD *)&(*a2)[18],
                v27,
                v28,
                v25,
                1);
            }
            if ( (v9 & 1) == 0 || (v30 = v55, v55 >> 8 == (unsigned __int8)v55) )
              v30 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL));
          }
          else
          {
            v30 = v55;
          }
          if ( ((*a2)[4].y & 0xE0) != 0 )
          {
            v41 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v31 = v64[0];
            if ( !v41
              && ((_DWORD)v42 && ((__int64)v64[0][5].pvRbrush & 0x100) == 0
               || v43 && (*(_DWORD *)(v44 + 128) & 0x100) == 0) )
            {
              *(RECTL *)v64 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v42, (struct ERECTL *)v64);
            }
          }
          else
          {
            v31 = v64[0];
          }
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
          if ( !v9 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v60 + 2164LL) != 1 )
            {
              v9 = v62;
              v5 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v9 )
            {
              v35 = a4;
LABEL_82:
              v34 = v54;
LABEL_26:
              if ( v57 )
              {
                v5->fl ^= 4u;
                v5->elStyleState = v58;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
                v10 &= EPATHOBJ::bSimpleStroke(
                         ppo,
                         (*a2)[9].x,
                         (struct PDEVOBJ *)&v60,
                         v34,
                         &pco,
                         v35,
                         v61[0],
                         *a2 + 197,
                         v5,
                         v30);
              }
              goto LABEL_28;
            }
          }
          v32 = v9 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( !v33 )
            {
              v34 = v54;
              v35 = a4;
              v10 = EPATHOBJ::bSimpleFill(
                      ppo,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)&v60,
                      v54,
                      &pco,
                      pbo,
                      *a2 + 197,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
              goto LABEL_26;
            }
            v45 = v33 == 1;
            v35 = a4;
            if ( !v45 )
            {
              v10 = v63;
              goto LABEL_82;
            }
            v51 = v31;
            v34 = v54;
            v40 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*a2)[9].x,
                    (struct PDEVOBJ *)&v60,
                    v54,
                    &pco,
                    a4,
                    v51,
                    v5,
                    pbo,
                    *a2 + 197,
                    v30,
                    *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
          }
          else
          {
            v35 = a4;
            v50 = v31;
            v34 = v54;
            v40 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*a2)[9].x,
                    (struct PDEVOBJ *)&v60,
                    v54,
                    &pco,
                    a4,
                    v50,
                    *a2 + 197,
                    v5,
                    v30);
          }
          v10 = v40;
          goto LABEL_26;
        }
        if ( (v5->fl & 1) != 0 )
        {
          v37 = 1;
          if ( v24->iSolidColor == -1
            || (v23[232].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v26 + 1848LL) & 0x800000) == 0 )
          {
            goto LABEL_36;
          }
        }
        else
        {
          v37 = 0;
          if ( v24->iSolidColor != -1 )
          {
LABEL_36:
            v38 = (*a2)[10];
            if ( ((LOBYTE((*a2)[41].y) | *(_BYTE *)(*(_QWORD *)&v38 + 8LL)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v38 + 8LL) &= ~2u;
              (*a2)[41].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v24,
                *a2,
                *(_QWORD *)&(*a2)[19],
                v27,
                v28,
                v25,
                v37);
              v25 = v54;
              v24 = v61[0];
            }
            if ( v5->pstyle
              && ((__int64)v24[5].pvRbrush & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL) == 2
              && (v5->fl & 1) == 0 )
            {
              v57 = 1;
              v5->fl ^= 4u;
              LODWORD(v58.e) = v5->elStyleState;
              v46 = (*a2)[10];
              v47 = (BRUSHOBJ *)&(*a2)[252];
              v64[0] = v47;
              v48 = *(_DWORD *)(*(_QWORD *)&v46 + 8LL);
              if ( (v48 & 8) == 0 && v47->iSolidColor == -1 )
                *(_DWORD *)(*(_QWORD *)&v46 + 8LL) = v48 | 8;
              v49 = (*a2)[10];
              if ( ((LOBYTE((*a2)[41].y) | *(_BYTE *)(*(_QWORD *)&v49 + 8LL)) & 8) != 0 )
              {
                if ( ((*a2)[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v49 + 8LL) &= ~8u;
                  (*a2)[41].y &= ~8u;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v47,
                  *a2,
                  gpbrBackground,
                  v27,
                  v28,
                  v25,
                  0);
                v24 = v61[0];
              }
            }
            v39 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v24,
                    *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 72LL),
                    *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL));
            v25 = v54;
            v55 = v39;
            goto LABEL_15;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v23[10] + 8LL) |= 2u;
        goto LABEL_36;
      }
      EngSetLastError(5u);
      v10 = 0;
    }
    else
    {
      v10 = XDCOBJ::bFullScreen((XDCOBJ *)a2);
    }
LABEL_28:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
    DCOBJ::~DCOBJ((DCOBJ *)v66);
    return v10;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
  {
    if ( v5->pstyle )
      v5->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
