/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x14002EDD0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1401CDDC0 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403ECB48 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     IoRegisterFileSystem @ 0x1405508C4 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  _QWORD *v5; // rdx
  int v6; // ebx
  __int64 v8; // rcx

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
    }
    else
    {
      v5 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
      if ( v5 )
        KxWaitForLockOwnerShip((__int64)v4, v5);
    }
    v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    __writecr8(CurrentIrql);
  }
  else
  {
    v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  }
  if ( v6 <= 0 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v8 )
    {
      IoAddTriageDumpDataBlock(v8, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v6;
}
