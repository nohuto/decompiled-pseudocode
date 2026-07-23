/*
 * XREFs of KiSetUserTbFlushPending @ 0x14015EE60
 * Callers:
 *     KiIpiProcessRequests @ 0x140088FA0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14009DFB4 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1403DDC44 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
