/*
 * XREFs of MiFlushAcquire @ 0x1400A5F00
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReferenceSubsection @ 0x140021B6C (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
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
