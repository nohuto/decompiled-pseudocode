/*
 * XREFs of ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00122E0
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0035B84 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0035D30 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0036E50 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSingleThread(W32PIDLOCK *this)
{
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
}
