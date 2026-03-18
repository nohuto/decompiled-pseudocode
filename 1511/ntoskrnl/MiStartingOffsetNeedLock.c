/*
 * XREFs of MiStartingOffsetNeedLock @ 0x14007C8C0
 * Callers:
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 */

__int64 __fastcall MiStartingOffsetNeedLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // bp
  __int64 result; // rax
  __int64 v7; // rbx

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  result = MiStartingOffset(a1, a1[1], a2);
  v7 = result;
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v5);
    return v7;
  }
  return result;
}
