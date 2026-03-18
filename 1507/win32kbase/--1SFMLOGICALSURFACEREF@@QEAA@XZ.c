/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C005E45C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap_0 @ 0x1C0001668 (SFMLOGICALSURFACEREF_vDestructorWrap_0.c)
 *     IsSFMLOGICALSURFACEREF_vDestructorSupported_0 @ 0x1C0001670 (IsSFMLOGICALSURFACEREF_vDestructorSupported_0.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( (int)IsSFMLOGICALSURFACEREF_vDestructorSupported_0() >= 0 )
    SFMLOGICALSURFACEREF_vDestructorWrap_0();
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(this);
}
