/*
 * XREFs of ExInterlockedExtendZone @ 0x140264C38
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExExtendZone @ 0x140264BD4 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  unsigned __int8 CurrentIrql; // si
  NTSTATUS v9; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)Lock);
  }
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)Lock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  __writecr8(CurrentIrql);
  return v9;
}
