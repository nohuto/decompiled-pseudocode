/*
 * XREFs of MiRetainSubsection @ 0x1400A2ABC
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiRetainSubsection(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp
  int v5; // edx

  v1 = *(_QWORD *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  ++*(_QWORD *)(v1 + 40);
  v4 = v3;
  v5 = *(_DWORD *)(v1 + 56);
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v5 & 0x400) == 0 )
    MiIncrementSubsectionViewCount(a1, 17LL);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v4);
}
