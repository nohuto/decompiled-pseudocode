/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x14007E3E0
 * Callers:
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401B6EF8 (IopDecrementDeviceObjectHandleCount.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     IopLoadFileSystemDriver @ 0x14051AFA0 (IopLoadFileSystemDriver.c)
 * Callees:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // di
  KIRQL CurrentIrql; // si
  volatile __int64 **v8; // rcx
  __int64 v11; // rcx

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v8);
  }
  else if ( _InterlockedExchange64(v8[1], (__int64)v8) )
  {
    KxWaitForLockOwnerShip(v8);
  }
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v11 )
    {
      IoAddTriageDumpDataBlock(v11, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
    __writecr8(CurrentIrql);
  }
  return v6;
}
