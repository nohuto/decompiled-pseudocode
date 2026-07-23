/*
 * XREFs of MiFlushAcquire @ 0x1400A4478
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r14
  unsigned int v7; // ebx

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    v7 = 0;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2);
      MiReferenceSubsection(a3);
    }
    ++*(_QWORD *)(a1 + 40);
    v7 = 1;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  return v7;
}
