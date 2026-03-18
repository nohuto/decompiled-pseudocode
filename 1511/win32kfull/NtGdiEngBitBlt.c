/*
 * XREFs of NtGdiEngBitBlt @ 0x1C02AAB60
 * Callers:
 *     <none>
 * Callees:
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A93D8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9CA0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AA294 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        XLATEOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v14; // rdi
  __int64 result; // rax
  BRUSHOBJ *pbo; // rsi
  struct _XLATEOBJ *v17; // r13
  char v18; // al
  SURFOBJ *v19; // r15
  SURFOBJ *v20; // r14
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  struct _RECTL *v23; // r11
  POINTL *pptlMask; // r13
  SURFOBJ *v25; // r14
  unsigned int v26; // r14d
  struct _RECTL *v28; // [rsp+60h] [rbp-128h]
  unsigned int v29; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-11Ch] BYREF
  POINTL *pptlSrc; // [rsp+70h] [rbp-118h] BYREF
  RECTL *prclTrg; // [rsp+78h] [rbp-110h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-108h]
  POINTL *pptlBrush; // [rsp+88h] [rbp-100h] BYREF
  ROP4 v35; // [rsp+90h] [rbp-F8h]
  POINTL *v36; // [rsp+98h] [rbp-F0h] BYREF
  CLIPOBJ *pco; // [rsp+A0h] [rbp-E8h]
  SURFOBJ *psoMask[2]; // [rsp+A8h] [rbp-E0h] BYREF
  SURFOBJ *psoSrc[2]; // [rsp+B8h] [rbp-D0h] BYREF
  SURFOBJ *psoTrg[3]; // [rsp+C8h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v41; // [rsp+E0h] [rbp-A8h]
  struct _POINTL v42; // [rsp+E8h] [rbp-A0h] BYREF
  struct _POINTL v43; // [rsp+F0h] [rbp-98h] BYREF
  struct _POINTL v44; // [rsp+F8h] [rbp-90h] BYREF
  struct _BRUSHOBJ v45; // [rsp+100h] [rbp-88h] BYREF
  struct _RECTL v46; // [rsp+118h] [rbp-70h] BYREF
  struct _RECTL v47; // [rsp+128h] [rbp-60h] BYREF
  struct _RECTL v48; // [rsp+138h] [rbp-50h] BYREF

  v41 = a4;
  pxlo = a2;
  pco = a4;
  prclTrg = a6;
  pptlSrc = a7;
  v36 = a8;
  pptlBrush = a10;
  v35 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  psoTrg[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct UMPDOBJ *)v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, (struct _SURFOBJ *)pxlo, (struct UMPDOBJ *)v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct UMPDOBJ *)v14);
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a9);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(a9, &v45);
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, a5);
    pxlo = v17;
    if ( (rop4 & 0xFFFF0000) == 0
      && prclTrg
      && ((v18 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v18 & 0xE8) == 0)
       || pbo && (pbo->iSolidColor != -1 || pptlBrush))
      && ((v18 & 0xD4) == 0 || pptlSrc && psoSrc[0])
      && ((unsigned __int8)rop4 == BYTE1(rop4) || psoMask[0] || pbo && pbo->iSolidColor == -1) )
    {
      v19 = psoTrg[0];
      if ( !psoTrg[0] )
        goto LABEL_31;
      CaptureRECTL(&prclTrg, &v46);
      CapturePOINTL(&pptlSrc, &v44);
      CapturePOINTL(&v36, &v42);
      CapturePOINTL(&pptlBrush, &v43);
      pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, v41, &v19->sizlBitmap);
      if ( !(unsigned int)bCheckSurfaceRectSize(v19, prclTrg, pco, &v29, &v30) )
        goto LABEL_31;
      v20 = psoSrc[0];
      if ( !(unsigned int)bCheckXlate(psoSrc[0], v17) )
        goto LABEL_31;
      v21 = v30;
      v22 = v29;
      v23 = v20 ? pRect(pptlSrc, &v48, v29, v30) : 0LL;
      pptlMask = v36;
      v28 = psoMask[0] ? pRect(v36, &v47, v22, v21) : 0LL;
      v25 = psoSrc[0];
      if ( (unsigned int)bCheckSurfaceRect(psoSrc[0], v23, 0LL) && (unsigned int)bCheckMask(psoMask[0], v28) )
        v26 = EngBitBlt(v19, v25, psoMask[0], pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      else
LABEL_31:
        v26 = 0;
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoTrg);
      --v14[5].sizlBitmap.cx;
      return v26;
    }
    else
    {
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoTrg);
      --v14[5].sizlBitmap.cx;
      return 0LL;
    }
  }
  return result;
}
