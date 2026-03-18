/*
 * XREFs of IopCheckVpbMounted @ 0x1400CFEA0
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  unsigned __int8 CurrentIrql; // si
  volatile __int64 **v7; // rcx
  _QWORD *v8; // rdx
  ULONG_PTR v9; // rbx
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v7[1], (__int64)v7);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v7, v8, a3);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
  {
LABEL_5:
    v9 = *(_QWORD *)(a2 + 56);
    if ( (*(_BYTE *)(v9 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v9 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v9 + 28) <= 0 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 )
      {
        IoAddTriageDumpDataBlock(v12, 336LL);
        v13 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
        if ( v13 )
        {
          IoAddTriageDumpDataBlock(v13, 336LL);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v9, 7uLL, *(unsigned int *)(v9 + 28));
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
    __writecr8(CurrentIrql);
    if ( !v9 )
      IopDecrementDeviceObjectRef(a2, 0, 0);
    return v9;
  }
  else
  {
    while ( 1 )
    {
      KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
      v14 = 0LL;
      v11 = IopMountVolume(a2, (__int64)&v14);
      *a4 = v11;
      if ( v11 < 0 || v11 == 192 || v11 == 257 )
        break;
      result = v14;
      if ( v14 )
        return result;
      CurrentIrql = KeAcquireQueuedSpinLock(9uLL);
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 4LL) & 1) != 0 )
        goto LABEL_5;
    }
    IopDecrementDeviceObjectRef(a2, 0, 0);
    result = 0LL;
    if ( *a4 >= 0 )
      *a4 = -1073741806;
  }
  return result;
}
