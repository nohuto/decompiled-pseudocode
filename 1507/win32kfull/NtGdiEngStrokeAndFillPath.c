/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02ADB60
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A98D4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02A9A20 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA470 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA624 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v15; // rbx
  __int64 result; // rax
  SURFOBJ *v17; // r13
  PATHOBJ *v18; // rdi
  struct _CLIPOBJ *DDIOBJ; // r14
  BRUSHOBJ *pboStroke; // r15
  __int64 v21; // rdx
  BRUSHOBJ *pboFill; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // edi
  LINEATTRS *plineattrs; // r12
  XFORMOBJ *v27; // rax
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v29; // [rsp+58h] [rbp-200h] BYREF
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-1F8h] BYREF
  XFORMOBJ *pxo; // [rsp+68h] [rbp-1F0h]
  BRUSHOBJ *v32; // [rsp+70h] [rbp-1E8h]
  XFORMOBJ *v33; // [rsp+78h] [rbp-1E0h]
  PATHOBJ *ppo; // [rsp+80h] [rbp-1D8h]
  BRUSHOBJ *v35; // [rsp+88h] [rbp-1D0h]
  struct _CLIPOBJ *v36; // [rsp+90h] [rbp-1C8h]
  struct UMPDOBJ *v37; // [rsp+98h] [rbp-1C0h]
  SURFOBJ *v38; // [rsp+A0h] [rbp-1B8h]
  struct _POINTL v39; // [rsp+A8h] [rbp-1B0h] BYREF
  SURFOBJ *pso[8]; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v41; // [rsp+F0h] [rbp-168h] BYREF
  struct _BRUSHOBJ v42; // [rsp+108h] [rbp-150h] BYREF
  struct _LINEATTRS v43; // [rsp+120h] [rbp-138h] BYREF
  _BYTE v44[168]; // [rsp+150h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1F8h] [rbp-60h]

  v33 = a4;
  pxo = a4;
  v29 = a6;
  pptlBrushOrg = a8;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = (__int64)ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v15 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v15);
    v17 = pso[0];
    v38 = pso[0];
    v18 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v15, a2);
    ppo = v18;
    if ( v17 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, a3, &v17->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v36 = DDIOBJ;
    pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, (__int64)a5);
    if ( !pboStroke )
      pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v42);
    v32 = pboStroke;
    pboFill = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, (__int64)a7);
    if ( !pboFill )
      pboFill = CaptureAndFakeBRUSHOBJ(a7, &v41);
    v35 = pboFill;
    if ( v17 && pboStroke && pboFill && v18 && v29 && DDIOBJ && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v39);
      v25 = bCaptureLINEATTRS(&v29, &v43);
      plineattrs = v29;
      if ( v25 )
      {
        v27 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v15, (__int64)v33);
        pxo = v27;
        if ( (plineattrs->fl & 1) != 0 )
        {
          v21 = (unsigned int)-(v27 != 0LL);
          v25 &= v21;
        }
        if ( v25
          && (unsigned int)bCheckSurfacePath(v17, ppo, DDIOBJ)
          && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1) )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44, v17, DDIOBJ, 0LL);
          v25 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v44)
             && EngStrokeAndFillPath(
                  v17,
                  ppo,
                  pco,
                  pxo,
                  pboStroke,
                  plineattrs,
                  pboFill,
                  pptlBrushOrg,
                  mixFill,
                  flOptions);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44);
        }
        else
        {
          v25 = 0;
        }
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
    else
    {
      v25 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v21, v23, v24);
    --*(_DWORD *)(v15 + 432);
    return v25;
  }
  return result;
}
