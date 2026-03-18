/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B1CCC
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B2584 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02B3230 (NtGdiSetColorSpace.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@QEAA@XZ @ 0x1C02B1C9C (--0-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@QEAA@XZ.c)
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<COLORSPACEREF>::UnexpectedThreadTerminationHandler<COLORSPACEREF>(this);
  LOBYTE(v4) = 9;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
