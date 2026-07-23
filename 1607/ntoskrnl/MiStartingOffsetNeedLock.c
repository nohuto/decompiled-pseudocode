/*
 * XREFs of MiStartingOffsetNeedLock @ 0x14009944C
 * Callers:
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiStartingOffsetNeedLock(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  KIRQL v5; // di
  unsigned __int64 v6; // rsi

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  v6 = MiStartingOffset(a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v5);
  }
  return v6;
}
