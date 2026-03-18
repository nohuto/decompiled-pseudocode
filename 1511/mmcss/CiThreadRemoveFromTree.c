/*
 * XREFs of CiThreadRemoveFromTree @ 0x1C0001C20
 * Callers:
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 */

void __fastcall CiThreadRemoveFromTree(__int64 a1)
{
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue, a1 + 40);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
}
