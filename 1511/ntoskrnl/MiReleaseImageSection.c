/*
 * XREFs of MiReleaseImageSection @ 0x1400EBDE8
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  KIRQL v4; // al
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_DWORD *)(a2 + 56) &= ~2u;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72), v4);
  KeAbPostRelease(v2 + 16);
  return v5;
}
