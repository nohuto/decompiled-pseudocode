/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02AF350
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngStrokeAndFillPath @ 0x1C027B650 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AAD24 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02AAE70 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AB964 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABB18 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r13
  SURFOBJ *v16; // r15
  PATHOBJ *v17; // rbx
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *pboStroke; // r14
  BRUSHOBJ *pboFill; // rdi
  unsigned int v21; // ebx
  LINEATTRS *plineattrs; // r12
  XFORMOBJ *v23; // rax
  __int64 v24; // rdx
  PATHOBJ *v25; // rbx
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v27; // [rsp+58h] [rbp-210h] BYREF
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-208h] BYREF
  UMPDOBJ *v29; // [rsp+68h] [rbp-200h] BYREF
  XFORMOBJ *pxo; // [rsp+70h] [rbp-1F8h]
  struct _CLIPOBJ *v31; // [rsp+78h] [rbp-1F0h]
  BRUSHOBJ *v32; // [rsp+80h] [rbp-1E8h]
  BRUSHOBJ *v33; // [rsp+88h] [rbp-1E0h]
  XFORMOBJ *v34; // [rsp+90h] [rbp-1D8h]
  struct UMPDOBJ *v35; // [rsp+98h] [rbp-1D0h]
  SURFOBJ *v36; // [rsp+A0h] [rbp-1C8h]
  PATHOBJ *ppo; // [rsp+A8h] [rbp-1C0h]
  struct _POINTL v38; // [rsp+B0h] [rbp-1B8h] BYREF
  SURFOBJ *pso[8]; // [rsp+C0h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v40; // [rsp+100h] [rbp-168h] BYREF
  struct _BRUSHOBJ v41; // [rsp+118h] [rbp-150h] BYREF
  struct _LINEATTRS v42; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v43[168]; // [rsp+160h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+208h] [rbp-60h]

  v34 = a4;
  pxo = a4;
  v27 = a6;
  pptlBrushOrg = a8;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v35 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v29, ThreadCurrentObj);
  if ( v29 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    v16 = pso[0];
    v36 = pso[0];
    v17 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
    ppo = v17;
    if ( v16 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v16->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v31 = DDIOBJ;
    pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
    if ( !pboStroke )
      pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v40);
    v32 = pboStroke;
    pboFill = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a7);
    if ( !pboFill )
      pboFill = CaptureAndFakeBRUSHOBJ(a7, &v41);
    v33 = pboFill;
    if ( v16 && pboStroke && pboFill && v17 && v27 && DDIOBJ && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v38);
      v21 = bCaptureLINEATTRS(&v27, &v42);
      plineattrs = v27;
      if ( v21 )
      {
        v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, (__int64)v34);
        pxo = v23;
        if ( (plineattrs->fl & 1) != 0 )
        {
          v24 = (unsigned int)-(v23 != 0LL);
          v21 &= v24;
        }
        if ( v21
          && (v25 = ppo, (unsigned int)bCheckSurfacePath(v16, ppo, DDIOBJ))
          && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1) )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v16, DDIOBJ, 0LL);
          v21 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
             && EngStrokeAndFillPath(
                  v16,
                  v25,
                  pco,
                  pxo,
                  pboStroke,
                  plineattrs,
                  pboFill,
                  pptlBrushOrg,
                  mixFill,
                  flOptions);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
        }
        else
        {
          v21 = 0;
        }
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle, v24);
      }
    }
    else
    {
      v21 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v29);
    return v21;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v29);
    return 0LL;
  }
}
