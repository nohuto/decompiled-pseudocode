/*
 * XREFs of MiFlushAcquire @ 0x1400985E0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x1400A8AA8 (MiReferenceSubsection.c)
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
      MiReferenceSubsection(a2, 0LL);
      MiReferenceSubsection(a3, 0LL);
    }
    ++*(_QWORD *)(a1 + 40);
    v7 = 1;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  return v7;
}
