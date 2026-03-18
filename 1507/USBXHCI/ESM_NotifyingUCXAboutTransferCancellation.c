/*
 * XREFs of ESM_NotifyingUCXAboutTransferCancellation @ 0x1C00394C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_NotifyingUCXAboutTransferCancellation(__int64 a1)
{
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0041560)(UcxGlobals, *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 1000LL;
}
