/*
 * XREFs of NtGdiEngPlgBlt @ 0x1C02AE640
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02AB274 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02AB2AC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABAF0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AC160 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        char *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  SURFOBJ *v18; // r15
  SURFOBJ *v19; // rsi
  SURFOBJ *v20; // r14
  __int64 v21; // r12
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *pxlo; // r12
  int v24; // ecx
  RECTL *prcl; // rdi
  unsigned int v26; // ebx
  struct _RECTL *v27; // rax
  unsigned int v28; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-1D4h] BYREF
  RECTL *v30; // [rsp+68h] [rbp-1D0h] BYREF
  POINTL *pptl; // [rsp+70h] [rbp-1C8h] BYREF
  UMPDOBJ *v32; // [rsp+78h] [rbp-1C0h] BYREF
  COLORADJUSTMENT *pca; // [rsp+80h] [rbp-1B8h] BYREF
  struct _POINTL *v34; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v35; // [rsp+90h] [rbp-1A8h]
  struct UMPDOBJ *v36; // [rsp+98h] [rbp-1A0h]
  SURFOBJ *v37; // [rsp+A0h] [rbp-198h]
  SURFOBJ *v38; // [rsp+A8h] [rbp-190h]
  SURFOBJ *v39; // [rsp+B0h] [rbp-188h]
  struct _CLIPOBJ *v40; // [rsp+B8h] [rbp-180h]
  __int64 v41; // [rsp+C0h] [rbp-178h]
  POINTL pptlBrushOrg; // [rsp+C8h] [rbp-170h] BYREF
  struct _POINTL v43; // [rsp+D0h] [rbp-168h] BYREF
  SURFOBJ *psoMsk[8]; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-118h] BYREF
  SURFOBJ *psoTrg[8]; // [rsp+160h] [rbp-D8h] BYREF
  struct _RECTL v47; // [rsp+1A0h] [rbp-98h] BYREF
  struct _RECTL v48; // [rsp+1B0h] [rbp-88h] BYREF
  tagCOLORADJUSTMENT v49; // [rsp+1C0h] [rbp-78h] BYREF
  POINTFIX pptfx; // [rsp+1D8h] [rbp-60h] BYREF

  v40 = a4;
  v35 = a5;
  v41 = a5;
  pca = a6;
  v34 = a7;
  v30 = a9;
  pptl = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v36 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v32, ThreadCurrentObj);
  if ( v32 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, a3, (struct _SURFOBJ **)ThreadCurrentObj);
    v18 = psoTrg[0];
    v37 = psoTrg[0];
    v19 = psoSrc[0];
    v38 = psoSrc[0];
    v20 = psoMsk[0];
    v39 = psoMsk[0];
    if ( !psoTrg[0] || !psoSrc[0] || !v30 || !a8 )
      goto LABEL_18;
    CaptureRECTL(&v30, &v47);
    CaptureCOLORADJUSTMENT(&pca, &v49);
    CapturePOINTL(&pptl, &v43);
    CapturePOINTL(&v34, &pptlBrushOrg);
    CaptureBits(&pptfx, a8, 0x18u);
    v21 = v35;
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a4, &v18->sizlBitmap);
    pxlo = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v21);
    v24 = 1;
    prcl = v30;
    if ( v30 && (v30->left > v30->right || v30->top > v30->bottom) )
      v24 = 0;
    if ( v24 && (unsigned int)bCheckXlate(v19, pxlo) )
    {
      v26 = 1;
      if ( v20 )
      {
        v26 = bCheckSurfaceRectSize(v19, prcl, 0LL, &v29, &v28);
        if ( v26 )
        {
          v27 = pRect(pptl, &v48, v29, v28);
          v26 = bCheckMask(v20, v27);
        }
      }
      if ( v26 )
        v26 = EngPlgBlt(v18, v19, v20, DDIOBJ, pxlo, pca, &pptlBrushOrg, &pptfx, prcl, pptl, iMode);
    }
    else
    {
LABEL_18:
      v26 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v32);
    return v26;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v32);
    return 0LL;
  }
}
