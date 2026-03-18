/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C0085820
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0039BC0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SEMOBJ::~SEMOBJ(SEMOBJ *this, __int64 a2, __int64 a3)
{
  SEMOBJ::vUnlock(this, a2, a3);
}
