/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00C4DBC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C4DEC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

_QWORD *__fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        _QWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    (__int64)a1,
    (__int64)UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
