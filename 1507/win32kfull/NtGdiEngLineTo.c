/*
 * XREFs of NtGdiEngLineTo @ 0x1C02AC970
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngLineTo @ 0x1C01166A0 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C025AF60 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C02A9C1C (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02A9DFC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C02AAB18 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
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
  RECTL *ThreadCurrentObj; // rax
  __int64 v15; // rbx
  __int64 result; // rax
  SURFOBJ *v17; // r14
  __int64 v18; // rdx
  BRUSHOBJ *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  struct _CLIPOBJ *DDIOBJ; // r15
  unsigned int v23; // edi
  RECTL *prclBounds[4]; // [rsp+60h] [rbp-1A8h] BYREF
  SURFOBJ *pso[8]; // [rsp+80h] [rbp-188h] BYREF
  struct _BRUSHOBJ v26; // [rsp+C0h] [rbp-148h] BYREF
  struct _RECTL v27; // [rsp+D8h] [rbp-130h] BYREF
  struct _RECTL v28; // [rsp+E8h] [rbp-120h] BYREF
  _BYTE v29[168]; // [rsp+100h] [rbp-108h] BYREF
  CLIPOBJ *pco; // [rsp+1A8h] [rbp-60h]

  prclBounds[1] = a2;
  prclBounds[0] = a8;
  v27.left = x1;
  v27.top = y1;
  v27.right = x2;
  v27.bottom = y2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (RECTL *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = (__int64)ThreadCurrentObj;
  prclBounds[2] = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++ThreadCurrentObj[27].left;
  result = 0LL;
  if ( v15 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v15);
    v17 = pso[0];
    prclBounds[3] = (RECTL *)pso[0];
    v19 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, (__int64)a3);
    if ( !v19 )
      v19 = CaptureAndFakeBRUSHOBJ(a3, &v26);
    if ( v17 && v19 )
    {
      CaptureRECTL(prclBounds, &v28);
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, (struct _CLIPOBJ *)a2, &v17->sizlBitmap);
      v23 = bCheckSurfaceRect(v17, &v27, DDIOBJ);
      if ( v23 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29, v17, DDIOBJ, 0LL);
        v23 = (unsigned __int8)ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v29)
           && EngLineTo(v17, pco, v19, x1, y1, x2, y2, prclBounds[0], mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29);
      }
    }
    else
    {
      v23 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v18, v20, v21);
    --*(_DWORD *)(v15 + 432);
    return v23;
  }
  return result;
}
