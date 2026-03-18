/*
 * XREFs of NtGdiEngTextOut @ 0x1C02AD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     EngTextOut @ 0x1C0037A40 (EngTextOut.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010E454 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02A9184 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A93D8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9554 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _RECTL *ThreadCurrentObj; // rax
  struct _RECTL *v14; // rdi
  FONTOBJ *v16; // r12
  unsigned __int64 v17; // rax
  RECTL *pboFore; // r14
  BRUSHOBJ *pboOpaque; // r15
  SURFOBJ *v20; // r13
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v23; // esi
  _BYTE v25[8]; // [rsp+58h] [rbp-100h] BYREF
  CLIPOBJ *pco; // [rsp+60h] [rbp-F8h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-F0h] BYREF
  RECTL *prclOpaque[2]; // [rsp+70h] [rbp-E8h] BYREF
  STROBJ *pstro; // [rsp+80h] [rbp-D8h]
  struct _RECTL *v30[2]; // [rsp+88h] [rbp-D0h] BYREF
  SURFOBJ *pso[2]; // [rsp+98h] [rbp-C0h] BYREF
  struct _CLIPOBJ *v32; // [rsp+A8h] [rbp-B0h]
  FONTOBJ *pfo; // [rsp+B0h] [rbp-A8h]
  struct _POINTL v34; // [rsp+B8h] [rbp-A0h] BYREF
  struct _BRUSHOBJ v35; // [rsp+C0h] [rbp-98h] BYREF
  struct _BRUSHOBJ v36; // [rsp+D8h] [rbp-80h] BYREF
  struct _RECTL v37; // [rsp+F0h] [rbp-68h] BYREF
  struct _RECTL v38; // [rsp+100h] [rbp-58h] BYREF

  v32 = a4;
  pco = a4;
  v30[0] = a5;
  prclOpaque[0] = a6;
  pptlOrg = a9;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _RECTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  v30[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++ThreadCurrentObj[27].left;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v14, a2);
  v16 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v14, a3);
  pfo = v16;
  v17 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a7);
  pboFore = (RECTL *)v17;
  if ( !v17 )
    pboFore = (RECTL *)CaptureAndFakeBRUSHOBJ(a7, &v36);
  prclOpaque[1] = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(a8, &v35);
  v20 = pso[0];
  if ( !pso[0] || !pstro || !v16 || !pboFore || !pptlOrg )
    goto LABEL_19;
  CaptureRECTL(v30, &v37);
  CaptureRECTL(prclOpaque, &v38);
  CapturePOINTL(&pptlOrg, &v34);
  prclExtra = v30[0];
  if ( (v14[25].bottom & 0x100) != 0 )
    prclExtra = 0LL;
  if ( ((DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, v32, &v20->sizlBitmap),
         pco = DDIOBJ,
         (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0)
     || pboFore->left == -1)
    && (unsigned int)bCheckSurfaceRect(v20, prclOpaque[0], DDIOBJ) )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v25, (struct PFT *)pfo);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v25, (struct UMPDOBJ *)v14, 0, 0, 0LL);
    v23 = EngTextOut(v20, pstro, pfo, pco, prclExtra, prclOpaque[0], (BRUSHOBJ *)pboFore, pboOpaque, pptlOrg, mix);
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v25, (struct UMPDOBJ *)v14, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v25);
  }
  else
  {
LABEL_19:
    v23 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ(pso);
  if ( v14 )
    --v14[27].left;
  return v23;
}
