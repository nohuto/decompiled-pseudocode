/*
 * XREFs of NtGdiEngPaint @ 0x1C02AE4B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02AB2D8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  SURFOBJ *v11; // rsi
  struct _CLIPOBJ *DDIOBJ; // rbx
  BRUSHOBJ *v13; // r14
  MIX mix; // r15d
  unsigned int v15; // edi
  UMPDOBJ *v16; // [rsp+30h] [rbp-A8h] BYREF
  struct _POINTL v17; // [rsp+38h] [rbp-A0h] BYREF
  struct _BRUSHOBJ v18; // [rsp+40h] [rbp-98h] BYREF
  SURFOBJ *pso[15]; // [rsp+60h] [rbp-78h] BYREF
  POINTL *pptlBrushOrg; // [rsp+F8h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v16, ThreadCurrentObj);
  if ( v16 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    v11 = pso[0];
    if ( pso[0] )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a2, &pso[0]->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v13 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a3);
    if ( !v13 )
      v13 = CaptureAndFakeBRUSHOBJ(a3, &v18);
    if ( v11 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
    {
      CapturePOINTL(&pptlBrushOrg, &v17);
      v15 = bCheckSurfaceRect(v11, 0LL, DDIOBJ);
      if ( v15 )
        v15 = EngPaint(v11, DDIOBJ, v13, pptlBrushOrg, mix);
    }
    else
    {
      v15 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v16);
    return v15;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v16);
    return 0LL;
  }
}
