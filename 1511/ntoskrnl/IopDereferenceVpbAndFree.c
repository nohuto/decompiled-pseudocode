/*
 * XREFs of IopDereferenceVpbAndFree @ 0x1400D7CB0
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rdi
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  volatile __int64 *v5; // r8
  _QWORD *v6; // rdx
  bool v7; // zf

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)v4, v6, (__int64)v5);
  }
  v7 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v7 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
