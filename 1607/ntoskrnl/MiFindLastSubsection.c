/*
 * XREFs of MiFindLastSubsection @ 0x1400FD130
 * Callers:
 *     MiComputeDataFlushRange @ 0x140021958 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400732DC (MiCanFileBeTruncatedInternal.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  __int64 v5; // rdi

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 240);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  if ( v3 != 17 )
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v3);
  return v5 - 56;
}
