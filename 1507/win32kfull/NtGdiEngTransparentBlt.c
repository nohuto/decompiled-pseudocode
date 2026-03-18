/*
 * XREFs of NtGdiEngTransparentBlt @ 0x1C02AE560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngTransparentBlt @ 0x1C0126F30 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02A9AC8 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02AA994 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02AA9F0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
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
  unsigned int v11; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  SURFOBJ *v19; // r14
  SURFOBJ *v20; // rsi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r15
  CLIPOBJ *DDIOBJ; // r13
  struct _XLATEOBJ *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  RECTL *v28; // [rsp+40h] [rbp-128h] BYREF
  RECTL *v29; // [rsp+48h] [rbp-120h] BYREF
  __int64 v30; // [rsp+50h] [rbp-118h]
  SURFOBJ *v31; // [rsp+58h] [rbp-110h]
  __int64 v32; // [rsp+60h] [rbp-108h]
  SURFOBJ *v33; // [rsp+68h] [rbp-100h]
  struct UMPDOBJ *v34; // [rsp+70h] [rbp-F8h]
  struct _CLIPOBJ *v35; // [rsp+78h] [rbp-F0h]
  SURFOBJ *psoDst[8]; // [rsp+80h] [rbp-E8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+C0h] [rbp-A8h] BYREF
  struct _RECTL v38; // [rsp+100h] [rbp-68h] BYREF
  struct _RECTL v39; // [rsp+110h] [rbp-58h] BYREF

  v30 = a4;
  v35 = a3;
  v32 = a4;
  v29 = a5;
  v28 = a6;
  v11 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (__int64)ThreadCurrentObj;
  v34 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v14 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)v14);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v14);
    v19 = psoDst[0];
    v33 = psoDst[0];
    v20 = psoSrc[0];
    v31 = psoSrc[0];
    if ( !psoDst[0] || !psoSrc[0] || !v29 || !v28 )
      goto LABEL_13;
    CaptureRECTL(&v28, &v38);
    CaptureRECTL(&v29, &v39);
    prclDst = v29;
    if ( !bOrder(v29) )
      goto LABEL_14;
    prclSrc = v28;
    if ( !bOrder(v28) )
      goto LABEL_14;
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, a3, &v19->sizlBitmap);
    v24 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v14, v30);
    if ( (unsigned int)bCheckSurfaceRect(v20, prclSrc, 0LL) && (unsigned int)bCheckXlate(v20, v24) )
      v11 = EngTransparentBlt(v19, v20, DDIOBJ, v24, prclDst, prclSrc, iTransColor, ulReserved);
    else
LABEL_13:
      v11 = 0;
LABEL_14:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, v16, v17, v18);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, v25, v26, v27);
    --*(_DWORD *)(v14 + 432);
    return v11;
  }
  return result;
}
