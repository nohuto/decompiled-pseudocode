/*
 * XREFs of MiComputeFlushRange @ 0x14000C66C
 * Callers:
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MmTrimSection @ 0x1400E8FF0 (MmTrimSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14000C6E4 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  KIRQL OldIrql[24]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiLockSectionControlArea(a1, 1LL, OldIrql);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 56) & 3) == 0 && *(_QWORD *)(v7 + 32) )
    {
      LOBYTE(v8) = OldIrql[0];
      return MiComputeDataFlushRange(v7, v8, a2, a3, 0, a4);
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72), OldIrql[0]);
  }
  return 0LL;
}
