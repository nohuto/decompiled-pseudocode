/*
 * XREFs of HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C000EC10
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000D850 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMISC_StopPortTimer @ 0x1C002953C (HUBMISC_StopPortTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopPortTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1456LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return v2;
}
