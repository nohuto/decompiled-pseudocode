/*
 * XREFs of PnpLockDeviceActionQueue @ 0x1401570B4
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140156FEC (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403EC46C (IoBuildPoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

__int64 PnpLockDeviceActionQueue()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PnpSpinLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
    }
    if ( !PnpEnumerationInProgress )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
