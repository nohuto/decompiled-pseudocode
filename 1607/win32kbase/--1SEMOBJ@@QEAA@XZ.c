/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C0089A60
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0025DA0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SEMOBJ::~SEMOBJ(PERESOURCE *this)
{
  SEMOBJ::vUnlock(this);
}
