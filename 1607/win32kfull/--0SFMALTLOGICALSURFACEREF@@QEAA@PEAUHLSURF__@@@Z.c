/*
 * XREFs of ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C0052E68
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x1C0052D14 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C0115708 (GreDwmGetSurfaceData.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0118D70 (GreSetRedirectionSurfaceSignaling.c)
 *     GreDwmGetRedirectionStyle @ 0x1C025E70C (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C025EC34 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C025ED3C (GreHLsurfSetUpdateId.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMALTLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C025CF24 (--0-$UnexpectedThreadTerminationHandler@VSFMALTLOGICALSURFACEREF@@@@QEAA@XZ.c)
 */

SFMALTLOGICALSURFACEREF *__fastcall SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF(
        SFMALTLOGICALSURFACEREF *this,
        HLSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SFMALTLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMALTLOGICALSURFACEREF>();
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    LOBYTE(v4) = 18;
    *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  }
  return this;
}
