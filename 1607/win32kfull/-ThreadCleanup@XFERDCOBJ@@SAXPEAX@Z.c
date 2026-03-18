/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0266010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  XDCOBJ::vUnlock(a1);
}
