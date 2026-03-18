/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C006BFF8
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  if ( a2 )
    *((_QWORD *)this + 4) = HmgLockEx((unsigned int)a2, 18, 0);
}
