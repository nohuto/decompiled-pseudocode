/*
 * XREFs of NtGdiEngStretchBltROP @ 0x14032E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     EngStretchBltROP @ 0x1401B5900 (EngStretchBltROP.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14024C038 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140255B8C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x14025E5EC (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x14032C17C (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14032C650 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
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
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD a13)
{
  unsigned int v16; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v18; // rsi
  SURFOBJ *v20; // r13
  SURFOBJ *v21; // r12
  SURFOBJ *v22; // r14
  struct _XLATEOBJ *v23; // r8
  DWORD v24; // esi
  int v25; // r15d
  unsigned int v26; // edi
  DWORD rop4; // r15d
  struct _RECTL *v28; // rax
  BRUSHOBJ *pbo; // rsi
  RECTL *v30; // r9
  RECTL *prclDest; // rdi
  BOOL v32; // eax
  DWORD v33; // [rsp+70h] [rbp-328h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-320h] BYREF
  struct _BRUSHOBJ *v35; // [rsp+80h] [rbp-318h]
  POINTL *pptlMask; // [rsp+88h] [rbp-310h] BYREF
  RECTL *prclSrc; // [rsp+90h] [rbp-308h] BYREF
  DWORD v38; // [rsp+98h] [rbp-300h]
  RECTL *v39; // [rsp+A0h] [rbp-2F8h] BYREF
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-2F0h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+B0h] [rbp-2E8h]
  struct _CLIPOBJ *v42; // [rsp+B8h] [rbp-2E0h]
  __int64 v43; // [rsp+C0h] [rbp-2D8h]
  UMPDOBJ *v44; // [rsp+C8h] [rbp-2D0h]
  POINTL *pptlHTOrg; // [rsp+D0h] [rbp-2C8h] BYREF
  COLORADJUSTMENT *pca; // [rsp+D8h] [rbp-2C0h] BYREF
  POINTL *v47; // [rsp+E0h] [rbp-2B8h]
  RECTL *v48; // [rsp+E8h] [rbp-2B0h]
  RECTL *v49; // [rsp+F0h] [rbp-2A8h]
  struct _POINTL v50; // [rsp+F8h] [rbp-2A0h] BYREF
  struct _POINTL v51; // [rsp+100h] [rbp-298h] BYREF
  SURFOBJ *v52; // [rsp+108h] [rbp-290h]
  struct _BRUSHOBJ v53; // [rsp+110h] [rbp-288h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+130h] [rbp-268h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+170h] [rbp-228h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+1B0h] [rbp-1E8h] BYREF
  UMPDOBJ *v57[4]; // [rsp+1F0h] [rbp-1A8h] BYREF
  UMPDOBJ *v58; // [rsp+210h] [rbp-188h]
  struct _RECTL v59; // [rsp+250h] [rbp-148h] BYREF
  struct _RECTL v60; // [rsp+260h] [rbp-138h] BYREF
  struct _RECTL v61; // [rsp+270h] [rbp-128h] BYREF
  struct tagCOLORADJUSTMENT v62; // [rsp+280h] [rbp-118h] BYREF
  _BYTE v63[160]; // [rsp+2A0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+340h] [rbp-58h]

  v42 = a4;
  v47 = a7;
  DDIOBJ = a4;
  v43 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v48 = a8;
  v39 = a8;
  v49 = a9;
  prclSrc = a9;
  pptlMask = a10;
  v35 = a12;
  v33 = a13;
  v34 = a13;
  v38 = a13;
  v60 = 0LL;
  v61 = 0LL;
  v16 = 0;
  v50 = 0LL;
  v51 = 0LL;
  memset(&v62, 0, sizeof(v62));
  CurrentThread = GreGetCurrentThread((__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v57, CurrentThread);
  v18 = v58;
  v44 = v58;
  if ( !v58 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v57);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v58);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v18);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v18);
  v20 = psoDest[0];
  v52 = psoDest[0];
  v21 = psoSrc[0];
  *(SURFOBJ **)&v59.left = psoSrc[0];
  v22 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !v47 && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && psoSrc[0] && v48 && v49 )
  {
    CaptureRECTL(&v39, &v60);
    CaptureRECTL(&prclSrc, &v61);
    CapturePOINTL(&pptlMask, &v50);
    CapturePOINTL(&pptlHTOrg, &v51);
    CaptureCOLORADJUSTMENT(&pca, &v62);
    if ( !bCheckDestSurfaceOverlap(v20, v39) )
    {
      v16 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v57);
      return v16;
    }
    memset(&v53, 0, sizeof(v53));
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v18, v42, &v20->sizlBitmap);
    v23 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v18, v43);
    pxlo = v23;
    if ( (((gajRop3[(unsigned __int8)a13] | gajRop3[BYTE1(a13)]) & 0xD4) == 0 || bOrder(prclSrc))
      && (unsigned int)bCheckXlate(v21, v23)
      && ((v24 = a13 >> 8, v25 = (unsigned __int8)a13, (unsigned __int8)a13 == BYTE1(a13))
       || v22
       || PROBEDISPATBRUSH(v35)) )
    {
      v26 = 1;
    }
    else
    {
      v26 = 0;
      v24 = v38 >> 8;
      v25 = (unsigned __int8)v38;
    }
    if ( v25 != (unsigned __int8)v24 && (!v22 || !pptlMask) )
      v26 = 0;
    rop4 = v33;
    if ( v26 )
    {
      if ( v33 == 43724 )
      {
        if ( v22 )
        {
          v59 = 0LL;
          v34 = 0;
          v33 = 0;
          v26 = bCheckSurfaceRectSize(v21, prclSrc, 0LL, &v34, &v33);
          if ( v26 )
          {
            v28 = pRect(pptlMask, &v59, v34, v33);
            v26 = bCheckMask(v22, v28);
          }
        }
      }
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v44, (__int64)v35);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v35, &v53);
    if ( v26 )
    {
      v30 = 0LL;
      prclDest = v39;
      if ( iMode == 4 )
        v30 = v39;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v63, v20, DDIOBJ, v30);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v63)
        || (v32 = EngStretchBltROP(
                    v20,
                    v21,
                    v22,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v26 = 1,
            !v32) )
      {
        v26 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v63);
    }
  }
  else
  {
    v26 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v57);
  return v26;
}
