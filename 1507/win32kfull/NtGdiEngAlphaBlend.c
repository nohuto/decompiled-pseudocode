/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02AB1D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngAlphaBlend @ 0x1C0034230 (EngAlphaBlend.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02A9798 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA9F0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v12; // rbx
  __int64 result; // rax
  CLIPOBJ *v14; // rax
  struct _CLIPOBJ *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  BLENDOBJ *pBlendObj; // r15
  SURFOBJ *v19; // r13
  SURFOBJ *v20; // rsi
  RECTL *prclSrc; // r14
  RECTL *prclDest; // r12
  struct _XLATEOBJ *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  RECTL *v27; // [rsp+40h] [rbp-138h] BYREF
  RECTL *v28; // [rsp+48h] [rbp-130h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-128h]
  __int64 v30; // [rsp+58h] [rbp-120h]
  SURFOBJ *v31; // [rsp+60h] [rbp-118h]
  struct UMPDOBJ *v32; // [rsp+68h] [rbp-110h]
  SURFOBJ *v33; // [rsp+70h] [rbp-108h]
  __int64 v34; // [rsp+78h] [rbp-100h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h]
  SURFOBJ *psoDest[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v39; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v40; // [rsp+120h] [rbp-58h] BYREF

  v30 = a4;
  v34 = a3;
  v35 = a3;
  v36 = a4;
  v27 = a5;
  v28 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = (__int64)ThreadCurrentObj;
  v32 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v12 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v12);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v12);
    v14 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>(v12, a7);
    pBlendObj = (BLENDOBJ *)v14;
    pco = v14;
    v19 = psoDest[0];
    v33 = psoDest[0];
    v20 = psoSrc[0];
    v31 = psoSrc[0];
    if ( !psoDest[0] || !psoSrc[0] || !v14 || !v27 || !v28 )
      goto LABEL_14;
    CaptureRECTL(&v28, &v39);
    CaptureRECTL(&v27, &v40);
    prclSrc = v28;
    if ( !bOrder(v28) )
      goto LABEL_15;
    prclDest = v27;
    if ( !bOrder(v27) )
      goto LABEL_15;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v12, v15, &v19->sizlBitmap);
    v23 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v12, v30);
    if ( (unsigned int)bCheckSurfaceRect(v20, prclSrc, 0LL) && (unsigned int)bCheckXlate(v20, v23) )
      v9 = EngAlphaBlend(v19, v20, pco, v23, prclDest, prclSrc, pBlendObj);
    else
LABEL_14:
      v9 = 0;
LABEL_15:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, (__int64)v15, v16, v17);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, v24, v25, v26);
    --*(_DWORD *)(v12 + 432);
    return v9;
  }
  return result;
}
