/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C025CFA0
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C025CF54 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
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
