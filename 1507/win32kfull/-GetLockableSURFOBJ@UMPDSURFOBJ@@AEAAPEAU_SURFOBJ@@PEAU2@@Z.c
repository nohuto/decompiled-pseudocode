/*
 * XREFs of ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C0286364
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C02863EC (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockableSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rbx
  HSURF hsurf; // [rsp+20h] [rbp-18h]

  hsurf = 0LL;
  if ( a2 && a2[-1].lDelta == 1431130959 )
    hsurf = *(HSURF *)&a2[-1].iBitmapFormat;
  if ( hsurf )
    v2 = EngLockSurface(hsurf);
  else
    v2 = 0LL;
  if ( v2 && !(unsigned int)IsSurfaceLockable(v2, 0LL) )
  {
    EngUnlockSurface(v2);
    return 0LL;
  }
  return v2;
}
