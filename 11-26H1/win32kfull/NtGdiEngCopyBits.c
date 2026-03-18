/*
 * XREFs of NtGdiEngCopyBits @ 0x14032CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1402280A0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140255B8C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14032C650 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v8; // edi
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v10; // r12
  SURFOBJ *v12; // r14
  SURFOBJ *v13; // rsi
  __int64 v14; // r13
  RECTL *prclDest; // r15
  struct _CLIPOBJ *v16; // rdx
  struct _XLATEOBJ *v17; // r12
  POINTL *pptlSrc; // r13
  struct _RECTL *v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-198h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-194h] BYREF
  CLIPOBJ *pco; // [rsp+38h] [rbp-190h]
  RECTL *v23; // [rsp+40h] [rbp-188h] BYREF
  POINTL *v24; // [rsp+48h] [rbp-180h] BYREF
  struct _POINTL v25; // [rsp+50h] [rbp-178h] BYREF
  __int64 v26; // [rsp+58h] [rbp-170h]
  CLIPOBJ *v27; // [rsp+60h] [rbp-168h]
  UMPDOBJ *v28; // [rsp+68h] [rbp-160h]
  SURFOBJ *v29; // [rsp+70h] [rbp-158h]
  SURFOBJ *v30; // [rsp+78h] [rbp-150h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-148h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-108h] BYREF
  UMPDOBJ *v33[4]; // [rsp+100h] [rbp-C8h] BYREF
  UMPDOBJ *v34; // [rsp+120h] [rbp-A8h]
  struct _RECTL v35; // [rsp+160h] [rbp-68h] BYREF
  struct _RECTL v36; // [rsp+170h] [rbp-58h] BYREF

  v27 = a4;
  v26 = a3;
  *(_QWORD *)&v35.left = a3;
  pco = a4;
  v23 = a5;
  v24 = a6;
  v36 = 0LL;
  v25 = 0LL;
  v21 = 0;
  v20 = 0;
  v8 = 1;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v33, CurrentThread);
  v10 = v34;
  v28 = v34;
  if ( !v34 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v33);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, v34);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v10);
  v12 = psoDest[0];
  v29 = psoDest[0];
  v13 = psoSrc[0];
  v30 = psoSrc[0];
  if ( !psoDest[0] || !psoSrc[0] || psoDest[0]->iType || !a5 || !a6 )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  CaptureRECTL(&v23, &v36);
  CapturePOINTL(&v24, &v25);
  v14 = (__int64)v27;
  prclDest = v23;
  if ( bOrder(v23) )
  {
    pco = UMPDOBJ::GetDDIOBJ(v10, v16, &v12->sizlBitmap);
    v17 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v10, v14);
    if ( (unsigned int)bCheckSurfaceRectSize(v12, prclDest, pco, &v21, &v20) && (unsigned int)bCheckXlate(v13, v17) )
    {
      v8 = 1;
      v35 = 0LL;
      pptlSrc = v24;
      v19 = pRect(v24, &v35, v21, v20);
      if ( (unsigned int)bCheckSurfaceRect(v13, v19, 0LL) )
        v8 = EngCopyBits(v12, v13, pco, v17, prclDest, pptlSrc);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_14:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v33);
  return v8;
}
