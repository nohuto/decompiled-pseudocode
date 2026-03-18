/*
 * XREFs of NtGdiEngLineTo @ 0x14032D480
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14025DB00 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14030AB40 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14032C558 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v14; // r14
  SURFOBJ *v16; // rsi
  BRUSHOBJ *v17; // rdi
  struct _CLIPOBJ *DDIOBJ; // r14
  unsigned int v19; // ebx
  RECTL *prclBounds; // [rsp+60h] [rbp-1F8h] BYREF
  struct _RECTL v21; // [rsp+68h] [rbp-1F0h] BYREF
  UMPDOBJ *v22; // [rsp+78h] [rbp-1E0h]
  SURFOBJ *v23; // [rsp+80h] [rbp-1D8h]
  struct _CLIPOBJ *v24; // [rsp+88h] [rbp-1D0h]
  struct _BRUSHOBJ v25; // [rsp+90h] [rbp-1C8h] BYREF
  SURFOBJ *pso[8]; // [rsp+B0h] [rbp-1A8h] BYREF
  UMPDOBJ *v27[4]; // [rsp+F0h] [rbp-168h] BYREF
  UMPDOBJ *v28; // [rsp+110h] [rbp-148h]
  struct _RECTL v29; // [rsp+150h] [rbp-108h] BYREF
  _BYTE v30[160]; // [rsp+160h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+200h] [rbp-58h]

  v24 = a2;
  prclBounds = a8;
  v29 = 0LL;
  v21.left = x1;
  v21.top = y1;
  v21.right = x2;
  v21.bottom = y2;
  memset(&v25, 0, sizeof(v25));
  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v27, CurrentThread);
  v14 = v28;
  v22 = v28;
  if ( v28 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v28);
    v16 = pso[0];
    v23 = pso[0];
    v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
    if ( !v17 )
      v17 = CaptureAndFakeBRUSHOBJ(a3, &v25);
    if ( v16 && v17 )
    {
      CaptureRECTL(&prclBounds, &v29);
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, a2, &v16->sizlBitmap);
      v19 = bCheckSurfaceRect(v16, &v21, DDIOBJ);
      if ( v19 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v30, v16, DDIOBJ, 0LL);
        v19 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v30)
           && EngLineTo(v16, pco, v17, x1, y1, x2, y2, prclBounds, mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v30);
      }
    }
    else
    {
      v19 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v27);
    return v19;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v27);
    return 0LL;
  }
}
