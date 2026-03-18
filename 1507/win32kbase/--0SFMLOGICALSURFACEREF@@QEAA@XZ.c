/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00B7264
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00B7234 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 */

SFMLOGICALSURFACEREF *__fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  SFMLOGICALSURFACEREF *result; // rax

  UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 10) = 0;
  return result;
}
