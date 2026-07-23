/*
 * XREFs of IopCheckDeviceAndDriver @ 0x14002D820
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // di
  char *v5; // rcx
  _QWORD *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, *((_QWORD *)v5 + 1));
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v5 + 1), (__int64)v5);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)v5, v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v7 = *(_DWORD *)(a2 + 48), (v7 & 0x80u) != 0) )
  {
    v8 = -1073741810;
  }
  else if ( (v7 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    if ( (int)++*(_DWORD *)(a2 + 4) <= 0 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741790;
  }
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  __writecr8(CurrentIrql);
  return v8;
}
