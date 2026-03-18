/*
 * XREFs of ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0036F00
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0035D30 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 */

__int64 __fastcall SURFREFVIEW::bMap(SURFREFVIEW *this, struct _SURFOBJ *a2)
{
  int v3; // eax

  if ( a2 )
  {
    *(_QWORD *)this = (char *)a2 - 24;
    v3 = SURFACE::Map((__int64)&a2[-1].pvScan0);
    *((_DWORD *)this + 2) = v3;
    if ( v3 != 2 )
      return 1LL;
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
