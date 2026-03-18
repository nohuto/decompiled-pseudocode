/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140043BB0
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // di
  volatile __int64 **v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5);
  }
  else if ( _InterlockedExchange64(v5[1], (__int64)v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v6 = *(_DWORD *)(a2 + 48), (v6 & 0x80u) != 0) )
  {
    v7 = -1073741810;
  }
  else if ( (v6 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    if ( (int)++*(_DWORD *)(a2 + 4) <= 0 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
      {
        IoAddTriageDumpDataBlock(v9, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v7 = 0;
  }
  else
  {
    v7 = -1073741790;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
  __writecr8(CurrentIrql);
  return v7;
}
