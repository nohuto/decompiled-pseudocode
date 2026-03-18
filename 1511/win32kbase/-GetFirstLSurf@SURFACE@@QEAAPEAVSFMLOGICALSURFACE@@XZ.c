/*
 * XREFs of ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0036050
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

struct SFMLOGICALSURFACE *__fastcall SURFACE::GetFirstLSurf(SURFACE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  v1 = (char *)this + 560;
  if ( this != (SURFACE *)-560LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  v3 = (_QWORD *)((char *)this + 224);
  v4 = 0LL;
  v5 = (_QWORD *)*v3;
  if ( *v3 && v5 != v3 )
    v4 = v5 - 6;
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1);
    KeLeaveCriticalRegion();
  }
  return (struct SFMLOGICALSURFACE *)v4;
}
