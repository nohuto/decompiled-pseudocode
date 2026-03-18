/*
 * XREFs of MiWaitForForkToComplete @ 0x14012FC18
 * Callers:
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 */

__int64 __fastcall MiWaitForForkToComplete(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 896) == CurrentThread )
    return 0LL;
  v5 = (volatile LONG *)(a1 + 1280);
  MiUnlockWorkingSetExclusive(a1 + 1280, a2, a3);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  ExAcquireSpinLockExclusive(v5);
  return 1LL;
}
