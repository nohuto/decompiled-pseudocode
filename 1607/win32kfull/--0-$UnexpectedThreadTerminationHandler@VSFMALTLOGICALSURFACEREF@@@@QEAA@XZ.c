/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMALTLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C025CF24
 * Callers:
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C0052E68 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SFMALTLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMALTLOGICALSURFACEREF>(
        void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
