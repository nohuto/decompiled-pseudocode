/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B00E0
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B0970 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02B1510 (NtGdiSetColorSpace.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C02B00B0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 9;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
