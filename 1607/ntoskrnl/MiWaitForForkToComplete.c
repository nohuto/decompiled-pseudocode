/*
 * XREFs of MiWaitForForkToComplete @ 0x1400018F0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003B240 (MiResolvePrivateZeroFault.c)
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14002C390 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiWaitForForkToComplete(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  __int64 SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 896) == CurrentThread )
    return 0LL;
  v4 = a1 + 1280;
  MiUnlockWorkingSetExclusive(a1 + 1280, a2);
  LOCK_ADDRESS_SPACE(CurrentThread, a1);
  UNLOCK_ADDRESS_SPACE(CurrentThread, a1);
  SharedVm = MiGetSharedVm(v4);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  return 1LL;
}
