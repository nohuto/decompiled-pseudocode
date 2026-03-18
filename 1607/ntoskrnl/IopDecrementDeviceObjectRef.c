/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x14002ECF0
 * Callers:
 *     IopCheckVpbMounted @ 0x14002DEE0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401C4A44 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403ECB48 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     IopLoadFileSystemDriver @ 0x140621F44 (IopLoadFileSystemDriver.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // di
  unsigned __int8 CurrentIrql; // si
  char *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v10; // rcx

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, *((_QWORD *)v6 + 1));
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v6 + 1), (__int64)v6);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)v6, v7);
  }
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  }
  else
  {
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    __writecr8(CurrentIrql);
  }
  return v4;
}
