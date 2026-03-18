/*
 * XREFs of Isoch_Stage_FreeScatterGatherList @ 0x1C0003048
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0002900 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000CF90 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000EDE0 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteTransfers @ 0x1C00277F0 (Isoch_CompleteTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Isoch_Stage_FreeScatterGatherList(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  KIRQL v5; // di

  v3 = *(_QWORD *)(*a2 + 32LL);
  if ( a2[9] )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 80LL);
    v5 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v4 + 8) + 96LL))(
      v4,
      a2[9],
      (*(_BYTE *)(v3 + 32) & 1) == 0);
    KeLowerIrql(v5);
    a2[9] = 0LL;
  }
}
