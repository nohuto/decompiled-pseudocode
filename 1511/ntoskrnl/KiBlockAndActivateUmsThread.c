/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x1401CC49C
 * Callers:
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeRemoveQueue @ 0x1400F4D38 (KeRemoveQueue.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, __int64 a3, struct _KEVENT *a4)
{
  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueue(a2, 0, 0LL);
  return a1;
}
