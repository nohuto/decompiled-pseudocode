/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02AC330
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A94F0 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9528 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9CA0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AA294 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        SURFOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        char *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v16; // rbx
  __int64 result; // rax
  SURFOBJ *v18; // r13
  SURFOBJ *v19; // r14
  struct _XLATEOBJ *pxlo; // r12
  int v21; // ecx
  RECTL *prcl; // rsi
  unsigned int v23; // edi
  SURFOBJ *v24; // r15
  struct _RECTL *v25; // rax
  struct _CLIPOBJ *pco; // [rsp+60h] [rbp-128h]
  unsigned int v27; // [rsp+68h] [rbp-120h] BYREF
  POINTL *pptl; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v29; // [rsp+78h] [rbp-110h] BYREF
  RECTL *v30; // [rsp+80h] [rbp-108h] BYREF
  COLORADJUSTMENT *pca; // [rsp+88h] [rbp-100h] BYREF
  POINTL pptlBrushOrg; // [rsp+90h] [rbp-F8h] BYREF
  SURFOBJ *psoSrc[2]; // [rsp+98h] [rbp-F0h] BYREF
  SURFOBJ *psoTrg[4]; // [rsp+A8h] [rbp-E0h] BYREF
  struct _POINTL *v35; // [rsp+C8h] [rbp-C0h] BYREF
  struct _SURFOBJ *v36; // [rsp+D0h] [rbp-B8h]
  SURFOBJ *psoMsk[2]; // [rsp+D8h] [rbp-B0h] BYREF
  struct _POINTL v38; // [rsp+E8h] [rbp-A0h] BYREF
  struct _RECTL v39; // [rsp+F0h] [rbp-98h] BYREF
  struct _RECTL v40; // [rsp+100h] [rbp-88h] BYREF
  tagCOLORADJUSTMENT v41; // [rsp+110h] [rbp-78h] BYREF
  POINTFIX pptfx; // [rsp+128h] [rbp-60h] BYREF

  v36 = a3;
  psoTrg[2] = a4;
  pca = a6;
  v35 = a7;
  v30 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  psoTrg[3] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v16 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct UMPDOBJ *)v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, v36, (struct UMPDOBJ *)v16);
    v18 = psoTrg[0];
    if ( !psoTrg[0] )
      goto LABEL_19;
    v19 = psoSrc[0];
    if ( !psoSrc[0] || !v30 || !a8 )
      goto LABEL_19;
    CaptureRECTL(&v30, &v40);
    CaptureCOLORADJUSTMENT(&pca, &v41);
    CapturePOINTL(&pptl, &v38);
    CapturePOINTL(&v35, &pptlBrushOrg);
    CaptureBits(&pptfx, a8, 0x18u);
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v16, (struct _CLIPOBJ *)a4, &v18->sizlBitmap);
    pxlo = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v16, a5);
    v21 = 1;
    prcl = v30;
    if ( v30 && (v30->left > v30->right || v30->top > v30->bottom) )
      v21 = 0;
    if ( v21 && (unsigned int)bCheckXlate(v19, pxlo) )
    {
      v23 = 1;
      v24 = psoMsk[0];
      if ( psoMsk[0] )
      {
        v23 = bCheckSurfaceRectSize(v19, prcl, 0LL, &v29, &v27);
        if ( v23 )
        {
          v25 = pRect(pptl, &v39, v29, v27);
          v23 = bCheckMask(v24, v25);
        }
      }
      if ( v23 )
        v23 = EngPlgBlt(v18, v19, v24, pco, pxlo, pca, &pptlBrushOrg, &pptfx, prcl, pptl, iMode);
    }
    else
    {
LABEL_19:
      v23 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(psoMsk);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoTrg);
    --v16[5].sizlBitmap.cx;
    return v23;
  }
  return result;
}
