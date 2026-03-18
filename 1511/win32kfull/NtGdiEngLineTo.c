/*
 * XREFs of NtGdiEngLineTo @ 0x1C02ABEF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngLineTo @ 0x1C013CEF0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A93D8 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9578 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        RECTL *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  SURFOBJ *ThreadCurrentObj; // rax
  SURFOBJ *v15; // rbx
  __int64 result; // rax
  BRUSHOBJ *v17; // rsi
  SURFOBJ *v18; // r14
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v20; // edi
  RECTL *prclBounds[2]; // [rsp+60h] [rbp-A8h] BYREF
  SURFOBJ *pso[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _BRUSHOBJ v23; // [rsp+88h] [rbp-80h] BYREF
  struct _RECTL v24; // [rsp+A0h] [rbp-68h] BYREF
  struct _RECTL v25; // [rsp+B0h] [rbp-58h] BYREF

  prclBounds[1] = a2;
  prclBounds[0] = a8;
  v24.left = x1;
  v24.top = y1;
  v24.right = x2;
  v24.bottom = y2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  pso[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[5].sizlBitmap.cx;
  result = 0LL;
  if ( v15 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct UMPDOBJ *)v15);
    v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a3);
    if ( !v17 )
      v17 = CaptureAndFakeBRUSHOBJ(a3, &v23);
    v18 = pso[0];
    if ( pso[0] && v17 )
    {
      CaptureRECTL(prclBounds, &v25);
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, (struct _CLIPOBJ *)a2, &v18->sizlBitmap);
      v20 = bCheckSurfaceRect(v18, &v24, DDIOBJ);
      if ( v20 )
        v20 = EngLineTo(v18, DDIOBJ, v17, x1, y1, x2, y2, prclBounds[0], mix);
    }
    else
    {
      v20 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ(pso);
    --v15[5].sizlBitmap.cx;
    return v20;
  }
  return result;
}
