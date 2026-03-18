/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02ACE40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A9D74 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9DAC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA5FC (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AAC0C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        CLIPOBJ *a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        char *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _POINTL *ThreadCurrentObj; // rax
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  SURFOBJ *v22; // r13
  SURFOBJ *v23; // r14
  SURFOBJ *v24; // r15
  __int64 v25; // rsi
  struct _XLATEOBJ *pxlo; // r12
  int v27; // ecx
  RECTL *prcl; // rsi
  unsigned int v29; // edi
  struct _RECTL *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  RECTL *v37; // [rsp+60h] [rbp-1C8h] BYREF
  POINTL *pptl; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-1B4h] BYREF
  CLIPOBJ *pco; // [rsp+78h] [rbp-1B0h]
  COLORADJUSTMENT *pca[2]; // [rsp+80h] [rbp-1A8h] BYREF
  struct _POINTL *v43[4]; // [rsp+90h] [rbp-198h] BYREF
  CLIPOBJ *v44; // [rsp+B0h] [rbp-178h]
  SURFOBJ *v45; // [rsp+B8h] [rbp-170h]
  POINTL pptlBrushOrg; // [rsp+C0h] [rbp-168h] BYREF
  struct _POINTL v47; // [rsp+C8h] [rbp-160h] BYREF
  SURFOBJ *psoTrg[8]; // [rsp+D0h] [rbp-158h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+110h] [rbp-118h] BYREF
  SURFOBJ *psoMsk[8]; // [rsp+150h] [rbp-D8h] BYREF
  struct _RECTL v51; // [rsp+190h] [rbp-98h] BYREF
  struct _RECTL v52; // [rsp+1A0h] [rbp-88h] BYREF
  tagCOLORADJUSTMENT v53; // [rsp+1B0h] [rbp-78h] BYREF
  POINTFIX pptfx; // [rsp+1C8h] [rbp-60h] BYREF

  v43[2] = a4;
  v44 = a5;
  pco = a5;
  pca[0] = a6;
  v43[0] = a7;
  v37 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _POINTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = (__int64)ThreadCurrentObj;
  v43[1] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[54].x;
  result = 0LL;
  if ( v17 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct _SURFOBJ **)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, a3, (struct _SURFOBJ **)v17);
    v22 = psoTrg[0];
    v45 = psoTrg[0];
    v23 = psoSrc[0];
    v43[3] = (struct _POINTL *)psoSrc[0];
    v24 = psoMsk[0];
    pca[1] = (COLORADJUSTMENT *)psoMsk[0];
    if ( !psoTrg[0] || !psoSrc[0] || !v37 || !a8 )
      goto LABEL_19;
    CaptureRECTL(&v37, &v51);
    CaptureCOLORADJUSTMENT(pca, &v53);
    CapturePOINTL(&pptl, &v47);
    CapturePOINTL(v43, &pptlBrushOrg);
    CaptureBits(&pptfx, a8, 0x18u);
    v25 = (__int64)v44;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, (struct _CLIPOBJ *)a4, &v22->sizlBitmap);
    pxlo = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v17, v25);
    v27 = 1;
    prcl = v37;
    if ( v37 && (v37->left > v37->right || v37->top > v37->bottom) )
      v27 = 0;
    if ( v27 && (unsigned int)bCheckXlate(v23, pxlo) )
    {
      v29 = 1;
      if ( v24 )
      {
        v29 = bCheckSurfaceRectSize(v23, prcl, 0LL, &v39, &v40);
        if ( v29 )
        {
          v30 = pRect(pptl, &v52, v39, v40);
          v29 = bCheckMask(v24, v30);
        }
      }
      if ( v29 )
        v29 = EngPlgBlt(v22, v23, v24, pco, pxlo, pca[0], &pptlBrushOrg, &pptfx, prcl, pptl, iMode);
    }
    else
    {
LABEL_19:
      v29 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, v19, v20, v21);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v31, v32, v33);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, v34, v35, v36);
    --*(_DWORD *)(v17 + 432);
    return v29;
  }
  return result;
}
