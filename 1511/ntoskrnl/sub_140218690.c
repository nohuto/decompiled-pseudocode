/*
 * XREFs of sub_140218690 @ 0x140218690
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x14015D610 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn sub_140218690(
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
