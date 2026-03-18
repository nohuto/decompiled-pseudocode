/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02AFDA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngTransparentBlt @ 0x1C0103690 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  SURFOBJ *v15; // rsi
  SURFOBJ *v16; // rdi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v20; // rbx
  RECTL *v21; // [rsp+40h] [rbp-138h] BYREF
  RECTL *v22; // [rsp+48h] [rbp-130h] BYREF
  UMPDOBJ *v23; // [rsp+50h] [rbp-128h] BYREF
  __int64 v24; // [rsp+58h] [rbp-120h]
  struct UMPDOBJ *v25; // [rsp+60h] [rbp-118h]
  SURFOBJ *v26; // [rsp+68h] [rbp-110h]
  SURFOBJ *v27; // [rsp+70h] [rbp-108h]
  struct _CLIPOBJ *v28; // [rsp+78h] [rbp-100h]
  __int64 v29; // [rsp+80h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v32; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v33; // [rsp+120h] [rbp-58h] BYREF

  v24 = a4;
  v28 = a3;
  v29 = a4;
  v21 = a5;
  v22 = a6;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v25 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v23, ThreadCurrentObj);
  if ( !v23 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v23);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)ThreadCurrentObj);
  v15 = psoDst[0];
  v26 = psoDst[0];
  v16 = psoSrc[0];
  v27 = psoSrc[0];
  if ( !psoDst[0] || !psoSrc[0] || !v21 || !v22 )
    goto LABEL_12;
  CaptureRECTL(&v22, &v32);
  CaptureRECTL(&v21, &v33);
  prclDst = v21;
  if ( !bOrder(v21) )
    goto LABEL_13;
  prclSrc = v22;
  if ( !bOrder(v22) )
    goto LABEL_13;
  DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a3, &v15->sizlBitmap);
  v20 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, v24);
  if ( (unsigned int)bCheckSurfaceRect(v16, prclSrc, 0LL) && (unsigned int)bCheckXlate(v16, v20) )
    v11 = EngTransparentBlt(v15, v16, DDIOBJ, v20, prclDst, prclSrc, iTransColor, ulReserved);
  else
LABEL_12:
    v11 = 0;
LABEL_13:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v23);
  return v11;
}
