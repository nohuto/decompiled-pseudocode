/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880
 * Callers:
 *     NtGdiEllipse @ 0x1C0003530 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C0005000 (NtGdiRoundRect.c)
 *     NtGdiFillPath @ 0x1C0005E40 (NtGdiFillPath.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C0007534 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreRectangle @ 0x1C00A2BC4 (GreRectangle.c)
 *     GrePolyPolygonInternal @ 0x1C00CA9F4 (GrePolyPolygonInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreAngleArc @ 0x1C0292BF8 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C02931E0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C02933AC (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0293954 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C0293B30 (GrePolylineTo.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A5A40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A5B80 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02A9320 (NtGdiArcInternal.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CCE08 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00CD3F8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00CD570 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02C8930 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
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
  POINTL v37; // rax
  bool v38; // zf
  unsigned int v39; // eax
  int v40; // eax
  struct ECLIPOBJ *v41; // rdx
  int v42; // r8d
  __int64 v43; // r9
  POINTL v44; // rcx
  BRUSHOBJ *v45; // r11
  int v46; // eax
  POINTL v47; // rax
  BRUSHOBJ *v48; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+80h] [rbp-80h]
  struct SURFACE *v52; // [rsp+80h] [rbp-80h]
  unsigned int v53; // [rsp+88h] [rbp-78h]
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  FLOAT_LONG v55; // [rsp+98h] [rbp-68h]
  int v56; // [rsp+9Ch] [rbp-64h]
  POINTL v58; // [rsp+A8h] [rbp-58h] BYREF
  BRUSHOBJ *v59[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+C0h] [rbp-40h]
  unsigned int v61; // [rsp+C4h] [rbp-3Ch]
  BRUSHOBJ *v62[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v63[32]; // [rsp+E0h] [rbp-20h] BYREF
  char v64[80]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v65; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pco; // [rsp+160h] [rbp+60h] BYREF

  v5 = a3;
  v60 = 0;
  v56 = 0;
  v55.l = 0;
  v53 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v8 = *this;
  v9 = a5;
  v61 = a5;
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
    v50 = v11[12] >> 4;
    LODWORD(v59[0]) = v50;
    v14 = v11[13];
    v15 = *this;
    v16 = (v12 >> 4) + 1;
    v17 = (v13 >> 4) + 1;
    v51 = v14 >> 4;
    HIDWORD(v59[0]) = v14 >> 4;
    y = v15[4].y;
    v59[1] = (BRUSHOBJ *)__PAIR64__(v17, v16);
    if ( (y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)v59);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
      return v10;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v63, (struct XDCOBJ *)this, 0);
    if ( (v63[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[64]) )
      {
        v19 = (DC *)*this;
        v65 = *(_OWORD *)v59;
        v20 = DC::eptlOrigin(v19);
        LODWORD(v65) = *(_DWORD *)v20 + v50;
        DWORD2(v65) = v16 + *(_DWORD *)v20;
        DWORD1(v65) = *((_DWORD *)v20 + 1) + v51;
        HIDWORD(v65) = v17 + *((_DWORD *)v20 + 1);
        v21 = DC::eptlOrigin((DC *)*this);
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, v21);
        v22 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v22, (struct ERECTL *)&v65, 0);
        v23 = *this;
        if ( (*this)[4].x == 2 || (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v9 & 1) != 0 && (v5->pstyle && (v5->fl & 1) == 0 || (v5->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v23[64], v5);
          goto LABEL_28;
        }
        v24 = (BRUSHOBJ *)&v23[216];
        v25 = (struct SURFACE *)v23[64];
        v26 = v23[6];
        v58 = v26;
        v27 = v23[12];
        v28 = *((_QWORD *)v25 + 15);
        v52 = v25;
        v59[0] = (BRUSHOBJ *)&v23[216];
        pbo = (BRUSHOBJ *)&v23[198];
        v62[0] = (BRUSHOBJ *)&v23[216];
        if ( (v9 & 1) == 0 )
        {
LABEL_15:
          if ( (v9 & 2) != 0 )
          {
            v29 = (*this)[10];
            if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v29 + 8LL)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v29 + 8LL) &= ~1u;
              (*this)[41].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EBRUSHOBJ::vInitBrush)(
                pbo,
                *this,
                *(_QWORD *)&(*this)[18],
                v27,
                v28);
            }
            if ( (v9 & 1) == 0 || (v30 = v53, v53 >> 8 == (unsigned __int8)v53) )
              v30 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
          }
          else
          {
            v30 = v53;
          }
          if ( ((*this)[4].y & 0xE0) != 0 )
          {
            v40 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v31 = v62[0];
            if ( !v40
              && ((_DWORD)v41 && ((__int64)v62[0][5].pvRbrush & 0x100) == 0
               || v42 && (*(_DWORD *)(v43 + 128) & 0x100) == 0) )
            {
              *(RECTL *)v62 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)this, v41, (struct _RECTL *)v62);
            }
          }
          else
          {
            v31 = v62[0];
          }
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
          if ( !v9 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v58 + 2164LL) != 1 )
            {
              v9 = v61;
              v5 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v9 )
            {
              v35 = a4;
LABEL_78:
              v34 = v52;
LABEL_26:
              if ( v56 )
              {
                v5->fl ^= 4u;
                v5->elStyleState = v55;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
                v10 &= EPATHOBJ::bSimpleStroke(
                         ppo,
                         (*this)[9].x,
                         (struct PDEVOBJ *)&v58,
                         v34,
                         &pco,
                         v35,
                         v59[0],
                         *this + 197,
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
              v34 = v52;
              v35 = a4;
              v10 = EPATHOBJ::bSimpleFill(
                      ppo,
                      (*this)[9].x,
                      (struct PDEVOBJ *)&v58,
                      v52,
                      &pco,
                      pbo,
                      *this + 197,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
              goto LABEL_26;
            }
            v38 = v33 == 1;
            v35 = a4;
            if ( !v38 )
            {
              v10 = v60;
              goto LABEL_78;
            }
            v48 = v31;
            v34 = v52;
            v39 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v58,
                    v52,
                    &pco,
                    a4,
                    v48,
                    v5,
                    pbo,
                    *this + 197,
                    v30,
                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
          }
          else
          {
            v35 = a4;
            v49 = v31;
            v34 = v52;
            v39 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v58,
                    v52,
                    &pco,
                    a4,
                    v49,
                    *this + 197,
                    v5,
                    v30);
          }
          v10 = v39;
          goto LABEL_26;
        }
        if ( (v5->fl & 1) != 0 )
        {
          if ( v24->iSolidColor == -1
            || (v23[232].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v26 + 1848LL) & 0x800000) == 0 )
          {
            goto LABEL_36;
          }
        }
        else if ( v24->iSolidColor != -1 )
        {
LABEL_36:
          v37 = (*this)[10];
          if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v37 + 8LL)) & 2) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)&v37 + 8LL) &= ~2u;
            (*this)[41].y &= ~2u;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EBRUSHOBJ::vInitBrush)(
              v24,
              *this,
              *(_QWORD *)&(*this)[19],
              v27,
              v28);
            v24 = v59[0];
          }
          if ( v5->pstyle
            && ((__int64)v24[5].pvRbrush & 0x800) != 0
            && *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL) == 2
            && (v5->fl & 1) == 0 )
          {
            v56 = 1;
            v5->fl ^= 4u;
            LODWORD(v55.e) = v5->elStyleState;
            v44 = (*this)[10];
            v45 = (BRUSHOBJ *)&(*this)[252];
            v62[0] = v45;
            v46 = *(_DWORD *)(*(_QWORD *)&v44 + 8LL);
            if ( (v46 & 8) == 0 && v45->iSolidColor == -1 )
              *(_DWORD *)(*(_QWORD *)&v44 + 8LL) = v46 | 8;
            v47 = (*this)[10];
            if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v47 + 8LL)) & 8) != 0 )
            {
              if ( ((*this)[9].x & 0x8000) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)&v47 + 8LL) &= ~8u;
                (*this)[41].y &= ~8u;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EBRUSHOBJ::vInitBrush)(
                v45,
                *this,
                gpbrBackground,
                v27,
                v28);
              v24 = v59[0];
            }
          }
          v53 = EBRUSHOBJ::mixBest(
                  (EBRUSHOBJ *)v24,
                  *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                  *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
          goto LABEL_15;
        }
        *(_DWORD *)(*(_QWORD *)&v23[10] + 8LL) |= 2u;
        goto LABEL_36;
      }
      EngSetLastError(5u);
      v10 = 0;
    }
    else
    {
      v10 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    }
LABEL_28:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v63);
    DCOBJ::~DCOBJ((DCOBJ *)v64);
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
