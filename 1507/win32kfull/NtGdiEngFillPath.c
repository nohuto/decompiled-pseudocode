/*
 * XREFs of NtGdiEngFillPath @ 0x1C02AC3A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A982C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A98D4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02A9C5C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02A9DD8 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA624 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v13; // rbx
  _BOOL8 result; // rax
  SURFOBJ *v15; // rsi
  PATHOBJ *v16; // r14
  struct _CLIPOBJ *DDIOBJ; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _BRUSHOBJ *v21; // r11
  BRUSHOBJ *v22; // r11
  BOOL v23; // [rsp+40h] [rbp-A8h]
  struct _POINTL v24; // [rsp+50h] [rbp-98h] BYREF
  SURFOBJ *pso[8]; // [rsp+60h] [rbp-88h] BYREF
  struct _BRUSHOBJ v26; // [rsp+A0h] [rbp-48h] BYREF

  v23 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = (__int64)ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v13 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v13);
    v15 = pso[0];
    v16 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v13, a2);
    if ( v15 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v13, a3, &v15->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v21 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v13, (__int64)a4);
    if ( !v21 )
      v21 = CaptureAndFakeBRUSHOBJ(a4, &v26);
    if ( v15 && v21 && v16 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
    {
      CapturePOINTL(&pptlBrushOrg, &v24);
      v23 = (unsigned int)bCheckSurfacePath(v15, v16, DDIOBJ)
         && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v22->iSolidColor == -1)
         && EngFillPath(v15, v16, DDIOBJ, v22, pptlBrushOrg, mix, flOptions);
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v18, v19, v20);
    --*(_DWORD *)(v13 + 432);
    return v23;
  }
  return result;
}
