/*
 * XREFs of NtGdiEngStretchBlt @ 0x14032DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14024C038 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140255B8C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x14025E5EC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14032C650 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  unsigned int v14; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v16; // r12
  SURFOBJ *v18; // rsi
  SURFOBJ *v19; // r14
  SURFOBJ *v20; // r13
  RECTL *prclSrc; // r12
  struct _XLATEOBJ *v22; // rdx
  unsigned int v23; // edi
  struct _RECTL *v24; // rax
  RECTL *v25; // r9
  RECTL *prclDest; // rdi
  BOOL v27; // eax
  unsigned int v28[2]; // [rsp+60h] [rbp-2E8h] BYREF
  struct _CLIPOBJ *v29; // [rsp+68h] [rbp-2E0h] BYREF
  RECTL *v30; // [rsp+70h] [rbp-2D8h] BYREF
  POINTL *pptlMask; // [rsp+78h] [rbp-2D0h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-2C8h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+88h] [rbp-2C0h]
  RECTL *v34; // [rsp+90h] [rbp-2B8h] BYREF
  POINTL *pptlHTOrg; // [rsp+98h] [rbp-2B0h] BYREF
  COLORADJUSTMENT *pca; // [rsp+A0h] [rbp-2A8h] BYREF
  POINTL *v37; // [rsp+A8h] [rbp-2A0h]
  RECTL *v38; // [rsp+B0h] [rbp-298h]
  RECTL *v39; // [rsp+B8h] [rbp-290h]
  struct _POINTL v40; // [rsp+C0h] [rbp-288h] BYREF
  struct _POINTL v41; // [rsp+C8h] [rbp-280h] BYREF
  UMPDOBJ *v42; // [rsp+D0h] [rbp-278h]
  SURFOBJ *v43; // [rsp+D8h] [rbp-270h]
  SURFOBJ *psoMask[8]; // [rsp+E0h] [rbp-268h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-228h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-1E8h] BYREF
  UMPDOBJ *v47[4]; // [rsp+1A0h] [rbp-1A8h] BYREF
  UMPDOBJ *v48; // [rsp+1C0h] [rbp-188h]
  struct _RECTL v49; // [rsp+200h] [rbp-148h] BYREF
  struct _RECTL v50; // [rsp+210h] [rbp-138h] BYREF
  struct _RECTL v51; // [rsp+220h] [rbp-128h] BYREF
  struct tagCOLORADJUSTMENT v52; // [rsp+230h] [rbp-118h] BYREF
  _BYTE v53[160]; // [rsp+250h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+2F0h] [rbp-58h]

  v29 = a4;
  v37 = a7;
  DDIOBJ = a4;
  *(_QWORD *)v28 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v38 = a8;
  v30 = a8;
  v39 = a9;
  v34 = a9;
  pptlMask = a10;
  v50 = 0LL;
  v51 = 0LL;
  v14 = 0;
  v40 = 0LL;
  v41 = 0LL;
  memset(&v52, 0, sizeof(v52));
  CurrentThread = GreGetCurrentThread((__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v47, CurrentThread);
  v16 = v48;
  v42 = v48;
  if ( !v48 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v47);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v48);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v16);
  v18 = psoDest[0];
  v43 = psoDest[0];
  v19 = psoSrc[0];
  *(SURFOBJ **)&v49.left = psoSrc[0];
  v20 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !v37 && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && psoSrc[0] && v38 && v39 )
  {
    CaptureRECTL(&v30, &v50);
    CapturePOINTL(&pptlMask, &v40);
    CaptureRECTL(&v34, &v51);
    CaptureCOLORADJUSTMENT(&pca, &v52);
    CapturePOINTL(&pptlHTOrg, &v41);
    if ( !bCheckDestSurfaceOverlap(v18, v30) )
    {
      v14 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v47);
      return v14;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v16, v29, &v18->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v16, *(__int64 *)v28);
    prclSrc = v34;
    if ( bOrder(v34) && (unsigned int)bCheckXlate(v19, v22) )
    {
      v23 = 1;
      if ( v20 )
      {
        v49 = 0LL;
        LODWORD(v29) = 0;
        v28[0] = 0;
        v23 = bCheckSurfaceRectSize(v19, prclSrc, 0LL, (unsigned int *)&v29, v28);
        if ( v23 )
        {
          v24 = pRect(pptlMask, &v49, (int)v29, v28[0]);
          v23 = bCheckMask(v20, v24);
        }
      }
    }
    else
    {
      v23 = 0;
    }
    if ( v23 )
    {
      v25 = 0LL;
      prclDest = v30;
      if ( iMode == 4 )
        v25 = v30;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v53, v18, DDIOBJ, v25);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v53)
        || (v27 = EngStretchBlt(v18, v19, v20, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode),
            v23 = 1,
            !v27) )
      {
        v23 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v53);
    }
  }
  else
  {
    v23 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v47);
  return v23;
}
