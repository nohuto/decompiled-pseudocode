/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00B7234
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00B7264 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    (__int64 *)a1,
    (__int64)a1,
    (__int64)UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
