/*
 * XREFs of HUBPSM30_QueueingPortResumeFailedDueToPendingSuspend @ 0x1C000F9D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000D850 (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_QueueingPortResumeFailedDueToPendingSuspend(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1456LL))(*(_QWORD *)(v1 + 1328), 4074LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return 3013LL;
}
