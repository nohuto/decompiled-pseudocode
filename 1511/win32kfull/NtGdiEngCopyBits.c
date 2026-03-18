/*
 * XREFs of NtGdiEngCopyBits @ 0x1C02AB110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA094 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AA294 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v9; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v12; // rdi
  SURFOBJ *v14; // r15
  SURFOBJ *v15; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _XLATEOBJ *v18; // r13
  struct _RECTL *v19; // rax
  POINTL *pptlSrc; // [rsp+30h] [rbp-C8h] BYREF
  RECTL *v21; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-B4h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-B0h]
  CLIPOBJ *v25; // [rsp+50h] [rbp-A8h]
  struct _CLIPOBJ *v26; // [rsp+58h] [rbp-A0h]
  SURFOBJ *psoSrc[2]; // [rsp+60h] [rbp-98h] BYREF
  SURFOBJ *psoDest[3]; // [rsp+70h] [rbp-88h] BYREF
  struct _POINTL v29; // [rsp+88h] [rbp-70h] BYREF
  struct _RECTL v30; // [rsp+90h] [rbp-68h] BYREF
  struct _RECTL v31; // [rsp+A0h] [rbp-58h] BYREF

  v25 = a4;
  v26 = a3;
  pco = a4;
  v21 = a5;
  pptlSrc = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  psoDest[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[5].sizlBitmap.cx;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v12);
  v14 = psoDest[0];
  if ( !psoDest[0] || (v15 = psoSrc[0]) == 0LL || psoDest[0]->iType || !v21 || !pptlSrc )
  {
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  CaptureRECTL(&v21, &v30);
  CapturePOINTL(&pptlSrc, &v29);
  prclDest = v21;
  if ( bOrder(v21) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, a3, &v14->sizlBitmap);
    pco = DDIOBJ;
    v18 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v12, (__int64)v25);
    if ( (unsigned int)bCheckSurfaceRectSize(v14, prclDest, DDIOBJ, &v22, &v23) && (unsigned int)bCheckXlate(v15, v18) )
    {
      v19 = pRect(pptlSrc, &v31, v22, v23);
      v9 = bCheckSurfaceRect(v15, v19, 0LL);
      if ( v9 )
        v9 = EngCopyBits(v14, v15, pco, v18, prclDest, pptlSrc);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_15:
  UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
  if ( v12 )
    --v12[5].sizlBitmap.cx;
  return v9;
}
