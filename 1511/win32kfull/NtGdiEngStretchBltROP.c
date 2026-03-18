/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02ACA80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngStretchBltROP @ 0x1C00EF920 (EngStretchBltROP.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A93D8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9528 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02A97BC (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9C28 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9CA0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA094 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AA294 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        SURFOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  CLIPOBJ *ThreadCurrentObj; // rax
  CLIPOBJ *v17; // rdi
  __int64 result; // rax
  SURFOBJ *v19; // r13
  SURFOBJ *v20; // r12
  struct _CLIPOBJ *v21; // r11
  struct _XLATEOBJ *v22; // r9
  int v23; // esi
  struct _RECTL *v24; // rax
  BRUSHOBJ *pbo; // rax
  unsigned int v26; // esi
  RECTL *prclSrc; // [rsp+70h] [rbp-148h] BYREF
  struct _BRUSHOBJ *v28; // [rsp+78h] [rbp-140h]
  POINTL *pptlMask; // [rsp+80h] [rbp-138h] BYREF
  RECTL *prclDest; // [rsp+88h] [rbp-130h] BYREF
  SURFOBJ *psoMask[2]; // [rsp+90h] [rbp-128h] BYREF
  POINTL *pptlHTOrg; // [rsp+A0h] [rbp-118h] BYREF
  DWORD v33; // [rsp+A8h] [rbp-110h]
  unsigned int v34; // [rsp+B0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+B8h] [rbp-100h]
  unsigned int v36; // [rsp+C0h] [rbp-F8h] BYREF
  XLATEOBJ *pxlo; // [rsp+C8h] [rbp-F0h]
  __int64 v38; // [rsp+D0h] [rbp-E8h]
  COLORADJUSTMENT *pca; // [rsp+D8h] [rbp-E0h] BYREF
  SURFOBJ *psoDest[2]; // [rsp+E0h] [rbp-D8h] BYREF
  SURFOBJ *psoSrc[3]; // [rsp+F0h] [rbp-C8h] BYREF
  struct _SURFOBJ *v42; // [rsp+108h] [rbp-B0h]
  struct _POINTL v43; // [rsp+110h] [rbp-A8h] BYREF
  struct _POINTL v44; // [rsp+118h] [rbp-A0h] BYREF
  struct _BRUSHOBJ v45; // [rsp+120h] [rbp-98h] BYREF
  struct _RECTL v46; // [rsp+138h] [rbp-80h] BYREF
  struct _RECTL v47; // [rsp+148h] [rbp-70h] BYREF
  struct _RECTL v48; // [rsp+158h] [rbp-60h] BYREF
  struct tagCOLORADJUSTMENT v49; // [rsp+168h] [rbp-50h] BYREF

  psoSrc[2] = a4;
  v42 = a3;
  pxlo = (XLATEOBJ *)a4;
  v38 = a5;
  pca = a6;
  pptlHTOrg = a7;
  prclDest = a8;
  prclSrc = a9;
  pptlMask = a10;
  v28 = a12;
  v33 = rop4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (CLIPOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = ThreadCurrentObj;
  pco = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[18].iUniq;
  result = 0LL;
  if ( v17 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct UMPDOBJ *)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v42, (struct UMPDOBJ *)v17);
    if ( !pptlHTOrg && iMode == 4 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
      --v17[18].iUniq;
      return 0LL;
    }
    v19 = psoDest[0];
    if ( !psoDest[0] )
      goto LABEL_39;
    v20 = psoSrc[0];
    if ( !psoSrc[0] || !prclDest || !prclSrc )
      goto LABEL_39;
    CaptureRECTL(&prclDest, &v46);
    CaptureRECTL(&prclSrc, &v47);
    CapturePOINTL(&pptlMask, &v43);
    CapturePOINTL(&pptlHTOrg, &v44);
    CaptureCOLORADJUSTMENT(&pca, &v49);
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v19, prclDest) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
      --v17[18].iUniq;
      return 1LL;
    }
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v21, &v19->sizlBitmap);
    v22 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, v38);
    pxlo = v22;
    v23 = (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
       && (unsigned int)bCheckXlate(v20, v22)
       && ((unsigned __int8)rop4 == BYTE1(rop4) || psoMask[0] || (unsigned int)PROBEDISPATBRUSH(v28));
    if ( (unsigned __int8)rop4 != BYTE1(rop4) && (!psoMask[0] || !pptlMask) )
      v23 = 0;
    if ( v23 )
    {
      if ( rop4 == 43724 )
      {
        if ( psoMask[0] )
        {
          v23 = bCheckSurfaceRectSize(v20, prclSrc, 0LL, &v34, &v36);
          if ( v23 )
          {
            v24 = pRect(pptlMask, &v48, v34, v36);
            v23 = bCheckMask(psoMask[0], v24);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v17, (__int64)v28);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v28, &v45);
    if ( v23
      && EngStretchBltROP(
           v19,
           v20,
           psoMask[0],
           pco,
           pxlo,
           pca,
           pptlHTOrg,
           prclDest,
           prclSrc,
           pptlMask,
           iMode,
           pbo,
           rop4) )
    {
      v26 = 1;
    }
    else
    {
LABEL_39:
      v26 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
    --v17[18].iUniq;
    return v26;
  }
  return result;
}
