/*
 * XREFs of ??0SURFREFDC@@QEAA@XZ @ 0x1C027DF64
 * Callers:
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C027DF34 (--0-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ.c)
 */

SURFREFDC *__fastcall SURFREFDC::SURFREFDC(SURFREFDC *this)
{
  UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
