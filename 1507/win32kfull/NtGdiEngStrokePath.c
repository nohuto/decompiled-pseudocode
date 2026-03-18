/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02ADEC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
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

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  SURFOBJ *v15; // r15
  struct _PATHOBJ *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BRUSHOBJ *pbo; // r14
  unsigned int v21; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r13
  XFORMOBJ *v24; // rax
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v26; // [rsp+40h] [rbp-1D8h] BYREF
  POINTL *pptlBrushOrg; // [rsp+48h] [rbp-1D0h] BYREF
  XFORMOBJ *pxo; // [rsp+50h] [rbp-1C8h]
  BRUSHOBJ *v29; // [rsp+58h] [rbp-1C0h]
  XFORMOBJ *v30; // [rsp+60h] [rbp-1B8h]
  struct _PATHOBJ *v31; // [rsp+68h] [rbp-1B0h]
  struct _CLIPOBJ *v32; // [rsp+70h] [rbp-1A8h]
  struct UMPDOBJ *v33; // [rsp+78h] [rbp-1A0h]
  SURFOBJ *v34; // [rsp+80h] [rbp-198h]
  struct _POINTL v35; // [rsp+88h] [rbp-190h] BYREF
  SURFOBJ *pso[8]; // [rsp+90h] [rbp-188h] BYREF
  struct _BRUSHOBJ v37; // [rsp+D0h] [rbp-148h] BYREF
  struct _LINEATTRS v38; // [rsp+E8h] [rbp-130h] BYREF
  _BYTE v39[168]; // [rsp+110h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1B8h] [rbp-60h]

  v30 = a4;
  v32 = a3;
  pxo = a4;
  pptlBrushOrg = a6;
  v26 = a7;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = (__int64)ThreadCurrentObj;
  v33 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v13 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v13);
    v15 = pso[0];
    v34 = pso[0];
    v16 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v13, a2);
    v31 = v16;
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, (__int64)a5);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(a5, &v37);
    v29 = pbo;
    if ( v15 && pbo && v16 && v26 && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v35);
      v21 = bCaptureLINEATTRS(&v26, &v38);
      plineattrs = v26;
      if ( v21 )
      {
        if ( (*(_DWORD *)(v13 + 412) & 0x100) != 0 && (v26->fl & 1) != 0 && !a3 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
              1786);
          v21 = 0;
        }
        if ( v21 )
        {
          DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v13, a3, &v15->sizlBitmap);
          v24 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v13, (__int64)v30);
          pxo = v24;
          if ( (plineattrs->fl & 1) != 0 )
          {
            v17 = (unsigned int)-(v24 != 0LL);
            v21 &= v17;
          }
          if ( v21
            && (unsigned int)bCheckSurfacePath(v15, v16, DDIOBJ)
            && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1) )
          {
            ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v39, v15, DDIOBJ, 0LL);
            v21 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v39)
               && EngStrokePath(v15, v16, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
            ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v39);
          }
          else
          {
            v21 = 0;
          }
          pstyle = plineattrs->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle);
        }
      }
    }
    else
    {
      v21 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v17, v18, v19);
    --*(_DWORD *)(v13 + 432);
    return v21;
  }
  return result;
}
