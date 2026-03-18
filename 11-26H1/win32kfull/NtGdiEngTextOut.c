/*
 * XREFs of NtGdiEngTextOut @ 0x14032EF00
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400D9914 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        STROBJ *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v12; // r14
  SURFOBJ *v14; // r13
  FONTOBJ *v15; // r12
  struct _BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v20; // edi
  FONTOBJ *v21; // rdi
  BOOL v22; // eax
  struct _BRUSHOBJ *v23; // [rsp+50h] [rbp-258h] BYREF
  __int64 v24; // [rsp+58h] [rbp-250h]
  STROBJ *pstro; // [rsp+60h] [rbp-248h]
  RECTL *prclOpaque; // [rsp+68h] [rbp-240h] BYREF
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-238h]
  struct _RECTL *v28; // [rsp+78h] [rbp-230h] BYREF
  POINTL *pptlOrg; // [rsp+80h] [rbp-228h] BYREF
  struct _BRUSHOBJ *v30; // [rsp+88h] [rbp-220h]
  POINTL *v31; // [rsp+90h] [rbp-218h]
  struct _POINTL v32; // [rsp+98h] [rbp-210h] BYREF
  struct _CLIPOBJ *v33; // [rsp+A0h] [rbp-208h]
  UMPDOBJ *v34; // [rsp+A8h] [rbp-200h]
  SURFOBJ *v35; // [rsp+B0h] [rbp-1F8h]
  FONTOBJ *pfo; // [rsp+B8h] [rbp-1F0h]
  struct _BRUSHOBJ v37; // [rsp+C0h] [rbp-1E8h] BYREF
  struct _BRUSHOBJ v38; // [rsp+D8h] [rbp-1D0h] BYREF
  SURFOBJ *pso[8]; // [rsp+F0h] [rbp-1B8h] BYREF
  UMPDOBJ *v40[4]; // [rsp+130h] [rbp-178h] BYREF
  UMPDOBJ *v41; // [rsp+150h] [rbp-158h]
  struct _RECTL v42; // [rsp+190h] [rbp-118h] BYREF
  struct _RECTL v43; // [rsp+1A0h] [rbp-108h] BYREF
  _BYTE v44[160]; // [rsp+1B0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+250h] [rbp-58h]

  v33 = a4;
  v24 = a3;
  pstro = a2;
  v27 = a4;
  v28 = a5;
  prclOpaque = a6;
  v23 = a7;
  v30 = a8;
  v31 = a9;
  pptlOrg = a9;
  v42 = 0LL;
  v43 = 0LL;
  v32 = 0LL;
  memset(&v37, 0, sizeof(v37));
  memset(&v38, 0, sizeof(v38));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v40, CurrentThread);
  v12 = v41;
  v34 = v41;
  if ( v41 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v41);
    v14 = pso[0];
    v35 = pso[0];
    pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v12, (__int64)pstro);
    v15 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v12, v24);
    pfo = v15;
    pboFore = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a7);
    if ( !pboFore )
      pboFore = CaptureAndFakeBRUSHOBJ(v23, &v37);
    v23 = pboFore;
    pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a8);
    if ( !pboOpaque )
      pboOpaque = CaptureAndFakeBRUSHOBJ(v30, &v38);
    v24 = (__int64)pboOpaque;
    if ( !v14 || !pstro || !v15 || !pboFore || !v31 )
      goto LABEL_21;
    CaptureRECTL(&v28, &v42);
    CaptureRECTL(&prclOpaque, &v43);
    CapturePOINTL(&pptlOrg, &v32);
    prclExtra = v28;
    if ( (*((_DWORD *)v12 + 107) & 0x100) != 0 )
      prclExtra = 0LL;
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, v33, &v14->sizlBitmap);
    v27 = DDIOBJ;
    if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pboFore->iSolidColor == -1 )
    {
      v20 = 1;
      if ( (unsigned int)bCheckSurfaceRect(v14, prclOpaque, DDIOBJ) )
      {
        v21 = pfo;
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v23, (struct PFT *)pfo);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v23, v12, 0, 0, 0LL);
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44, v14, v27, 0LL);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v44)
          || (v22 = EngTextOut(v14, pstro, v21, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
              v20 = 1,
              !v22) )
        {
          v20 = 0;
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v23, v12, 0LL, 0LL, 0LL);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v44);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v23);
      }
    }
    else
    {
LABEL_21:
      v20 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
    return v20;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
    return 0LL;
  }
}
