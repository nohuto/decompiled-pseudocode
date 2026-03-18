/*
 * XREFs of NtGdiEngTextOut @ 0x1C02AE1D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngTextOut @ 0x1C009BA80 (EngTextOut.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028603C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02A998C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
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
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v13; // rdi
  SURFOBJ *v15; // r13
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  POINTL *pboFore; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rcx
  unsigned int v25; // esi
  STROBJ *pstroa; // [rsp+58h] [rbp-200h]
  FONTOBJ *pfoa; // [rsp+60h] [rbp-1F8h]
  struct _CLIPOBJ *v30; // [rsp+68h] [rbp-1F0h]
  _BYTE v31[8]; // [rsp+70h] [rbp-1E8h] BYREF
  RECTL *prclOpaque; // [rsp+78h] [rbp-1E0h] BYREF
  POINTL *pptlOrg[2]; // [rsp+80h] [rbp-1D8h] BYREF
  struct _RECTL *v34; // [rsp+90h] [rbp-1C8h] BYREF
  struct _CLIPOBJ *v35; // [rsp+98h] [rbp-1C0h]
  SURFOBJ *v36; // [rsp+A0h] [rbp-1B8h]
  struct UMPDOBJ *v37; // [rsp+A8h] [rbp-1B0h]
  struct _BRUSHOBJ *v38; // [rsp+B0h] [rbp-1A8h]
  struct _POINTL v39; // [rsp+B8h] [rbp-1A0h] BYREF
  SURFOBJ *pso[8]; // [rsp+C0h] [rbp-198h] BYREF
  struct _BRUSHOBJ v41; // [rsp+100h] [rbp-158h] BYREF
  struct _BRUSHOBJ v42; // [rsp+118h] [rbp-140h] BYREF
  struct _RECTL v43; // [rsp+130h] [rbp-128h] BYREF
  struct _RECTL v44; // [rsp+140h] [rbp-118h] BYREF
  _BYTE v45[168]; // [rsp+150h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1F8h] [rbp-60h]

  v35 = a4;
  v34 = a5;
  prclOpaque = a6;
  v38 = a8;
  pptlOrg[0] = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v15 = pso[0];
  v36 = pso[0];
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, a2);
  v16 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, a3);
  pfoa = (FONTOBJ *)v16;
  v17 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
  pboFore = (POINTL *)v17;
  if ( !v17 )
    pboFore = (POINTL *)CaptureAndFakeBRUSHOBJ(a7, &v41);
  pptlOrg[1] = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v38, &v42);
  if ( !v15 || !pstroa || !v16 || !pboFore || !pptlOrg[0] )
    goto LABEL_22;
  CaptureRECTL(&v34, &v43);
  CaptureRECTL(&prclOpaque, &v44);
  CapturePOINTL(pptlOrg, &v39);
  prclExtra = v34;
  if ( (*((_DWORD *)v13 + 103) & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v35, &v15->sizlBitmap),
         v30 = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->x == -1)
    && (unsigned int)bCheckSurfaceRect(v15, prclOpaque, DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v31, (struct PFT *)pfoa);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v31, v13, 0, 0, 0LL);
    ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v15, v30, 0LL);
    if ( !(unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
      || (v25 = 1,
          !EngTextOut(v15, pstroa, pfoa, pco, prclExtra, prclOpaque, (BRUSHOBJ *)pboFore, pboOpaque, pptlOrg[0], mix)) )
    {
      v25 = 0;
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v31, v13, 0LL, 0LL, 0LL);
    ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v31);
  }
  else
  {
LABEL_22:
    v25 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v19, v20, v21);
  if ( v13 )
    --*((_DWORD *)v13 + 108);
  return v25;
}
