/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C02AC690
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9528 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9C28 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9CA0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA094 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AA294 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        SURFOBJ *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v17; // rbx
  __int64 result; // rax
  SURFOBJ *v19; // r14
  SURFOBJ *v20; // rsi
  struct _XLATEOBJ *pxlo; // r13
  RECTL *prclSrc; // r12
  unsigned int v23; // edi
  SURFOBJ *v24; // r15
  struct _RECTL *v25; // rax
  RECTL *prclDest; // [rsp+60h] [rbp-118h] BYREF
  CLIPOBJ *pco; // [rsp+68h] [rbp-110h]
  POINTL *pptlMask; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v29; // [rsp+78h] [rbp-100h] BYREF
  POINTL *pptlHTOrg; // [rsp+80h] [rbp-F8h] BYREF
  RECTL *v31; // [rsp+88h] [rbp-F0h] BYREF
  unsigned int v32; // [rsp+90h] [rbp-E8h] BYREF
  COLORADJUSTMENT *pca; // [rsp+98h] [rbp-E0h] BYREF
  SURFOBJ *psoSrc[2]; // [rsp+A0h] [rbp-D8h] BYREF
  SURFOBJ *psoDest[2]; // [rsp+B0h] [rbp-C8h] BYREF
  SURFOBJ *psoMask[4]; // [rsp+C0h] [rbp-B8h] BYREF
  struct _POINTL v37; // [rsp+E0h] [rbp-98h] BYREF
  struct _POINTL v38; // [rsp+E8h] [rbp-90h] BYREF
  struct _RECTL v39; // [rsp+F0h] [rbp-88h] BYREF
  struct _RECTL v40; // [rsp+100h] [rbp-78h] BYREF
  struct _RECTL v41; // [rsp+110h] [rbp-68h] BYREF
  struct tagCOLORADJUSTMENT v42; // [rsp+120h] [rbp-58h] BYREF

  psoMask[3] = a4;
  pco = a5;
  pca = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  v31 = a9;
  pptlMask = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = ThreadCurrentObj;
  psoMask[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v17 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct UMPDOBJ *)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct UMPDOBJ *)v17);
    if ( !pptlHTOrg && iMode == 4 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
      --v17[5].sizlBitmap.cx;
      return 0LL;
    }
    v19 = psoDest[0];
    if ( !psoDest[0] )
      goto LABEL_24;
    v20 = psoSrc[0];
    if ( !psoSrc[0] || !prclDest || !v31 )
      goto LABEL_24;
    CaptureRECTL(&prclDest, &v41);
    CapturePOINTL(&pptlMask, &v37);
    CaptureRECTL(&v31, &v39);
    CaptureCOLORADJUSTMENT(&pca, &v42);
    CapturePOINTL(&pptlHTOrg, &v38);
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v19, prclDest) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
      --v17[5].sizlBitmap.cx;
      return 1LL;
    }
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, (struct _CLIPOBJ *)a4, &v19->sizlBitmap);
    pxlo = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, (__int64)a5);
    prclSrc = v31;
    if ( bOrder(v31) && (unsigned int)bCheckXlate(v20, pxlo) )
    {
      v23 = 1;
      v24 = psoMask[0];
      if ( psoMask[0] )
      {
        v23 = bCheckSurfaceRectSize(v20, prclSrc, 0LL, &v29, &v32);
        if ( v23 )
        {
          v25 = pRect(pptlMask, &v40, v29, v32);
          v23 = bCheckMask(v24, v25);
        }
      }
      if ( v23 )
        v23 = EngStretchBlt(v19, v20, v24, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
    }
    else
    {
LABEL_24:
      v23 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
    --v17[5].sizlBitmap.cx;
    return v23;
  }
  return result;
}
