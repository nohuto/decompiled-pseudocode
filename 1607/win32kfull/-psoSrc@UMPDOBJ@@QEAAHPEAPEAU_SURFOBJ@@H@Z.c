/*
 * XREFs of ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0285238
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0284D28 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::psoSrc(UMPDOBJ *this, struct _SURFOBJ **a2, int a3)
{
  return UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 80), a2, a3);
}
