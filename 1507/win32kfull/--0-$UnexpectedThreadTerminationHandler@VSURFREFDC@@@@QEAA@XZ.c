/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C02800E4
 * Callers:
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C0280114 (--0SURFREFDC@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
