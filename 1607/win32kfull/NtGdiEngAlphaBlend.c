/*
 * XREFs of NtGdiEngAlphaBlend @ 0x1C02AC780
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02AABE8 (--$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02ABF10 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
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
  unsigned int v9; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  CLIPOBJ *v13; // rax
  BLENDOBJ *pBlendObj; // rsi
  SURFOBJ *v15; // r13
  SURFOBJ *v16; // rdi
  RECTL *prclSrc; // r15
  RECTL *prclDest; // r12
  struct _CLIPOBJ *v19; // rdx
  struct _XLATEOBJ *v20; // rbx
  RECTL *v21; // [rsp+40h] [rbp-148h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-140h] BYREF
  UMPDOBJ *v23; // [rsp+50h] [rbp-138h] BYREF
  CLIPOBJ *pco; // [rsp+58h] [rbp-130h]
  __int64 v25; // [rsp+60h] [rbp-128h]
  __int64 v26; // [rsp+68h] [rbp-120h]
  struct UMPDOBJ *v27; // [rsp+70h] [rbp-118h]
  SURFOBJ *v28; // [rsp+78h] [rbp-110h]
  SURFOBJ *v29; // [rsp+80h] [rbp-108h]
  __int64 v30; // [rsp+88h] [rbp-100h]
  __int64 v31; // [rsp+90h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+A0h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-A8h] BYREF
  struct _RECTL v34; // [rsp+120h] [rbp-68h] BYREF
  struct _RECTL v35; // [rsp+130h] [rbp-58h] BYREF

  v25 = a4;
  v26 = a3;
  v30 = a3;
  v31 = a4;
  v22 = a5;
  v21 = a6;
  v9 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v27 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v23, ThreadCurrentObj);
  if ( !v23 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v23);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v13 = (CLIPOBJ *)UMPDOBJ::GetDDIOBJ<_BLENDOBJ>((__int64)ThreadCurrentObj, a7);
  pBlendObj = (BLENDOBJ *)v13;
  pco = v13;
  v15 = psoDest[0];
  v28 = psoDest[0];
  v16 = psoSrc[0];
  v29 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || !v13 || !v22 || !v21 )
    goto LABEL_13;
  CaptureRECTL(&v21, &v34);
  CaptureRECTL(&v22, &v35);
  prclSrc = v21;
  if ( !bOrder(v21) )
    goto LABEL_14;
  prclDest = v22;
  if ( !bOrder(v22) )
    goto LABEL_14;
  pco = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, v19, &v15->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v25);
  if ( (unsigned int)bCheckSurfaceRect(v16, prclSrc, 0LL) && (unsigned int)bCheckXlate(v16, v20) )
    v9 = EngAlphaBlend(v15, v16, pco, v20, prclDest, prclSrc, pBlendObj);
  else
LABEL_13:
    v9 = 0;
LABEL_14:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v23);
  return v9;
}
