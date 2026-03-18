/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x14032E7E0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D9034 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140291A24 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14032C248 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  unsigned int v12; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v14; // r12
  SURFOBJ *v16; // r15
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *pboStroke; // r14
  BRUSHOBJ *pboFill; // rdi
  LINEATTRS *plineattrs; // r13
  XFORMOBJ *v21; // rax
  PFLOAT_LONG pstyle; // rcx
  PATHOBJ *ppoa; // [rsp+60h] [rbp-248h]
  LINEATTRS *v25; // [rsp+68h] [rbp-240h] BYREF
  XFORMOBJ *pxo; // [rsp+70h] [rbp-238h]
  struct _CLIPOBJ *v27; // [rsp+78h] [rbp-230h]
  BRUSHOBJ *v28; // [rsp+80h] [rbp-228h]
  XFORMOBJ *v29; // [rsp+88h] [rbp-220h]
  POINTL *pptlBrushOrg; // [rsp+90h] [rbp-218h] BYREF
  POINTL *v31; // [rsp+98h] [rbp-210h]
  struct _POINTL v32; // [rsp+A0h] [rbp-208h] BYREF
  UMPDOBJ *v33; // [rsp+A8h] [rbp-200h]
  SURFOBJ *v34; // [rsp+B0h] [rbp-1F8h]
  struct _BRUSHOBJ v35; // [rsp+B8h] [rbp-1F0h] BYREF
  struct _BRUSHOBJ v36; // [rsp+D0h] [rbp-1D8h] BYREF
  struct _LINEATTRS v37; // [rsp+E8h] [rbp-1C0h] BYREF
  SURFOBJ *pso[8]; // [rsp+110h] [rbp-198h] BYREF
  UMPDOBJ *v39[4]; // [rsp+150h] [rbp-158h] BYREF
  UMPDOBJ *v40; // [rsp+170h] [rbp-138h]
  _BYTE v41[160]; // [rsp+1B0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+250h] [rbp-58h]

  v29 = a4;
  pxo = a4;
  v25 = a6;
  v31 = a8;
  pptlBrushOrg = a8;
  v12 = 0;
  v32 = 0LL;
  memset(&v37, 0, sizeof(v37));
  memset(&v35, 0, sizeof(v35));
  memset(&v36, 0, sizeof(v36));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v39, CurrentThread);
  v14 = v40;
  v33 = v40;
  if ( v40 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v40);
    v16 = pso[0];
    v34 = pso[0];
    ppoa = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v14, a2);
    if ( v16 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, a3, &v16->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v27 = DDIOBJ;
    pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a5);
    if ( !pboStroke )
      pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v35);
    v28 = pboStroke;
    pboFill = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a7);
    if ( !pboFill )
      pboFill = CaptureAndFakeBRUSHOBJ(a7, &v36);
    if ( v16 )
    {
      if ( pboStroke )
      {
        if ( pboFill )
        {
          if ( ppoa )
          {
            if ( a6 )
            {
              if ( DDIOBJ )
              {
                if ( v31 )
                {
                  CapturePOINTL(&pptlBrushOrg, &v32);
                  v12 = bCaptureLINEATTRS(&v25, &v37);
                  plineattrs = v25;
                  if ( v12 )
                  {
                    v21 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v14, (__int64)v29);
                    pxo = v21;
                    if ( (plineattrs->fl & 1) != 0 )
                      v12 &= -(v21 != 0LL);
                    if ( v12
                      && (unsigned int)bCheckSurfacePath(v16, ppoa, DDIOBJ)
                      && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1) )
                    {
                      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41, v16, DDIOBJ, 0LL);
                      v12 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v41)
                         && EngStrokeAndFillPath(
                              v16,
                              ppoa,
                              pco,
                              pxo,
                              pboStroke,
                              plineattrs,
                              pboFill,
                              pptlBrushOrg,
                              mixFill,
                              flOptions);
                      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v41);
                    }
                    else
                    {
                      v12 = 0;
                    }
                    pstyle = plineattrs->pstyle;
                    if ( pstyle )
                      Win32FreePool(pstyle);
                  }
                }
              }
            }
          }
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v39);
    return v12;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v39);
    return 0LL;
  }
}
