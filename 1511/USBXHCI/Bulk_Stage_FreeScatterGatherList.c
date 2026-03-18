/*
 * XREFs of Bulk_Stage_FreeScatterGatherList @ 0x1C000407C
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_CompleteTransfers @ 0x1C002D3BC (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E438 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_Stage_FreeScatterGatherList(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  KIRQL v5; // di

  v3 = *(_QWORD *)(*a2 + 32LL);
  if ( a2[7] )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 80LL);
    v5 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v4 + 8) + 96LL))(
      v4,
      a2[7],
      (*(_BYTE *)(v3 + 32) & 1) == 0);
    KeLowerIrql(v5);
    a2[7] = 0LL;
  }
}
