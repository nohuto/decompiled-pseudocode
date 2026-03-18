/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C005BA94
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap_0 @ 0x1C0001608 (SFMLOGICALSURFACEREF_vDestructorWrap_0.c)
 *     IsSFMLOGICALSURFACEREF_vDestructorSupported_0 @ 0x1C0001610 (IsSFMLOGICALSURFACEREF_vDestructorSupported_0.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( (int)IsSFMLOGICALSURFACEREF_vDestructorSupported_0() >= 0 )
    SFMLOGICALSURFACEREF_vDestructorWrap_0();
}
