/*
 * XREFs of NtGdiEngTransparentBlt @ 0x14032F2F0
 * Callers:
 *     <none>
 * Callees:
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400F6830 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140255B8C (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v13; // r15
  SURFOBJ *v15; // rsi
  SURFOBJ *v16; // rdi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r14
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v20; // rbx
  RECTL *v21; // [rsp+40h] [rbp-188h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-180h] BYREF
  __int64 v23; // [rsp+50h] [rbp-178h]
  UMPDOBJ *v24; // [rsp+58h] [rbp-170h]
  SURFOBJ *v25; // [rsp+60h] [rbp-168h]
  SURFOBJ *v26; // [rsp+68h] [rbp-160h]
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-158h]
  __int64 v28; // [rsp+78h] [rbp-150h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-148h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+C0h] [rbp-108h] BYREF
  UMPDOBJ *v31[4]; // [rsp+100h] [rbp-C8h] BYREF
  UMPDOBJ *v32; // [rsp+120h] [rbp-A8h]
  struct _RECTL v33; // [rsp+160h] [rbp-68h] BYREF
  struct _RECTL v34; // [rsp+170h] [rbp-58h] BYREF

  v23 = a4;
  v27 = a3;
  v28 = a4;
  v21 = a5;
  v22 = a6;
  v11 = 1;
  v34 = 0LL;
  v33 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v31, CurrentThread);
  v13 = v32;
  v24 = v32;
  if ( !v32 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v31);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, v32);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v13);
  v15 = psoDst[0];
  v25 = psoDst[0];
  v16 = psoSrc[0];
  v26 = psoSrc[0];
  if ( !psoDst[0] || !psoSrc[0] || !a5 || !a6 )
    goto LABEL_12;
  CaptureRECTL(&v22, &v33);
  CaptureRECTL(&v21, &v34);
  prclDst = v21;
  if ( !bOrder(v21) )
    goto LABEL_13;
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_13;
  DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v15->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v13, v23);
  if ( (unsigned int)bCheckSurfaceRect(v16, prclSrc, 0LL) && (unsigned int)bCheckXlate(v16, v20) )
    v11 = EngTransparentBlt(v15, v16, DDIOBJ, v20, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_12:
    v11 = 0;
LABEL_13:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v31);
  return v11;
}
