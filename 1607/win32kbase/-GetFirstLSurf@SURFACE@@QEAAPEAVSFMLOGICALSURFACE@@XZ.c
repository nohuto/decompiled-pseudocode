/*
 * XREFs of ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0025FF0
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

struct SFMLOGICALSURFACE *__fastcall SURFACE::GetFirstLSurf(SURFACE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  v1 = (char *)this + 568;
  if ( this != (SURFACE *)-568LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1, 0LL);
  }
  v3 = (_QWORD *)((char *)this + 232);
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
