/*
 * XREFs of NtGdiEngBitBlt @ 0x1C02ACAB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABAF0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AC160 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        XLATEOBJ *a9,
        POINTL *a10,
        ROP4 rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r12
  SURFOBJ *v16; // r13
  SURFOBJ *v17; // rsi
  SURFOBJ *v18; // r15
  struct _RECTL *pbo; // rbx
  char v20; // al
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  POINTL *pptlSrc; // r12
  struct _RECTL *v24; // r11
  POINTL *pptlMask; // rdi
  unsigned int v26; // edi
  unsigned int v28; // [rsp+60h] [rbp-1E8h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-1E4h] BYREF
  struct _RECTL *v30; // [rsp+68h] [rbp-1E0h]
  POINTL *v31; // [rsp+70h] [rbp-1D8h] BYREF
  RECTL *prclTrg; // [rsp+78h] [rbp-1D0h] BYREF
  UMPDOBJ *v33; // [rsp+80h] [rbp-1C8h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-1C0h]
  ROP4 v35; // [rsp+90h] [rbp-1B8h]
  POINTL *v36; // [rsp+98h] [rbp-1B0h] BYREF
  POINTL *pptlBrush; // [rsp+A0h] [rbp-1A8h] BYREF
  CLIPOBJ *pco; // [rsp+A8h] [rbp-1A0h]
  __int64 v39; // [rsp+B0h] [rbp-198h]
  struct _CLIPOBJ *v40; // [rsp+B8h] [rbp-190h]
  struct UMPDOBJ *v41; // [rsp+C0h] [rbp-188h]
  SURFOBJ *v42; // [rsp+C8h] [rbp-180h]
  SURFOBJ *v43; // [rsp+D0h] [rbp-178h]
  SURFOBJ *v44; // [rsp+D8h] [rbp-170h]
  struct _POINTL v45; // [rsp+E0h] [rbp-168h] BYREF
  struct _POINTL v46; // [rsp+E8h] [rbp-160h] BYREF
  struct _POINTL v47; // [rsp+F0h] [rbp-158h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+100h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+140h] [rbp-108h] BYREF
  SURFOBJ *psoTrg[8]; // [rsp+180h] [rbp-C8h] BYREF
  struct _BRUSHOBJ v51; // [rsp+1C0h] [rbp-88h] BYREF
  struct _RECTL v52; // [rsp+1D8h] [rbp-70h] BYREF
  struct _RECTL v53; // [rsp+1E8h] [rbp-60h] BYREF
  struct _RECTL v54; // [rsp+1F8h] [rbp-50h] BYREF

  v40 = a4;
  pco = a4;
  v39 = a5;
  prclTrg = a6;
  v31 = a7;
  v36 = a8;
  pxlo = a9;
  pptlBrush = a10;
  v35 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v41 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v33, ThreadCurrentObj);
  if ( !v33 )
    goto LABEL_32;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v16 = psoTrg[0];
  v42 = psoTrg[0];
  v17 = psoSrc[0];
  v43 = psoSrc[0];
  v18 = psoMask[0];
  v44 = psoMask[0];
  pbo = (struct _RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a9);
  if ( !pbo )
    pbo = (struct _RECTL *)CaptureAndFakeBRUSHOBJ((struct _BRUSHOBJ *)pxlo, &v51);
  v30 = pbo;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v39);
  if ( (rop4 & 0xFFFF0000) != 0
    || !prclTrg
    || (v20 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v20 & 0xE8) != 0)
    && (!pbo || pbo->left == -1 && !pptlBrush)
    || (v20 & 0xD4) != 0 && (!v31 || !v17)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v18 && (!pbo || pbo->left != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg);
LABEL_32:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v33);
    return 0LL;
  }
  if ( !v16 )
    goto LABEL_29;
  CaptureRECTL(&prclTrg, &v52);
  CapturePOINTL(&v31, &v45);
  CapturePOINTL(&v36, &v46);
  CapturePOINTL(&pptlBrush, &v47);
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v40, &v16->sizlBitmap);
  if ( !(unsigned int)bCheckSurfaceRectSize(v16, prclTrg, pco, &v29, &v28) || !(unsigned int)bCheckXlate(v17, pxlo) )
    goto LABEL_29;
  v21 = v28;
  v22 = v29;
  pptlSrc = v31;
  v24 = v17 ? pRect(v31, &v53, v29, v28) : 0LL;
  pptlMask = v36;
  v30 = v18 ? pRect(v36, &v54, v22, v21) : 0LL;
  if ( (unsigned int)bCheckSurfaceRect(v17, v24, 0LL) && (unsigned int)bCheckMask(v18, v30) )
    v26 = EngBitBlt(v16, v17, v18, pco, pxlo, prclTrg, pptlSrc, pptlMask, (BRUSHOBJ *)pbo, pptlBrush, rop4);
  else
LABEL_29:
    v26 = 0;
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v33);
  return v26;
}
