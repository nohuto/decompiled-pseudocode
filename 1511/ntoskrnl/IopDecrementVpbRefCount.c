/*
 * XREFs of IopDecrementVpbRefCount @ 0x14007E6B0
 * Callers:
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  volatile __int64 **v4; // rcx
  unsigned int v5; // ebx

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4);
    }
    else if ( _InterlockedExchange64(v4[1], (__int64)v4) )
    {
      KxWaitForLockOwnerShip(v4);
    }
    v5 = --*(_DWORD *)(a1 + 28);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
    __writecr8(CurrentIrql);
    return v5;
  }
  else
  {
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  }
}
