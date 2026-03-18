/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02AD820
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A92C0 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA038 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA094 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        SURFOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v14; // rbx
  __int64 result; // rax
  SURFOBJ *v16; // r14
  SURFOBJ *v17; // rsi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v21; // rdi
  RECTL *v22; // [rsp+40h] [rbp-B8h] BYREF
  RECTL *v23; // [rsp+48h] [rbp-B0h] BYREF
  SURFOBJ *v24; // [rsp+50h] [rbp-A8h]
  struct _CLIPOBJ *v25; // [rsp+58h] [rbp-A0h]
  SURFOBJ *psoSrc[2]; // [rsp+60h] [rbp-98h] BYREF
  SURFOBJ *psoDst[4]; // [rsp+70h] [rbp-88h] BYREF
  struct _RECTL v28; // [rsp+90h] [rbp-68h] BYREF
  struct _RECTL v29; // [rsp+A0h] [rbp-58h] BYREF

  v24 = a4;
  v25 = a3;
  psoDst[2] = a4;
  v23 = a5;
  v22 = a6;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  psoDst[3] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct UMPDOBJ *)v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct UMPDOBJ *)v14);
    v16 = psoDst[0];
    if ( !psoDst[0] )
      goto LABEL_13;
    v17 = psoSrc[0];
    if ( !psoSrc[0] || !v23 || !v22 )
      goto LABEL_13;
    CaptureRECTL(&v22, &v28);
    CaptureRECTL(&v23, &v29);
    prclDst = v23;
    if ( !bOrder(v23) )
      goto LABEL_14;
    prclSrc = v22;
    if ( !bOrder(v22) )
      goto LABEL_14;
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, a3, &v16->sizlBitmap);
    v21 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, (__int64)v24);
    if ( (unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) && (unsigned int)bCheckXlate(v17, v21) )
      v11 = EngTransparentBlt(v16, v17, DDIOBJ, v21, prclDst, prclSrc, iTransColor, ulReserved);
    else
LABEL_13:
      v11 = 0;
LABEL_14:
    UMPDSURFOBJ::~UMPDSURFOBJ(psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ(psoDst);
    --v14[5].sizlBitmap.cx;
    return v11;
  }
  return result;
}
