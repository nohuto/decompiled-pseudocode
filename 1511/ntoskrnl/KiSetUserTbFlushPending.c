/*
 * XREFs of KiSetUserTbFlushPending @ 0x140154B20
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     KiIpiProcessRequests @ 0x1400C6AB0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x1400EA0B4 (KiFlushCurrentTbWorker.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1403B16D0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
