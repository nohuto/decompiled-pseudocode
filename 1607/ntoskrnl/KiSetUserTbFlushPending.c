/*
 * XREFs of KiSetUserTbFlushPending @ 0x14015E8F0
 * Callers:
 *     KiIpiProcessRequests @ 0x1400898A0 (KiIpiProcessRequests.c)
 *     KiFlushCurrentTbWorker @ 0x14009E608 (KiFlushCurrentTbWorker.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     KeFlushCurrentTbOnly @ 0x1401D60C4 (KeFlushCurrentTbOnly.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x1403DDC44 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0x7018u, __readgsdword(0x7018u) | 1);
}
