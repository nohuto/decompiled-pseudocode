/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C0257C80
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
