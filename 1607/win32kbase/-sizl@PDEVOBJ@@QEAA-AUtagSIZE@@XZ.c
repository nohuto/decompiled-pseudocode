/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032CBC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004A498 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00BD7D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1744);
  else
    v3 = *(_QWORD *)(v2 + 2176);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
