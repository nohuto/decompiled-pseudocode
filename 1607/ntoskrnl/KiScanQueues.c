/*
 * XREFs of KiScanQueues @ 0x14023266C
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x140169470 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn KiScanQueues(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiMcaDeferredRecoveryService(
    *((_DWORD *)DeferredContext + 16),
    *((_QWORD *)DeferredContext + 9),
    *((_QWORD *)DeferredContext + 10),
    *((_QWORD *)DeferredContext + 11),
    *((_QWORD *)DeferredContext + 12));
}
