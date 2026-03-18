/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C003AA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(void *, _QWORD))qword_1C0044780)(
    WPP_MAIN_CB.Dpc.SystemArgument2,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
