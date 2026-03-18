/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02AF6D0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
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
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r15
  SURFOBJ *v14; // r14
  struct _PATHOBJ *v15; // r12
  UMPDOBJ *pbo; // rsi
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // rdi
  struct _CLIPOBJ *DDIOBJ; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  XFORMOBJ *v22; // r15
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v24; // [rsp+40h] [rbp-1E8h] BYREF
  POINTL *pptlBrushOrg; // [rsp+48h] [rbp-1E0h] BYREF
  UMPDOBJ *v26[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1C8h]
  struct UMPDOBJ *v28; // [rsp+68h] [rbp-1C0h]
  SURFOBJ *v29; // [rsp+70h] [rbp-1B8h]
  struct _PATHOBJ *v30; // [rsp+78h] [rbp-1B0h]
  struct _CLIPOBJ *v31; // [rsp+80h] [rbp-1A8h]
  __int64 v32; // [rsp+88h] [rbp-1A0h]
  struct _POINTL v33; // [rsp+90h] [rbp-198h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-188h] BYREF
  struct _BRUSHOBJ v35; // [rsp+E0h] [rbp-148h] BYREF
  struct _LINEATTRS v36; // [rsp+F8h] [rbp-130h] BYREF
  _BYTE v37[168]; // [rsp+120h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1C8h] [rbp-60h]

  v27 = a4;
  v31 = a3;
  v32 = a4;
  pptlBrushOrg = a6;
  v24 = a7;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v28 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v26, ThreadCurrentObj);
  if ( v26[0] )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    v14 = pso[0];
    v29 = pso[0];
    v15 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a2);
    v30 = v15;
    pbo = (UMPDOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a5);
    if ( !pbo )
      pbo = (UMPDOBJ *)CaptureAndFakeBRUSHOBJ(a5, &v35);
    v26[1] = pbo;
    if ( v14 && pbo && v15 && v24 && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v33);
      v17 = bCaptureLINEATTRS(&v24, &v36);
      plineattrs = v24;
      if ( v17 )
      {
        if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 && (v24->fl & 1) != 0 && !a3 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
              1820);
          v17 = 0;
        }
        if ( v17 )
        {
          DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v14->sizlBitmap);
          v20 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, v27);
          v22 = (XFORMOBJ *)v20;
          if ( (plineattrs->fl & 1) != 0 )
          {
            v21 = (unsigned int)-(v20 != 0);
            v17 &= v21;
          }
          if ( v17
            && (unsigned int)bCheckSurfacePath(v14, v15, DDIOBJ)
            && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || *(_DWORD *)pbo == -1) )
          {
            ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v37, v14, DDIOBJ, 0LL);
            v17 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v37)
               && EngStrokePath(v14, v15, pco, v22, (BRUSHOBJ *)pbo, pptlBrushOrg, plineattrs, mix);
            ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v37);
          }
          else
          {
            v17 = 0;
          }
          pstyle = plineattrs->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle, v21);
        }
      }
    }
    else
    {
      v17 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v26);
    return v17;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v26);
    return 0LL;
  }
}
