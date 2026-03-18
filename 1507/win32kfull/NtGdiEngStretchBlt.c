/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C02AD1B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02A9DAC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA584 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02AA5FC (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA9F0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02AAC0C (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v17; // rbx
  __int64 result; // rax
  struct _XLATEOBJ *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  SURFOBJ *v22; // r14
  SURFOBJ *v23; // r15
  SURFOBJ *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  RECTL *prclSrc; // r13
  unsigned int v41; // edi
  struct _RECTL *v42; // rax
  RECTL *v43; // r9
  RECTL *prclDest; // rdi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  RECTL *v51; // [rsp+60h] [rbp-298h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-290h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+70h] [rbp-288h]
  unsigned int v54; // [rsp+78h] [rbp-280h] BYREF
  POINTL *pptlHTOrg; // [rsp+80h] [rbp-278h] BYREF
  RECTL *v56; // [rsp+88h] [rbp-270h] BYREF
  unsigned int v57; // [rsp+90h] [rbp-268h] BYREF
  POINTL *pptlMask; // [rsp+98h] [rbp-260h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-258h]
  COLORADJUSTMENT *pca[4]; // [rsp+A8h] [rbp-250h] BYREF
  struct _POINTL v61; // [rsp+C8h] [rbp-230h] BYREF
  struct _POINTL v62; // [rsp+D0h] [rbp-228h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-218h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-1D8h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+160h] [rbp-198h] BYREF
  struct _RECTL v66; // [rsp+1A0h] [rbp-158h] BYREF
  struct _RECTL v67; // [rsp+1B0h] [rbp-148h] BYREF
  struct _RECTL v68; // [rsp+1C0h] [rbp-138h] BYREF
  struct tagCOLORADJUSTMENT v69; // [rsp+1D0h] [rbp-128h] BYREF
  _BYTE v70[168]; // [rsp+1F0h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+298h] [rbp-60h]

  DDIOBJ = a4;
  v59 = a5;
  pca[0] = a6;
  pptlHTOrg = a7;
  v51 = a8;
  v56 = a9;
  pptlMask = a10;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v17 = (__int64)ThreadCurrentObj;
  pca[1] = (COLORADJUSTMENT *)ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v17 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v17);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, (struct _SURFOBJ **)v17);
    v22 = psoDest[0];
    pca[2] = (COLORADJUSTMENT *)psoDest[0];
    v23 = psoSrc[0];
    pca[3] = (COLORADJUSTMENT *)psoSrc[0];
    v24 = psoMask[0];
    pxlo = (XLATEOBJ *)psoMask[0];
    if ( !pptlHTOrg && iMode == 4 )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, (__int64)v19, v20, v21);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v25, v26, v27);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v28, v29, v30);
      --*(_DWORD *)(v17 + 432);
      return 0LL;
    }
    if ( !psoDest[0] || !psoSrc[0] || !v51 || !v56 )
      goto LABEL_30;
    CaptureRECTL(&v51, &v67);
    CapturePOINTL(&pptlMask, &v61);
    CaptureRECTL(&v56, &v68);
    CaptureCOLORADJUSTMENT(pca, &v69);
    CapturePOINTL(&pptlHTOrg, &v62);
    if ( !(unsigned int)bCheckDestSurfaceOverlap(v22, v51) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, v31, v32, v33);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v34, v35, v36);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v37, v38, v39);
      --*(_DWORD *)(v17 + 432);
      return 1LL;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, a4, &v22->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v17, v59);
    prclSrc = v56;
    if ( bOrder(v56) && (unsigned int)bCheckXlate(v23, v19) )
    {
      v41 = 1;
      if ( v24 )
      {
        v41 = bCheckSurfaceRectSize(v23, prclSrc, 0LL, &v54, &v57);
        if ( v41 )
        {
          v42 = pRect(pptlMask, &v66, v54, v57);
          v41 = bCheckMask(v24, v42);
        }
      }
      if ( v41 )
      {
        v43 = 0LL;
        prclDest = v51;
        if ( iMode == 4 )
          v43 = v51;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v70, v22, DDIOBJ, v43);
        v41 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v70)
           && EngStretchBlt(v22, v23, v24, pco, pxlo, pca[0], pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v70);
      }
    }
    else
    {
LABEL_30:
      v41 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, (__int64)v19, v20, v21);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v45, v46, v47);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v48, v49, v50);
    --*(_DWORD *)(v17 + 432);
    return v41;
  }
  return result;
}
