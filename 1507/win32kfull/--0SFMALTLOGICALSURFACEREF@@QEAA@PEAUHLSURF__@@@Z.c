/*
 * XREFs of ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C00126BC
 * Callers:
 *     GreSetRedirectionSurfaceSignaling @ 0x1C000B994 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmGetDirtyRgn @ 0x1C0012580 (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00F015C (GreDwmGetSurfaceData.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02625BC (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0262AE4 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0262BEC (GreHLsurfSetUpdateId.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C02B00B0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SFMALTLOGICALSURFACEREF *__fastcall SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF(
        SFMALTLOGICALSURFACEREF *this,
        HLSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    LOBYTE(v4) = 18;
    *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  }
  return this;
}
