/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C02AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02AB2AC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABA78 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABAF0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02ABF10 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AC160 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
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
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  COLORADJUSTMENT *ThreadCurrentObj; // r12
  unsigned int v16; // ebx
  SURFOBJ *v18; // rsi
  SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  struct _CLIPOBJ *v21; // r11
  RECTL *prclSrc; // r12
  struct _XLATEOBJ *v23; // rdx
  unsigned int v24; // edi
  struct _RECTL *v25; // rax
  RECTL *v26; // r9
  RECTL *prclDest; // rdi
  BOOL v28; // eax
  RECTL *v29; // [rsp+60h] [rbp-298h] BYREF
  UMPDOBJ *v30; // [rsp+68h] [rbp-290h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-288h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-284h] BYREF
  RECTL *v33; // [rsp+78h] [rbp-280h] BYREF
  POINTL *pptlMask; // [rsp+80h] [rbp-278h] BYREF
  POINTL *pptlHTOrg; // [rsp+88h] [rbp-270h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-268h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+98h] [rbp-260h]
  __int64 v38; // [rsp+A0h] [rbp-258h]
  COLORADJUSTMENT *pca[5]; // [rsp+A8h] [rbp-250h] BYREF
  struct _POINTL v40; // [rsp+D0h] [rbp-228h] BYREF
  struct _POINTL v41; // [rsp+D8h] [rbp-220h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+E0h] [rbp-218h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-1D8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-198h] BYREF
  struct _RECTL v45; // [rsp+1A0h] [rbp-158h] BYREF
  struct _RECTL v46; // [rsp+1B0h] [rbp-148h] BYREF
  struct _RECTL v47; // [rsp+1C0h] [rbp-138h] BYREF
  struct tagCOLORADJUSTMENT v48; // [rsp+1D0h] [rbp-128h] BYREF
  _BYTE v49[168]; // [rsp+1F0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+298h] [rbp-60h]

  pca[1] = a4;
  DDIOBJ = (struct _CLIPOBJ *)a4;
  v38 = a5;
  pca[0] = a6;
  pptlHTOrg = a7;
  v29 = a8;
  v33 = a9;
  pptlMask = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = (COLORADJUSTMENT *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  pca[2] = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v30, (struct UMPDOBJ *)ThreadCurrentObj);
  v16 = 0;
  if ( !v30 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v30);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v18 = psoDest[0];
  pca[3] = (COLORADJUSTMENT *)psoDest[0];
  v19 = psoSrc[0];
  pca[4] = (COLORADJUSTMENT *)psoSrc[0];
  v20 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !pptlHTOrg && iMode == 4 )
    goto LABEL_11;
  if ( !psoDest[0] || !psoSrc[0] || !v29 || !v33 )
    goto LABEL_24;
  CaptureRECTL(&v29, &v45);
  CapturePOINTL(&pptlMask, &v40);
  CaptureRECTL(&v33, &v46);
  CaptureCOLORADJUSTMENT(pca, &v48);
  CapturePOINTL(&pptlHTOrg, &v41);
  if ( !(unsigned int)bCheckDestSurfaceOverlap(v18, v29) )
  {
    v16 = 1;
LABEL_11:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v30);
    return v16;
  }
  DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)ThreadCurrentObj, v21, &v18->sizlBitmap);
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v38);
  prclSrc = v33;
  if ( bOrder(v33) && (unsigned int)bCheckXlate(v19, v23) )
  {
    v24 = 1;
    if ( v20 )
    {
      v24 = bCheckSurfaceRectSize(v19, prclSrc, 0LL, &v32, &v31);
      if ( v24 )
      {
        v25 = pRect(pptlMask, &v47, v32, v31);
        v24 = bCheckMask(v20, v25);
      }
    }
    if ( v24 )
    {
      v26 = 0LL;
      prclDest = v29;
      if ( iMode == 4 )
        v26 = v29;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v49, v18, DDIOBJ, v26);
      if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v49)
        || (v28 = EngStretchBlt(v18, v19, v20, pco, pxlo, pca[0], pptlHTOrg, prclDest, prclSrc, pptlMask, iMode),
            v24 = 1,
            !v28) )
      {
        v24 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v49);
    }
  }
  else
  {
LABEL_24:
    v24 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v30);
  return v24;
}
