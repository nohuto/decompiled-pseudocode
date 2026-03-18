/*
 * XREFs of ??0COLORTRANSFORMOBJ@@QEAA@XZ @ 0x1C02B1D00
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B1E8C (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@QEAA@XZ @ 0x1C0257C50 (--0-$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@QEAA@XZ.c)
 */

COLORTRANSFORMOBJ *__fastcall COLORTRANSFORMOBJ::COLORTRANSFORMOBJ(COLORTRANSFORMOBJ *this)
{
  UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
