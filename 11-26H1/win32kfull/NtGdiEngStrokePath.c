/*
 * XREFs of NtGdiEngStrokePath @ 0x14032EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D9034 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140291A24 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14032C248 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v12; // r15
  SURFOBJ *v14; // r14
  struct _PATHOBJ *v15; // r12
  BRUSHOBJ *pbo; // rdi
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r13
  unsigned __int64 v20; // rax
  XFORMOBJ *v21; // r15
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v23; // [rsp+48h] [rbp-230h] BYREF
  __int64 v24; // [rsp+50h] [rbp-228h]
  POINTL *pptlBrushOrg; // [rsp+58h] [rbp-220h] BYREF
  POINTL *v26; // [rsp+60h] [rbp-218h]
  struct _POINTL v27; // [rsp+68h] [rbp-210h] BYREF
  UMPDOBJ *v28; // [rsp+70h] [rbp-208h]
  SURFOBJ *v29; // [rsp+78h] [rbp-200h]
  struct _PATHOBJ *v30; // [rsp+80h] [rbp-1F8h]
  struct _CLIPOBJ *v31; // [rsp+88h] [rbp-1F0h]
  __int64 v32; // [rsp+90h] [rbp-1E8h]
  struct _BRUSHOBJ v33; // [rsp+98h] [rbp-1E0h] BYREF
  struct _LINEATTRS v34; // [rsp+B0h] [rbp-1C8h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-198h] BYREF
  UMPDOBJ *v36[4]; // [rsp+120h] [rbp-158h] BYREF
  UMPDOBJ *v37; // [rsp+140h] [rbp-138h]
  _BYTE v38[160]; // [rsp+180h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+220h] [rbp-58h]

  v24 = a4;
  v31 = a3;
  v32 = a4;
  v26 = a6;
  pptlBrushOrg = a6;
  v23 = a7;
  v27 = 0LL;
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v36, CurrentThread);
  v12 = v37;
  v28 = v37;
  if ( v37 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v37);
    v14 = pso[0];
    v29 = pso[0];
    v15 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
    v30 = v15;
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(a5, &v33);
    if ( v14 && pbo && v15 && a7 && v26 )
    {
      CapturePOINTL(&pptlBrushOrg, &v27);
      v17 = bCaptureLINEATTRS(&v23, &v34);
      plineattrs = v23;
      if ( v17 )
      {
        if ( (*((_DWORD *)v12 + 107) & 0x100) != 0 && (v23->fl & 1) != 0 )
          v17 &= -(a3 != 0LL);
        if ( v17 )
        {
          DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, a3, &v14->sizlBitmap);
          v20 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, v24);
          v21 = (XFORMOBJ *)v20;
          if ( (plineattrs->fl & 1) != 0 )
            v17 &= -(v20 != 0);
          if ( v17
            && (unsigned int)bCheckSurfacePath(v14, v15, DDIOBJ)
            && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1) )
          {
            ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v38, v14, DDIOBJ, 0LL);
            v17 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v38)
               && EngStrokePath(v14, v15, pco, v21, pbo, pptlBrushOrg, plineattrs, mix);
            ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v38);
          }
          else
          {
            v17 = 0;
          }
          pstyle = plineattrs->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle);
        }
      }
    }
    else
    {
      v17 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v36);
    return v17;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v36);
    return 0LL;
  }
}
