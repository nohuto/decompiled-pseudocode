/*
 * XREFs of NtGdiEngPlgBlt @ 0x14032D980
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x14025E5EC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x14032C110 (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14032C650 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        void *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v16; // rdi
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
  RECTL *v28; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v29[2]; // [rsp+68h] [rbp-220h] BYREF
  POINTL *pptl; // [rsp+70h] [rbp-218h] BYREF
  POINTL pptlBrushOrg; // [rsp+78h] [rbp-210h] BYREF
  COLORADJUSTMENT *pca; // [rsp+80h] [rbp-208h] BYREF
  struct _POINTL v33; // [rsp+88h] [rbp-200h] BYREF
  struct _POINTL *v34; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v35; // [rsp+98h] [rbp-1F0h]
  UMPDOBJ *v36; // [rsp+A0h] [rbp-1E8h]
  SURFOBJ *v37; // [rsp+A8h] [rbp-1E0h]
  SURFOBJ *v38; // [rsp+B0h] [rbp-1D8h]
  SURFOBJ *v39; // [rsp+B8h] [rbp-1D0h]
  struct _CLIPOBJ *v40; // [rsp+C0h] [rbp-1C8h]
  SURFOBJ *psoMsk[8]; // [rsp+D0h] [rbp-1B8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+110h] [rbp-178h] BYREF
  SURFOBJ *psoTrg[8]; // [rsp+150h] [rbp-138h] BYREF
  UMPDOBJ *v44[4]; // [rsp+190h] [rbp-F8h] BYREF
  UMPDOBJ *v45; // [rsp+1B0h] [rbp-D8h]
  struct _RECTL v46; // [rsp+1F0h] [rbp-98h] BYREF
  struct _RECTL v47; // [rsp+200h] [rbp-88h] BYREF
  tagCOLORADJUSTMENT v48; // [rsp+210h] [rbp-78h] BYREF
  POINTFIX pptfx; // [rsp+228h] [rbp-60h] BYREF

  *(_QWORD *)v29 = a9;
  v40 = a4;
  v35 = a5;
  *(_QWORD *)&v46.left = a5;
  pca = a6;
  v34 = a7;
  v28 = a9;
  pptl = a10;
  v47 = 0LL;
  v33 = 0LL;
  pptlBrushOrg = 0LL;
  memset(&v48, 0, sizeof(v48));
  CurrentThread = GreGetCurrentThread((__int64)a9);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v44, CurrentThread);
  v16 = v45;
  v36 = v45;
  if ( v45 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, v45);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, a3, v16);
    v18 = psoTrg[0];
    v37 = psoTrg[0];
    v19 = psoSrc[0];
    v38 = psoSrc[0];
    v20 = psoMsk[0];
    v39 = psoMsk[0];
    if ( !psoTrg[0] || !psoSrc[0] || !*(_QWORD *)v29 || !a8 )
      goto LABEL_18;
    CaptureRECTL(&v28, &v47);
    CaptureCOLORADJUSTMENT(&pca, &v48);
    CapturePOINTL(&pptl, &v33);
    CapturePOINTL(&v34, &pptlBrushOrg);
    CaptureBits(&pptfx, a8, 0x18u);
    v21 = v35;
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v16, a4, &v18->sizlBitmap);
    pxlo = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v16, v21);
    v24 = 1;
    prcl = v28;
    if ( v28 && (v28->left > v28->right || v28->top > v28->bottom) )
      v24 = 0;
    if ( v24 && (unsigned int)bCheckXlate(v19, pxlo) )
    {
      v26 = 1;
      if ( v20 )
      {
        v46 = 0LL;
        LODWORD(v28) = 0;
        v29[0] = 0;
        v26 = bCheckSurfaceRectSize(v19, prcl, 0LL, (unsigned int *)&v28, v29);
        if ( v26 )
        {
          v27 = pRect(pptl, &v46, (int)v28, v29[0]);
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
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v44);
    return v26;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v44);
    return 0LL;
  }
}
