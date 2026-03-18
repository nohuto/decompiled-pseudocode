/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C003A4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(void *, _QWORD))qword_1C00427A0)(
    WPP_MAIN_CB.Dpc.DpcData,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
