/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x14020F5EC
 * Callers:
 *     IoNotifyQuotaState @ 0x1401CBF68 (IoNotifyQuotaState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4)
{
  volatile LONG *v4; // rsi
  KIRQL v9; // al

  v4 = (volatile LONG *)(a1 + 1448);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  if ( a4 != *(_DWORD *)(a1 + 1492) )
  {
    *(_QWORD *)(a1 + 1472) *= 2LL;
    ++*(_DWORD *)(a1 + 1480);
  }
  *(_DWORD *)(a1 + 1488) = a3;
  *(_QWORD *)(a1 + 1472) |= a2 != 0;
  ExReleaseSpinLockExclusive(v4, v9);
}
