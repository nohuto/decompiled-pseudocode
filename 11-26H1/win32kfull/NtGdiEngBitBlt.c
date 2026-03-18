/*
 * XREFs of NtGdiEngBitBlt @ 0x1400F4B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14032C650 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        XLATEOBJ *a2,
        struct _RECTL *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 a11)
{
  POINTL *pptlSrc; // r15
  POINTL *pptlBrush; // r13
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v15; // rsi
  SURFOBJ *v16; // r12
  __int64 v17; // rsi
  struct _RECTL *pbo; // r14
  char v19; // al
  POINTL *pptlMask; // rsi
  UMPDOBJ *v21; // r9
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  struct _RECTL *v24; // r11
  unsigned int v25; // edi
  int prclTrg; // [rsp+28h] [rbp-280h]
  UMPDOBJ *v28; // [rsp+60h] [rbp-248h] BYREF
  POINTL *v29; // [rsp+68h] [rbp-240h] BYREF
  ROP4 rop4; // [rsp+70h] [rbp-238h]
  struct _RECTL *v31; // [rsp+78h] [rbp-230h]
  SURFOBJ *psoTrg; // [rsp+80h] [rbp-228h]
  SURFOBJ *psoMask; // [rsp+88h] [rbp-220h]
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-218h]
  RECTL *v35; // [rsp+98h] [rbp-210h]
  CLIPOBJ *pco; // [rsp+A0h] [rbp-208h]
  __int64 v37; // [rsp+A8h] [rbp-200h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-1F0h] BYREF
  POINTL *v40; // [rsp+C0h] [rbp-1E8h]
  POINTL *v41; // [rsp+C8h] [rbp-1E0h]
  POINTL *v42; // [rsp+D0h] [rbp-1D8h]
  struct _BRUSHOBJ *v43; // [rsp+D8h] [rbp-1D0h]
  __int64 v44; // [rsp+E0h] [rbp-1C8h]
  RECTL *v45; // [rsp+E8h] [rbp-1C0h]
  struct _CLIPOBJ *v46; // [rsp+F0h] [rbp-1B8h]
  struct _BRUSHOBJ v47; // [rsp+F8h] [rbp-1B0h] BYREF
  _QWORD v48[8]; // [rsp+110h] [rbp-198h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+150h] [rbp-158h] BYREF
  _QWORD v50[8]; // [rsp+190h] [rbp-118h] BYREF
  UMPDOBJ *v51[4]; // [rsp+1D0h] [rbp-D8h] BYREF
  struct UMPDOBJ *v52; // [rsp+1F0h] [rbp-B8h]
  struct _RECTL v53; // [rsp+230h] [rbp-78h] BYREF
  struct _RECTL v54; // [rsp+240h] [rbp-68h] BYREF
  __int128 v55; // [rsp+250h] [rbp-58h] BYREF

  v46 = a4;
  v31 = a3;
  pxlo = a2;
  pco = a4;
  v44 = a5;
  v45 = a6;
  v35 = a6;
  pptlSrc = a7;
  v40 = a7;
  v29 = a8;
  v41 = a8;
  v43 = a9;
  pptlBrush = a10;
  v42 = a10;
  rop4 = a11;
  v55 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset(&v47, 0, sizeof(v47));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v51, CurrentThread);
  v15 = v52;
  v28 = v52;
  *(_QWORD *)&v53.left = v52;
  if ( !v52 )
    goto LABEL_26;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v50, a1, v52);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, (struct _SURFOBJ *)pxlo, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v48, (struct _SURFOBJ *)v31, v15);
  psoTrg = (SURFOBJ *)v50[0];
  v16 = psoSrc[0];
  *(SURFOBJ **)&v54.left = psoSrc[0];
  v17 = v48[0];
  psoMask = (SURFOBJ *)v48[0];
  pbo = (struct _RECTL *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v28, (__int64)a9);
  if ( !pbo )
    pbo = (struct _RECTL *)CaptureAndFakeBRUSHOBJ(v43, &v47);
  v31 = pbo;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v28, v44);
  if ( (rop4 & 0xFFFF0000) != 0
    || !v45
    || (v19 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v19 & 0xE8) != 0)
    && (!pbo || pbo->left == -1 && !a10)
    || (v19 & 0xD4) != 0 && (!a7 || !v16)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v17 && (!pbo || pbo->left != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
LABEL_26:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v51);
    return 0LL;
  }
  if ( !psoTrg )
    goto LABEL_27;
  GreProbeAndReadFromUntrustedVa(&v55, 0x10uLL, v45, 0x10uLL, 1uLL);
  v35 = (RECTL *)&v55;
  if ( a7 )
  {
    GreProbeAndReadFromUntrustedVa(&v37, 8uLL, a7, 8uLL, 1uLL);
    pptlSrc = (POINTL *)&v37;
    v40 = (POINTL *)&v37;
  }
  if ( v29 )
  {
    GreProbeAndReadFromUntrustedVa(&v38, 8uLL, v29, 8uLL, 1uLL);
    v29 = (POINTL *)&v38;
    v41 = (POINTL *)&v38;
  }
  if ( a10 )
  {
    GreProbeAndReadFromUntrustedVa(&v39, 8uLL, a10, 8uLL, 1uLL);
    pptlBrush = (POINTL *)&v39;
    v42 = (POINTL *)&v39;
  }
  pptlMask = v29;
  v21 = v28;
  LODWORD(v28) = 0;
  LODWORD(v29) = 0;
  pco = UMPDOBJ::GetDDIOBJ(v21, v46, &psoTrg->sizlBitmap);
  if ( (unsigned int)bCheckSurfaceRectSize(psoTrg, v35, pco, (unsigned int *)&v28, (unsigned int *)&v29, prclTrg)
    && (unsigned int)bCheckXlate(v16, pxlo) )
  {
    v54 = 0LL;
    v53 = 0LL;
    v22 = (unsigned int)v29;
    v23 = (unsigned int)v28;
    if ( v16 )
      v24 = pRect(pptlSrc, &v54, (unsigned int)v28, (unsigned int)v29);
    else
      v24 = 0LL;
    if ( psoMask )
      v31 = pRect(pptlMask, &v53, v23, v22);
    else
      v31 = 0LL;
    v25 = 0;
    if ( (unsigned int)bCheckSurfaceRect(v16, v24, 0LL) )
    {
      if ( (unsigned int)bCheckMask(psoMask, v31) )
        v25 = EngBitBlt(psoTrg, v16, psoMask, pco, pxlo, v35, pptlSrc, pptlMask, (BRUSHOBJ *)pbo, pptlBrush, rop4);
    }
  }
  else
  {
LABEL_27:
    v25 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v51);
  return v25;
}
