/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02AEE10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStretchBltROP @ 0x1C010E8F0 (EngStretchBltROP.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02AB2AC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02AB570 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABA78 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABAF0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02ABF10 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AC160 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        COLORADJUSTMENT *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  COLORADJUSTMENT *ThreadCurrentObj; // r13
  unsigned int v18; // ebx
  SURFOBJ *v20; // r15
  SURFOBJ *v21; // r12
  SURFOBJ *v22; // r14
  struct _CLIPOBJ *v23; // r11
  struct _XLATEOBJ *v24; // r8
  unsigned int v25; // edi
  struct _RECTL *v26; // rax
  BRUSHOBJ *pbo; // r13
  RECTL *v28; // r9
  RECTL *prclDest; // rdi
  BOOL v30; // eax
  RECTL *prclSrc; // [rsp+70h] [rbp-2B8h] BYREF
  struct _BRUSHOBJ *v32; // [rsp+78h] [rbp-2B0h]
  RECTL *v33; // [rsp+80h] [rbp-2A8h] BYREF
  POINTL *pptlMask; // [rsp+88h] [rbp-2A0h] BYREF
  UMPDOBJ *v35; // [rsp+90h] [rbp-298h] BYREF
  DWORD v36; // [rsp+98h] [rbp-290h]
  unsigned int v37; // [rsp+A0h] [rbp-288h] BYREF
  unsigned int v38; // [rsp+A4h] [rbp-284h] BYREF
  POINTL *pptlHTOrg; // [rsp+A8h] [rbp-280h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-278h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+B8h] [rbp-270h]
  __int64 v42; // [rsp+C0h] [rbp-268h]
  COLORADJUSTMENT *pca[5]; // [rsp+C8h] [rbp-260h] BYREF
  struct _POINTL v44; // [rsp+F0h] [rbp-238h] BYREF
  struct _POINTL v45; // [rsp+F8h] [rbp-230h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+100h] [rbp-228h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+140h] [rbp-1E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+180h] [rbp-1A8h] BYREF
  struct _BRUSHOBJ v49; // [rsp+1C0h] [rbp-168h] BYREF
  struct _RECTL v50; // [rsp+1D8h] [rbp-150h] BYREF
  struct _RECTL v51; // [rsp+1E8h] [rbp-140h] BYREF
  struct _RECTL v52; // [rsp+1F8h] [rbp-130h] BYREF
  struct tagCOLORADJUSTMENT v53; // [rsp+208h] [rbp-120h] BYREF
  _BYTE v54[168]; // [rsp+220h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+2C8h] [rbp-60h]

  pca[1] = a4;
  DDIOBJ = (struct _CLIPOBJ *)a4;
  v42 = a5;
  pca[0] = a6;
  pptlHTOrg = a7;
  v33 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v32 = a12;
  v36 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = (COLORADJUSTMENT *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  pca[2] = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v35, (struct UMPDOBJ *)ThreadCurrentObj);
  v18 = 0;
  if ( !v35 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v35);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v20 = psoDest[0];
  pca[3] = (COLORADJUSTMENT *)psoDest[0];
  v21 = psoSrc[0];
  pca[4] = (COLORADJUSTMENT *)psoSrc[0];
  v22 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !pptlHTOrg && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && psoSrc[0] && v33 && prclSrc )
  {
    CaptureRECTL(&v33, &v50);
    CaptureRECTL(&prclSrc, &v51);
    CapturePOINTL(&pptlMask, &v44);
    CapturePOINTL(&pptlHTOrg, &v45);
    CaptureCOLORADJUSTMENT(pca, &v53);
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v20, v33) )
    {
      v18 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v35);
      return v18;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)ThreadCurrentObj, v23, &v20->sizlBitmap);
    v24 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v42);
    pxlo = v24;
    v25 = (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
       && (unsigned int)bCheckXlate(v21, v24)
       && ((unsigned __int8)rop4 == BYTE1(rop4) || v22 || (unsigned int)PROBEDISPATBRUSH(v32));
    if ( (unsigned __int8)rop4 != BYTE1(rop4) && (!v22 || !pptlMask) )
      v25 = 0;
    if ( v25 )
    {
      if ( rop4 == 43724 )
      {
        if ( v22 )
        {
          v25 = bCheckSurfaceRectSize(v21, prclSrc, 0LL, &v38, &v37);
          if ( v25 )
          {
            v26 = pRect(pptlMask, &v52, v38, v37);
            v25 = bCheckMask(v22, v26);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)v32);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v32, &v49);
    if ( v25 )
    {
      v28 = 0LL;
      prclDest = v33;
      if ( iMode == 4 )
        v28 = v33;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v54, v20, DDIOBJ, v28);
      if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v54)
        || (v30 = EngStretchBltROP(
                    v20,
                    v21,
                    v22,
                    pco,
                    pxlo,
                    pca[0],
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v25 = 1,
            !v30) )
      {
        v25 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v54);
    }
  }
  else
  {
    v25 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v35);
  return v25;
}
