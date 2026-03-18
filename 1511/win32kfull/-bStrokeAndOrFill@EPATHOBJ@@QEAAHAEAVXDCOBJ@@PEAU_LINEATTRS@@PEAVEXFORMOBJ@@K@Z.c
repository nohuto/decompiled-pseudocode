/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0
 * Callers:
 *     NtGdiEllipse @ 0x1C0003B50 (NtGdiEllipse.c)
 *     GrePolyPolygonInternal @ 0x1C0010084 (GrePolyPolygonInternal.c)
 *     GreRectangle @ 0x1C00FC0C4 (GreRectangle.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02923B8 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02925A8 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C0292CA0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C0292E74 (GrePolyDraw.c)
 *     GrePolyPolylineInternal @ 0x1C0293414 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C02935F0 (GrePolylineTo.c)
 *     NtGdiRoundRect @ 0x1C02937B0 (NtGdiRoundRect.c)
 *     NtGdiFillPath @ 0x1C02A4E80 (NtGdiFillPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A54A0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A55E0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0016688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0040108 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00FE6C0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0130BC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027AEF0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02C89B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
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
  int v37; // r11d
  POINTL v38; // rax
  unsigned int v39; // eax
  int v40; // eax
  struct ECLIPOBJ *v41; // rdx
  int v42; // r8d
  __int64 v43; // r9
  unsigned int v44; // eax
  POINTL v46; // rcx
  BRUSHOBJ *v47; // r11
  int v48; // eax
  POINTL v49; // rax
  bool v50; // zf
  BRUSHOBJ *v51; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+80h] [rbp-80h]
  struct SURFACE *v55; // [rsp+80h] [rbp-80h]
  MIX v56; // [rsp+88h] [rbp-78h]
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  FLOAT_LONG v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+9Ch] [rbp-64h]
  POINTL v61; // [rsp+A8h] [rbp-58h] BYREF
  BRUSHOBJ *v62[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+C0h] [rbp-40h]
  unsigned int v64; // [rsp+C4h] [rbp-3Ch]
  BRUSHOBJ *v65[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v66[80]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v67; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ pco; // [rsp+140h] [rbp+40h] BYREF

  v5 = a3;
  v63 = 0;
  v59 = 0;
  v58.l = 0;
  v56 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v8 = *this;
  v9 = a5;
  v64 = a5;
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
    v53 = v11[12] >> 4;
    LODWORD(v62[0]) = v53;
    v14 = v11[13];
    v15 = *this;
    v16 = (v12 >> 4) + 1;
    v17 = (v13 >> 4) + 1;
    v54 = v14 >> 4;
    HIDWORD(v62[0]) = v14 >> 4;
    y = v15[4].y;
    v62[1] = (BRUSHOBJ *)__PAIR64__(v17, v16);
    if ( (y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)v62);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
      return v10;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v66, (struct XDCOBJ *)this, 0);
    if ( (v66[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[64]) )
      {
        v19 = (DC *)*this;
        v67 = *(_OWORD *)v62;
        v20 = DC::eptlOrigin(v19);
        LODWORD(v67) = *(_DWORD *)v20 + v53;
        DWORD2(v67) = v16 + *(_DWORD *)v20;
        DWORD1(v67) = *((_DWORD *)v20 + 1) + v54;
        HIDWORD(v67) = v17 + *((_DWORD *)v20 + 1);
        v21 = DC::eptlOrigin((DC *)*this);
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, v21);
        v22 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v22, (struct ERECTL *)&v67, 0);
        v23 = *this;
        if ( (*this)[4].x == 2 || (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v9 & 1) != 0 && (v5->pstyle && (v5->fl & 1) == 0 || (v5->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v23[64], v5);
          goto LABEL_28;
        }
        v24 = (BRUSHOBJ *)&v23[213];
        v25 = (struct SURFACE *)v23[64];
        v26 = v23[6];
        v61 = v26;
        v27 = v23[12];
        v28 = *((_QWORD *)v25 + 15);
        v55 = v25;
        v62[0] = (BRUSHOBJ *)&v23[213];
        pbo = (BRUSHOBJ *)&v23[195];
        v65[0] = (BRUSHOBJ *)&v23[213];
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
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                pbo,
                *this,
                *(_QWORD *)&(*this)[18],
                v27,
                v28,
                v25,
                1);
            }
            if ( (v9 & 1) == 0 || (v30 = v56, v56 >> 8 == (unsigned __int8)v56) )
              v30 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
          }
          else
          {
            v30 = v56;
          }
          if ( ((*this)[4].y & 0xE0) != 0 )
          {
            v40 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v31 = v65[0];
            if ( !v40
              && ((_DWORD)v41 && ((__int64)v65[0][5].pvRbrush & 0x100) == 0
               || v42 && (*(_DWORD *)(v43 + 128) & 0x100) == 0) )
            {
              *(RECTL *)v65 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)this, v41, (struct ERECTL *)v65);
            }
          }
          else
          {
            v31 = v65[0];
          }
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
          if ( !v9 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v61 + 2164LL) != 1 )
            {
              v9 = v64;
              v5 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v9 )
            {
              v35 = a4;
LABEL_78:
              v34 = v55;
LABEL_26:
              if ( v59 )
              {
                v5->fl ^= 4u;
                v5->elStyleState = v58;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
                v10 &= EPATHOBJ::bSimpleStroke(
                         ppo,
                         (*this)[9].x,
                         (struct PDEVOBJ *)&v61,
                         v34,
                         &pco,
                         v35,
                         v62[0],
                         *this + 194,
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
              v34 = v55;
              v35 = a4;
              v10 = EPATHOBJ::bSimpleFill(
                      ppo,
                      (*this)[9].x,
                      (struct PDEVOBJ *)&v61,
                      v55,
                      &pco,
                      pbo,
                      *this + 194,
                      v30,
                      *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
              goto LABEL_26;
            }
            v50 = v33 == 1;
            v35 = a4;
            if ( !v50 )
            {
              v10 = v63;
              goto LABEL_78;
            }
            v52 = v31;
            v34 = v55;
            v44 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v61,
                    v55,
                    &pco,
                    a4,
                    v52,
                    v5,
                    pbo,
                    *this + 194,
                    v30,
                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
          }
          else
          {
            v35 = a4;
            v51 = v31;
            v34 = v55;
            v44 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v61,
                    v55,
                    &pco,
                    a4,
                    v51,
                    *this + 194,
                    v5,
                    v30);
          }
          v10 = v44;
          goto LABEL_26;
        }
        if ( (v5->fl & 1) != 0 )
        {
          v37 = 1;
          if ( v24->iSolidColor == -1
            || (v23[229].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v26 + 1848LL) & 0x800000) == 0 )
          {
            goto LABEL_34;
          }
        }
        else
        {
          v37 = 0;
          if ( v24->iSolidColor != -1 )
          {
LABEL_34:
            v38 = (*this)[10];
            if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v38 + 8LL)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v38 + 8LL) &= ~2u;
              (*this)[41].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v24,
                *this,
                *(_QWORD *)&(*this)[19],
                v27,
                v28,
                v25,
                v37);
              v25 = v55;
              v24 = v62[0];
            }
            if ( v5->pstyle
              && ((__int64)v24[5].pvRbrush & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL) == 2
              && (v5->fl & 1) == 0 )
            {
              v59 = 1;
              v5->fl ^= 4u;
              LODWORD(v58.e) = v5->elStyleState;
              v46 = (*this)[10];
              v47 = (BRUSHOBJ *)&(*this)[249];
              v65[0] = v47;
              v48 = *(_DWORD *)(*(_QWORD *)&v46 + 8LL);
              if ( (v48 & 8) == 0 && v47->iSolidColor == -1 )
                *(_DWORD *)(*(_QWORD *)&v46 + 8LL) = v48 | 8;
              v49 = (*this)[10];
              if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v49 + 8LL)) & 8) != 0 )
              {
                if ( ((*this)[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v49 + 8LL) &= ~8u;
                  (*this)[41].y &= ~8u;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v47,
                  *this,
                  gpbrBackground,
                  v27,
                  v28,
                  v25,
                  0);
                v24 = v62[0];
              }
            }
            v39 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v24,
                    *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                    *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
            v25 = v55;
            v56 = v39;
            goto LABEL_15;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v23[10] + 8LL) |= 2u;
        goto LABEL_34;
      }
      EngSetLastError(5u);
      v10 = 0;
    }
    else
    {
      v10 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    }
LABEL_28:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
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
