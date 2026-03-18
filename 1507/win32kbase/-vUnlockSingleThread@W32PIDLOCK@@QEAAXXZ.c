/*
 * XREFs of ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C0024360
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C00240C0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0039A14 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0039BC0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vUnlockSingleThread(W32PIDLOCK *this)
{
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
}
