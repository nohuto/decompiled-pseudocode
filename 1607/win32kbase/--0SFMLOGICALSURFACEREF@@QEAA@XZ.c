/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C4DEC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00C4DBC (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
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
