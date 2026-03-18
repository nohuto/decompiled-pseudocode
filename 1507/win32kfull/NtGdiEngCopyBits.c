/*
 * XREFs of NtGdiEngCopyBits @ 0x1C02ABAD0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA9F0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AAC0C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  SURFOBJ *v17; // r15
  SURFOBJ *v18; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _XLATEOBJ *v21; // r13
  struct _RECTL *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  POINTL *pptlSrc; // [rsp+30h] [rbp-138h] BYREF
  RECTL *v27; // [rsp+38h] [rbp-130h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-124h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-120h]
  CLIPOBJ *v31; // [rsp+50h] [rbp-118h]
  SURFOBJ *v32; // [rsp+58h] [rbp-110h]
  struct _CLIPOBJ *v33; // [rsp+60h] [rbp-108h]
  struct UMPDOBJ *v34; // [rsp+68h] [rbp-100h]
  SURFOBJ *v35; // [rsp+70h] [rbp-F8h]
  struct _POINTL v36; // [rsp+78h] [rbp-F0h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v39; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v40; // [rsp+110h] [rbp-58h] BYREF

  v31 = a4;
  v33 = a3;
  pco = a4;
  v27 = a5;
  pptlSrc = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = (__int64)ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v12);
  v17 = psoDest[0];
  v35 = psoDest[0];
  v18 = psoSrc[0];
  v32 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || psoDest[0]->iType || !v27 || !pptlSrc )
  {
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  CaptureRECTL(&v27, &v40);
  CapturePOINTL(&pptlSrc, &v36);
  prclDest = v27;
  if ( bOrder(v27) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, a3, &v17->sizlBitmap);
    pco = DDIOBJ;
    v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, (__int64)v31);
    if ( (unsigned int)bCheckSurfaceRectSize(v17, prclDest, DDIOBJ, &v28, &v29) && (unsigned int)bCheckXlate(v18, v21) )
    {
      v22 = pRect(pptlSrc, &v39, v28, v29);
      v9 = bCheckSurfaceRect(v18, v22, 0LL);
      if ( v9 )
        v9 = EngCopyBits(v17, v18, pco, v21, prclDest, pptlSrc);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_15:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v14, v15, v16);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v23, v24, v25);
  if ( v12 )
    --*(_DWORD *)(v12 + 432);
  return v9;
}
