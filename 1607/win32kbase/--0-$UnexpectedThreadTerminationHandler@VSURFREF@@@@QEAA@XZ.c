/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00BCF68
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EngUnlockSurface @ 0x1C0074B90 (EngUnlockSurface.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BEA34 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

_QWORD *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(_QWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    (__int64)a1,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
