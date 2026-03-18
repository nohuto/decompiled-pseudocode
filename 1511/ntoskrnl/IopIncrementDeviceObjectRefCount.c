/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x14007E610
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1401BF838 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     IoRegisterFileSystem @ 0x140522C74 (IoRegisterFileSystem.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // si
  volatile __int64 **v4; // rcx
  int v5; // ebx
  __int64 v7; // rcx

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4);
    }
    else if ( _InterlockedExchange64(v4[1], (__int64)v4) )
    {
      KxWaitForLockOwnerShip(v4);
    }
    v5 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
    __writecr8(CurrentIrql);
  }
  else
  {
    v5 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  }
  if ( v5 <= 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v7 )
    {
      IoAddTriageDumpDataBlock(v7, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v5;
}
