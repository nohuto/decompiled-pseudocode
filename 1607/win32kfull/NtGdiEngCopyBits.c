/*
 * XREFs of NtGdiEngCopyBits @ 0x1C02AD0A0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02ABF10 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AC160 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r15
  SURFOBJ *v13; // r14
  SURFOBJ *v14; // rsi
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rdi
  struct _XLATEOBJ *v17; // r15
  POINTL *pptlSrc; // r13
  struct _RECTL *v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-144h] BYREF
  RECTL *v22; // [rsp+38h] [rbp-140h] BYREF
  POINTL *v23; // [rsp+40h] [rbp-138h] BYREF
  UMPDOBJ *v24; // [rsp+48h] [rbp-130h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-128h]
  CLIPOBJ *v26; // [rsp+58h] [rbp-120h]
  struct UMPDOBJ *v27; // [rsp+60h] [rbp-118h]
  SURFOBJ *v28; // [rsp+68h] [rbp-110h]
  SURFOBJ *v29; // [rsp+70h] [rbp-108h]
  struct _CLIPOBJ *v30; // [rsp+78h] [rbp-100h]
  struct _POINTL v31; // [rsp+80h] [rbp-F8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v34; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v35; // [rsp+120h] [rbp-58h] BYREF

  v26 = a4;
  v30 = a3;
  pco = a4;
  v22 = a5;
  v23 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v27 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v24, ThreadCurrentObj);
  if ( !v24 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v24);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v13 = psoDest[0];
  v28 = psoDest[0];
  v14 = psoSrc[0];
  v29 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || psoDest[0]->iType || !v22 || !v23 )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  CaptureRECTL(&v22, &v34);
  CapturePOINTL(&v23, &v31);
  prclDest = v22;
  if ( bOrder(v22) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v13->sizlBitmap);
    pco = DDIOBJ;
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, (__int64)v26);
    if ( (unsigned int)bCheckSurfaceRectSize(v13, prclDest, DDIOBJ, &v21, &v20) && (unsigned int)bCheckXlate(v14, v17) )
    {
      pptlSrc = v23;
      v19 = pRect(v23, &v35, v21, v20);
      v9 = bCheckSurfaceRect(v14, v19, 0LL);
      if ( v9 )
        v9 = EngCopyBits(v13, v14, pco, v17, prclDest, pptlSrc);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_14:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v24);
  return v9;
}
