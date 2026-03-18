/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02AA860
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02A8F90 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA094 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        SURFOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v12; // rbx
  __int64 result; // rax
  CLIPOBJ *v14; // rax
  BLENDOBJ *pBlendObj; // r14
  SURFOBJ *v16; // r13
  SURFOBJ *v17; // rsi
  RECTL *prclSrc; // r15
  RECTL *prclDest; // r12
  struct _CLIPOBJ *v20; // rdx
  struct _XLATEOBJ *v21; // rdi
  RECTL *v22; // [rsp+40h] [rbp-C8h] BYREF
  RECTL *v23; // [rsp+48h] [rbp-C0h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-B8h]
  SURFOBJ *v25; // [rsp+58h] [rbp-B0h]
  SURFOBJ *v26; // [rsp+60h] [rbp-A8h]
  SURFOBJ *psoSrc[3]; // [rsp+68h] [rbp-A0h] BYREF
  SURFOBJ *psoDest[4]; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL v29; // [rsp+A0h] [rbp-68h] BYREF
  struct _RECTL v30; // [rsp+B0h] [rbp-58h] BYREF

  v25 = a4;
  psoSrc[2] = a3;
  v26 = a3;
  psoDest[3] = a4;
  v22 = a5;
  v23 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  psoDest[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v12 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct UMPDOBJ *)v12);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v12);
    v14 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>((__int64)v12, a7);
    pBlendObj = (BLENDOBJ *)v14;
    pco = v14;
    v16 = psoDest[0];
    if ( !psoDest[0] )
      goto LABEL_14;
    v17 = psoSrc[0];
    if ( !psoSrc[0] || !v14 || !v22 || !v23 )
      goto LABEL_14;
    CaptureRECTL(&v23, &v29);
    CaptureRECTL(&v22, &v30);
    prclSrc = v23;
    if ( !bOrder(v23) )
      goto LABEL_15;
    prclDest = v22;
    if ( !bOrder(v22) )
      goto LABEL_15;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, v20, &v16->sizlBitmap);
    v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v12, (__int64)v25);
    if ( (unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) && (unsigned int)bCheckXlate(v17, v21) )
      v9 = EngAlphaBlend(v16, v17, pco, v21, prclDest, prclSrc, pBlendObj);
    else
LABEL_14:
      v9 = 0;
LABEL_15:
    UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoDest);
    --v12[5].sizlBitmap.cx;
    return v9;
  }
  return result;
}
