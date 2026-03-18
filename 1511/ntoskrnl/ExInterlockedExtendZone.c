/*
 * XREFs of ExInterlockedExtendZone @ 0x140214A1C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExExtendZone @ 0x1402149B8 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  KIRQL v8; // di
  NTSTATUS v9; // ebx

  v8 = KeAcquireSpinLockRaiseToDpc(Lock);
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  KeReleaseSpinLock(Lock, v8);
  return v9;
}
