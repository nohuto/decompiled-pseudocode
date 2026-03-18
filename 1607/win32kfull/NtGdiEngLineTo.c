/*
 * XREFs of NtGdiEngLineTo @ 0x1C02AE150
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x1C00100C0 (EngLineTo.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02580A0 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02AB0B4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02AB15C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02AB2FC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AC06C (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        RECTL *a2,
        struct _BRUSHOBJ *a3,
        __int64 x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  LONG v9; // r12d
  struct _W32THREAD *ThreadWin32Thread; // rax
  RECTL *ThreadCurrentObj; // r14
  SURFOBJ *v16; // rsi
  UMPDOBJ *v17; // rdi
  struct _CLIPOBJ *DDIOBJ; // r14
  unsigned int v19; // ebx
  UMPDOBJ *v20[2]; // [rsp+58h] [rbp-1C0h] BYREF
  RECTL *prclBounds[5]; // [rsp+68h] [rbp-1B0h] BYREF
  SURFOBJ *pso[8]; // [rsp+90h] [rbp-188h] BYREF
  struct _BRUSHOBJ v23; // [rsp+D0h] [rbp-148h] BYREF
  struct _RECTL v24; // [rsp+E8h] [rbp-130h] BYREF
  struct _RECTL v25; // [rsp+F8h] [rbp-120h] BYREF
  _BYTE v26[168]; // [rsp+110h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1B8h] [rbp-60h]

  v9 = x1;
  prclBounds[3] = a2;
  prclBounds[0] = a8;
  v24.left = x1;
  v24.top = y1;
  v24.right = x2;
  v24.bottom = y2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             x1);
  ThreadCurrentObj = (RECTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  prclBounds[1] = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v20, (struct UMPDOBJ *)ThreadCurrentObj);
  if ( v20[0] )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    v16 = pso[0];
    prclBounds[2] = (RECTL *)pso[0];
    v17 = (UMPDOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, (__int64)a3);
    if ( !v17 )
      v17 = (UMPDOBJ *)CaptureAndFakeBRUSHOBJ(a3, &v23);
    v20[1] = v17;
    if ( v16 && v17 )
    {
      CaptureRECTL(prclBounds, &v25);
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)ThreadCurrentObj, (struct _CLIPOBJ *)a2, &v16->sizlBitmap);
      v19 = bCheckSurfaceRect(v16, &v24, DDIOBJ);
      if ( v19 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v26, v16, DDIOBJ, 0LL);
        v19 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v26)
           && EngLineTo(v16, pco, (BRUSHOBJ *)v17, v9, y1, x2, y2, prclBounds[0], mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v26);
      }
    }
    else
    {
      v19 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20);
    return v19;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20);
    return 0LL;
  }
}
