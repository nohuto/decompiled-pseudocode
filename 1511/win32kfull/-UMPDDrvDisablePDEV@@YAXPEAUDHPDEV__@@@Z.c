/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C01460B0
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0146210 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F0CF8 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 ThreadWin32Thread; // rax
  size_t v3; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v4; // [rsp+30h] [rbp-38h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  if ( v4 )
  {
    memset(Src, 0, sizeof(Src));
    LODWORD(v3) = 0;
    Src[0] = 0x200000020LL;
    Src[2] = *(_QWORD *)v4;
    Src[3] = a1;
    UMPDOBJ::Thunk(v4, Src, 0x20u, 0LL, v3);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v4);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(ThreadWin32Thread + 40) == ThreadWin32Thread + 40 )
    vUMPDCachedResourceCleanup((struct _W32THREAD *)ThreadWin32Thread);
}
