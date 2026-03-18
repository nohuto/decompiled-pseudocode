/*
 * XREFs of MiFindLastSubsection @ 0x1400081A0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x140011AD8 (MiCanFileBeTruncatedInternal.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
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
  v4 = *(_QWORD *)(a1 + 232);
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
