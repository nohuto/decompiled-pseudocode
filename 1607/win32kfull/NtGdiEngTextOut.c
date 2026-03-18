/*
 * XREFs of NtGdiEngTextOut @ 0x1C02AF9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02AADDC (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  SURFOBJ *v14; // r13
  FONTOBJ *v15; // r12
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  FONTOBJ *v20; // rdi
  BOOL v21; // eax
  unsigned int v22; // edi
  STROBJ *pstroa; // [rsp+60h] [rbp-208h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-200h] BYREF
  RECTL *prclOpaque; // [rsp+70h] [rbp-1F8h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-1F0h] BYREF
  UMPDOBJ *v29; // [rsp+80h] [rbp-1E8h] BYREF
  struct _CLIPOBJ *v30; // [rsp+88h] [rbp-1E0h]
  struct _RECTL *v31; // [rsp+90h] [rbp-1D8h] BYREF
  struct _BRUSHOBJ *v32; // [rsp+98h] [rbp-1D0h]
  struct _CLIPOBJ *v33; // [rsp+A0h] [rbp-1C8h]
  struct UMPDOBJ *v34; // [rsp+A8h] [rbp-1C0h]
  SURFOBJ *v35; // [rsp+B0h] [rbp-1B8h]
  FONTOBJ *pfo; // [rsp+B8h] [rbp-1B0h]
  struct _POINTL v37; // [rsp+C0h] [rbp-1A8h] BYREF
  SURFOBJ *pso[8]; // [rsp+D0h] [rbp-198h] BYREF
  struct _BRUSHOBJ v39; // [rsp+110h] [rbp-158h] BYREF
  struct _BRUSHOBJ v40; // [rsp+128h] [rbp-140h] BYREF
  struct _RECTL v41; // [rsp+140h] [rbp-128h] BYREF
  struct _RECTL v42; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v43[168]; // [rsp+160h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+208h] [rbp-60h]

  v33 = a4;
  v30 = a4;
  v31 = a5;
  prclOpaque = a6;
  v32 = a8;
  pptlOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v34 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v29, ThreadCurrentObj);
  if ( v29 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    v14 = pso[0];
    v35 = pso[0];
    pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a2);
    v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a3);
    pfo = v15;
    pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a7);
    if ( !pboFore )
      pboFore = CaptureAndFakeBRUSHOBJ(a7, &v39);
    pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a8);
    if ( !pboOpaque )
      pboOpaque = CaptureAndFakeBRUSHOBJ(v32, &v40);
    if ( !v14 || !pstroa || !v15 || !pboFore || !pptlOrg )
      goto LABEL_21;
    CaptureRECTL(&v31, &v41);
    CaptureRECTL(&prclOpaque, &v42);
    CapturePOINTL(&pptlOrg, &v37);
    prclExtra = v31;
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 )
      prclExtra = 0LL;
    if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v33, &v14->sizlBitmap),
           v30 = DDIOBJ,
           (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
       || pboFore->iSolidColor == -1)
      && (unsigned int)bCheckSurfaceRect(v14, prclOpaque, DDIOBJ) )
    {
      v20 = pfo;
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, (struct PFT *)pfo);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v28, ThreadCurrentObj, 0, 0, 0LL);
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v14, v30, 0LL);
      if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
        || (v21 = EngTextOut(v14, pstroa, v20, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
            v22 = 1,
            !v21) )
      {
        v22 = 0;
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v28, ThreadCurrentObj, 0LL, 0LL, 0LL);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
    else
    {
LABEL_21:
      v22 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v29);
    return v22;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v29);
    return 0LL;
  }
}
