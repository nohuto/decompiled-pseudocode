/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140047EC0
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v5; // rcx
  _QWORD *v6; // rdx
  int v7; // eax
  unsigned int v8; // edi
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

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
      v12 = *(_QWORD *)(a2 + 8);
      if ( v12 )
      {
        IoAddTriageDumpDataBlock(v12, 336LL);
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
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( *v9 )
    goto LABEL_14;
  if ( v9 != (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
  {
    v10 = KxWaitForLockChainValid(v9);
LABEL_14:
    *v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_12:
  __writecr8(CurrentIrql);
  return v8;
}
