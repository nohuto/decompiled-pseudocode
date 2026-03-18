/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@QEAA@XZ @ 0x1C02B1C9C
 * Callers:
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B1CCC (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::UnexpectedThreadTerminationHandler<COLORSPACEREF>(
        void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
