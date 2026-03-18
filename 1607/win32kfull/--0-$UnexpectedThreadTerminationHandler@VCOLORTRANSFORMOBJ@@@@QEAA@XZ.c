/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@QEAA@XZ @ 0x1C0257C50
 * Callers:
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0257CB0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@XZ @ 0x1C02B1D00 (--0COLORTRANSFORMOBJ@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>(
        void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
