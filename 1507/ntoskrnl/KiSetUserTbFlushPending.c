/*
 * XREFs of KiSetUserTbFlushPending @ 0x140183710
 * Callers:
 *     KiFlushCurrentTbWorker @ 0x14003F89C (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     KiIpiProcessRequests @ 0x1400FED70 (KiIpiProcessRequests.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140401F6C (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
