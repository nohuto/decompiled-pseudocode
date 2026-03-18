/*
 * XREFs of sub_140268DB8 @ 0x140268DB8
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x14018CF60 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn sub_140268DB8(
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
